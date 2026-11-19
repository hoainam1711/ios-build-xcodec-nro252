#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "java/lang/Integer.h"
#include "com/badlogic/gdx/utils/ArraySupplier.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_9.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_8.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_7.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_6.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_5.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Page.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_4.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_10.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_13.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_14.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_11.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_12.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/util/Comparator.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_invoke_com_badlogic_gdx_utils_ArraySupplier_0.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_invoke_com_badlogic_gdx_utils_ArraySupplier_1.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Exception.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "java/io/BufferedReader.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Region.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/NumberFormatException.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_Field.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_3.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_2.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_TextureAtlasData_1.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) object;
	if (self->F_pages)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_pages)->clazz)->markFunction)((jobject) self->F_pages, mark, depth + 1);
	if (self->F_regions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_regions)->clazz)->markFunction)((jobject) self->F_regions, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(260);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK(sp[0].o))->F_pages = (jref) sp[1].o;
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(261);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(263);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(257);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK(sp[0].o))->F_pages = (jref) sp[1].o;
	LINE_NUMBER(258);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK(sp[0].o))->F_regions = (jref) sp[1].o;
	LINE_NUMBER(264);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i));
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[27];
	auto stack = &frame[20];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData:load", 27 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(268);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (jint(5)));
	frame[4].o = sp[0].o;
	LINE_NUMBER(270);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap_int_float(ctx, sp[0].o, (15), (jfloat(0.99f)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(271);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"size"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$1(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$1);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$1_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(277);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"format"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$2);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$2_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(282);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"filter"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$3);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$3_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(289);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"repeat"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$4);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$4_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(295);
	sp[0].o = frame[5].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"pma"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$5);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$5_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(301);
	sp[0].o = (jobject) createArray(ctx, &class_boolean, (jint(1)));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	frame[6].o = sp[0].o;
	LINE_NUMBER(302);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	init_com_badlogic_gdx_utils_ObjectMap_int_float(ctx, sp[0].o, (127), (jfloat(0.99f)));
	frame[7].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"xy"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$6(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$6);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$6_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(309);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"size"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$7(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$7);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$7_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(315);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"bounds"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$8(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$8);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$8_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(323);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"offset"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$9(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$9);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$9_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(329);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"orig"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$10(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$10);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$10_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(335);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"offsets"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$11_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(343);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"rotate"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$12(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$12);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$12_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String(ctx, sp[2].o, (frame[0].o), (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(353);
	sp[0].o = frame[7].o;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"index"_j));
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$13(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$13);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$13_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_Array1_java_lang_String_Array1_boolean(ctx, sp[2].o, (frame[0].o), (frame[4].o), (frame[6].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader])(ctx, (frame[1].o), (1024));
	frame[8].o = sp[0].o;
	LINE_NUMBER(361);
	frame[9].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_11; } // goto label_8
	}
	{
	LINE_NUMBER(363);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	}
label_31:;
	{
	LINE_NUMBER(365);
	if ((frame[9].o) == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_32;
	}
	{
	LINE_NUMBER(366);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	goto label_31;
	}
label_32:;
	{
	LINE_NUMBER(369);
	if ((frame[9].o) == nullptr) goto label_34;
	}
	{
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_35;
	}
	goto label_34;
label_35:;
	{
	LINE_NUMBER(370);
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_readEntry_Array1_java_lang_String_java_lang_String_R_int(ctx, (frame[4].o), (frame[9].o));
	if (temp0 != 0) goto label_36;
	}
	goto label_34;
label_36:;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	goto label_32;
	}
label_34:;
	{
	LINE_NUMBER(374);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(375);
	frame[11].o = (jobject(nullptr));
	LINE_NUMBER(376);
	frame[12].o = (jobject(nullptr));
	}
label_39:;
	{
	LINE_NUMBER(378);
	if ((frame[9].o) != nullptr) goto label_40;
	}
	goto label_5;
label_40:;
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_41;
	}
	{
	LINE_NUMBER(380);
	frame[10].o = (jobject(nullptr));
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[8].o));
	frame[9].o = sp[0].o;
	goto label_39;
	}
label_41:;
	{
	LINE_NUMBER(382);
	if ((frame[10].o) != nullptr) goto label_44;
	}
	{
	LINE_NUMBER(383);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(384);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK((frame[10].o)))->F_name = (jref) (frame[9].o);
	LINE_NUMBER(385);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[2].o), (frame[9].o));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page *) NULL_CHECK(sp[0].o))->F_textureFile = (jref) sp[1].o;
	}
label_48:;
	{
	LINE_NUMBER(387);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[8].o));
	frame[9].o = sp[1].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_readEntry_Array1_java_lang_String_java_lang_String_R_int(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_49;
	}
	goto label_50;
