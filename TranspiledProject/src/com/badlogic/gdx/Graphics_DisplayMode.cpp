#include "com/badlogic/gdx/Graphics_DisplayMode.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/Graphics_DisplayMode.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Graphics.h"

extern "C" {


void mark_com_badlogic_gdx_Graphics$DisplayMode(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Graphics$DisplayMode *) object;
}

void clinit_com_badlogic_gdx_Graphics$DisplayMode(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_Graphics$DisplayMode_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Graphics$DisplayMode:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Graphics$DisplayMode(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(71);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(72);
	((com_badlogic_gdx_Graphics$DisplayMode *) NULL_CHECK((frame[0].o)))->F_width = (frame[1].i);
	LINE_NUMBER(73);
	((com_badlogic_gdx_Graphics$DisplayMode *) NULL_CHECK((frame[0].o)))->F_height = (frame[2].i);
	LINE_NUMBER(74);
	((com_badlogic_gdx_Graphics$DisplayMode *) NULL_CHECK((frame[0].o)))->F_refreshRate = (frame[3].i);
	LINE_NUMBER(75);
	((com_badlogic_gdx_Graphics$DisplayMode *) NULL_CHECK((frame[0].o)))->F_bitsPerPixel = (frame[4].i);
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_Graphics$DisplayMode_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Graphics$DisplayMode:toString", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(79);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_Graphics$DisplayMode *) NULL_CHECK((frame[0].o)))->F_width));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_Graphics$DisplayMode *) NULL_CHECK((frame[0].o)))->F_height));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", bpp: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_Graphics$DisplayMode *) NULL_CHECK((frame[0].o)))->F_bitsPerPixel));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8", hz: "_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_Graphics$DisplayMode *) NULL_CHECK((frame[0].o)))->F_refreshRate));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Graphics$DisplayMode[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_Graphics$DisplayMode_toString_R_java_lang_String,
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
	{ "width", &class_int, offsetof(com_badlogic_gdx_Graphics$DisplayMode, F_width), "I", 17 },
	{ "height", &class_int, offsetof(com_badlogic_gdx_Graphics$DisplayMode, F_height), "I", 17 },
	{ "refreshRate", &class_int, offsetof(com_badlogic_gdx_Graphics$DisplayMode, F_refreshRate), "I", 17 },
	{ "bitsPerPixel", &class_int, offsetof(com_badlogic_gdx_Graphics$DisplayMode, F_bitsPerPixel), "I", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Graphics$DisplayMode_int_int_int_int, 0, "(IIII)V", 4 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_Graphics$DisplayMode_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_Graphics$DisplayMode_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_Graphics$DisplayMode{
		.nativeName = (intptr_t) "com/badlogic/gdx/Graphics$DisplayMode",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Graphics$DisplayMode),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Graphics$DisplayMode,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Graphics$DisplayMode,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Graphics$DisplayMode,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Graphics,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Graphics$DisplayMode = registerClass(&class_com_badlogic_gdx_Graphics$DisplayMode);

}

