#include "lib/input/ChatTextField_1.h"
#include "java/lang/Object.h"
#include "lib/input/ChatTextField.h"
#include "nro/IActionListener.h"
#include "lib/input/ChatTextField_1.h"

extern "C" {


void mark_lib_input_ChatTextField$1(jobject object, jint mark, jint depth) {
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
	auto self = (lib_input_ChatTextField$1 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_lib_input_ChatTextField$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_lib_input_ChatTextField$1_lib_input_ChatTextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_lib_input_ChatTextField$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(111);
	((lib_input_ChatTextField$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_lib_input_ChatTextField$1_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "lib/input/ChatTextField$1:perform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(114);
	sp[0].o = (jobject)((lib_input_ChatTextField$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_lib_input_ChatTextField_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_input_ChatTextField_close])(ctx, sp[0].o);
	LINE_NUMBER(115);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_lib_input_ChatTextField$1[] {
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
	(void *) M_lib_input_ChatTextField$1_perform_int_java_lang_Object,
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
	{ "perform", "(ILjava/lang/Object;)V" },
};

static jclass interfaces[] { &class_nro_IActionListener, };

static FieldMetadata fields[] {
	{ "this$0", &class_lib_input_ChatTextField, offsetof(lib_input_ChatTextField$1, F_this$0), "Llib/input/ChatTextField;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_lib_input_ChatTextField$1_lib_input_ChatTextField, 0, "(Llib/input/ChatTextField;)V", 0 },
	{ "perform", (intptr_t) M_lib_input_ChatTextField$1_perform_int_java_lang_Object, VTABLE_lib_input_ChatTextField$1_perform_int_java_lang_Object, "(ILjava/lang/Object;)V", 1 },
};

Class class_lib_input_ChatTextField$1{
		.nativeName = (intptr_t) "lib/input/ChatTextField$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(lib_input_ChatTextField$1),
		.classVtable = (intptr_t) vtable_lib_input_ChatTextField$1,
		.staticInitializer = (intptr_t) clinit_lib_input_ChatTextField$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_lib_input_ChatTextField$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_lib_input_ChatTextField$1 = registerClass(&class_lib_input_ChatTextField$1);

}

