#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Library.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Pointer.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Face.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Stroker.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/utils/LongMap.h"
#include "com/badlogic/gdx/utils/LongMap_Values.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/InputStream.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/nio/Buffer.h"
#include "com/badlogic/gdx/graphics/g2d/freetype/FreeType_Library.h"
#include "com/badlogic/gdx/utils/BufferUtils.h"
#include "java/io/IOException.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "java/io/Closeable.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library *) object;
	if (self->F_fontData)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fontData)->clazz)->markFunction)((jobject) self->F_fontData, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Library:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(66);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer_long(ctx, (frame[0].o), (frame[1].l));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_LongMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_LongMap);
	init_com_badlogic_gdx_utils_LongMap(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library *) NULL_CHECK(sp[0].o))->F_fontData = (jref) sp[1].o;
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Library:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_doneFreeType_long(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library *) NULL_CHECK((frame[0].o)))->F_fontData;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_values_R_com_badlogic_gdx_utils_LongMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_values_R_com_badlogic_gdx_utils_LongMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap$Values_iterator_R_java_util_Iterator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap$Values_iterator_R_java_util_Iterator])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_java_nio_ByteBuffer, sp[0].o));
	LINE_NUMBER(73);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(ctx, (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(74);
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, (frame[2].o));
	}
label_5:;
	LINE_NUMBER(75);
	goto label_2;
label_3:;
	LINE_NUMBER(76);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newFace_com_badlogic_gdx_files_FileHandle_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Library:newFace", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(83);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_GdxRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_map_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_map_R_java_nio_ByteBuffer])(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(88);
	goto label_13;
label_2:;
	LINE_NUMBER(86);
	INST_ASTORE(4);
label_13:;
	{
	LINE_NUMBER(89);
	if ((frame[3].o) != nullptr) goto label_14;
	}
	{
	LINE_NUMBER(90);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[1].o));
	frame[4].o = sp[0].o;
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_11; } // goto label_8
	}
	{
	LINE_NUMBER(92);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_files_FileHandle_length_R_long) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_length_R_long])(ctx, (frame[1].o));
	frame[5].i = (jint(temp0));
	LINE_NUMBER(93);
	if ((frame[5].i) != 0) goto label_17;
	}
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToByteArray_java_io_InputStream_int_R_Array1_byte(ctx, (frame[4].o), (16384));
	frame[6].o = sp[0].o;
	LINE_NUMBER(96);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	frame[3].o = sp[0].o;
	LINE_NUMBER(97);
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_byte_int_java_nio_Buffer_int(ctx, (frame[6].o), (jint(0)), (frame[3].o), (((jarray) nullCheck(ctx, (frame[6].o)))->length));
	LINE_NUMBER(98);
	goto label_5;
	}
label_17:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (frame[5].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(101);
	SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_nio_ByteBuffer(ctx, (frame[4].o), (frame[3].o));
	}
label_5:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(106);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(107);
	goto label_14;
	}
