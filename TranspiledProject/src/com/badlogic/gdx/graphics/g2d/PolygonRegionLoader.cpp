#include "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader.h"
#include "com/badlogic/gdx/assets/loaders/AssetLoader.h"
#include "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader_PolygonRegionParameters.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/assets/loaders/resolvers/InternalFileHandleResolver.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/math/EarClippingTriangulator.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "com/badlogic/gdx/assets/loaders/SynchronousAssetLoader.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/loaders/FileHandleResolver.h"
#include "com/badlogic/gdx/assets/AssetManager.h"
#include "java/io/BufferedReader.h"
#include "com/badlogic/gdx/graphics/g2d/PolygonRegion.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/ShortArray.h"
#include "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "com/badlogic/gdx/graphics/Texture.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_graphics_g2d_PolygonRegionLoader *) object;
	if (self->F_defaultParameters)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_defaultParameters)->clazz)->markFunction)((jobject) self->F_defaultParameters, mark, depth + 1);
	if (self->F_triangulator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_triangulator)->clazz)->markFunction)((jobject) self->F_triangulator, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver);
	init_com_badlogic_gdx_assets_loaders_resolvers_InternalFileHandleResolver(ctx, sp[1].o);
	init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	init_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(55);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters);
	init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader *) NULL_CHECK(sp[0].o))->F_defaultParameters = (jref) sp[1].o;
	LINE_NUMBER(57);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_EarClippingTriangulator(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_EarClippingTriangulator);
	init_com_badlogic_gdx_math_EarClippingTriangulator(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader *) NULL_CHECK(sp[0].o))->F_triangulator = (jref) sp[1].o;
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_graphics_g2d_PolygonRegion(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(69);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_getDependencies_java_lang_String_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_getDependencies_java_lang_String_R_com_badlogic_gdx_utils_Array])(ctx, (frame[1].o), (frame[2].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_first_R_java_lang_Object])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_assets_AssetManager_get_java_lang_String_R_java_lang_Object])(ctx, sp[0].o, (checkCast(ctx, &class_java_lang_String, sp[1].o)));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	LINE_NUMBER(70);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[1].o, (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g2d_PolygonRegion) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g2d_PolygonRegion])(ctx, sp[0].o, sp[1].o, (frame[3].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader:getDependencies", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(79);
	if ((frame[3].o) != nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader *) NULL_CHECK((frame[0].o)))->F_defaultParameters;
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(80);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(82);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader])(ctx, (frame[2].o), ((jint)((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) NULL_CHECK((frame[3].o)))->F_readerBuffer));
	frame[5].o = sp[0].o;
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	}
label_7:;
	INST_ALOAD(6);
	if ((--sp)->o == nullptr) goto label_8;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) NULL_CHECK((frame[3].o)))->F_texturePrefix;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) NULL_CHECK((frame[3].o)))->F_texturePrefix;
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, sp[0].o, temp0);
	frame[4].o = sp[0].o;
	LINE_NUMBER(86);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(88);
	((func_java_io_BufferedReader_close) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_BufferedReader_close])(ctx, (frame[5].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(91);
	goto label_13;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(89);
	frame[5].o = sp[0].o;
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(93);
	if ((frame[4].o) != nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) NULL_CHECK((frame[3].o)))->F_textureExtensions;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters *) NULL_CHECK((frame[3].o)))->F_textureExtensions;
	frame[5].o = sp[0].o;
	frame[6].i = (((jarray) nullCheck(ctx, (frame[5].o)))->length);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) >= (frame[6].i)) goto label_15;
	}
	{
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i)));
	LINE_NUMBER(94);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String])(ctx, (frame[2].o));
	clinit_java_lang_StringBuilder(ctx);
	sp[2].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[2].o, (frame[8].o));
	sp[2].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_String_concat_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_String_concat_java_lang_String_R_java_lang_String])(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o);
	frame[9].o = sp[0].o;
	LINE_NUMBER(95);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[9].o));
	if (temp0 == 0) goto label_19;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[9].o));
	frame[4].o = sp[0].o;
	}
label_19:;
	{
	LINE_NUMBER(93);
	INST_IINC(7, 1);
	goto label_16;
	}
label_15:;
	{
	LINE_NUMBER(98);
	if ((frame[4].o) == nullptr) goto label_20;
	}
	{
	LINE_NUMBER(99);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[0].o, (jint(1)));
	frame[5].o = sp[0].o;
	LINE_NUMBER(100);
	sp[0].o = frame[5].o;
	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_assets_AssetDescriptor);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[2].o), (frame[4].o));
	init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class(ctx, sp[1].o, sp[2].o, (((jobject) &class_com_badlogic_gdx_graphics_Texture)));
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (frame[5].o);
	}
label_20:;
	{
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g2d_PolygonRegion(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader:load", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(117);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader])(ctx, (frame[2].o), (256));
	frame[3].o = sp[0].o;
	}
label_0:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_11; } // goto label_7
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	{
	LINE_NUMBER(120);
	sp[0].o = (jobject)((func_java_io_BufferedReader_readLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_BufferedReader_readLine_R_java_lang_String])(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(121);
	if ((frame[4].o) != nullptr) goto label_14;
	}
	{ popExceptionFrames(frameRef, 2); bypasses[1] = true; goto label_9; } // goto label_5
label_14:;
	{
	LINE_NUMBER(122);
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"s"_j))));
	if (temp0 == 0) { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(124);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[4].o), (jint(1)));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_split_java_lang_String_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_split_java_lang_String_R_Array1_java_lang_String])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8","_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject) createArray(ctx, &class_float, (((jarray) nullCheck(ctx, (frame[5].o)))->length));
	frame[6].o = sp[0].o;
	LINE_NUMBER(126);
	frame[7].i = (jint(0));
	frame[8].i = (((jarray) nullCheck(ctx, (frame[6].o)))->length);
	}
