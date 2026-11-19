#include "com/badlogic/gdx/AbstractGraphics.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/AbstractGraphics.h"

extern "C" {


void mark_com_badlogic_gdx_AbstractGraphics(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_AbstractGraphics *) object;
}

void clinit_com_badlogic_gdx_AbstractGraphics(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_AbstractGraphics(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractGraphics:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_AbstractGraphics(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(4);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_AbstractGraphics_getRawDeltaTime_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractGraphics:getRawDeltaTime", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(8);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_AbstractGraphics_getDeltaTime_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_AbstractGraphics_getDeltaTime_R_float])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_AbstractGraphics_getDensity_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractGraphics:getDensity", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(13);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_AbstractGraphics_getPpiX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_AbstractGraphics_getPpiX_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	LINE_NUMBER(14);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) <= 0) goto label_2;
	}
	{
	if ((floatCompare((frame[1].f), (jfloat(3.402823e+38f)), 1)) > 0) goto label_2;
	}
	{
	jfloat temp0 = (frame[1].f) / (jfloat(160.0f));
	sp[0].f = temp0;
	sp += 1;
	goto label_3;
	}
label_2:;
	INST_FCONST(1);
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_AbstractGraphics_getBackBufferScale_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/AbstractGraphics:getBackBufferScale", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	jint temp0 = (jint)((func_com_badlogic_gdx_AbstractGraphics_getBackBufferWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_AbstractGraphics_getBackBufferWidth_R_int])(ctx, (frame[0].o));
	jfloat temp1 = jfloat(temp0);
	jint temp2 = (jint)((func_com_badlogic_gdx_AbstractGraphics_getWidth_R_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_AbstractGraphics_getWidth_R_int])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return (temp1 / (jfloat(temp2)));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_AbstractGraphics[] {
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
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_AbstractGraphics_getBackBufferScale_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_AbstractGraphics_getRawDeltaTime_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_AbstractGraphics_getDensity_R_float,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
	(void *) nullptr,
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
	{ "isGL30Available", "()Z" },
	{ "isGL31Available", "()Z" },
	{ "isGL32Available", "()Z" },
	{ "getGL20", "()Lcom/badlogic/gdx/graphics/GL20;" },
	{ "getGL30", "()Lcom/badlogic/gdx/graphics/GL30;" },
	{ "getGL31", "()Lcom/badlogic/gdx/graphics/GL31;" },
	{ "getGL32", "()Lcom/badlogic/gdx/graphics/GL32;" },
	{ "setGL20", "(Lcom/badlogic/gdx/graphics/GL20;)V" },
	{ "setGL30", "(Lcom/badlogic/gdx/graphics/GL30;)V" },
	{ "setGL31", "(Lcom/badlogic/gdx/graphics/GL31;)V" },
	{ "setGL32", "(Lcom/badlogic/gdx/graphics/GL32;)V" },
	{ "getWidth", "()I" },
	{ "getHeight", "()I" },
	{ "getBackBufferWidth", "()I" },
	{ "getBackBufferHeight", "()I" },
	{ "getBackBufferScale", "()F" },
	{ "getSafeInsetLeft", "()I" },
	{ "getSafeInsetTop", "()I" },
	{ "getSafeInsetBottom", "()I" },
	{ "getSafeInsetRight", "()I" },
	{ "getFrameId", "()J" },
	{ "getDeltaTime", "()F" },
	{ "getRawDeltaTime", "()F" },
	{ "getFramesPerSecond", "()I" },
	{ "getType", "()Lcom/badlogic/gdx/Graphics$GraphicsType;" },
	{ "getGLVersion", "()Lcom/badlogic/gdx/graphics/glutils/GLVersion;" },
	{ "getPpiX", "()F" },
	{ "getPpiY", "()F" },
	{ "getPpcX", "()F" },
	{ "getPpcY", "()F" },
	{ "getDensity", "()F" },
	{ "supportsDisplayModeChange", "()Z" },
	{ "getPrimaryMonitor", "()Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getMonitor", "()Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getMonitors", "()[Lcom/badlogic/gdx/Graphics$Monitor;" },
	{ "getDisplayModes", "()[Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayModes", "(Lcom/badlogic/gdx/Graphics$Monitor;)[Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayMode", "()Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "getDisplayMode", "(Lcom/badlogic/gdx/Graphics$Monitor;)Lcom/badlogic/gdx/Graphics$DisplayMode;" },
	{ "setFullscreenMode", "(Lcom/badlogic/gdx/Graphics$DisplayMode;)Z" },
	{ "setWindowedMode", "(II)Z" },
	{ "setTitle", "(Ljava/lang/String;)V" },
	{ "setUndecorated", "(Z)V" },
	{ "setResizable", "(Z)V" },
	{ "setVSync", "(Z)V" },
	{ "setForegroundFPS", "(I)V" },
	{ "getBufferFormat", "()Lcom/badlogic/gdx/Graphics$BufferFormat;" },
	{ "supportsExtension", "(Ljava/lang/String;)Z" },
	{ "setContinuousRendering", "(Z)V" },
	{ "isContinuousRendering", "()Z" },
	{ "requestRendering", "()V" },
	{ "isFullscreen", "()Z" },
	{ "newCursor", "(Lcom/badlogic/gdx/graphics/Pixmap;II)Lcom/badlogic/gdx/graphics/Cursor;" },
	{ "setCursor", "(Lcom/badlogic/gdx/graphics/Cursor;)V" },
	{ "setSystemCursor", "(Lcom/badlogic/gdx/graphics/Cursor$SystemCursor;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_Graphics, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_AbstractGraphics, 0, "()V", 1 },
	{ "getRawDeltaTime", (intptr_t) M_com_badlogic_gdx_AbstractGraphics_getRawDeltaTime_R_float, VTABLE_com_badlogic_gdx_AbstractGraphics_getRawDeltaTime_R_float, "()F", 1 },
	{ "getDensity", (intptr_t) M_com_badlogic_gdx_AbstractGraphics_getDensity_R_float, VTABLE_com_badlogic_gdx_AbstractGraphics_getDensity_R_float, "()F", 1 },
	{ "getBackBufferScale", (intptr_t) M_com_badlogic_gdx_AbstractGraphics_getBackBufferScale_R_float, VTABLE_com_badlogic_gdx_AbstractGraphics_getBackBufferScale_R_float, "()F", 1 },
};

Class class_com_badlogic_gdx_AbstractGraphics{
		.nativeName = (intptr_t) "com/badlogic/gdx/AbstractGraphics",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_AbstractGraphics),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_AbstractGraphics,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_AbstractGraphics,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_AbstractGraphics,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 66,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_AbstractGraphics = registerClass(&class_com_badlogic_gdx_AbstractGraphics);

}

