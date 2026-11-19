#include "nro/InfoItem.h"
#include "nro/InfoItem.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/Char.h"

extern "C" {


void mark_nro_InfoItem(jobject object, jint mark, jint depth) {
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
	auto self = (nro_InfoItem *) object;
	if (self->F_s)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_s)->clazz)->markFunction)((jobject) self->F_s, mark, depth + 1);
	if (self->F_charInfo)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_charInfo)->clazz)->markFunction)((jobject) self->F_charInfo, mark, depth + 1);
}

void clinit_nro_InfoItem(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_InfoItem_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoItem:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoItem(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(15);
	((nro_InfoItem *) NULL_CHECK((frame[0].o)))->F_speed = (70);
	LINE_NUMBER(16);
	((nro_InfoItem *) NULL_CHECK((frame[0].o)))->F_s = (jref) (frame[1].o);
	LINE_NUMBER(17);
	((nro_InfoItem *) NULL_CHECK((frame[0].o)))->F_speed = (20);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_InfoItem(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/InfoItem:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_InfoItem(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(20);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(21);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_InfoItem[] {
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
	{ "s", &class_java_lang_String, offsetof(nro_InfoItem, F_s), "Ljava/lang/String;", 1 },
	{ "speed", &class_int, offsetof(nro_InfoItem, F_speed), "I", 1 },
	{ "charInfo", &class_nro_Char, offsetof(nro_InfoItem, F_charInfo), "Lnro/Char;", 1 },
	{ "isChatServer", &class_boolean, offsetof(nro_InfoItem, F_isChatServer), "Z", 1 },
	{ "isOnline", &class_boolean, offsetof(nro_InfoItem, F_isOnline), "Z", 1 },
	{ "timeCount", &class_int, offsetof(nro_InfoItem, F_timeCount), "I", 1 },
	{ "maxTime", &class_int, offsetof(nro_InfoItem, F_maxTime), "I", 1 },
	{ "last", &class_long, offsetof(nro_InfoItem, F_last), "J", 1 },
	{ "curr", &class_long, offsetof(nro_InfoItem, F_curr), "J", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_InfoItem_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_nro_InfoItem, 0, "()V", 1 },
};

Class class_nro_InfoItem{
		.nativeName = (intptr_t) "nro/InfoItem",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_InfoItem),
		.classVtable = (intptr_t) vtable_nro_InfoItem,
		.staticInitializer = (intptr_t) clinit_nro_InfoItem,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_InfoItem,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 9,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_InfoItem = registerClass(&class_nro_InfoItem);

}

