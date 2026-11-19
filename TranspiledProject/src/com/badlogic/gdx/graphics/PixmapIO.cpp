#include "com/badlogic/gdx/graphics/PixmapIO.h"
#include "com/badlogic/gdx/graphics/PixmapIO_PNG.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/io/IOException.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/graphics/PixmapIO.h"
#include "com/badlogic/gdx/graphics/PixmapIO_CIM.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_PixmapIO(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_PixmapIO *) object;
}

void clinit_com_badlogic_gdx_graphics_PixmapIO(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_PixmapIO(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(43);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_PixmapIO_writeCIM_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO:writeCIM", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(49);
	SM_com_badlogic_gdx_graphics_PixmapIO$CIM_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_PixmapIO_readCIM_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO:readCIM", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_PixmapIO$CIM_read_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Pixmap(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_PixmapIO_writePNG_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap_int_boolean(jcontext ctx, jobject param0, jobject param1, jint param2, jbool param3) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO:writePNG", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].i = param2;
	frame[3].i = param3;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_8; }
	}
	{
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_graphics_PixmapIO$PNG(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_PixmapIO$PNG);
	jint temp0 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getWidth_R_int])(ctx, (frame[1].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_Pixmap_getHeight_R_int])(ctx, (frame[1].o));
	init_com_badlogic_gdx_graphics_PixmapIO$PNG_int(ctx, sp[0].o, (jint(((jfloat((temp0 * temp1))) * (jfloat(1.5f))))));
	frame[4].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(66);
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_setFlipY_boolean])(ctx, (frame[4].o), (frame[3].i));
	LINE_NUMBER(67);
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_setCompression_int])(ctx, (frame[4].o), (frame[2].i));
	LINE_NUMBER(68);
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_write_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap])(ctx, (frame[4].o), (frame[0].o), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(70);
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose])(ctx, (frame[4].o));
	LINE_NUMBER(71);
	goto label_7;
	}
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(70);
	INST_ASTORE(5);
	popExceptionFrame(frameRef);
	{
	((func_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_PixmapIO$PNG_dispose])(ctx, (frame[4].o));
	LINE_NUMBER(71);
	throwException(ctx, (frame[5].o));	}
label_7:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(74);
	goto label_14;
label_8:;
	{
	sp -= 1;
	LINE_NUMBER(72);
	frame[4].o = sp[0].o;
	LINE_NUMBER(73);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error writing PNG: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[4].o));
	throwException(ctx, sp[0].o);	}
label_14:;
	LINE_NUMBER(75);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_graphics_PixmapIO_writePNG_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/PixmapIO:writePNG", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_PixmapIO(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(80);
	SM_com_badlogic_gdx_graphics_PixmapIO_writePNG_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap_int_boolean(ctx, (frame[0].o), (frame[1].o), (jint(-1)), (jint(0)));
	LINE_NUMBER(81);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_PixmapIO[] {
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
	&class_com_badlogic_gdx_graphics_PixmapIO$CIM,
	&class_com_badlogic_gdx_graphics_PixmapIO$PNG,
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_PixmapIO, 0, "()V", 1 },
	{ "writeCIM", (intptr_t) SM_com_badlogic_gdx_graphics_PixmapIO_writeCIM_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap;)V", 9 },
	{ "readCIM", (intptr_t) SM_com_badlogic_gdx_graphics_PixmapIO_readCIM_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/graphics/Pixmap;", 9 },
	{ "writePNG", (intptr_t) SM_com_badlogic_gdx_graphics_PixmapIO_writePNG_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap_int_boolean, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap;IZ)V", 9 },
	{ "writePNG", (intptr_t) SM_com_badlogic_gdx_graphics_PixmapIO_writePNG_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_Pixmap, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/Pixmap;)V", 9 },
};

Class class_com_badlogic_gdx_graphics_PixmapIO{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/PixmapIO",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_PixmapIO),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_PixmapIO,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_PixmapIO,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_PixmapIO,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_PixmapIO = registerClass(&class_com_badlogic_gdx_graphics_PixmapIO);

}

