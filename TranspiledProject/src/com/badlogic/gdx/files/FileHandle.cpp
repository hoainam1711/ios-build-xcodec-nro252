#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/Files_FileType.h"
#include "java/lang/StringBuilder.h"
#include "java/nio/MappedByteBuffer.h"
#include "java/io/FileOutputStream.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/io/FileInputStream.h"
#include "java/io/Writer.h"
#include "java/io/OutputStreamWriter.h"
#include "java/io/InputStream.h"
#include "java/nio/ByteBuffer.h"
#include "java/io/BufferedOutputStream.h"
#include "com/badlogic/gdx/files/FileHandle_1.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/io/RandomAccessFile.h"
#include "java/io/FileFilter.h"
#include "java/io/InputStreamReader.h"
#include "java/io/IOException.h"
#include "java/io/Closeable.h"
#include "java/io/Reader.h"
#include "java/io/File.h"
#include "java/lang/Throwable.h"
#include "java/io/UnsupportedEncodingException.h"
#include "java/nio/channels/FileChannel.h"
#include "com/badlogic/gdx/utils/StreamUtils.h"
#include "java/lang/Exception.h"
#include "java/net/URL.h"
#include "java/nio/ByteOrder.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "java/io/BufferedReader.h"
#include "java/lang/Enum.h"
#include "java/io/OutputStream.h"
#include "java/io/BufferedInputStream.h"
#include "java/lang/Object.h"
#include "java/nio/channels/FileChannel_MapMode.h"
#include "java/lang/Class.h"
#include "java/io/FilenameFilter.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_files_FileHandle(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_files_FileHandle *) object;
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
}

