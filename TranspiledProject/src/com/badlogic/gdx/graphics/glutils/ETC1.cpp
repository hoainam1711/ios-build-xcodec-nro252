#include "com/badlogic/gdx/graphics/glutils/ETC1.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/nio/ByteBuffer.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1_ETC1Data.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {

jint SF_com_badlogic_gdx_graphics_glutils_ETC1_PKM_HEADER_SIZE;
jint SF_com_badlogic_gdx_graphics_glutils_ETC1_ETC1_RGB8_OES;

void mark_com_badlogic_gdx_graphics_glutils_ETC1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_glutils_ETC1 *) object;
}

void init_com_badlogic_gdx_graphics_glutils_ETC1(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(38);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_glutils_ETC1_getPixelSize_com_badlogic_gdx_graphics_Pixmap$Format_R_int(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1:getPixelSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB565;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(2);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Format(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Format_RGB888;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	INST_ICONST(3);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(145);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Can only handle RGB565 or RGB888 images"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImage_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1:encodeImage", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[0].o));
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getPixelSize_com_badlogic_gdx_graphics_Pixmap$Format_R_int(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(153);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImage_java_nio_ByteBuffer_int_int_int_int_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, temp2, temp3, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(154);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_java_nio_ByteBuffer_R_java_nio_ByteBuffer(ctx, (frame[2].o));
	LINE_NUMBER(155);
	clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[0].o));
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[0].o));
	init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_int_int_java_nio_ByteBuffer_int(ctx, sp[0].o, temp4, temp5, (frame[2].o), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImagePKM_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(jcontext ctx, jobject param0) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1:encodeImagePKM", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(163);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getFormat_R_com_badlogic_gdx_graphics_Pixmap$Format])(ctx, (frame[0].o));
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getPixelSize_com_badlogic_gdx_graphics_Pixmap$Format_R_int(ctx, sp[0].o);
	frame[1].i = temp0;
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[0].o));
	jint temp1 = jint(0);
	jint temp2 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImagePKM_java_nio_ByteBuffer_int_int_int_int_R_java_nio_ByteBuffer(ctx, sp[0].o, temp1, temp2, temp3, (frame[1].i));
	frame[2].o = sp[0].o;
	LINE_NUMBER(165);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_java_nio_ByteBuffer_R_java_nio_ByteBuffer(ctx, (frame[2].o));
	LINE_NUMBER(166);
	clinit_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data);
	jint temp4 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[0].o));
	jint temp5 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[0].o));
	init_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_int_int_java_nio_ByteBuffer_int(ctx, sp[0].o, temp4, temp5, (frame[2].o), (16));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ETC1_decodeImage_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_com_badlogic_gdx_graphics_Pixmap$Format_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[14];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1:decodeImage", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(175);
	frame[2].i = (jint(0));
	LINE_NUMBER(176);
	frame[3].i = (jint(0));
	LINE_NUMBER(177);
	frame[4].i = (jint(0));
	LINE_NUMBER(179);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_hasPKMHeader_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(180);
	frame[2].i = (16);
	LINE_NUMBER(181);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getWidthPKM_java_nio_ByteBuffer_int_R_int(ctx, sp[0].o, (jint(0)));
	frame[3].i = temp0;
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp1 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getHeightPKM_java_nio_ByteBuffer_int_R_int(ctx, sp[0].o, (jint(0)));
	frame[4].i = temp1;
	goto label_8;
	}
label_4:;
	{
	LINE_NUMBER(184);
	frame[2].i = (jint(0));
	LINE_NUMBER(185);
	frame[3].i = ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_width);
	LINE_NUMBER(186);
	frame[4].i = ((jint)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_height);
	}
