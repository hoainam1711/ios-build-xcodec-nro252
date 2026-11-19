#include "nro/Frame.h"
#include "java/lang/Object.h"

extern "C" {


void mark_nro_Frame(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Frame *) object;
	if (self->F_dx)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dx)->clazz)->markFunction)((jobject) self->F_dx, mark, depth + 1);
	if (self->F_dy)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_dy)->clazz)->markFunction)((jobject) self->F_dy, mark, depth + 1);
	if (self->F_idImg)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_idImg)->clazz)->markFunction)((jobject) self->F_idImg, mark, depth + 1);
}

void clinit_nro_Frame(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Frame(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Frame:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Frame(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Frame[] {
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
	{ "dx", getArrayClass(&class_short, 1), offsetof(nro_Frame, F_dx), "[S", 1 },
	{ "dy", getArrayClass(&class_short, 1), offsetof(nro_Frame, F_dy), "[S", 1 },
	{ "idImg", getArrayClass(&class_byte, 1), offsetof(nro_Frame, F_idImg), "[B", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Frame, 0, "()V", 1 },
};

Class class_nro_Frame{
		.nativeName = (intptr_t) "nro/Frame",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Frame),
		.classVtable = (intptr_t) vtable_nro_Frame,
		.staticInitializer = (intptr_t) clinit_nro_Frame,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Frame,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Frame = registerClass(&class_nro_Frame);

}

