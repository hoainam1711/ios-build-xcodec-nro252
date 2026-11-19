#include "com/thelogicmaster/switchgdx/SwitchFiles.h"
#include "com/badlogic/gdx/Files_FileType.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/thelogicmaster/switchgdx/SwitchFileHandle.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/Files.h"
#include "com/thelogicmaster/switchgdx/SwitchFiles.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchFiles(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchFiles *) object;
}

void clinit_com_thelogicmaster_switchgdx_SwitchFiles(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchFiles(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchFiles(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(6);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:getFileHandle", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(10);
	sp[0].o = frame[2].o;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	LINE_NUMBER(11);
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	frame[2].o = sp[0].o;
	LINE_NUMBER(12);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"classpath/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(14);
	clinit_com_thelogicmaster_switchgdx_SwitchFileHandle(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchFileHandle);
	init_com_thelogicmaster_switchgdx_SwitchFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType(ctx, sp[0].o, (frame[1].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFiles_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:classpath", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(19);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Classpath;
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFiles_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:internal", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Internal;
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFiles_external_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:external", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(29);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Files$FileType_External;
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFiles_absolute_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:absolute", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(34);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Absolute;
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFiles_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:local", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(39);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_Files$FileType(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Files$FileType_Local;
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchFiles_getExternalStoragePath_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:getExternalStoragePath", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(44);
	sp[0].o = (jobject)((func_com_thelogicmaster_switchgdx_SwitchFiles_getLocalStoragePath_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getLocalStoragePath_R_java_lang_String])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchFiles_isExternalStorageAvailable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:isExternalStorageAvailable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchFiles_isLocalStorageAvailable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchFiles:isLocalStorageAvailable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchFiles[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_external_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_absolute_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_getExternalStoragePath_R_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_isExternalStorageAvailable_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_getLocalStoragePath_R_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchFiles_isLocalStorageAvailable_R_boolean,
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
	{ "getFileHandle", "(Ljava/lang/String;Lcom/badlogic/gdx/Files$FileType;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "classpath", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "internal", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "external", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "absolute", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "local", "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;" },
	{ "getExternalStoragePath", "()Ljava/lang/String;" },
	{ "isExternalStorageAvailable", "()Z" },
	{ "getLocalStoragePath", "()Ljava/lang/String;" },
	{ "isLocalStorageAvailable", "()Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Files, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchFiles, 0, "()V", 1 },
	{ "getFileHandle", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getFileHandle_java_lang_String_com_badlogic_gdx_Files$FileType_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;Lcom/badlogic/gdx/Files$FileType;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "classpath", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_classpath_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "internal", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_internal_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "external", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_external_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_external_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "absolute", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_absolute_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_absolute_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "local", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_local_java_lang_String_R_com_badlogic_gdx_files_FileHandle, "(Ljava/lang/String;)Lcom/badlogic/gdx/files/FileHandle;", 1 },
	{ "getExternalStoragePath", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_getExternalStoragePath_R_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getExternalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "isExternalStorageAvailable", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_isExternalStorageAvailable_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_isExternalStorageAvailable_R_boolean, "()Z", 1 },
	{ "getLocalStoragePath", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_getLocalStoragePath_R_java_lang_String, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_getLocalStoragePath_R_java_lang_String, "()Ljava/lang/String;", 257 },
	{ "internalRoot", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchFiles_internalRoot_R_java_lang_String, 0, "()Ljava/lang/String;", 264 },
	{ "isLocalStorageAvailable", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchFiles_isLocalStorageAvailable_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchFiles_isLocalStorageAvailable_R_boolean, "()Z", 1 },
};

Class class_com_thelogicmaster_switchgdx_SwitchFiles{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchFiles",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchFiles),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchFiles,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchFiles,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchFiles,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchFiles = registerClass(&class_com_thelogicmaster_switchgdx_SwitchFiles);

}