void clinit_com_badlogic_gdx_files_FileHandle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(60);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_files_FileHandle_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(66);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((com_badlogic_gdx_files_FileHandle *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Absolute;
	((com_badlogic_gdx_files_FileHandle *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_files_FileHandle_java_io_File(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(74);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(75);
	((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Absolute;
	((com_badlogic_gdx_files_FileHandle *) NULL_CHECK(sp[0].o))->F_type = (jref) sp[1].o;
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_files_FileHandle_java_lang_String_com_badlogic_gdx_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(79);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(80);
	((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	((com_badlogic_gdx_files_FileHandle *) NULL_CHECK(sp[0].o))->F_file = (jref) sp[1].o;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_files_FileHandle_java_io_File_com_badlogic_gdx_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(84);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(85);
	((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(86);
	((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:path", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (92), (47));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:name", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_extension_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:extension", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(103);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(104);
	if ((frame[2].i) != (jint(-1))) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_R_java_lang_String])(ctx, (frame[1].o), ((frame[2].i) + (jint(1))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:nameWithoutExtension", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getName_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(111);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(112);
	if ((frame[2].i) != (jint(-1))) goto label_3;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_pathWithoutExtension_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:pathWithoutExtension", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (92), (47));
	frame[1].o = sp[0].o;
	LINE_NUMBER(120);
	jint temp0 = (jint)((func_java_lang_String_lastIndexOf_int_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_lastIndexOf_int_R_int])(ctx, (frame[1].o), (46));
	frame[2].i = temp0;
	LINE_NUMBER(121);
	if ((frame[2].i) != (jint(-1))) goto label_3;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(122);
	sp[0].o = (jobject)((func_java_lang_String_substring_int_int_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_substring_int_int_R_java_lang_String])(ctx, (frame[1].o), (jint(0)), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_type_R_com_badlogic_gdx_Files$FileType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:type", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(126);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_file_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:file", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_External;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_getExternalStoragePath_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_getExternalStoragePath_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:read", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o == sp[1].o) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_5;
	}
label_6:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Local;
	if (sp[0].o != sp[1].o) goto label_0;
	}
	{
	sp[0].o = frame[0].o;
	LINE_NUMBER(140);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_0;
	}
label_5:;
	{
	LINE_NUMBER(141);
	sp[0].o = ((jobject) &class_com_badlogic_gdx_files_FileHandle);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[2].o, (92), (47));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getResourceAsStream_java_lang_String_R_java_io_InputStream])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(142);
	if ((frame[1].o) != nullptr) goto label_9;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"File not found: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(146);
	clinit_java_io_FileInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileInputStream);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	init_java_io_FileInputStream_java_io_File(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(147);
	frame[1].o = sp[0].o;
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_11;
	}
	{
	LINE_NUMBER(149);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot open a stream to a directory: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}
label_11:;
	{
	LINE_NUMBER(150);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_read_int_R_java_io_BufferedInputStream(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:read", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(157);
	clinit_java_io_BufferedInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedInputStream);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	init_java_io_BufferedInputStream_java_io_InputStream_int(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_reader_R_java_io_Reader(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:reader", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(163);
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:reader", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(169);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_UnsupportedEncodingException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(171);
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(ctx, sp[0].o, (frame[2].o), (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(172);
	frame[3].o = sp[0].o;
	LINE_NUMBER(173);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(174);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:reader", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(181);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[1].o, sp[2].o);
	init_java_io_BufferedReader_java_io_Reader_int(ctx, sp[0].o, sp[1].o, (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_reader_int_java_lang_String_R_java_io_BufferedReader(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:reader", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_UnsupportedEncodingException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(188);
	clinit_java_io_BufferedReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedReader);
	clinit_java_io_InputStreamReader(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[2].o));
	init_java_io_BufferedReader_java_io_Reader_int(ctx, sp[0].o, sp[1].o, (frame[1].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(189);
	frame[3].o = sp[0].o;
	LINE_NUMBER(190);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_readString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:readString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(197);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_readString_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_readString_java_lang_String_R_java_lang_String])(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_readString_java_lang_String_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:readString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(204);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	jint temp0 = (jint)M_com_badlogic_gdx_files_FileHandle_estimateLength_R_int(ctx, (frame[0].o));
	init_java_lang_StringBuilder_int(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	LINE_NUMBER(205);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(207);
	if ((frame[1].o) != nullptr) goto label_10;
	}
	{
	LINE_NUMBER(208);
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	init_java_io_InputStreamReader_java_io_InputStream(ctx, sp[0].o, sp[1].o);
	frame[3].o = sp[0].o;
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(210);
	clinit_java_io_InputStreamReader(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_InputStreamReader);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	init_java_io_InputStreamReader_java_io_InputStream_java_lang_String(ctx, sp[0].o, sp[1].o, (frame[1].o));
	frame[3].o = sp[0].o;
	}
label_12:;
	{
	LINE_NUMBER(211);
	sp[0].o = (jobject) createArray(ctx, &class_char, (256));
	frame[4].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(213);
	jint temp0 = (jint)((func_java_io_InputStreamReader_read_Array1_char_R_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_InputStreamReader_read_Array1_char_R_int])(ctx, (frame[3].o), (frame[4].o));
	frame[5].i = temp0;
	LINE_NUMBER(214);
	if ((frame[5].i) != (jint(-1))) goto label_15;
	}
	goto label_1;
label_15:;
	{
	LINE_NUMBER(215);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_Array1_char_int_int_R_java_lang_StringBuilder])(ctx, (frame[2].o), (frame[4].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(216);
	goto label_13;
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(220);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(221);
	goto label_18;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(217);
	frame[4].o = sp[0].o;
	LINE_NUMBER(218);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading layout file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(220);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(221);
	throwException(ctx, (frame[6].o));	}
label_18:;
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:readBytes", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(230);
	sp[0].o = frame[1].o;
	jint temp0 = (jint)M_com_badlogic_gdx_files_FileHandle_estimateLength_R_int(ctx, (frame[0].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_StreamUtils_copyStreamToByteArray_java_io_InputStream_int_R_Array1_byte(ctx, sp[0].o, temp0);
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(234);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(231);
	frame[2].o = sp[0].o;
	LINE_NUMBER(232);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(234);
	INST_ASTORE(3);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(235);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_files_FileHandle_estimateLength_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:estimateLength", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(239);
	jlong temp0 = (jlong)((func_com_badlogic_gdx_files_FileHandle_length_R_long) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_length_R_long])(ctx, (frame[0].o));
	frame[1].i = (jint(temp0));
	LINE_NUMBER(240);
	if ((frame[1].i) == 0) goto label_2;
	}
	INST_ILOAD(1);
	goto label_3;
label_2:;
	INST_SIPUSH(512);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_files_FileHandle_readBytes_Array1_byte_int_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:readBytes", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(249);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(250);
	frame[5].i = (jint(0));
	}
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)((func_java_io_InputStream_read_Array1_byte_int_int_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_InputStream_read_Array1_byte_int_int_R_int])(ctx, (frame[4].o), (frame[1].o), ((frame[2].i) + (frame[5].i)), ((frame[3].i) - (frame[5].i)));
	frame[6].i = temp0;
	LINE_NUMBER(254);
	if ((frame[6].i) > 0) goto label_11;
	}
	goto label_1;
label_11:;
	{
	LINE_NUMBER(255);
	frame[5].i = ((frame[5].i) + (frame[6].i));
	LINE_NUMBER(256);
	{ popExceptionFrames(frameRef, 2); goto label_0; }
	}
label_1:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(260);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(261);
	goto label_14;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(257);
	frame[6].o = sp[0].o;
	LINE_NUMBER(258);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(260);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(261);
	throwException(ctx, (frame[7].o));	}
label_14:;
	{
	LINE_NUMBER(262);
	popStackFrame(ctx);
	return ((frame[5].i) - (frame[2].i));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_map_R_java_nio_ByteBuffer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:map", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(269);
	sp[0].o = frame[0].o;
	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	sp[1].o = (jobject)SF_java_nio_channels_FileChannel$MapMode_READ_ONLY;
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:map", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot map a classpath file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(277);
	frame[2].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(280);
	clinit_java_io_RandomAccessFile(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_RandomAccessFile);
	sp[1].o = frame[3].o;
	sp[2].o = frame[1].o;
	clinit_java_nio_channels_FileChannel$MapMode(ctx);
	sp[3].o = (jobject)SF_java_nio_channels_FileChannel$MapMode_READ_ONLY;
	jobject temp0 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp1 = sp[2].o;
	sp[2].o = temp0;
	sp += 3;
	if (temp1 != sp[0].o) goto label_11;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"r"_j));
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"rw"_j));
label_12:;
	{
	sp -= 4;
	init_java_io_RandomAccessFile_java_io_File_java_lang_String(ctx, sp[0].o, sp[2].o, sp[3].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(281);
	sp[0].o = (jobject)((func_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_RandomAccessFile_getChannel_R_java_nio_channels_FileChannel])(ctx, (frame[2].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(282);
	sp[0].o = frame[4].o;
	sp[1].o = frame[1].o;
	jlong temp0 = jlong(0);
	jlong temp1 = (jlong)((func_java_io_File_length_R_long) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_File_length_R_long])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_nio_channels_FileChannel_map_java_nio_channels_FileChannel$MapMode_long_long_R_java_nio_MappedByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_channels_FileChannel_map_java_nio_channels_FileChannel$MapMode_long_long_R_java_nio_MappedByteBuffer])(ctx, sp[0].o, sp[1].o, temp0, temp1);
	frame[5].o = sp[0].o;
	LINE_NUMBER(283);
	sp[0].o = frame[5].o;
	sp[1].o = (jobject)SM_java_nio_ByteOrder_nativeOrder_R_java_nio_ByteOrder(ctx);
	sp[0].o = (jobject)((func_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_nio_ByteBuffer_order_java_nio_ByteOrder_R_java_nio_ByteBuffer])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(284);
	frame[6].o = (frame[5].o);
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(288);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(284);
	popStackFrame(ctx);
	return (frame[6].o);
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(285);
	frame[3].o = sp[0].o;
	LINE_NUMBER(286);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error memory mapping file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(288);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[2].o));
	LINE_NUMBER(289);
	throwException(ctx, (frame[7].o));	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(297);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_5;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot write to a classpath file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_6;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot write to an internal file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_files_FileHandle_mkdirs) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_mkdirs])(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(301);
	clinit_java_io_FileOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileOutputStream);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	init_java_io_FileOutputStream_java_io_File_boolean(ctx, sp[0].o, sp[1].o, (frame[1].i));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(302);
	frame[2].o = sp[0].o;
	LINE_NUMBER(303);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(304);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot open a stream to a directory: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(305);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_write_boolean_int_R_java_io_OutputStream(jcontext ctx, jobject self, jbool param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:write", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(315);
	clinit_java_io_BufferedOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_BufferedOutputStream);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream])(ctx, (frame[0].o), (frame[1].i));
	init_java_io_BufferedOutputStream_java_io_OutputStream_int(ctx, sp[0].o, sp[1].o, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_write_java_io_InputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:write", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(324);
	frame[3].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream])(ctx, (frame[0].o), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(327);
	SM_com_badlogic_gdx_utils_StreamUtils_copyStream_java_io_InputStream_java_io_OutputStream(ctx, (frame[1].o), (frame[3].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(331);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(332);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(333);
	goto label_12;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(328);
	frame[4].o = sp[0].o;
	LINE_NUMBER(329);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error stream writing to file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(331);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(332);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(333);
	throwException(ctx, (frame[5].o));	}
label_12:;
	LINE_NUMBER(335);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_writer_boolean_R_java_io_Writer(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:writer", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(342);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer])(ctx, (frame[0].o), (frame[1].i), (jobject(nullptr)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:writer", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(351);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_8;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot write to a classpath file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(352);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_9;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot write to an internal file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_9:;
	{
	LINE_NUMBER(353);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_files_FileHandle_mkdirs) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_mkdirs])(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(355);
	clinit_java_io_FileOutputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_FileOutputStream);
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	init_java_io_FileOutputStream_java_io_File_boolean(ctx, sp[0].o, sp[1].o, (frame[1].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(356);
	if ((frame[2].o) != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(357);
	clinit_java_io_OutputStreamWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_OutputStreamWriter);
	init_java_io_OutputStreamWriter_java_io_OutputStream(ctx, sp[0].o, (frame[3].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(359);
	clinit_java_io_OutputStreamWriter(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_OutputStreamWriter);
	init_java_io_OutputStreamWriter_java_io_OutputStream_java_lang_String(ctx, sp[0].o, (frame[3].o), (frame[2].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(360);
	frame[3].o = sp[0].o;
	LINE_NUMBER(361);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_13;
	}
	{
	LINE_NUMBER(362);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot open a stream to a directory: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}
label_13:;
	{
	LINE_NUMBER(363);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[3].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:writeString", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(372);
	((func_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean_java_lang_String])(ctx, (frame[0].o), (frame[1].o), (frame[2].i), (jobject(nullptr)));
	LINE_NUMBER(373);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean_java_lang_String(jcontext ctx, jobject self, jobject param0, jbool param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:writeString", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(381);
	frame[4].o = (jobject(nullptr));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(383);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer])(ctx, (frame[0].o), (frame[2].i), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(384);
	((func_java_io_Writer_write_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_io_Writer_write_java_lang_String])(ctx, (frame[4].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(388);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(389);
	goto label_11;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(385);
	frame[5].o = sp[0].o;
	LINE_NUMBER(386);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[5].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(388);
	INST_ASTORE(6);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[4].o));
	LINE_NUMBER(389);
	throwException(ctx, (frame[6].o));	}
label_11:;
	LINE_NUMBER(390);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:writeBytes", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(397);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream])(ctx, (frame[0].o), (frame[2].i));
	frame[3].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(399);
	((func_java_io_OutputStream_write_Array1_byte) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte])(ctx, (frame[3].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(403);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(404);
	goto label_10;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(400);
	frame[4].o = sp[0].o;
	LINE_NUMBER(401);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(403);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[3].o));
	LINE_NUMBER(404);
	throwException(ctx, (frame[5].o));	}
label_10:;
	LINE_NUMBER(405);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_int_int_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jbool param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:writeBytes", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream])(ctx, (frame[0].o), (frame[4].i));
	frame[5].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); bypasses[0] = true; goto label_7; } // goto label_4
	}
	{
	LINE_NUMBER(414);
	((func_java_io_OutputStream_write_Array1_byte_int_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_io_OutputStream_write_Array1_byte_int_int])(ctx, (frame[5].o), (frame[1].o), (frame[2].i), (frame[3].i));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(418);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(419);
	goto label_10;
	}
label_2:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); goto label_4;
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_4; }
	{
	sp -= 1;
	LINE_NUMBER(415);
	frame[6].o = sp[0].o;
	LINE_NUMBER(416);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[6].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(418);
	INST_ASTORE(7);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[5].o));
	LINE_NUMBER(419);
	throwException(ctx, (frame[7].o));	}
