#include "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "java/io/ByteArrayOutputStream.h"
#include "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_ALPHA;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_LUMINANCE_ALPHA;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGB888;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGBA8888;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGB565;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGBA4444;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_SCALE_NEAREST;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_SCALE_LINEAR;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_BLEND_NONE;
jint SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_BLEND_SRC_OVER;

void mark_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) object;
	if (self->F_pixelPtr)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixelPtr)->clazz)->markFunction)((jobject) self->F_pixelPtr, mark, depth + 1);
	if (self->F_nativeData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nativeData)->clazz)->markFunction)((jobject) self->F_nativeData, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_ALPHA = jint(1);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_LUMINANCE_ALPHA = jint(2);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGB888 = jint(3);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGBA8888 = jint(4);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGB565 = jint(5);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGBA4444 = jint(6);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_SCALE_NEAREST = jint(0);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_SCALE_LINEAR = jint(1);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_BLEND_NONE = jint(0);
	SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_BLEND_SRC_OVER = jint(1);
}

jint SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlFormat_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:toGlFormat", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(44);
	switch((frame[0].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_3;
		case 6: goto label_4;
		default: goto label_5;
	}
	}
label_1:;
	{
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return (6406);
	}
label_2:;
	{
	LINE_NUMBER(48);
	popStackFrame(ctx);
	return (6410);
	}
label_3:;
	{
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return (6407);
	}
label_4:;
	{
	LINE_NUMBER(54);
	popStackFrame(ctx);
	return (6408);
	}
label_5:;
	{
	LINE_NUMBER(56);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown format: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlType_int_R_int(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:toGlType", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(61);
	switch((frame[0].i)) {
		case 1: goto label_1;
		case 2: goto label_1;
		case 3: goto label_1;
		case 4: goto label_1;
		case 5: goto label_2;
		case 6: goto label_3;
		default: goto label_4;
	}
	}
label_1:;
	{
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (5121);
	}
label_2:;
	{
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (jint(33635));
	}
label_3:;
	{
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (jint(32819));
	}
label_4:;
	{
	LINE_NUMBER(72);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"unknown format: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_Array1_byte_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(83);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(4)));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_nativeData = (jref) sp[1].o;
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_load_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_pixelPtr = (jref) sp[1].o;
	LINE_NUMBER(85);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_pixelPtr;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading pixmap: "_j))));
	sp[2].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFailureReason_R_java_lang_String(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_basePtr = ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(0))));
	LINE_NUMBER(88);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_width = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(1))))));
	LINE_NUMBER(89);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_height = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(2))))));
	LINE_NUMBER(90);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_format = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(3))))));
	LINE_NUMBER(92);
	if ((frame[4].i) == 0) goto label_9;
	}
	{
	if ((frame[4].i) == ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format)) goto label_9;
	}
	{
	LINE_NUMBER(93);
	M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int(ctx, (frame[0].o), (frame[4].i));
	}
label_9:;
	LINE_NUMBER(95);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_nio_ByteBuffer_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(97);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(4)));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_nativeData = (jref) sp[1].o;
	LINE_NUMBER(98);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_isDirect_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_isDirect_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load pixmap from non-direct ByteBuffer"_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(99);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_loadByteBuffer_Array1_long_java_nio_ByteBuffer_int_int_R_java_nio_ByteBuffer(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_pixelPtr = (jref) sp[1].o;
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_pixelPtr;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading pixmap: "_j))));
	sp[2].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFailureReason_R_java_lang_String(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(102);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_basePtr = ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(0))));
	LINE_NUMBER(103);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_width = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(1))))));
	LINE_NUMBER(104);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_height = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(2))))));
	LINE_NUMBER(105);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_format = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(3))))));
	LINE_NUMBER(107);
	if ((frame[4].i) == 0) goto label_10;
	}
	{
	if ((frame[4].i) == ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format)) goto label_10;
	}
	{
	LINE_NUMBER(108);
	M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int(ctx, (frame[0].o), (frame[4].i));
	}