label_8:;
	{
	LINE_NUMBER(189);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_glutils_ETC1_getPixelSize_com_badlogic_gdx_graphics_Pixmap$Format_R_int(ctx, (frame[1].o));
	frame[5].i = temp0;
	LINE_NUMBER(190);
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_int_int_com_badlogic_gdx_graphics_Pixmap$Format(ctx, sp[0].o, (frame[3].i), (frame[4].i), (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(191);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data *) NULL_CHECK((frame[0].o)))->F_compressedData;
	jint temp1 = frame[2].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getPixels_R_java_nio_ByteBuffer])(ctx, (frame[6].o));
	SM_com_badlogic_gdx_graphics_glutils_ETC1_decodeImage_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_int_int(ctx, sp[0].o, temp1, sp[1].o, (jint(0)), (frame[3].i), (frame[4].i), (frame[5].i));
	LINE_NUMBER(192);
	popStackFrame(ctx);
	return (frame[6].o);
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_glutils_ETC1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ETC1:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	{
	LINE_NUMBER(40);
	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ETC1_PKM_HEADER_SIZE = (16);
	LINE_NUMBER(41);
	clinit_com_badlogic_gdx_graphics_glutils_ETC1(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ETC1_ETC1_RGB8_OES = (jint(36196));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_ETC1[] {
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
	&class_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data,
};

static FieldMetadata fields[] {
	{ "PKM_HEADER_SIZE", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ETC1_PKM_HEADER_SIZE, "I", 9 },
	{ "ETC1_RGB8_OES", &class_int, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ETC1_ETC1_RGB8_OES, "I", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ETC1, 0, "()V", 1 },
	{ "getPixelSize", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_getPixelSize_com_badlogic_gdx_graphics_Pixmap$Format_R_int, 0, "(Lcom/badlogic/gdx/graphics/Pixmap$Format;)I", 10 },
	{ "encodeImage", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImage_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;)Lcom/badlogic/gdx/graphics/glutils/ETC1$ETC1Data;", 9 },
	{ "encodeImagePKM", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImagePKM_com_badlogic_gdx_graphics_Pixmap_R_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data, 0, "(Lcom/badlogic/gdx/graphics/Pixmap;)Lcom/badlogic/gdx/graphics/glutils/ETC1$ETC1Data;", 9 },
	{ "decodeImage", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_decodeImage_com_badlogic_gdx_graphics_glutils_ETC1$ETC1Data_com_badlogic_gdx_graphics_Pixmap$Format_R_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/graphics/glutils/ETC1$ETC1Data;Lcom/badlogic/gdx/graphics/Pixmap$Format;)Lcom/badlogic/gdx/graphics/Pixmap;", 9 },
	{ "getCompressedDataSize", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_getCompressedDataSize_int_int_R_int, 0, "(II)I", 265 },
	{ "formatHeader", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_formatHeader_java_nio_ByteBuffer_int_int_int, 0, "(Ljava/nio/ByteBuffer;III)V", 265 },
	{ "getWidthPKM", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_getWidthPKM_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 264 },
	{ "getHeightPKM", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_getHeightPKM_java_nio_ByteBuffer_int_R_int, 0, "(Ljava/nio/ByteBuffer;I)I", 264 },
	{ "isValidPKM", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_isValidPKM_java_nio_ByteBuffer_int_R_boolean, 0, "(Ljava/nio/ByteBuffer;I)Z", 264 },
	{ "decodeImage", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_decodeImage_java_nio_ByteBuffer_int_java_nio_ByteBuffer_int_int_int_int, 0, "(Ljava/nio/ByteBuffer;ILjava/nio/ByteBuffer;IIII)V", 266 },
	{ "encodeImage", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImage_java_nio_ByteBuffer_int_int_int_int_R_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;IIII)Ljava/nio/ByteBuffer;", 266 },
	{ "encodeImagePKM", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ETC1_encodeImagePKM_java_nio_ByteBuffer_int_int_int_int_R_java_nio_ByteBuffer, 0, "(Ljava/nio/ByteBuffer;IIII)Ljava/nio/ByteBuffer;", 266 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ETC1, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_glutils_ETC1{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/ETC1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_ETC1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_ETC1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ETC1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_ETC1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 14,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_ETC1 = registerClass(&class_com_badlogic_gdx_graphics_glutils_ETC1);

}

