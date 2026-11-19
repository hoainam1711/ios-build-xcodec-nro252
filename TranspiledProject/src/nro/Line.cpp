#include "nro/Line.h"
#include "java/lang/Object.h"
#include "nro/Line.h"

extern "C" {


void mark_nro_Line(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Line *) object;
}

void clinit_nro_Line(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Line(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Line:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Line(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((nro_Line *) NULL_CHECK((frame[0].o)))->F_is2Line = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Line_setLine_int_int_int_int_int_int_boolean(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Line:setLine", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].i = param5;
	frame[7].i = param6;
	{
	LINE_NUMBER(14);
	((nro_Line *) NULL_CHECK((frame[0].o)))->F_x0 = (frame[1].i);
	LINE_NUMBER(15);
	((nro_Line *) NULL_CHECK((frame[0].o)))->F_y0 = (frame[2].i);
	LINE_NUMBER(16);
	((nro_Line *) NULL_CHECK((frame[0].o)))->F_x1 = (frame[3].i);
	LINE_NUMBER(17);
	((nro_Line *) NULL_CHECK((frame[0].o)))->F_y1 = (frame[4].i);
	LINE_NUMBER(18);
	((nro_Line *) NULL_CHECK((frame[0].o)))->F_vx = (frame[5].i);
	LINE_NUMBER(19);
	((nro_Line *) NULL_CHECK((frame[0].o)))->F_vy = (frame[6].i);
	LINE_NUMBER(20);
	((nro_Line *) NULL_CHECK((frame[0].o)))->F_is2Line = (frame[7].i);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Line[] {
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
	(void *) M_nro_Line_setLine_int_int_int_int_int_int_boolean,
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
	{ "setLine", "(IIIIIIZ)V" },
};

static FieldMetadata fields[] {
	{ "x0", &class_int, offsetof(nro_Line, F_x0), "I", 1 },
	{ "y0", &class_int, offsetof(nro_Line, F_y0), "I", 1 },
	{ "x1", &class_int, offsetof(nro_Line, F_x1), "I", 1 },
	{ "y1", &class_int, offsetof(nro_Line, F_y1), "I", 1 },
	{ "vx", &class_int, offsetof(nro_Line, F_vx), "I", 1 },
	{ "vy", &class_int, offsetof(nro_Line, F_vy), "I", 1 },
	{ "g", &class_int, offsetof(nro_Line, F_g), "I", 1 },
	{ "is2Line", &class_boolean, offsetof(nro_Line, F_is2Line), "Z", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Line, 0, "()V", 1 },
	{ "setLine", (intptr_t) M_nro_Line_setLine_int_int_int_int_int_int_boolean, VTABLE_nro_Line_setLine_int_int_int_int_int_int_boolean, "(IIIIIIZ)V", 17 },
};

Class class_nro_Line{
		.nativeName = (intptr_t) "nro/Line",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Line),
		.classVtable = (intptr_t) vtable_nro_Line,
		.staticInitializer = (intptr_t) clinit_nro_Line,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Line,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Line = registerClass(&class_nro_Line);

}

