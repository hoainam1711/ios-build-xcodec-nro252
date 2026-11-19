#include "com/thelogicmaster/switchgdx/SwitchFileHandle.h"
#include "java/nio/ByteBuffer.h"
#include "com/badlogic/gdx/Files_FileType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/thelogicmaster/switchgdx/SwitchFileHandle.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/Files.h"
#include "java/nio/channels/FileChannel_MapMode.h"
#include "java/io/File.h"
#include "com/thelogicmaster/switchgdx/SwitchFiles.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchFileHandle(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_files_FileHandle(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_thelogicmaster_switchgdx_SwitchFileHandle *) object;
}

void clinit_com_thelogicmaster_switchgdx_SwitchFileHandle(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_files_FileHandle(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFileHandle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchFileHandle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(15);
	init_com_badlogic_gdx_files_FileHandle_java_lang_String_com_badlogic_gdx_Files$FileType(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_io_File_com_badlogic_gdx_Files$FileType(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFileHandle:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchFileHandle(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(19);
	init_com_badlogic_gdx_files_FileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, (frame[0].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFileHandle:child", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[0].o);
	jint temp0 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, sp[0].o);
	if (temp0 != 0) goto label_1;
	}
	{
	clinit_com_thelogicmaster_switchgdx_SwitchFileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchFileHandle);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[1].o, (frame[1].o));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(25);
	clinit_com_thelogicmaster_switchgdx_SwitchFileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchFileHandle);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	init_java_io_File_java_io_File_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFileHandle:sibling", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
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
	LINE_NUMBER(31);
	clinit_com_thelogicmaster_switchgdx_SwitchFileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchFileHandle);
	clinit_java_io_File(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_io_File);
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getParent_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getParent_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[1].o, sp[2].o, (frame[1].o));
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFileHandle_parent_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFileHandle:parent", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[0].o = (jobject)((func_java_io_File_getParentFile_R_java_io_File) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_File_getParentFile_R_java_io_File])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(37);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(38);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Absolute;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	{
	LINE_NUMBER(39);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	frame[1].o = sp[0].o;
	goto label_2;
	}
label_4:;
	{
	LINE_NUMBER(41);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	init_java_io_File_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8""_j))));
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(43);
	clinit_com_thelogicmaster_switchgdx_SwitchFileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchFileHandle);
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_io_File_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFileHandle_file_R_java_io_File(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFileHandle:file", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(49);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	sp[1].o = (jobject)SM_com_thelogicmaster_switchgdx_SwitchFiles_internalRoot_R_java_lang_String(ctx);
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_type;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Local;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	LINE_NUMBER(51);
	clinit_java_io_File(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_File);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	sp[1].o = (jobject)((func_com_badlogic_gdx_Files_getLocalStoragePath_R_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Files, INDEX_com_badlogic_gdx_Files_getLocalStoragePath_R_java_lang_String, sp[1].o))(ctx, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_files_FileHandle *) NULL_CHECK((frame[0].o)))->F_file;
	sp[2].o = (jobject)((func_java_io_File_getPath_R_java_lang_String) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_java_io_File_getPath_R_java_lang_String])(ctx, sp[2].o);
	init_java_io_File_java_lang_String_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(52);
	sp[0].o = (jobject)M_com_badlogic_gdx_files_FileHandle_file_R_java_io_File(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchFileHandle_isDirectory_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFileHandle:isDirectory", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFileHandle_path_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"classpath/"_j))));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(59);
	jint temp0 = (jint)M_com_badlogic_gdx_files_FileHandle_isDirectory_R_boolean(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFileHandle:map", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Memory mapping is unavailable in the Clearwing backend"_j))));
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchFileHandle[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchFileHandle_file_R_java_io_File,
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchFileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer,
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchFileHandle_isDirectory_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFileHandle_parent_R_com_badlogic_gdx_files_FileHandle,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType, 0, "(Ljava/lang/String;Lcom/badlogic/gdx/Files$FileType;)V", 1 },
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_io_File_com_badlogic_gdx_Files$FileType, 0, "(Ljava/io/File;Lcom/badlogic/gdx/Files$FileType;)V", 1 },
	{ "child", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFileHandle_child_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "sibling", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "parent", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFileHandle_parent_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFileHandle_parent_R_com_badlogic_gdx_files_FileHandle, "()Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "file", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFileHandle_file_R_java_io_File, VTABLE_com_thelogicmaster_switchgdx_SwitchFileHandle_file_R_java_io_File, "()Ljava/io/File;", 1 },
	{ "isDirectory", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFileHandle_isDirectory_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchFileHandle_isDirectory_R_boolean, "()Z", 1 },
	{ "map", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer, VTABLE_com_thelogicmaster_switchgdx_SwitchFileHandle_map_java_nio_channels_FileChannel$MapMode_R_java_nio_ByteBuffer, "(Ljava/nio/channels/FileChannel$MapMode;)Ljava/nio/ByteBuffer;", 1 },
};

Class class_com_thelogicmaster_switchgdx_SwitchFileHandle{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchFileHandle",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_files_FileHandle,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchFileHandle),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchFileHandle,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchFileHandle,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchFileHandle,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 58,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchFileHandle = registerClass(&class_com_thelogicmaster_switchgdx_SwitchFileHandle);

}