label_10:;
	LINE_NUMBER(110);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_io_InputStream_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(112);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(4)));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_nativeData = (jref) sp[1].o;
	LINE_NUMBER(113);
	clinit_java_io_ByteArrayOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_ByteArrayOutputStream);
	init_java_io_ByteArrayOutputStream_int(ctx, sp[0].o, (1024));
	frame[3].o = sp[0].o;
	LINE_NUMBER(114);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (1024));
	frame[4].o = sp[0].o;
	LINE_NUMBER(115);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	LINE_NUMBER(117);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_R_int])(ctx, (frame[1].o), (frame[4].o));
	frame[5].i = temp0;
	if (temp0 == (jint(-1))) goto label_6;
	}
	{
	LINE_NUMBER(118);
	((func_java_io_ByteArrayOutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_write_Array1_byte_int_int])(ctx, (frame[3].o), (frame[4].o), (jint(0)), (frame[5].i));
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)((func_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_ByteArrayOutputStream_toByteArray_R_Array1_byte])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(122);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_load_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer(ctx, sp[1].o, (frame[4].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[4].o)))->length));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_pixelPtr = (jref) sp[1].o;
	LINE_NUMBER(123);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_pixelPtr;
	if (sp[0].o != nullptr) goto label_10;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error loading pixmap: "_j))));
	sp[2].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFailureReason_R_java_lang_String(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_basePtr = ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(0))));
	LINE_NUMBER(126);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_width = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(1))))));
	LINE_NUMBER(127);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_height = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(2))))));
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_format = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(3))))));
	LINE_NUMBER(130);
	if ((frame[2].i) == 0) goto label_15;
	}
	{
	if ((frame[2].i) == ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format)) goto label_15;
	}
	{
	LINE_NUMBER(131);
	M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int(ctx, (frame[0].o), (frame[2].i));
	}
label_15:;
	LINE_NUMBER(133);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(136);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(4)));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_nativeData = (jref) sp[1].o;
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	sp[1].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_Array1_long_int_int_int_R_java_nio_ByteBuffer(ctx, sp[1].o, (frame[1].i), (frame[2].i), (frame[3].i));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_pixelPtr = (jref) sp[1].o;
	LINE_NUMBER(138);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_pixelPtr;
	if (sp[0].o != nullptr) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to allocate memory for pixmap: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8", "_j))));
	jint temp0 = frame[3].i;
	LINE_NUMBER(139);
	sp[2].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_int_R_java_lang_String(ctx, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(141);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_basePtr = ((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(0))));
	LINE_NUMBER(142);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_width = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(1))))));
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_height = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(2))))));
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_format = (jint(((jlong)ARRAY_ACCESS(jlong, sp[1].o, (jint(3))))));
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_nio_ByteBuffer_Array1_long(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(147);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_long, (jint(4)));
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_nativeData = (jref) sp[1].o;
	LINE_NUMBER(148);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_pixelPtr = (jref) (frame[1].o);
	LINE_NUMBER(149);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr = ((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (jint(0))));
	LINE_NUMBER(150);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_width = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (jint(1))))));
	LINE_NUMBER(151);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_height = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (jint(2))))));
	LINE_NUMBER(152);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format = (jint(((jlong)ARRAY_ACCESS(jlong, (frame[2].o), (jint(3))))));
	LINE_NUMBER(153);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:convert", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(156);
	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);
	init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_height), (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(157);
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int])(ctx, (frame[2].o), (jint(0)));
	LINE_NUMBER(158);
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int])(ctx, (frame[2].o), (frame[0].o), (jint(0)), (jint(0)), (jint(0)), (jint(0)), ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_width), ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_height));
	LINE_NUMBER(159);
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose])(ctx, (frame[0].o));
	LINE_NUMBER(160);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr = ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[2].o)))->F_basePtr);
	LINE_NUMBER(161);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format = ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[2].o)))->F_format);
	LINE_NUMBER(162);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_height = ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[2].o)))->F_height);
	LINE_NUMBER(163);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[2].o)))->F_nativeData;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_nativeData = (jref) sp[1].o;
	LINE_NUMBER(164);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[2].o)))->F_pixelPtr;
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK(sp[0].o))->F_pixelPtr = (jref) sp[1].o;
	LINE_NUMBER(165);
	((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_width = ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[2].o)))->F_width);
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:dispose", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(170);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_free_long(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr));
	LINE_NUMBER(171);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:clear", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(174);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_long_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i));
	LINE_NUMBER(175);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:setPixel", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(178);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_long_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getPixel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_long_int_int_R_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:drawLine", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(186);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_long_int_int_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(187);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:drawRect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(190);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_long_int_int_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:drawCircle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(194);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_long_int_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:fillRect", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(198);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_long_int_int_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(199);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:fillCircle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(202);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_long_int_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i));
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:fillTriangle", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(206);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_long_int_int_int_int_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:drawPixmap", 20 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(210);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_long_long_int_int_int_int_int_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[1].o)))->F_basePtr), ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[2].i), (frame[3].i), (frame[6].i), (frame[7].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i));
	LINE_NUMBER(211);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[22];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:drawPixmap", 22 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	frame[8].i = param7;
	frame[9].i = param8;
	{
	LINE_NUMBER(215);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_long_long_int_int_int_int_int_int_int_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[1].o)))->F_basePtr), ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:setBlend", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(219);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_long_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i));
	LINE_NUMBER(220);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:setScale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(223);
	SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_long_int(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_basePtr), (frame[1].i));
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_java_io_InputStream_int_R_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jcontext ctx, jobject param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:newPixmap", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(228);
	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);
	init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_io_InputStream_int(ctx, sp[0].o, (frame[0].o), (frame[1].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(229);
	frame[2].o = sp[0].o;
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_int_int_int_R_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:newPixmap", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(236);
	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);
	init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(237);
	frame[3].o = sp[0].o;
	LINE_NUMBER(238);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getPixels", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(243);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_pixelPtr;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(247);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_width);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(255);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getGLInternalFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(259);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlFormat_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getGLFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(263);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getGLType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(267);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlType_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getFormatString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(271);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_int_R_java_lang_String(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_Gdx2DPixmap *) NULL_CHECK((frame[0].o)))->F_format));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap:getFormatString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(275);
	switch((frame[0].i)) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_4;
		case 5: goto label_5;
		case 6: goto label_6;
		default: goto label_7;
	}
	}
