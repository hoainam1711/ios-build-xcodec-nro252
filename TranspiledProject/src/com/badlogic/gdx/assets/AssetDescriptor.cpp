#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "com/badlogic/gdx/assets/AssetDescriptor.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/assets/AssetLoaderParameters.h"
#include "java/lang/Class.h"

extern "C" {


void mark_com_badlogic_gdx_assets_AssetDescriptor(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_assets_AssetDescriptor *) object;
	if (self->F_fileName)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fileName)->clazz)->markFunction)((jobject) self->F_fileName, mark, depth + 1);
	if (self->F_type)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_type)->clazz)->markFunction)((jobject) self->F_type, mark, depth + 1);
	if (self->F_params)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_params)->clazz)->markFunction)((jobject) self->F_params, mark, depth + 1);
	if (self->F_file)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_file)->clazz)->markFunction)((jobject) self->F_file, mark, depth + 1);
}

void clinit_com_badlogic_gdx_assets_AssetDescriptor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetDescriptor:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(32);
	init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetDescriptor:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(37);
	init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (jobject(nullptr)));
	LINE_NUMBER(38);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetDescriptor:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(40);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(41);
	((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_fileName = (jref) (frame[1].o);
	LINE_NUMBER(42);
	((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(43);
	((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_params = (jref) (frame[3].o);
	LINE_NUMBER(44);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetDescriptor:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_assets_AssetDescriptor(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(47);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_path_R_java_lang_String])(ctx, (frame[1].o));
	((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK(sp[0].o))->F_fileName = (jref) sp[1].o;
	LINE_NUMBER(49);
	((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_file = (jref) (frame[1].o);
	LINE_NUMBER(50);
	((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_type = (jref) (frame[2].o);
	LINE_NUMBER(51);
	((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_params = (jref) (frame[3].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_assets_AssetDescriptor_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/assets/AssetDescriptor:toString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(56);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(57);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_fileName;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(58);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	LINE_NUMBER(59);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_assets_AssetDescriptor *) NULL_CHECK((frame[0].o)))->F_type;
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(60);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_assets_AssetDescriptor[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_assets_AssetDescriptor_toString_R_java_lang_String,
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

static FieldMetadata fields[] {
	{ "fileName", &class_java_lang_String, offsetof(com_badlogic_gdx_assets_AssetDescriptor, F_fileName), "Ljava/lang/String;", 17 },
	{ "type", &class_java_lang_Class, offsetof(com_badlogic_gdx_assets_AssetDescriptor, F_type), "Ljava/lang/Class;", 17 },
	{ "params", &class_com_badlogic_gdx_assets_AssetLoaderParameters, offsetof(com_badlogic_gdx_assets_AssetDescriptor, F_params), "Lcom/badlogic/gdx/assets/AssetLoaderParameters;", 17 },
	{ "file", &class_com_badlogic_gdx_files_FileHandle, offsetof(com_badlogic_gdx_assets_AssetDescriptor, F_file), "Lcom/badlogic/gdx/files/FileHandle;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class, 0, "(Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/lang/Class;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetDescriptor_java_lang_String_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters, 0, "(Ljava/lang/String;Ljava/lang/Class;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_assets_AssetDescriptor_com_badlogic_gdx_files_FileHandle_java_lang_Class_com_badlogic_gdx_assets_AssetLoaderParameters, 0, "(Lcom/badlogic/gdx/files/FileHandle;Ljava/lang/Class;Lcom/badlogic/gdx/assets/AssetLoaderParameters;)V", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_assets_AssetDescriptor_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_assets_AssetDescriptor_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_assets_AssetDescriptor{
		.nativeName = (intptr_t) "com/badlogic/gdx/assets/AssetDescriptor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_assets_AssetDescriptor),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_assets_AssetDescriptor,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_assets_AssetDescriptor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_assets_AssetDescriptor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_assets_AssetDescriptor = registerClass(&class_com_badlogic_gdx_assets_AssetDescriptor);

}