label_49:;
	{
	LINE_NUMBER(388);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[5].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	frame[13].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field, sp[0].o));
	LINE_NUMBER(389);
	if ((frame[13].o) == nullptr) goto label_52;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field_parse_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field, INDEX_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field_parse_java_lang_Object, (frame[13].o)))(ctx, (frame[13].o), (frame[10].o));
	}
label_52:;
	LINE_NUMBER(390);
	goto label_48;
label_50:;
	{
	LINE_NUMBER(391);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_pages;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	goto label_39;
	}
label_44:;
	{
	LINE_NUMBER(393);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region(ctx, sp[0].o);
	frame[13].o = sp[0].o;
	LINE_NUMBER(394);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[13].o)))->F_page = (jref) (frame[10].o);
	LINE_NUMBER(395);
	sp[0].o = frame[13].o;
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[9].o));
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_name = (jref) sp[1].o;
	LINE_NUMBER(396);
	if ((frame[3].i) == 0) goto label_56;
	}
	{
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[13].o)))->F_flip = (jint(1));
	}
label_56:;
	{
	LINE_NUMBER(398);
	sp[0].o = frame[4].o;
	sp[1].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[8].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[8].o));
	frame[9].o = sp[1].o;
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_readEntry_Array1_java_lang_String_java_lang_String_R_int(ctx, sp[0].o, sp[1].o);
	frame[14].i = temp0;
	LINE_NUMBER(399);
	if ((frame[14].i) != 0) goto label_58;
	}
	goto label_59;
label_58:;
	{
	LINE_NUMBER(400);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[7].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	frame[15].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field, sp[0].o));
	LINE_NUMBER(401);
	if ((frame[15].o) == nullptr) goto label_61;
	}
	{
	LINE_NUMBER(402);
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field_parse_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field, INDEX_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field_parse_java_lang_Object, (frame[15].o)))(ctx, (frame[15].o), (frame[13].o));
	goto label_63;
	}
label_61:;
	{
	LINE_NUMBER(404);
	if ((frame[11].o) != nullptr) goto label_64;
	}
	{
	LINE_NUMBER(405);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[0].o, (8));
	frame[11].o = sp[0].o;
	LINE_NUMBER(406);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[0].o, (8));
	frame[12].o = sp[0].o;
	}
label_64:;
	{
	LINE_NUMBER(408);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[11].o), ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (jint(0)))));
	LINE_NUMBER(409);
	sp[0].o = (jobject) createArray(ctx, &class_int, (frame[14].i));
	frame[16].o = sp[0].o;
	LINE_NUMBER(410);
	frame[17].i = (jint(0));
	}
label_69:;
	{
	if ((frame[17].i) >= (frame[14].i)) goto label_70;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_NumberFormatException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(412);
	sp[0].o = frame[16].o;
	jint temp0 = frame[17].i;
	jint temp1 = (jint)SM_java_lang_Integer_parseInt_java_lang_String_R_int(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), ((frame[17].i) + (jint(1))))));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = temp1;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(414);
	goto label_71;
label_2:;
	LINE_NUMBER(413);
	INST_ASTORE(18);
label_71:;
	{
	LINE_NUMBER(410);
	INST_IINC(17, 1);
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(416);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[12].o), (frame[16].o));
	}
label_63:;
	LINE_NUMBER(418);
	goto label_56;
label_59:;
	{
	LINE_NUMBER(419);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[13].o)))->F_originalWidth) != 0) goto label_72;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[13].o)))->F_originalHeight) != 0) goto label_72;
	}
	{
	LINE_NUMBER(420);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[13].o)))->F_originalWidth = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[13].o)))->F_width);
	LINE_NUMBER(421);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[13].o)))->F_originalHeight = ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK((frame[13].o)))->F_height);
	}
label_72:;
	{
	LINE_NUMBER(423);
	if ((frame[11].o) == nullptr) goto label_75;
	}
	{
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[11].o)))->F_size) <= 0) goto label_75;
	}
	{
	LINE_NUMBER(424);
	sp[0].o = frame[13].o;
	sp[1].o = frame[11].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_invoke_com_badlogic_gdx_utils_ArraySupplier_0(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_invoke_com_badlogic_gdx_utils_ArraySupplier_0 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_invoke_com_badlogic_gdx_utils_ArraySupplier_0);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_names = (jref) (checkCast(ctx, getArrayClass(&class_java_lang_String, 1), sp[1].o));
	LINE_NUMBER(425);
	sp[0].o = frame[13].o;
	sp[1].o = frame[12].o;
	{ /* InvokeDynamic */
		clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_invoke_com_badlogic_gdx_utils_ArraySupplier_1(ctx);
		auto proxy = (com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_invoke_com_badlogic_gdx_utils_ArraySupplier_1 *) gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_invoke_com_badlogic_gdx_utils_ArraySupplier_1);
		sp[2].o = (jobject) proxy;
	}
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_toArray_com_badlogic_gdx_utils_ArraySupplier_R_Array1_java_lang_Object])(ctx, sp[1].o, sp[2].o);
	((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region *) NULL_CHECK(sp[0].o))->F_values = (jref) (checkCast(ctx, getArrayClass(&class_int, 2), sp[1].o));
	LINE_NUMBER(426);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[11].o));
	LINE_NUMBER(427);
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, (frame[12].o));
	}
