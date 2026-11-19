#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/graphics/GL32.h"
#include "com/badlogic/gdx/graphics/GL20.h"
#include "com/badlogic/gdx/graphics/GL31.h"
#include "com/badlogic/gdx/Audio.h"
#include "com/badlogic/gdx/graphics/GL30.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/Net.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Files.h"

extern "C" {

jobject SF_com_badlogic_gdx_Gdx_app;
jobject SF_com_badlogic_gdx_Gdx_graphics;
jobject SF_com_badlogic_gdx_Gdx_audio;
jobject SF_com_badlogic_gdx_Gdx_input;
jobject SF_com_badlogic_gdx_Gdx_files;
jobject SF_com_badlogic_gdx_Gdx_net;
jobject SF_com_badlogic_gdx_Gdx_gl;
jobject SF_com_badlogic_gdx_Gdx_gl20;
jobject SF_com_badlogic_gdx_Gdx_gl30;
jobject SF_com_badlogic_gdx_Gdx_gl31;
jobject SF_com_badlogic_gdx_Gdx_gl32;

void mark_com_badlogic_gdx_Gdx(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_Gdx_app)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_app)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_app, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_graphics)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_graphics)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_graphics, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_audio)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_audio)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_audio, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_input)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_input)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_input, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_files)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_files)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_files, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_net)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_net)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_net, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_gl)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_gl)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_gl, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_gl20)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_gl20)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_gl20, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_gl30)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_gl30)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_gl30, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_gl31)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_gl31)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_gl31, mark, depth + 1);
		if (SF_com_badlogic_gdx_Gdx_gl32)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Gdx_gl32)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Gdx_gl32, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_Gdx *) object;
}

void clinit_com_badlogic_gdx_Gdx(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_Gdx(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Gdx:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Gdx(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Gdx[] {
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

static FieldMetadata fields[] {
	{ "app", &class_com_badlogic_gdx_Application, (intptr_t) &SF_com_badlogic_gdx_Gdx_app, "Lcom/badlogic/gdx/Application;", 9 },
	{ "graphics", &class_com_badlogic_gdx_Graphics, (intptr_t) &SF_com_badlogic_gdx_Gdx_graphics, "Lcom/badlogic/gdx/Graphics;", 9 },
	{ "audio", &class_com_badlogic_gdx_Audio, (intptr_t) &SF_com_badlogic_gdx_Gdx_audio, "Lcom/badlogic/gdx/Audio;", 9 },
	{ "input", &class_com_badlogic_gdx_Input, (intptr_t) &SF_com_badlogic_gdx_Gdx_input, "Lcom/badlogic/gdx/Input;", 9 },
	{ "files", &class_com_badlogic_gdx_Files, (intptr_t) &SF_com_badlogic_gdx_Gdx_files, "Lcom/badlogic/gdx/Files;", 9 },
	{ "net", &class_com_badlogic_gdx_Net, (intptr_t) &SF_com_badlogic_gdx_Gdx_net, "Lcom/badlogic/gdx/Net;", 9 },
	{ "gl", &class_com_badlogic_gdx_graphics_GL20, (intptr_t) &SF_com_badlogic_gdx_Gdx_gl, "Lcom/badlogic/gdx/graphics/GL20;", 9 },
	{ "gl20", &class_com_badlogic_gdx_graphics_GL20, (intptr_t) &SF_com_badlogic_gdx_Gdx_gl20, "Lcom/badlogic/gdx/graphics/GL20;", 9 },
	{ "gl30", &class_com_badlogic_gdx_graphics_GL30, (intptr_t) &SF_com_badlogic_gdx_Gdx_gl30, "Lcom/badlogic/gdx/graphics/GL30;", 9 },
	{ "gl31", &class_com_badlogic_gdx_graphics_GL31, (intptr_t) &SF_com_badlogic_gdx_Gdx_gl31, "Lcom/badlogic/gdx/graphics/GL31;", 9 },
	{ "gl32", &class_com_badlogic_gdx_graphics_GL32, (intptr_t) &SF_com_badlogic_gdx_Gdx_gl32, "Lcom/badlogic/gdx/graphics/GL32;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Gdx, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_Gdx{
		.nativeName = (intptr_t) "com/badlogic/gdx/Gdx",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Gdx),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Gdx,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Gdx,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Gdx,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Gdx = registerClass(&class_com_badlogic_gdx_Gdx);

}

