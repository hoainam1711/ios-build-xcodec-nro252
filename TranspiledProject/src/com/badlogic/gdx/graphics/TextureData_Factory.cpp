#include "com/badlogic/gdx/graphics/TextureData_Factory.h"
#include "com/badlogic/gdx/graphics/Pixmap_Format.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/graphics/TextureData_Factory.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "com/badlogic/gdx/graphics/glutils/ETC1TextureData.h"
#include "com/badlogic/gdx/graphics/glutils/FileTextureData.h"
#include "com/badlogic/gdx/graphics/PixmapIO.h"
#include "com/badlogic/gdx/graphics/glutils/KTXTextureData.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_TextureData$Factory(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_TextureData$Factory *) object;
}

void clinit_com_badlogic_gdx_graphics_TextureData$Factory(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_TextureData$Factory(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/TextureData$Factory:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_TextureData$Factory(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(90);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject param0, jbool param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/TextureData$Factory:loadFromFile", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_TextureData$Factory(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	{
	LINE_NUMBER(93);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean_R_com_badlogic_gdx_graphics_TextureData(ctx, (frame[0].o), (jobject(nullptr)), (frame[1].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean_R_com_badlogic_gdx_graphics_TextureData(jcontext ctx, jobject param0, jobject param1, jbool param2) {
	jtype frame[9];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/TextureData$Factory:loadFromFile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_TextureData$Factory(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(97);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(98);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".cim"_j))));
	if (temp0 == 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_graphics_glutils_FileTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_FileTextureData);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)SM_com_badlogic_gdx_graphics_PixmapIO_readCIM_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Pixmap(ctx, (frame[0].o));
	init_com_badlogic_gdx_graphics_glutils_FileTextureData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".etc1"_j))));
	if (temp0 == 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_graphics_glutils_ETC1TextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ETC1TextureData);
	init_com_badlogic_gdx_graphics_glutils_ETC1TextureData_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[0].o, (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".ktx"_j))));
	if (temp0 != 0) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_name_R_java_lang_String])(ctx, (frame[0].o));
	jint temp0 = (jint)((func_java_lang_String_endsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_endsWith_java_lang_String_R_boolean])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".zktx"_j))));
	if (temp0 == 0) goto label_5;
	}
label_4:;
	{
	clinit_com_badlogic_gdx_graphics_glutils_KTXTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_KTXTextureData);
	init_com_badlogic_gdx_graphics_glutils_KTXTextureData_com_badlogic_gdx_files_FileHandle_boolean(ctx, sp[0].o, (frame[0].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(101);
	clinit_com_badlogic_gdx_graphics_glutils_FileTextureData(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_FileTextureData);
	sp[1].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap);
	init_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_files_FileHandle(ctx, sp[2].o, (frame[0].o));
	init_com_badlogic_gdx_graphics_glutils_FileTextureData_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap_com_badlogic_gdx_graphics_Pixmap$Format_boolean(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_TextureData$Factory[] {
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_TextureData$Factory, 0, "()V", 1 },
	{ "loadFromFile", (intptr_t) SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_boolean_R_com_badlogic_gdx_graphics_TextureData, 0, "(Lcom/badlogic/gdx/files/FileHandle;Z)Lcom/badlogic/gdx/graphics/TextureData;", 9 },
	{ "loadFromFile", (intptr_t) SM_com_badlogic_gdx_graphics_TextureData$Factory_loadFromFile_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap$Format_boolean_R_com_badlogic_gdx_graphics_TextureData, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap$Format;Z)Lcom/badlogic/gdx/graphics/TextureData;", 9 },
};

Class class_com_badlogic_gdx_graphics_TextureData$Factory{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/TextureData$Factory",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_TextureData$Factory),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_TextureData$Factory,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_TextureData$Factory,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_TextureData$Factory,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_TextureData,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_TextureData$Factory = registerClass(&class_com_badlogic_gdx_graphics_TextureData$Factory);

}