label_19:;
	{
	if ((frame[7].i) >= (frame[8].i)) goto label_20;
	}
	{
	LINE_NUMBER(127);
	sp[0].o = frame[6].o;
	jint temp0 = frame[7].i;
	jfloat temp1 = (jfloat)SM_java_lang_Float_parseFloat_java_lang_String_R_float(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[7].i))));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(126);
	INST_IINC(7, 1);
	goto label_19;
	}
label_20:;
	{
	LINE_NUMBER(129);
	clinit_com_badlogic_gdx_graphics_g2d_PolygonRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PolygonRegion);
	sp[1].o = frame[1].o;
	sp[2].o = frame[6].o;
	sp[3].o = (jobject)((com_badlogic_gdx_graphics_g2d_PolygonRegionLoader *) NULL_CHECK((frame[0].o)))->F_triangulator;
	sp[3].o = (jobject)((func_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_R_com_badlogic_gdx_utils_ShortArray) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_math_EarClippingTriangulator_computeTriangles_Array1_float_R_com_badlogic_gdx_utils_ShortArray])(ctx, sp[3].o, (frame[6].o));
	sp[3].o = (jobject)((func_com_badlogic_gdx_utils_ShortArray_toArray_R_Array1_short) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ShortArray_toArray_R_Array1_short])(ctx, sp[3].o);
	init_com_badlogic_gdx_graphics_g2d_PolygonRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_Array1_float_Array1_short(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	frame[7].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(135);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (frame[7].o);
	}
label_4:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_11; } // goto label_7
	}
	if (bypasses[1]) { goto label_6; }
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_2; }
	}
	if (bypasses[1]) { bypasses[1] = false; goto label_5; }
	LINE_NUMBER(131);
	{ popExceptionFrames(frameRef, 2); goto label_0; }
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(135);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(136);
	goto label_25;
	}
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_7;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_7; }
	if (bypasses[2]) { bypasses[2] = false; goto label_7; }
	{
	sp -= 1;
	LINE_NUMBER(132);
	frame[4].o = sp[0].o;
	LINE_NUMBER(133);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading polygon shape file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_7:;
	LINE_NUMBER(135);
	INST_ASTORE(9);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(136);
	throwException(ctx, (frame[9].o));	}
label_25:;
	{
	LINE_NUMBER(137);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Polygon shape not found: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_graphics_g2d_PolygonRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_graphics_g2d_PolygonRegion])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters, (frame[4].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader:getDependencies", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_utils_Array])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters, (frame[3].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader[] {
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
	(void *) M_com_badlogic_gdx_assets_loaders_AssetLoader_resolve_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_graphics_g2d_PolygonRegion,
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g2d_PolygonRegion,
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
	{ "resolve", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;" },
	{ "load", "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/PolygonRegionLoader$PolygonRegionParameters;)Lcom/badlogic/gdx/graphics/g2d/PolygonRegion;" },
	{ "getDependencies", "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/PolygonRegionLoader$PolygonRegionParameters;)Lcom/badlogic/gdx/utils/Array;" },
	{ "load", "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/g2d/PolygonRegion;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters,
};

static FieldMetadata fields[] {
	{ "defaultParameters", &class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters, offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegionLoader, F_defaultParameters), "Lcom/badlogic/gdx/graphics/g2d/PolygonRegionLoader$PolygonRegionParameters;", 2 },
	{ "triangulator", &class_com_badlogic_gdx_math_EarClippingTriangulator, offsetof(com_badlogic_gdx_graphics_g2d_PolygonRegionLoader, F_triangulator), "Lcom/badlogic/gdx/math/EarClippingTriangulator;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_com_badlogic_gdx_assets_loaders_FileHandleResolver, 0, "(Lcom/badlogic/gdx/assets/loaders/FileHandleResolver;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_graphics_g2d_PolygonRegion, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_graphics_g2d_PolygonRegion, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/PolygonRegionLoader$PolygonRegionParameters;)Lcom/badlogic/gdx/graphics/g2d/PolygonRegion;", 1 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader$PolygonRegionParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/PolygonRegionLoader$PolygonRegionParameters;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g2d_PolygonRegion, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_g2d_PolygonRegion, "(Lcom/badlogic/gdx/graphics/g2d/TextureRegion;Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/g2d/PolygonRegion;", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_load_com_badlogic_gdx_assets_AssetManager_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_java_lang_Object, "(Lcom/badlogic/gdx/assets/AssetManager;Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Ljava/lang/Object;", 4161 },
	{ "getDependencies", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader_getDependencies_java_lang_String_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_assets_AssetLoaderParameters_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)Lcom/badlogic/gdx/utils/Array;", 4161 },
};

Class class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PolygonRegionLoader",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_assets_loaders_SynchronousAssetLoader,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PolygonRegionLoader),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader,
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
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader = registerClass(&class_com_badlogic_gdx_graphics_g2d_PolygonRegionLoader);

}