label_10:;
	LINE_NUMBER(420);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_list_R_Array1_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:list", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(427);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot list a classpath directory: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_File_list_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_list_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(429);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(430);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (((jarray) nullCheck(ctx, (frame[1].o)))->length));
	frame[2].o = sp[0].o;
	LINE_NUMBER(431);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(432);
	sp[0].o = frame[2].o;
	jint temp0 = frame[3].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(431);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(433);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_list_java_io_FileFilter_R_Array1_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:list", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot list a classpath directory: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(443);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(444);
	sp[0].o = (jobject)((func_java_io_File_list_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_list_R_Array1_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(445);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(446);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(447);
	frame[5].i = (jint(0));
	LINE_NUMBER(448);
	frame[6].i = (jint(0));
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_9;
	}
	{
	LINE_NUMBER(449);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(450);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[8].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(451);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[9].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[9].o));
	jint temp0 = (jint)((func_java_io_FileFilter_accept_java_io_File_R_boolean) resolveInterfaceMethod(ctx, &class_java_io_FileFilter, INDEX_java_io_FileFilter_accept_java_io_File_R_boolean, sp[0].o))(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_13;
	}
	goto label_14;
label_13:;
	{
	LINE_NUMBER(452);
	ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i)) = (frame[9].o);
	LINE_NUMBER(453);
	INST_IINC(5, 1);
	}
label_14:;
	{
	LINE_NUMBER(448);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(455);
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_16;
	}
	{
	LINE_NUMBER(456);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(457);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[6].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(458);
	frame[4].o = (frame[6].o);
	}
