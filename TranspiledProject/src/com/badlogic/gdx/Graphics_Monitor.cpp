#include "com/badlogic/gdx/Graphics_Monitor.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Graphics.h"
#include "com/badlogic/gdx/Graphics_Monitor.h"

extern "C" {


void mark_com_badlogic_gdx_Graphics$Monitor(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_Graphics$Monitor *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_com_badlogic_gdx_Graphics$Monitor(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_Graphics$Monitor_int_int_java_lang_String(jcontext ctx, jobject self, jint param0, jint param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Graphics$Monitor:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Graphics$Monitor(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(91);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(92);
	((com_badlogic_gdx_Graphics$Monitor *) NULL_CHECK((frame[0].o)))->F_virtualX = (frame[1].i);
	LINE_NUMBER(93);
	((com_badlogic_gdx_Graphics$Monitor *) NULL_CHECK((frame[0].o)))->F_virtualY = (frame[2].i);
	LINE_NUMBER(94);
	((com_badlogic_gdx_Graphics$Monitor *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[3].o);
	LINE_NUMBER(95);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Graphics$Monitor[] {
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
	{ "virtualX", &class_int, offsetof(com_badlogic_gdx_Graphics$Monitor, F_virtualX), "I", 17 },
	{ "virtualY", &class_int, offsetof(com_badlogic_gdx_Graphics$Monitor, F_virtualY), "I", 17 },
	{ "name", &class_java_lang_String, offsetof(com_badlogic_gdx_Graphics$Monitor, F_name), "Ljava/lang/String;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Graphics$Monitor_int_int_java_lang_String, 0, "(IILjava/lang/String;)V", 4 },
};

Class class_com_badlogic_gdx_Graphics$Monitor{
		.nativeName = (intptr_t) "com/badlogic/gdx/Graphics$Monitor",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_Graphics$Monitor),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Graphics$Monitor,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Graphics$Monitor,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Graphics$Monitor,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Graphics,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
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
static bool registered_com_badlogic_gdx_Graphics$Monitor = registerClass(&class_com_badlogic_gdx_Graphics$Monitor);

}

