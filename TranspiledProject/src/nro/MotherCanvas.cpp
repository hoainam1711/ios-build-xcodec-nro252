#include "nro/MotherCanvas.h"
#include "java/lang/Object.h"
#include "lib/mGraphics.h"
#include "nro/MotherCanvas.h"
#include "com/nro/GameMain.h"
#include "java/lang/Runnable.h"

extern "C" {

jbool SF_nro_MotherCanvas_started;

void mark_nro_MotherCanvas(jobject object, jint mark, jint depth) {
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
	auto self = (nro_MotherCanvas *) object;
}

void clinit_nro_MotherCanvas(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_MotherCanvas(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MotherCanvas:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MotherCanvas(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(15);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(29);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_nro_MotherCanvas_getY_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MotherCanvas:getY", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(33);
	jint temp0 = (jint)SM_com_nro_GameMain_getWidth_R_int(ctx);
	frame[1].i = temp0;
	jint temp3 = temp0 / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	sp[0].i = temp3;
	sp += 1;
	if (((frame[1].i) % (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel)) != 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	INST_IADD();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jint M_nro_MotherCanvas_getH_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MotherCanvas:getH", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(38);
	jint temp0 = (jint)SM_com_nro_GameMain_getHeight_R_int(ctx);
	frame[1].i = temp0;
	jint temp3 = temp0 / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel);
	sp[0].i = temp3;
	sp += 1;
	if (((frame[1].i) % (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel)) != 0) goto label_2;
	}
	INST_ICONST(0);
	goto label_3;
label_2:;
	INST_ICONST(1);
label_3:;
	INST_IADD();
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_MotherCanvas_pointerDragged_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MotherCanvas:pointerDragged", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(42);
	frame[1].i = ((frame[1].i) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(43);
	frame[2].i = ((frame[2].i) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(44);
	((func_nro_MotherCanvas_onPointerDragged_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MotherCanvas_onPointerDragged_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MotherCanvas_pointerPressed_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MotherCanvas:pointerPressed", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(48);
	frame[1].i = ((frame[1].i) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(49);
	frame[2].i = ((frame[2].i) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(50);
	((func_nro_MotherCanvas_onPointerPressed_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MotherCanvas_onPointerPressed_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(51);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MotherCanvas_pointerReleased_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MotherCanvas:pointerReleased", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(54);
	frame[1].i = ((frame[1].i) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(55);
	frame[2].i = ((frame[2].i) / (clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel));
	LINE_NUMBER(56);
	((func_nro_MotherCanvas_onPointerReleased_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_nro_MotherCanvas_onPointerReleased_int_int])(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_MotherCanvas_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MotherCanvas:run", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(99);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_MotherCanvas[] {
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
	(void *) M_nro_MotherCanvas_run,
	(void *) M_nro_MotherCanvas_getY_R_int,
	(void *) M_nro_MotherCanvas_getH_R_int,
	(void *) M_nro_MotherCanvas_pointerDragged_int_int,
	(void *) M_nro_MotherCanvas_pointerPressed_int_int,
	(void *) M_nro_MotherCanvas_pointerReleased_int_int,
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
	{ "run", "()V" },
	{ "getY", "()I" },
	{ "getH", "()I" },
	{ "pointerDragged", "(II)V" },
	{ "pointerPressed", "(II)V" },
	{ "pointerReleased", "(II)V" },
	{ "onPointerDragged", "(II)V" },
	{ "onPointerPressed", "(II)V" },
	{ "onPointerReleased", "(II)V" },
	{ "update", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "started", &class_boolean, (intptr_t) &SF_nro_MotherCanvas_started, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MotherCanvas, 0, "()V", 1 },
	{ "getY", (intptr_t) M_nro_MotherCanvas_getY_R_int, VTABLE_nro_MotherCanvas_getY_R_int, "()I", 17 },
	{ "getH", (intptr_t) M_nro_MotherCanvas_getH_R_int, VTABLE_nro_MotherCanvas_getH_R_int, "()I", 17 },
	{ "pointerDragged", (intptr_t) M_nro_MotherCanvas_pointerDragged_int_int, VTABLE_nro_MotherCanvas_pointerDragged_int_int, "(II)V", 17 },
	{ "pointerPressed", (intptr_t) M_nro_MotherCanvas_pointerPressed_int_int, VTABLE_nro_MotherCanvas_pointerPressed_int_int, "(II)V", 17 },
	{ "pointerReleased", (intptr_t) M_nro_MotherCanvas_pointerReleased_int_int, VTABLE_nro_MotherCanvas_pointerReleased_int_int, "(II)V", 17 },
	{ "onPointerDragged", 0, VTABLE_nro_MotherCanvas_onPointerDragged_int_int, "(II)V", 1025 },
	{ "onPointerPressed", 0, VTABLE_nro_MotherCanvas_onPointerPressed_int_int, "(II)V", 1025 },
	{ "onPointerReleased", 0, VTABLE_nro_MotherCanvas_onPointerReleased_int_int, "(II)V", 1025 },
	{ "update", 0, VTABLE_nro_MotherCanvas_update, "()V", 1025 },
	{ "run", (intptr_t) M_nro_MotherCanvas_run, VTABLE_nro_MotherCanvas_run, "()V", 1 },
};

Class class_nro_MotherCanvas{
		.nativeName = (intptr_t) "nro/MotherCanvas",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_MotherCanvas),
		.classVtable = (intptr_t) vtable_nro_MotherCanvas,
		.staticInitializer = (intptr_t) clinit_nro_MotherCanvas,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MotherCanvas,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 11,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MotherCanvas = registerClass(&class_nro_MotherCanvas);

}