label_16:;
	{
	LINE_NUMBER(460);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_list_java_io_FilenameFilter_R_Array1_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:list", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot list a classpath directory: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(471);
	sp[0].o = (jobject)((func_java_io_File_list_R_Array1_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_File_list_R_Array1_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(472);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(473);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (((jarray) nullCheck(ctx, (frame[3].o)))->length));
	frame[4].o = sp[0].o;
	LINE_NUMBER(474);
	frame[5].i = (jint(0));
	LINE_NUMBER(475);
	frame[6].i = (jint(0));
	frame[7].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	}
label_8:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_9;
	}
	{
	LINE_NUMBER(476);
	frame[8].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[6].i)));
	LINE_NUMBER(477);
	jint temp0 = (jint)((func_java_io_FilenameFilter_accept_java_io_File_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_java_io_FilenameFilter, INDEX_java_io_FilenameFilter_accept_java_io_File_java_lang_String_R_boolean, (frame[1].o)))(ctx, (frame[1].o), (frame[2].o), (frame[8].o));
	if (temp0 != 0) goto label_12;
	}
	goto label_13;
label_12:;
	{
	LINE_NUMBER(478);
	sp[0].o = frame[4].o;
	jint temp0 = frame[5].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[8].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(479);
	INST_IINC(5, 1);
	}
label_13:;
	{
	LINE_NUMBER(475);
	INST_IINC(6, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(481);
	if ((frame[5].i) >= (((jarray) nullCheck(ctx, (frame[3].o)))->length)) goto label_15;
	}
	{
	LINE_NUMBER(482);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (frame[5].i));
	frame[6].o = sp[0].o;
	LINE_NUMBER(483);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[4].o), (jint(0)), (frame[6].o), (jint(0)), (frame[5].i));
	LINE_NUMBER(484);
	frame[4].o = (frame[6].o);
	}
label_15:;
	{
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_list_java_lang_String_R_Array1_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:list", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(494);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot list a classpath directory: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(495);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_io_File_list_R_Array1_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_list_R_Array1_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(496);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(497);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (((jarray) nullCheck(ctx, (frame[2].o)))->length));
	frame[3].o = sp[0].o;
	LINE_NUMBER(498);
	frame[4].i = (jint(0));
	LINE_NUMBER(499);
	frame[5].i = (jint(0));
	frame[6].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(500);
	frame[7].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i)));
	LINE_NUMBER(501);
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, (frame[7].o), (frame[1].o));
	if (temp0 != 0) goto label_11;
	}
	goto label_12;
label_11:;
	{
	LINE_NUMBER(502);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[7].o));
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	LINE_NUMBER(503);
	INST_IINC(4, 1);
	}
label_12:;
	{
	LINE_NUMBER(499);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(505);
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[2].o)))->length)) goto label_14;
	}
	{
	LINE_NUMBER(506);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_files_FileHandle, (frame[4].i));
	frame[5].o = sp[0].o;
	LINE_NUMBER(507);
	SM_java_lang_System_arraycopy_java_lang_Object_int_java_lang_Object_int_int(ctx, (frame[3].o), (jint(0)), (frame[5].o), (jint(0)), (frame[4].i));
	LINE_NUMBER(508);
	frame[3].o = (frame[5].o);
	}
label_14:;
	{
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:isDirectory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(518);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:child", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(523);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_files_FileHandle);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	init_com_badlogic_gdx_files_FileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(524);
	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_files_FileHandle);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	init_com_badlogic_gdx_files_FileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:sibling", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Cannot get the sibling of the root."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(531);
	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_files_FileHandle);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getParent_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getParent_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	init_com_badlogic_gdx_files_FileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:parent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getParentFile_R_java_io_File) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getParentFile_R_java_io_File])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(536);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(537);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Absolute;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(538);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	frame[1].o = sp[0].o;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(540);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(542);
	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_files_FileHandle);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	init_com_badlogic_gdx_files_FileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_mkdirs(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:mkdirs", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(547);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot mkdirs with a classpath file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot mkdirs with an internal file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(549);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_mkdirs_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_mkdirs_R_boolean])(ctx, sp[0].o);
	LINE_NUMBER(550);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_files_FileHandle_exists_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:exists", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(555);
	clinit_com_badlogic_gdx_files_FileHandle$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_files_FileHandle$1_$SwitchMap$com$badlogic$gdx$Files$FileType;
	sp[1].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_Files$FileType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_Files$FileType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(557);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(560);
	sp[0].o = ((jobject) &class_com_badlogic_gdx_files_FileHandle);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[2].o);
	sp[2].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[2].o, (92), (47));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_Class_getResource_java_lang_String_R_java_net_URL) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Class_getResource_java_lang_String_R_java_net_URL])(ctx, sp[0].o, sp[1].o);
	if (sp[0].o == nullptr) goto label_4;
	}
	INST_ICONST(1);
	goto label_5;
label_4:;
	INST_ICONST(0);
label_5:;
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(562);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_files_FileHandle_delete_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:delete", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot delete a classpath file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(569);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot delete an internal file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(570);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:deleteDirectory", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(576);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot delete a classpath file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot delete an internal file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jint temp0 = (jint)SM_com_badlogic_gdx_files_FileHandle_deleteDirectory_java_io_File_R_boolean(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_emptyDirectory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:emptyDirectory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(584);
	((func_com_badlogic_gdx_files_FileHandle_emptyDirectory_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_emptyDirectory_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(585);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_emptyDirectory_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:emptyDirectory", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(590);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot delete a classpath file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(591);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot delete an internal file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	SM_com_badlogic_gdx_files_FileHandle_emptyDirectory_java_io_File_boolean(ctx, sp[0].o, (frame[1].i));
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_copyTo_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:copyTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(604);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_1;
	}
	{
	LINE_NUMBER(605);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o);
	frame[1].o = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(606);
	SM_com_badlogic_gdx_files_FileHandle_copyFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(607);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(609);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[1].o));
	if (temp0 == 0) goto label_5;
	}
	{
	LINE_NUMBER(610);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Destination exists but is not a directory: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(612);
	((func_com_badlogic_gdx_files_FileHandle_mkdirs) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_mkdirs])(ctx, (frame[1].o));
	LINE_NUMBER(613);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Destination directory cannot be created: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_7:;
	{
	LINE_NUMBER(615);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[1].o, sp[2].o);
	SM_com_badlogic_gdx_files_FileHandle_copyDirectory_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(616);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_files_FileHandle_moveTo_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:moveTo", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(622);
	clinit_com_badlogic_gdx_files_FileHandle$1(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_files_FileHandle$1_$SwitchMap$com$badlogic$gdx$Files$FileType;
	sp[1].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp0 = (jint)((func_com_badlogic_gdx_Files$FileType_ordinal_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_Files$FileType_ordinal_R_int])(ctx, sp[1].o);
	switch(((jint)ARRAY_ACCESS(jint, sp[0].o, temp0))) {
		case 1: goto label_1;
		case 2: goto label_2;
		case 3: goto label_3;
		case 4: goto label_3;
		default: goto label_4;
	}
	}