label_1:;
	{
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"alpha"_j)));
	}
label_2:;
	{
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"luminance alpha"_j)));
	}
label_3:;
	{
	LINE_NUMBER(281);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"rgb888"_j)));
	}
label_4:;
	{
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"rgba8888"_j)));
	}
label_5:;
	{
	LINE_NUMBER(285);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"rgb565"_j)));
	}
label_6:;
	{
	LINE_NUMBER(287);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"rgba4444"_j)));
	}
label_7:;
	{
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"unknown"_j)));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int,
	(void *) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_R_java_lang_String,
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
	{ "convert", "(I)V" },
	{ "clear", "(I)V" },
	{ "setPixel", "(III)V" },
	{ "getPixel", "(II)I" },
	{ "drawLine", "(IIIII)V" },
	{ "drawRect", "(IIIII)V" },
	{ "drawCircle", "(IIII)V" },
	{ "fillRect", "(IIIII)V" },
	{ "fillCircle", "(IIII)V" },
	{ "fillTriangle", "(IIIIIII)V" },
	{ "drawPixmap", "(Lcom/badlogic/gdx/graphics/g2d/Gdx2DPixmap;IIIIII)V" },
	{ "drawPixmap", "(Lcom/badlogic/gdx/graphics/g2d/Gdx2DPixmap;IIIIIIII)V" },
	{ "setBlend", "(I)V" },
	{ "setScale", "(I)V" },
	{ "getPixels", "()Ljava/nio/ByteBuffer;" },
	{ "getHeight", "()I" },
	{ "getWidth", "()I" },
	{ "getFormat", "()I" },
	{ "getGLInternalFormat", "()I" },
	{ "getGLFormat", "()I" },
	{ "getGLType", "()I" },
	{ "getFormatString", "()Ljava/lang/String;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "GDX2D_FORMAT_ALPHA", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_ALPHA, "I", 25 },
	{ "GDX2D_FORMAT_LUMINANCE_ALPHA", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_LUMINANCE_ALPHA, "I", 25 },
	{ "GDX2D_FORMAT_RGB888", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGB888, "I", 25 },
	{ "GDX2D_FORMAT_RGBA8888", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGBA8888, "I", 25 },
	{ "GDX2D_FORMAT_RGB565", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGB565, "I", 25 },
	{ "GDX2D_FORMAT_RGBA4444", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_FORMAT_RGBA4444, "I", 25 },
	{ "GDX2D_SCALE_NEAREST", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_SCALE_NEAREST, "I", 25 },
	{ "GDX2D_SCALE_LINEAR", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_SCALE_LINEAR, "I", 25 },
	{ "GDX2D_BLEND_NONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_BLEND_NONE, "I", 25 },
	{ "GDX2D_BLEND_SRC_OVER", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_GDX2D_BLEND_SRC_OVER, "I", 25 },
	{ "basePtr", &class_long, offsetof(com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, F_basePtr), "J", 0 },
	{ "width", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, F_width), "I", 0 },
	{ "height", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, F_height), "I", 0 },
	{ "format", &class_int, offsetof(com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, F_format), "I", 0 },
	{ "pixelPtr", &class_java_nio_ByteBuffer, offsetof(com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, F_pixelPtr), "Ljava/nio/ByteBuffer;", 0 },
	{ "nativeData", getArrayClass(&class_long, 1), offsetof(com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, F_nativeData), "[J", 0 },
};