label_6:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_8;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_8; }
	{
	sp -= 1;
	LINE_NUMBER(103);
	frame[5].o = sp[0].o;
	LINE_NUMBER(104);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_Throwable(ctx, sp[0].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	LINE_NUMBER(106);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(107);
	throwException(ctx, (frame[7].o));	}
label_14:;
	{
	LINE_NUMBER(109);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face])(ctx, (frame[0].o), (frame[3].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Library:newMemoryFace", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_BufferUtils_newUnsafeByteBuffer_int_R_java_nio_ByteBuffer(ctx, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(114);
	SM_com_badlogic_gdx_utils_BufferUtils_copy_Array1_byte_int_java_nio_Buffer_int(ctx, (frame[1].o), (jint(0)), (frame[4].o), (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face])(ctx, (frame[0].o), (frame[4].o), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Library:newMemoryFace", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(119);
	jlong temp0 = (jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address;
	sp[0].o = frame[1].o;
	jint temp1 = (jint)((func_java_nio_ByteBuffer_remaining_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_nio_ByteBuffer_remaining_R_int])(ctx, (frame[1].o));
	jlong temp2 = (jlong)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_long_java_nio_ByteBuffer_int_int_R_long(ctx, temp0, sp[0].o, temp1, (frame[2].i));
	frame[3].l = temp2;
	LINE_NUMBER(120);
	if ((longCompare((frame[3].l), (jlong(0)))) != 0) goto label_2;
	}
	{
	LINE_NUMBER(121);
	jint temp0 = (jint)SM_com_badlogic_gdx_utils_BufferUtils_isUnsafeByteBuffer_java_nio_ByteBuffer_R_boolean(ctx, (frame[1].o));
	if (temp0 == 0) goto label_4;
	}
	{
	LINE_NUMBER(122);
	SM_com_badlogic_gdx_utils_BufferUtils_disposeUnsafeByteBuffer_java_nio_ByteBuffer(ctx, (frame[1].o));
	}
label_4:;
	{
	LINE_NUMBER(123);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't load font, FreeType error code: "_j))));
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_getLastErrorCode_R_int(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library *) NULL_CHECK((frame[0].o)))->F_fontData;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_LongMap_put_long_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_LongMap_put_long_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].l), (frame[1].o));
	LINE_NUMBER(127);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face_long_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library(ctx, sp[0].o, (frame[3].l), (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_createStroker_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Library:createStroker", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(142);
	jlong temp0 = (jlong)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_strokerNew_long_R_long(ctx, ((jlong)((com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer *) NULL_CHECK((frame[0].o)))->F_address));
	frame[1].l = temp0;
	LINE_NUMBER(143);
	if ((longCompare((frame[1].l), (jlong(0)))) != 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Couldn't create FreeType stroker, FreeType error code: "_j))));
	jint temp0 = (jint)SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType_getLastErrorCode_R_int(ctx);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(144);
	clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker);
	init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker_long(ctx, sp[0].o, (frame[1].l));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_dispose,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newFace_com_badlogic_gdx_files_FileHandle_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face,
	(void *) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_createStroker_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker,
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
	{ "newFace", "(Lcom/badlogic/gdx/files/FileHandle;I)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Face;" },
	{ "newMemoryFace", "([BII)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Face;" },
	{ "newMemoryFace", "(Ljava/nio/ByteBuffer;I)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Face;" },
	{ "createStroker", "()Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Stroker;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static FieldMetadata fields[] {
	{ "fontData", &class_com_badlogic_gdx_utils_LongMap, offsetof(com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library, F_fontData), "Lcom/badlogic/gdx/utils/LongMap;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_long, 0, "(J)V", 0 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_dispose, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_dispose, "()V", 1 },
	{ "doneFreeType", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_doneFreeType_long, 0, "(J)V", 266 },
	{ "newFace", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newFace_com_badlogic_gdx_files_FileHandle_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newFace_com_badlogic_gdx_files_FileHandle_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face, "(Lcom/badlogic/gdx/files/FileHandle;I)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Face;", 1 },
	{ "newMemoryFace", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_Array1_byte_int_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face, "([BII)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Face;", 1 },
	{ "newMemoryFace", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_java_nio_ByteBuffer_int_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Face, "(Ljava/nio/ByteBuffer;I)Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Face;", 1 },
	{ "newMemoryFace", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_newMemoryFace_long_java_nio_ByteBuffer_int_int_R_long, 0, "(JLjava/nio/ByteBuffer;II)J", 266 },
	{ "createStroker", (intptr_t) M_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_createStroker_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker, VTABLE_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_createStroker_R_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Stroker, "()Lcom/badlogic/gdx/graphics/g2d/freetype/FreeType$Stroker;", 1 },
	{ "strokerNew", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library_strokerNew_long_R_long, 0, "(J)J", 266 },
};

Class class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/freetype/FreeType$Library",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Pointer,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_freetype_FreeType,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library = registerClass(&class_com_badlogic_gdx_graphics_g2d_freetype_FreeType$Library);

}