label_2:;
	{
	LINE_NUMBER(624);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot move a classpath file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(626);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot move an internal file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[1].o));
	jint temp0 = (jint)((func_java_io_File_renameTo_java_io_File_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_renameTo_java_io_File_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(632);
	((func_com_badlogic_gdx_files_FileHandle_copyTo_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_copyTo_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(633);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_delete_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_delete_R_boolean])(ctx, (frame[0].o));
	LINE_NUMBER(634);
	jint temp1 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[0].o));
	if (temp1 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean])(ctx, (frame[0].o));
	}
label_7:;
	LINE_NUMBER(635);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_files_FileHandle_length_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:length", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(640);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o == sp[1].o) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, sp[0].o);
	if (temp0 != 0) goto label_10;
	}
label_9:;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_4; }
	}
	{
	LINE_NUMBER(643);
	jint temp0 = (jint)((func_java_io_InputStream_available_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_InputStream_available_R_int])(ctx, (frame[1].o));
	frame[2].l = (jlong(temp0));
	}
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(646);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(643);
	popStackFrame(ctx);
	return (frame[2].l);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(644);
	frame[2].o = sp[0].o;
	LINE_NUMBER(646);
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(647);
	goto label_14;
	}
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	LINE_NUMBER(646);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	SM_com_badlogic_gdx_utils_StreamUtils_closeQuietly_java_io_Closeable(ctx, (frame[1].o));
	LINE_NUMBER(647);
	throwException(ctx, (frame[4].o));	}
label_14:;
	{
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (jlong(0));
	}
label_10:;
	{
	LINE_NUMBER(650);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jlong temp0 = (jlong)((func_java_io_File_length_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_length_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_files_FileHandle_lastModified_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:lastModified", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_file_R_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File])(ctx, (frame[0].o));
	jlong temp0 = (jlong)((func_java_io_File_lastModified_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_lastModified_R_long])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_files_FileHandle_equals_java_lang_Object_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:equals", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(661);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_files_FileHandle)) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(662);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_files_FileHandle, (frame[1].o)));
	LINE_NUMBER(663);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[2].o)))->F_type;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, (frame[2].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_3;
	}
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_files_FileHandle_hashCode_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:hashCode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(667);
	frame[1].i = (jint(1));
	LINE_NUMBER(668);
	jint temp0 = (frame[1].i) * (37);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	jint temp1 = (jint)((func_com_badlogic_gdx_Files$FileType_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_Files$FileType_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(669);
	jint temp2 = (frame[1].i) * (67);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, (frame[0].o));
	jint temp3 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, sp[0].o);
	frame[1].i = (temp2 + temp3);
	LINE_NUMBER(670);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_files_FileHandle_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (92), (47));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_files_FileHandle_tempFile_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:tempFile", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(679);
	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_files_FileHandle);
	sp[1].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, (frame[0].o), (jobject(nullptr)));
	init_com_badlogic_gdx_files_FileHandle_java_io_File(ctx, sp[0].o, sp[1].o);
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(680);
	frame[1].o = sp[0].o;
	LINE_NUMBER(681);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to create temp file."_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_files_FileHandle_tempDirectory_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:tempDirectory", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(687);
	sp[0].o = (jobject)SM_java_io_File_createTempFile_java_lang_String_java_lang_String_R_java_io_File(ctx, (frame[0].o), (jobject(nullptr)));
	frame[1].o = sp[0].o;
	LINE_NUMBER(688);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_5;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to delete temp file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_5:;
	{
	LINE_NUMBER(689);
	jint temp0 = (jint)((func_java_io_File_mkdir_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_io_File_mkdir_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_6;
	}
	{
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to create temp directory: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_6:;
	{
	LINE_NUMBER(690);
	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_files_FileHandle);
	init_com_badlogic_gdx_files_FileHandle_java_io_File(ctx, sp[0].o, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(691);
	frame[1].o = sp[0].o;
	LINE_NUMBER(692);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Unable to create temp file."_j))), (frame[1].o));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_files_FileHandle_emptyDirectory_java_io_File_boolean(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:emptyDirectory", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(697);
	jint temp0 = (jint)((func_java_io_File_exists_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_exists_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(698);
	sp[0].o = (jobject)((func_java_io_File_listFiles_R_Array1_java_io_File) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_listFiles_R_Array1_java_io_File])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(699);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(700);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_1;
	}
	{
	LINE_NUMBER(701);
	jint temp0 = (jint)((func_java_io_File_isDirectory_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_java_io_File_isDirectory_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	if (temp0 != 0) goto label_8;
	}
	{
	LINE_NUMBER(702);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	goto label_10;
	}
label_8:;
	{
	LINE_NUMBER(703);
	if ((frame[1].i) == 0) goto label_11;
	}
	{
	LINE_NUMBER(704);
	SM_com_badlogic_gdx_files_FileHandle_emptyDirectory_java_io_File_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))), (jint(1)));
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(706);
	jint temp0 = (jint)SM_com_badlogic_gdx_files_FileHandle_deleteDirectory_java_io_File_R_boolean(ctx, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))));
	}
label_10:;
	{
	LINE_NUMBER(700);
	INST_IINC(3, 1);
	goto label_6;
	}
