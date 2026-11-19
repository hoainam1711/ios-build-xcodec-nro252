#include "nro/FPSSettings_Option.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/FPSSettings.h"
#include "nro/FPSSettings_Option.h"

extern "C" {


void mark_nro_FPSSettings$Option(jobject object, jint mark, jint depth) {
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
	auto self = (nro_FPSSettings$Option *) object;
	if (self->F_label)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_label)->clazz)->markFunction)((jobject) self->F_label, mark, depth + 1);
}

void clinit_nro_FPSSettings$Option(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_FPSSettings$Option_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/FPSSettings$Option:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_FPSSettings$Option(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	((nro_FPSSettings$Option *) NULL_CHECK((frame[0].o)))->F_label = (jref) (frame[1].o);
	LINE_NUMBER(22);
	((nro_FPSSettings$Option *) NULL_CHECK((frame[0].o)))->F_fpsValue = (frame[2].i);
	LINE_NUMBER(23);
	((nro_FPSSettings$Option *) NULL_CHECK((frame[0].o)))->F_col = (frame[3].i);
	LINE_NUMBER(24);
	((nro_FPSSettings$Option *) NULL_CHECK((frame[0].o)))->F_row = (frame[4].i);
	LINE_NUMBER(25);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_FPSSettings$Option[] {
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
	{ "label", &class_java_lang_String, offsetof(nro_FPSSettings$Option, F_label), "Ljava/lang/String;", 1 },
	{ "fpsValue", &class_int, offsetof(nro_FPSSettings$Option, F_fpsValue), "I", 1 },
	{ "col", &class_int, offsetof(nro_FPSSettings$Option, F_col), "I", 1 },
	{ "row", &class_int, offsetof(nro_FPSSettings$Option, F_row), "I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_FPSSettings$Option_java_lang_String_int_int_int, 0, "(Ljava/lang/String;III)V", 1 },
};

Class class_nro_FPSSettings$Option{
		.nativeName = (intptr_t) "nro/FPSSettings$Option",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_FPSSettings$Option),
		.classVtable = (intptr_t) vtable_nro_FPSSettings$Option,
		.staticInitializer = (intptr_t) clinit_nro_FPSSettings$Option,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_FPSSettings$Option,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_nro_FPSSettings,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_FPSSettings$Option = registerClass(&class_nro_FPSSettings$Option);

}

