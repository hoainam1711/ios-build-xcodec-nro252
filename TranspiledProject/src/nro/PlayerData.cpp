#include "nro/PlayerData.h"
#include "nro/PlayerData.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"

extern "C" {


void mark_nro_PlayerData(jobject object, jint mark, jint depth) {
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
	auto self = (nro_PlayerData *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
}

void clinit_nro_PlayerData(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_PlayerData_int_java_lang_String_short_short_short_long(jcontext ctx, jobject self, jint param0, jobject param1, jshort param2, jshort param3, jshort param4, jlong param5) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/PlayerData:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_PlayerData(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	frame[6].l = param5;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((nro_PlayerData *) NULL_CHECK((frame[0].o)))->F_playerID = (frame[1].i);
	LINE_NUMBER(13);
	((nro_PlayerData *) NULL_CHECK((frame[0].o)))->F_name = (jref) (frame[2].o);
	LINE_NUMBER(14);
	((nro_PlayerData *) NULL_CHECK((frame[0].o)))->F_head = (frame[3].i);
	LINE_NUMBER(15);
	((nro_PlayerData *) NULL_CHECK((frame[0].o)))->F_body = (frame[4].i);
	LINE_NUMBER(16);
	((nro_PlayerData *) NULL_CHECK((frame[0].o)))->F_leg = (frame[5].i);
	LINE_NUMBER(17);
	((nro_PlayerData *) NULL_CHECK((frame[0].o)))->F_powpoint = (frame[6].l);
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_PlayerData[] {
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
	{ "playerID", &class_int, offsetof(nro_PlayerData, F_playerID), "I", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_PlayerData, F_name), "Ljava/lang/String;", 1 },
	{ "head", &class_short, offsetof(nro_PlayerData, F_head), "S", 1 },
	{ "body", &class_short, offsetof(nro_PlayerData, F_body), "S", 1 },
	{ "leg", &class_short, offsetof(nro_PlayerData, F_leg), "S", 1 },
	{ "powpoint", &class_long, offsetof(nro_PlayerData, F_powpoint), "J", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_PlayerData_int_java_lang_String_short_short_short_long, 0, "(ILjava/lang/String;SSSJ)V", 1 },
};

Class class_nro_PlayerData{
		.nativeName = (intptr_t) "nro/PlayerData",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_PlayerData),
		.classVtable = (intptr_t) vtable_nro_PlayerData,
		.staticInitializer = (intptr_t) clinit_nro_PlayerData,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_PlayerData,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_PlayerData = registerClass(&class_nro_PlayerData);

}