label_1:;
	LINE_NUMBER(710);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_files_FileHandle_deleteDirectory_java_io_File_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:deleteDirectory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(713);
	SM_com_badlogic_gdx_files_FileHandle_emptyDirectory_java_io_File_boolean(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(714);
	jint temp0 = (jint)((func_java_io_File_delete_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_io_File_delete_R_boolean])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_files_FileHandle_copyFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:copyFile", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(719);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_files_FileHandle_write_java_io_InputStream_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_write_java_io_InputStream_boolean])(ctx, sp[0].o, sp[1].o, (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(723);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(720);
	frame[2].o = sp[0].o;
	LINE_NUMBER(721);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error copying source file: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")\nTo destination: "_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[1].o)))->F_file;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[1].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(724);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_files_FileHandle_copyDirectory_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/files/FileHandle:copyDirectory", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_files_FileHandle(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(727);
	((func_com_badlogic_gdx_files_FileHandle_mkdirs) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_mkdirs])(ctx, (frame[1].o));
	LINE_NUMBER(728);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_list_R_Array1_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_list_R_Array1_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(729);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(730);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(731);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o);
	frame[6].o = sp[0].o;
	LINE_NUMBER(732);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean])(ctx, (frame[5].o));
	if (temp0 == 0) goto label_9;
	}
	{
	LINE_NUMBER(733);
	SM_com_badlogic_gdx_files_FileHandle_copyDirectory_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(ctx, (frame[5].o), (frame[6].o));
	goto label_11;
	}
label_9:;
	{
	LINE_NUMBER(735);
	SM_com_badlogic_gdx_files_FileHandle_copyFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle(ctx, (frame[5].o), (frame[6].o));
	}