label_75:;
	{
	LINE_NUMBER(429);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_regions;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[13].o));
	LINE_NUMBER(430);
	goto label_39;
	}
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(436);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[8].o));
	LINE_NUMBER(437);
	goto label_82;
	}
label_6:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(432);
	frame[10].o = sp[0].o;
	LINE_NUMBER(433);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading texture atlas file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	LINE_NUMBER(434);
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	sp[2].o = temp0;
	sp += 3;
	if ((frame[9].o) != nullptr) goto label_85;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_86;
label_85:;
	{
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"\nLine: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[9].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_86:;
	{
	sp -= 4;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, sp[3].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[10].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(436);
	INST_ASTORE(19);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[8].o));
	LINE_NUMBER(437);
	throwException(ctx, (frame[19].o));	}
label_82:;
	{
	LINE_NUMBER(439);
	if (((jint)ARRAY_ACCESS(jbyte, (frame[6].o), (jint(0)))) == 0) goto label_88;
	}
	{
	LINE_NUMBER(440);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_regions;
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$14(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$14);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$14_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx, sp[1].o, (frame[0].o));
	((func_com_badlogic_gdx_utils_Array_sort_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_sort_java_util_Comparator])(ctx, sp[0].o, sp[1].o);
	}
label_88:;
	LINE_NUMBER(450);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData:getPages", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_pages;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData:getRegions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData *) NULL_CHECK((frame[0].o)))->F_regions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_readEntry_Array1_java_lang_String_java_lang_String_R_int(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData:readEntry", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(461);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(462);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(463);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_3;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(464);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_R_int])(ctx, (frame[1].o), (58));
	frame[2].i = temp0;
	LINE_NUMBER(465);
	if ((frame[2].i) != (jint(-1))) goto label_5;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_5:;
	{
	LINE_NUMBER(466);
	sp[0].o = frame[0].o;
	jint temp0 = jint(0);
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[2].i));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(467);
	frame[3].i = (jint(1));
	frame[4].i = ((frame[2].i) + (jint(1)));
	}
label_8:;
	{
	LINE_NUMBER(468);
	jint temp0 = (jint)((func_java_lang_String_indexOf_int_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_indexOf_int_int_R_int])(ctx, (frame[1].o), (44), (frame[4].i));
	frame[5].i = temp0;
	LINE_NUMBER(469);
	if ((frame[5].i) != (jint(-1))) goto label_10;
	}
	{
	LINE_NUMBER(470);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(471);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_10:;
	{
	LINE_NUMBER(473);
	sp[0].o = frame[0].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (frame[4].i), (frame[5].i));
	sp[1].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(474);
	frame[4].i = ((frame[5].i) + (jint(1)));
	LINE_NUMBER(475);
	if ((frame[3].i) != (jint(4))) goto label_15;
	}
	INST_ICONST(4);
	popStackFrame(ctx);
	INST_IRETURN();
label_15:;
	{
	LINE_NUMBER(467);
	INST_IINC(3, 1);
	goto label_8;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_lambda$load$1_int_R_Array2_int(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData:lambda$load$1", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(425);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_lambda$load$0_int_R_Array1_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData:lambda$load$0", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(424);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_String, (frame[0].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_com_badlogic_gdx_utils_Array,
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
	{ "load", "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Z)V" },
	{ "getPages", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getRegions", "()Lcom/badlogic/gdx/utils/Array;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Page,
	&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Field,
	&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData$Region,
};

static FieldMetadata fields[] {
	{ "pages", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData, F_pages), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "regions", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData, F_regions), "Lcom/badlogic/gdx/utils/Array;", 16 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_load_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle_boolean, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;Z)V", 1 },
	{ "getPages", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getPages_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getRegions", (intptr_t) M_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_getRegions_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "readEntry", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_readEntry_Array1_java_lang_String_java_lang_String_R_int, 0, "([Ljava/lang/String;Ljava/lang/String;)I", 10 },
	{ "lambda$load$1", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_lambda$load$1_int_R_Array2_int, 0, "(I)[[I", 4106 },
	{ "lambda$load$0", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData_lambda$load$0_int_R_Array1_java_lang_String, 0, "(I)[Ljava/lang/String;", 4106 },
};

Class class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/TextureAtlas$TextureAtlasData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_TextureAtlas,
		.innerClassCount = 3,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData = registerClass(&class_com_badlogic_gdx_graphics_g2d_TextureAtlas$TextureAtlasData);

}