static MethodMetadata methods[] {
	{ "toGlFormat", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlFormat_int_R_int, 0, "(I)I", 9 },
	{ "toGlType", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_toGlType_int_R_int, 0, "(I)I", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_Array1_byte_int_int_int, 0, "([BIII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_nio_ByteBuffer_int_int_int, 0, "(Ljava/nio/ByteBuffer;III)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_io_InputStream_int, 0, "(Ljava/io/InputStream;I)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int, 0, "(III)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_nio_ByteBuffer_Array1_long, 0, "(Ljava/nio/ByteBuffer;[J)V", 1 },
	{ "convert", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_convert_int, "(I)V", 2 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose, "()V", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int, "(I)V", 1 },
	{ "setPixel", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int, "(III)V", 1 },
	{ "getPixel", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int, "(II)I", 1 },
	{ "drawLine", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int, "(IIIII)V", 1 },
	{ "drawRect", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int, "(IIIII)V", 1 },
	{ "drawCircle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int, "(IIII)V", 1 },
	{ "fillRect", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int, "(IIIII)V", 1 },
	{ "fillCircle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int, "(IIII)V", 1 },
	{ "fillTriangle", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int, "(IIIIIII)V", 1 },
	{ "drawPixmap", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int, "(Lcom/badlogic/gdx/graphics/g2d/Gdx2DPixmap;IIIIII)V", 1 },
	{ "drawPixmap", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int, "(Lcom/badlogic/gdx/graphics/g2d/Gdx2DPixmap;IIIIIIII)V", 1 },
	{ "setBlend", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int, "(I)V", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int, "(I)V", 1 },
	{ "newPixmap", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_java_io_InputStream_int_R_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, 0, "(Ljava/io/InputStream;I)Lcom/badlogic/gdx/graphics/g2d/Gdx2DPixmap;", 9 },
	{ "newPixmap", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_int_int_int_R_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, 0, "(III)Lcom/badlogic/gdx/graphics/g2d/Gdx2DPixmap;", 9 },
	{ "getPixels", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int, "()I", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int, "()I", 1 },
	{ "getFormat", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int, "()I", 1 },
	{ "getGLInternalFormat", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int, "()I", 1 },
	{ "getGLFormat", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int, "()I", 1 },
	{ "getGLType", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int, "()I", 1 },
	{ "getFormatString", (intptr_t) M_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_R_java_lang_String, VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getFormatString", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormatString_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 10 },
	{ "load", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_load_Array1_long_Array1_byte_int_int_R_java_nio_ByteBuffer, 0, "([J[BII)Ljava/nio/ByteBuffer;", 266 },
	{ "loadByteBuffer", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_loadByteBuffer_Array1_long_java_nio_ByteBuffer_int_int_R_java_nio_ByteBuffer, 0, "([JLjava/nio/ByteBuffer;II)Ljava/nio/ByteBuffer;", 266 },
	{ "newPixmap", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_newPixmap_Array1_long_int_int_int_R_java_nio_ByteBuffer, 0, "([JIII)Ljava/nio/ByteBuffer;", 266 },
	{ "free", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_free_long, 0, "(J)V", 266 },
	{ "clear", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_long_int, 0, "(JI)V", 266 },
	{ "setPixel", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_long_int_int_int, 0, "(JIII)V", 266 },
	{ "getPixel", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_long_int_int_R_int, 0, "(JII)I", 266 },
	{ "drawLine", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_long_int_int_int_int_int, 0, "(JIIIII)V", 266 },
	{ "drawRect", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_long_int_int_int_int_int, 0, "(JIIIII)V", 266 },
	{ "drawCircle", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_long_int_int_int_int, 0, "(JIIII)V", 266 },
	{ "fillRect", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_long_int_int_int_int_int, 0, "(JIIIII)V", 266 },
	{ "fillCircle", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_long_int_int_int_int, 0, "(JIIII)V", 266 },
	{ "fillTriangle", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_long_int_int_int_int_int_int_int, 0, "(JIIIIIII)V", 266 },
	{ "drawPixmap", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_long_long_int_int_int_int_int_int_int_int, 0, "(JJIIIIIIII)V", 266 },
	{ "setBlend", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_long_int, 0, "(JI)V", 266 },
	{ "setScale", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_long_int, 0, "(JI)V", 266 },
	{ "getFailureReason", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFailureReason_R_java_lang_String, 0, "()Ljava/lang/String;", 265 },
};

Class class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_Gdx2DPixmap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 16,
		.nativeFields = (intptr_t) fields,
		.methodCount = 50,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 34,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap = registerClass(&class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);

}