label_11:;
	{
	LINE_NUMBER(729);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(737);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_files_FileHandle[] {
	(void *) M_com_badlogic_gdx_files_FileHandle_hashCode_R_int,
	(void *) M_com_badlogic_gdx_files_FileHandle_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_files_FileHandle_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String,
	(void *) M_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String,
	(void *) M_com_badlogic_gdx_files_FileHandle_extension_R_java_lang_String,
	(void *) M_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String,
	(void *) M_com_badlogic_gdx_files_FileHandle_pathWithoutExtension_R_java_lang_String,
	(void *) M_com_badlogic_gdx_files_FileHandle_type_R_com_badlogic_gdx_Files$FileType,
	(void *) M_com_badlogic_gdx_files_FileHandle_file_R_java_io_File,
	(void *) M_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream,
	(void *) M_com_badlogic_gdx_files_FileHandle_read_int_R_java_io_BufferedInputStream,
	(void *) M_com_badlogic_gdx_files_FileHandle_reader_R_java_io_Reader,
	(void *) M_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader,
	(void *) M_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader,
	(void *) M_com_badlogic_gdx_files_FileHandle_reader_int_java_lang_String_R_java_io_BufferedReader,
	(void *) M_com_badlogic_gdx_files_FileHandle_readString_R_java_lang_String,
	(void *) M_com_badlogic_gdx_files_FileHandle_readString_java_lang_String_R_java_lang_String,
	(void *) M_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte,
	(void *) M_com_badlogic_gdx_files_FileHandle_estimateLength_R_int,
	(void *) M_com_badlogic_gdx_files_FileHandle_readBytes_Array1_byte_int_int_R_int,
	(void *) M_com_badlogic_gdx_files_FileHandle_map_R_java_nio_ByteBuffer,
	(void *) M_com_badlogic_gdx_files_FileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer,
	(void *) M_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream,
	(void *) M_com_badlogic_gdx_files_FileHandle_write_boolean_int_R_java_io_OutputStream,
	(void *) M_com_badlogic_gdx_files_FileHandle_write_java_io_InputStream_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_writer_boolean_R_java_io_Writer,
	(void *) M_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer,
	(void *) M_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean_java_lang_String,
	(void *) M_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_int_int_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_list_R_Array1_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_list_java_io_FileFilter_R_Array1_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_list_java_io_FilenameFilter_R_Array1_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_list_java_lang_String_R_Array1_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_mkdirs,
	(void *) M_com_badlogic_gdx_files_FileHandle_exists_R_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_delete_R_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_emptyDirectory,
	(void *) M_com_badlogic_gdx_files_FileHandle_emptyDirectory_boolean,
	(void *) M_com_badlogic_gdx_files_FileHandle_copyTo_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_moveTo_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_files_FileHandle_length_R_long,
	(void *) M_com_badlogic_gdx_files_FileHandle_lastModified_R_long,
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
	{ "path", "()Ljava/lang/String;" },
	{ "name", "()Ljava/lang/String;" },
	{ "extension", "()Ljava/lang/String;" },
	{ "nameWithoutExtension", "()Ljava/lang/String;" },
	{ "pathWithoutExtension", "()Ljava/lang/String;" },
	{ "type", "()Lcom/badlogic/gdx/Files$FileType;" },
	{ "file", "()Ljava/io/File;" },
	{ "read", "()Ljava/io/InputStream;" },
	{ "read", "(I)Ljava/io/BufferedInputStream;" },
	{ "reader", "()Ljava/io/Reader;" },
	{ "reader", "(Ljava/lang/String;)Ljava/io/Reader;" },
	{ "reader", "(I)Ljava/io/BufferedReader;" },
	{ "reader", "(ILjava/lang/String;)Ljava/io/BufferedReader;" },
	{ "readString", "()Ljava/lang/String;" },
	{ "readString", "(Ljava/lang/String;)Ljava/lang/String;" },
	{ "readBytes", "()[B" },
	{ "estimateLength", "()I" },
	{ "readBytes", "([BII)I" },
	{ "map", "()Ljava/nio/ByteBuffer;" },
	{ "map", "(Ljava/nio/channels/FileChannel$MapMode;)Ljava/nio/ByteBuffer;" },
	{ "write", "(Z)Ljava/io/OutputStream;" },
	{ "write", "(ZI)Ljava/io/OutputStream;" },
	{ "write", "(Ljava/io/InputStream;Z)V" },
	{ "writer", "(Z)Ljava/io/Writer;" },
	{ "writer", "(ZLjava/lang/String;)Ljava/io/Writer;" },
	{ "writeString", "(Ljava/lang/String;Z)V" },
	{ "writeString", "(Ljava/lang/String;ZLjava/lang/String;)V" },
	{ "writeBytes", "([BZ)V" },
	{ "writeBytes", "([BIIZ)V" },
	{ "list", "()[Lcom/badlogic/gdx/files/FileHandle;" },
	{ "list", "(Ljava/io/FileFilter;)[Lcom/badlogic/gdx/files/FileHandle;" },
	{ "list", "(Ljava/io/FilenameFilter;)[Lcom/badlogic/gdx/files/FileHandle;" },
	{ "list", "(Ljava/lang/String;)[Lcom/badlogic/gdx/files/FileHandle;" },
	{ "isDirectory", "()Z" },
	{ "child", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "sibling", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "parent", "()Lcom/badlogic/gdx/files/FileHandle;" },
	{ "mkdirs", "()V" },
	{ "exists", "()Z" },
	{ "delete", "()Z" },
	{ "deleteDirectory", "()Z" },
	{ "emptyDirectory", "()V" },
	{ "emptyDirectory", "(Z)V" },
	{ "copyTo", "(Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "moveTo", "(Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "length", "()J" },
	{ "lastModified", "()J" },
};

static FieldMetadata fields[] {
	{ "file", &class_java_io_File, offsetof(com_badlogic_gdx_files_FileHandle, F_file), "Ljava/io/File;", 4 },
	{ "type", &class_com_badlogic_gdx_Files$FileType, offsetof(com_badlogic_gdx_files_FileHandle, F_type), "Lcom/badlogic/gdx/Files$FileType;", 4 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_files_FileHandle, 0, "()V", 4 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_files_FileHandle_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_files_FileHandle_java_io_File, 0, "(Ljava/io/File;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_files_FileHandle_java_lang_String_com_badlogic_gdx_Files$FileType, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/Files$FileType;)V", 4 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_files_FileHandle_java_io_File_com_badlogic_gdx_Files$FileType, 0, "(Ljava/io/File;Lcom/badlogic/gdx/Files$FileType;)V", 4 },
	{ "path", (intptr_t) M_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "name", (intptr_t) M_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "extension", (intptr_t) M_com_badlogic_gdx_files_FileHandle_extension_R_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_extension_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "nameWithoutExtension", (intptr_t) M_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "pathWithoutExtension", (intptr_t) M_com_badlogic_gdx_files_FileHandle_pathWithoutExtension_R_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_pathWithoutExtension_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "type", (intptr_t) M_com_badlogic_gdx_files_FileHandle_type_R_com_badlogic_gdx_Files$FileType, VTABLE_com_badlogic_gdx_files_FileHandle_type_R_com_badlogic_gdx_Files$FileType, "()Lcom/badlogic/gdx/Files$FileType;", 1 },
	{ "file", (intptr_t) M_com_badlogic_gdx_files_FileHandle_file_R_java_io_File, VTABLE_com_badlogic_gdx_files_FileHandle_file_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream, VTABLE_com_badlogic_gdx_files_FileHandle_read_R_java_io_InputStream, "()Ljava/io/InputStream;", 1 },
	{ "read", (intptr_t) M_com_badlogic_gdx_files_FileHandle_read_int_R_java_io_BufferedInputStream, VTABLE_com_badlogic_gdx_files_FileHandle_read_int_R_java_io_BufferedInputStream, "(I)Ljava/io/BufferedInputStream;", 1 },
	{ "reader", (intptr_t) M_com_badlogic_gdx_files_FileHandle_reader_R_java_io_Reader, VTABLE_com_badlogic_gdx_files_FileHandle_reader_R_java_io_Reader, "()Ljava/io/Reader;", 1 },
	{ "reader", (intptr_t) M_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader, VTABLE_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader, "(Ljava/lang/String;)Ljava/io/Reader;", 1 },
	{ "reader", (intptr_t) M_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader, VTABLE_com_badlogic_gdx_files_FileHandle_reader_int_R_java_io_BufferedReader, "(I)Ljava/io/BufferedReader;", 1 },
	{ "reader", (intptr_t) M_com_badlogic_gdx_files_FileHandle_reader_int_java_lang_String_R_java_io_BufferedReader, VTABLE_com_badlogic_gdx_files_FileHandle_reader_int_java_lang_String_R_java_io_BufferedReader, "(ILjava/lang/String;)Ljava/io/BufferedReader;", 1 },
	{ "readString", (intptr_t) M_com_badlogic_gdx_files_FileHandle_readString_R_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_readString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "readString", (intptr_t) M_com_badlogic_gdx_files_FileHandle_readString_java_lang_String_R_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_readString_java_lang_String_R_java_lang_String, "(Ljava/lang/String;)Ljava/lang/String;", 1 },
	{ "readBytes", (intptr_t) M_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte, VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_R_Array1_byte, "()[B", 1 },
	{ "estimateLength", (intptr_t) M_com_badlogic_gdx_files_FileHandle_estimateLength_R_int, VTABLE_com_badlogic_gdx_files_FileHandle_estimateLength_R_int, "()I", 2 },
	{ "readBytes", (intptr_t) M_com_badlogic_gdx_files_FileHandle_readBytes_Array1_byte_int_int_R_int, VTABLE_com_badlogic_gdx_files_FileHandle_readBytes_Array1_byte_int_int_R_int, "([BII)I", 1 },
	{ "map", (intptr_t) M_com_badlogic_gdx_files_FileHandle_map_R_java_nio_ByteBuffer, VTABLE_com_badlogic_gdx_files_FileHandle_map_R_java_nio_ByteBuffer, "()Ljava/nio/ByteBuffer;", 1 },
	{ "map", (intptr_t) M_com_badlogic_gdx_files_FileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer, VTABLE_com_badlogic_gdx_files_FileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer, "(Ljava/nio/channels/FileChannel$MapMode;)Ljava/nio/ByteBuffer;", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream, VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_R_java_io_OutputStream, "(Z)Ljava/io/OutputStream;", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_files_FileHandle_write_boolean_int_R_java_io_OutputStream, VTABLE_com_badlogic_gdx_files_FileHandle_write_boolean_int_R_java_io_OutputStream, "(ZI)Ljava/io/OutputStream;", 1 },
	{ "write", (intptr_t) M_com_badlogic_gdx_files_FileHandle_write_java_io_InputStream_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_write_java_io_InputStream_boolean, "(Ljava/io/InputStream;Z)V", 1 },
	{ "writer", (intptr_t) M_com_badlogic_gdx_files_FileHandle_writer_boolean_R_java_io_Writer, VTABLE_com_badlogic_gdx_files_FileHandle_writer_boolean_R_java_io_Writer, "(Z)Ljava/io/Writer;", 1 },
	{ "writer", (intptr_t) M_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer, VTABLE_com_badlogic_gdx_files_FileHandle_writer_boolean_java_lang_String_R_java_io_Writer, "(ZLjava/lang/String;)Ljava/io/Writer;", 1 },
	{ "writeString", (intptr_t) M_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean, "(Ljava/lang/String;Z)V", 1 },
	{ "writeString", (intptr_t) M_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_writeString_java_lang_String_boolean_java_lang_String, "(Ljava/lang/String;ZLjava/lang/String;)V", 1 },
	{ "writeBytes", (intptr_t) M_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_boolean, "([BZ)V", 1 },
	{ "writeBytes", (intptr_t) M_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_int_int_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_writeBytes_Array1_byte_int_int_boolean, "([BIIZ)V", 1 },
	{ "list", (intptr_t) M_com_badlogic_gdx_files_FileHandle_list_R_Array1_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_list_R_Array1_com_badlogic_gdx_files_FileHandle, "()[Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "list", (intptr_t) M_com_badlogic_gdx_files_FileHandle_list_java_io_FileFilter_R_Array1_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_list_java_io_FileFilter_R_Array1_com_badlogic_gdx_files_FileHandle, "(Ljava/io/FileFilter;)[Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "list", (intptr_t) M_com_badlogic_gdx_files_FileHandle_list_java_io_FilenameFilter_R_Array1_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_list_java_io_FilenameFilter_R_Array1_com_badlogic_gdx_files_FileHandle, "(Ljava/io/FilenameFilter;)[Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "list", (intptr_t) M_com_badlogic_gdx_files_FileHandle_list_java_lang_String_R_Array1_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_list_java_lang_String_R_Array1_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)[Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "isDirectory", (intptr_t) M_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean, "()Z", 1 },
	{ "child", (intptr_t) M_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "sibling", (intptr_t) M_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "parent", (intptr_t) M_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_parent_R_com_badlogic_gdx_files_FileHandle, "()Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "mkdirs", (intptr_t) M_com_badlogic_gdx_files_FileHandle_mkdirs, VTABLE_com_badlogic_gdx_files_FileHandle_mkdirs, "()V", 1 },
	{ "exists", (intptr_t) M_com_badlogic_gdx_files_FileHandle_exists_R_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean, "()Z", 1 },
	{ "delete", (intptr_t) M_com_badlogic_gdx_files_FileHandle_delete_R_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_delete_R_boolean, "()Z", 1 },
	{ "deleteDirectory", (intptr_t) M_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_deleteDirectory_R_boolean, "()Z", 1 },
	{ "emptyDirectory", (intptr_t) M_com_badlogic_gdx_files_FileHandle_emptyDirectory, VTABLE_com_badlogic_gdx_files_FileHandle_emptyDirectory, "()V", 1 },
	{ "emptyDirectory", (intptr_t) M_com_badlogic_gdx_files_FileHandle_emptyDirectory_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_emptyDirectory_boolean, "(Z)V", 1 },
	{ "copyTo", (intptr_t) M_com_badlogic_gdx_files_FileHandle_copyTo_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_copyTo_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "moveTo", (intptr_t) M_com_badlogic_gdx_files_FileHandle_moveTo_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_files_FileHandle_moveTo_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "length", (intptr_t) M_com_badlogic_gdx_files_FileHandle_length_R_long, VTABLE_com_badlogic_gdx_files_FileHandle_length_R_long, "()J", 1 },
	{ "lastModified", (intptr_t) M_com_badlogic_gdx_files_FileHandle_lastModified_R_long, VTABLE_com_badlogic_gdx_files_FileHandle_lastModified_R_long, "()J", 1 },
	{ "equals", (intptr_t) M_com_badlogic_gdx_files_FileHandle_equals_java_lang_Object_R_boolean, VTABLE_com_badlogic_gdx_files_FileHandle_equals_java_lang_Object_R_boolean, "(Ljava/lang/Object;)Z", 1 },
	{ "hashCode", (intptr_t) M_com_badlogic_gdx_files_FileHandle_hashCode_R_int, VTABLE_com_badlogic_gdx_files_FileHandle_hashCode_R_int, "()I", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_files_FileHandle_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_files_FileHandle_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "tempFile", (intptr_t) SM_com_badlogic_gdx_files_FileHandle_tempFile_java_lang_String_R_com_badlogic_gdx_files_FileHandle, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 9 },
	{ "tempDirectory", (intptr_t) SM_com_badlogic_gdx_files_FileHandle_tempDirectory_java_lang_String_R_com_badlogic_gdx_files_FileHandle, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 9 },
	{ "emptyDirectory", (intptr_t) SM_com_badlogic_gdx_files_FileHandle_emptyDirectory_java_io_File_boolean, 0, "(Ljava/io/File;Z)V", 10 },
	{ "deleteDirectory", (intptr_t) SM_com_badlogic_gdx_files_FileHandle_deleteDirectory_java_io_File_R_boolean, 0, "(Ljava/io/File;)Z", 10 },
	{ "copyFile", (intptr_t) SM_com_badlogic_gdx_files_FileHandle_copyFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;)V", 10 },
	{ "copyDirectory", (intptr_t) SM_com_badlogic_gdx_files_FileHandle_copyDirectory_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/files/FileHandle;)V", 10 },
};

Class class_com_badlogic_gdx_files_FileHandle{
		.nativeName = (intptr_t) "com/badlogic/gdx/files/FileHandle",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_files_FileHandle),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_files_FileHandle,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_files_FileHandle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_files_FileHandle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 61,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 58,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_files_FileHandle = registerClass(&class_com_badlogic_gdx_files_FileHandle);

}

