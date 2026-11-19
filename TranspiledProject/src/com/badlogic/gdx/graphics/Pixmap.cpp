#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"
#include "com/badlogic/gdx/Net_HttpResponseListener.h"
#include "java/nio/ByteBuffer.h"
#include "com/badlogic/gdx/graphics/Pixmap_DownloadPixmapResponseListener.h"
#include "java/lang/String.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/graphics/g2d/Gdx2DPixmap.h"
#include "java/lang/Exception.h"
#include "com/badlogic/gdx/graphics/Pixmap_1.h"
#include "com/badlogic/gdx/graphics/Pixmap_Filter.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Net_HttpRequest.h"
#include "com/badlogic/gdx/graphics/Pixmap_Blending.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Net.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "com/badlogic/gdx/utils/Disposable.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_Pixmap(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_Pixmap *) object;
	if (self->F_blending)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_blending)->clazz)->markFunction)((jobject) self->F_blending, mark, depth + 1);
	if (self->F_filter)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_filter)->clazz)->markFunction)((jobject) self->F_filter, mark, depth + 1);
	if (self->F_pixmap)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pixmap)->clazz)->markFunction)((jobject) self->F_pixmap, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_Pixmap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jobject SM_com_badlogic_gdx_graphics_Pixmap_createFromFrameBuffer_int_int_int_int_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:createFromFrameBuffer", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(100);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glPixelStorei_int_int, sp[0].o))(ctx, sp[0].o, (3333), (jint(1)));
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGBA8888;
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, temp0, temp1, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(104);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_gl;
	((func_com_badlogic_gdx_graphics_GL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_GL20, INDEX_com_badlogic_gdx_graphics_GL20_glReadPixels_int_int_int_int_int_int_java_nio_Buffer, sp[0].o))(ctx, sp[0].o, (frame[0].i), (frame[1].i), (frame[2].i), (frame[3].i), (6408), (5121), (frame[5].o));
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:setBlending", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(120);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_blending = (jref) (frame[1].o);
	LINE_NUMBER(121);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_None;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setBlend_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(122);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_setFilter_com_badlogic_gdx_graphics_Pixmap$Filter(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:setFilter", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(128);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_filter = (jref) (frame[1].o);
	LINE_NUMBER(129);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_NearestNeighbour;
	sp += 1;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	{
	sp -= 2;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setScale_int])(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(130);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(136);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_SourceOver;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color = (jint(0));
	LINE_NUMBER(137);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);
	jint temp0 = frame[1].i;
	jint temp1 = frame[2].i;
	jint temp2 = (jint)SM_com_badlogic_gdx_graphics_Pixmap$Format_toGdx2DPixmapFormat_com_badlogic_gdx_graphics_Pixmap$Format_R_int(ctx, (frame[3].o));
	init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int(ctx, sp[1].o, temp0, temp1, temp2);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	LINE_NUMBER(138);
	((func_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float])(ctx, (frame[0].o), (jfloat(0)), (jfloat(0)), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(139);
	((func_com_badlogic_gdx_graphics_Pixmap_fill) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_fill])(ctx, (frame[0].o));
	LINE_NUMBER(140);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Pixmap_Array1_byte_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(148);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_SourceOver;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(150);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);
	init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_Array1_byte_int_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i), (jint(0)));
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(153);
	goto label_8;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(151);
	frame[4].o = sp[0].o;
	LINE_NUMBER(152);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load pixmap from image data"_j))), (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(154);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Pixmap_java_nio_ByteBuffer_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:<init>", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(162);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_SourceOver;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color = (jint(0));
	LINE_NUMBER(163);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_isDirect_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_isDirect_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_0;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load pixmap from non-direct ByteBuffer"_j))));
	throwException(ctx, sp[0].o);	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(165);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);
	init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_java_nio_ByteBuffer_int_int_int(ctx, sp[1].o, (frame[1].o), (frame[2].i), (frame[3].i), (jint(0)));
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(168);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(166);
	frame[4].o = sp[0].o;
	LINE_NUMBER(167);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load pixmap from image data"_j))), (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(169);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Pixmap_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_position_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_position_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	init_com_badlogic_gdx_graphics_Pixmap_java_nio_ByteBuffer_int_int(ctx, sp[0].o, sp[1].o, temp0, temp1);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(185);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_SourceOver;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color = (jint(0));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(188);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap);
	init_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_Array1_byte_int_int_int(ctx, sp[1].o, (frame[2].o), (jint(0)), (((jarray) nullCheck(ctx, (frame[2].o)))->length), (jint(0)));
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_pixmap = (jref) sp[1].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(191);
	goto label_9;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(189);
	frame[2].o = sp[0].o;
	LINE_NUMBER(190);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_9:;
	LINE_NUMBER(192);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(196);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(109);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Blending(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Blending_SourceOver;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_blending = (jref) sp[1].o;
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear;
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_filter = (jref) sp[1].o;
	LINE_NUMBER(113);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color = (jint(0));
	LINE_NUMBER(197);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap = (jref) (frame[1].o);
	LINE_NUMBER(198);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_Pixmap_downloadFromUrl_java_lang_String_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:downloadFromUrl", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(206);
	clinit_com_badlogic_gdx_Net$HttpRequest(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Net$HttpRequest);
	init_com_badlogic_gdx_Net$HttpRequest_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"GET"_j))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(207);
	((func_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_Net$HttpRequest_setUrl_java_lang_String])(ctx, (frame[2].o), (frame[0].o));
	LINE_NUMBER(208);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_net;
	sp[1].o = frame[2].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$1);
	init_com_badlogic_gdx_graphics_Pixmap$1_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener(ctx, sp[2].o, (frame[1].o));
	((func_com_badlogic_gdx_Net_sendHttpRequest_com_badlogic_gdx_Net$HttpRequest_com_badlogic_gdx_Net$HttpResponseListener) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Net, INDEX_com_badlogic_gdx_Net_sendHttpRequest_com_badlogic_gdx_Net$HttpRequest_com_badlogic_gdx_Net$HttpResponseListener, sp[0].o))(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(235);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_setColor_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(240);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color = (frame[1].i);
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:setColor", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(250);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_Color_rgba8888_float_float_float_float_R_int(ctx, (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_color = temp0;
	LINE_NUMBER(251);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:setColor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_Color_rgba8888_float_float_float_float_R_int(ctx, ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_b), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[1].o)))->F_a));
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK(sp[0].o))->F_color = temp0;
	LINE_NUMBER(257);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_fill(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:fill", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(261);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_clear_int])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_drawLine_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:drawLine", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(278);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawLine_int_int_int_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(279);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_drawRectangle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:drawRectangle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(289);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawRect_int_int_int_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(290);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:drawPixmap", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(298);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jint temp0 = frame[2].i;
	jint temp1 = frame[3].i;
	jint temp2 = jint(0);
	jint temp3 = jint(0);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	((func_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, temp4, temp5);
	LINE_NUMBER(299);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:drawPixmap", 16 };
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
	LINE_NUMBER(311);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[4].i), (frame[5].i), (frame[2].i), (frame[3].i), (frame[6].i), (frame[7].i));
	LINE_NUMBER(312);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8) {
	NULL_CHECK(self);
	jtype frame[20];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:drawPixmap", 20 };
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
	LINE_NUMBER(329);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[1].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawPixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), (frame[7].i), (frame[8].i), (frame[9].i));
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:fillRectangle", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillRect_int_int_int_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_drawCircle_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:drawCircle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(349);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_drawCircle_int_int_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(350);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:fillCircle", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(358);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillCircle_int_int_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(359);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_fillTriangle_int_int_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:fillTriangle", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	{
	LINE_NUMBER(370);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_fillTriangle_int_int_int_int_int_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i), (frame[4].i), (frame[5].i), (frame[6].i), ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getPixel", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixel_int_int_R_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(384);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getWidth_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(389);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getHeight_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:dispose", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(394);
	if (((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_1;
	}
	{
	LINE_NUMBER(395);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	((func_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pixmap"_j))), (((jobject) createStringLiteral(ctx, u8"Pixmap already disposed!"_j))));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_dispose])(ctx, sp[0].o);
	LINE_NUMBER(399);
	((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_disposed = (jint(1));
	LINE_NUMBER(400);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_graphics_Pixmap_isDisposed_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:isDisposed", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(403);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_disposed);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:drawPixel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(411);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), ((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_color));
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:drawPixel", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(420);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_setPixel_int_int_int])(ctx, sp[0].o, (frame[1].i), (frame[2].i), (frame[3].i));
	LINE_NUMBER(421);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getGLFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLFormat_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getGLInternalFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLInternalFormat_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getGLType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getGLType_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getPixels", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(450);
	if (((jint)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_disposed) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pixmap already disposed"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(451);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_Pixmap_setPixels_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:setPixels", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(457);
	jint temp0 = (jint)((func_java_nio_ByteBuffer_isDirect_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_isDirect_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Couldn't setPixels from non-direct ByteBuffer"_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getPixels_R_java_nio_ByteBuffer])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(459);
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	jint temp0 = (jint)((func_java_nio_ByteBuffer_limit_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_nio_ByteBuffer_limit_R_int])(ctx, (frame[2].o));
	SM_com_badlogic_gdx_utils_BufferUtils_copy_java_nio_Buffer_java_nio_Buffer_int(ctx, sp[0].o, sp[1].o, temp0);
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getFormat", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(464);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_pixmap;
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap_getFormat_R_int])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Pixmap$Format_fromGdx2DPixmapFormat_int_R_com_badlogic_gdx_graphics_Pixmap$Format(ctx, temp0);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Pixmap_getBlending_R_com_badlogic_gdx_graphics_Pixmap$Blending(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getBlending", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_blending;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_Pixmap_getFilter_R_com_badlogic_gdx_graphics_Pixmap$Filter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap:getFilter", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(474);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_Pixmap *) NULL_CHECK((frame[0].o)))->F_filter;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Pixmap[] {
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
	(void *) M_com_badlogic_gdx_graphics_Pixmap_dispose,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_setFilter_com_badlogic_gdx_graphics_Pixmap$Filter,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_setColor_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_fill,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_drawLine_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_drawRectangle_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_drawCircle_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_fillTriangle_int_int_int_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_isDisposed_R_boolean,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_setPixels_java_nio_ByteBuffer,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getBlending_R_com_badlogic_gdx_graphics_Pixmap$Blending,
	(void *) M_com_badlogic_gdx_graphics_Pixmap_getFilter_R_com_badlogic_gdx_graphics_Pixmap$Filter,
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
	{ "setBlending", "(Lcom/badlogic/gdx/graphics/Pixmap$Blending;)V" },
	{ "setFilter", "(Lcom/badlogic/gdx/graphics/Pixmap$Filter;)V" },
	{ "setColor", "(I)V" },
	{ "setColor", "(FFFF)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "fill", "()V" },
	{ "drawLine", "(IIII)V" },
	{ "drawRectangle", "(IIII)V" },
	{ "drawPixmap", "(Lcom/badlogic/gdx/graphics/Pixmap;II)V" },
	{ "drawPixmap", "(Lcom/badlogic/gdx/graphics/Pixmap;IIIIII)V" },
	{ "drawPixmap", "(Lcom/badlogic/gdx/graphics/Pixmap;IIIIIIII)V" },
	{ "fillRectangle", "(IIII)V" },
	{ "drawCircle", "(III)V" },
	{ "fillCircle", "(III)V" },
	{ "fillTriangle", "(IIIIII)V" },
	{ "getPixel", "(II)I" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "isDisposed", "()Z" },
	{ "drawPixel", "(II)V" },
	{ "drawPixel", "(III)V" },
	{ "getGLFormat", "()I" },
	{ "getGLInternalFormat", "()I" },
	{ "getGLType", "()I" },
	{ "getPixels", "()Ljava/nio/ByteBuffer;" },
	{ "setPixels", "(Ljava/nio/ByteBuffer;)V" },
	{ "getFormat", "()Lcom/badlogic/gdx/graphics/Pixmap$Format;" },
	{ "getBlending", "()Lcom/badlogic/gdx/graphics/Pixmap$Blending;" },
	{ "getFilter", "()Lcom/badlogic/gdx/graphics/Pixmap$Filter;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_Pixmap$Format,
	&class_com_badlogic_gdx_graphics_Pixmap$Blending,
	&class_com_badlogic_gdx_graphics_Pixmap$Filter,
	&class_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener,
};

static FieldMetadata fields[] {
	{ "blending", &class_com_badlogic_gdx_graphics_Pixmap$Blending, offsetof(com_badlogic_gdx_graphics_Pixmap, F_blending), "Lcom/badlogic/gdx/graphics/Pixmap$Blending;", 2 },
	{ "filter", &class_com_badlogic_gdx_graphics_Pixmap$Filter, offsetof(com_badlogic_gdx_graphics_Pixmap, F_filter), "Lcom/badlogic/gdx/graphics/Pixmap$Filter;", 2 },
	{ "pixmap", &class_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, offsetof(com_badlogic_gdx_graphics_Pixmap, F_pixmap), "Lcom/badlogic/gdx/graphics/g2d/Gdx2DPixmap;", 16 },
	{ "color", &class_int, offsetof(com_badlogic_gdx_graphics_Pixmap, F_color), "I", 0 },
	{ "disposed", &class_boolean, offsetof(com_badlogic_gdx_graphics_Pixmap, F_disposed), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "createFromFrameBuffer", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap_createFromFrameBuffer_int_int_int_int_R_com_badlogic_gdx_graphics_Pixmap, 0, "(IIII)Lcom/badlogic/gdx/graphics/Pixmap;", 9 },
	{ "setBlending", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending, VTABLE_com_badlogic_gdx_graphics_Pixmap_setBlending_com_badlogic_gdx_graphics_Pixmap$Blending, "(Lcom/badlogic/gdx/graphics/Pixmap$Blending;)V", 1 },
	{ "setFilter", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_setFilter_com_badlogic_gdx_graphics_Pixmap$Filter, VTABLE_com_badlogic_gdx_graphics_Pixmap_setFilter_com_badlogic_gdx_graphics_Pixmap$Filter, "(Lcom/badlogic/gdx/graphics/Pixmap$Filter;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format, 0, "(IILcom/badlogic/gdx/graphics/Pixmap$Format;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap_Array1_byte_int_int, 0, "([BII)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap_java_nio_ByteBuffer_int_int, 0, "(Ljava/nio/ByteBuffer;II)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_g2d_Gdx2DPixmap, 0, "(Lcom/badlogic/gdx/graphics/g2d/Gdx2DPixmap;)V", 1 },
	{ "downloadFromUrl", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap_downloadFromUrl_java_lang_String_com_badlogic_gdx_graphics_Pixmap$DownloadPixmapResponseListener, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Pixmap$DownloadPixmapResponseListener;)V", 9 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_setColor_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_int, "(I)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float, VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_float_float_float_float, "(FFFF)V", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_graphics_Pixmap_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_fill, VTABLE_com_badlogic_gdx_graphics_Pixmap_fill, "()V", 1 },
	{ "drawLine", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_drawLine_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_drawLine_int_int_int_int, "(IIII)V", 1 },
	{ "drawRectangle", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_drawRectangle_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_drawRectangle_int_int_int_int, "(IIII)V", 1 },
	{ "drawPixmap", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int, "(Lcom/badlogic/gdx/graphics/Pixmap;II)V", 1 },
	{ "drawPixmap", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int, "(Lcom/badlogic/gdx/graphics/Pixmap;IIIIII)V", 1 },
	{ "drawPixmap", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixmap_com_badlogic_gdx_graphics_Pixmap_int_int_int_int_int_int_int_int, "(Lcom/badlogic/gdx/graphics/Pixmap;IIIIIIII)V", 1 },
	{ "fillRectangle", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_fillRectangle_int_int_int_int, "(IIII)V", 1 },
	{ "drawCircle", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_drawCircle_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_drawCircle_int_int_int, "(III)V", 1 },
	{ "fillCircle", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_fillCircle_int_int_int, "(III)V", 1 },
	{ "fillTriangle", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_fillTriangle_int_int_int_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_fillTriangle_int_int_int_int_int_int, "(IIIIII)V", 1 },
	{ "getPixel", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixel_int_int_R_int, "(II)I", 1 },
	{ "getWidth", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int, "()I", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int, "()I", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_dispose, VTABLE_com_badlogic_gdx_graphics_Pixmap_dispose, "()V", 1 },
	{ "isDisposed", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_isDisposed_R_boolean, VTABLE_com_badlogic_gdx_graphics_Pixmap_isDisposed_R_boolean, "()Z", 1 },
	{ "drawPixel", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int, "(II)V", 1 },
	{ "drawPixel", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_drawPixel_int_int_int, "(III)V", 1 },
	{ "getGLFormat", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLFormat_R_int, "()I", 1 },
	{ "getGLInternalFormat", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLInternalFormat_R_int, "()I", 1 },
	{ "getGLType", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int, VTABLE_com_badlogic_gdx_graphics_Pixmap_getGLType_R_int, "()I", 1 },
	{ "getPixels", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer, VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "setPixels", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_setPixels_java_nio_ByteBuffer, VTABLE_com_badlogic_gdx_graphics_Pixmap_setPixels_java_nio_ByteBuffer, "(Ljava/nio/ByteBuffer;)V", 1 },
	{ "getFormat", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format, "()Lcom/badlogic/gdx/graphics/Pixmap$Format;", 1 },
	{ "getBlending", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getBlending_R_com_badlogic_gdx_graphics_Pixmap$Blending, VTABLE_com_badlogic_gdx_graphics_Pixmap_getBlending_R_com_badlogic_gdx_graphics_Pixmap$Blending, "()Lcom/badlogic/gdx/graphics/Pixmap$Blending;", 1 },
	{ "getFilter", (intptr_t) M_com_badlogic_gdx_graphics_Pixmap_getFilter_R_com_badlogic_gdx_graphics_Pixmap$Filter, VTABLE_com_badlogic_gdx_graphics_Pixmap_getFilter_R_com_badlogic_gdx_graphics_Pixmap$Filter, "()Lcom/badlogic/gdx/graphics/Pixmap$Filter;", 1 },
};

Class class_com_badlogic_gdx_graphics_Pixmap{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Pixmap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_Pixmap),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Pixmap,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Pixmap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Pixmap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 4,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 38,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 41,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_Pixmap = registerClass(&class_com_badlogic_gdx_graphics_Pixmap);

}

