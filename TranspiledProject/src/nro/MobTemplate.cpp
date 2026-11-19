#include "nro/MobTemplate.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/EffectData.h"

extern "C" {


void mark_nro_MobTemplate(jobject object, jint mark, jint depth) {
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
	auto self = (nro_MobTemplate *) object;
	if (self->F_name)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_name)->clazz)->markFunction)((jobject) self->F_name, mark, depth + 1);
	if (self->F_data)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_data)->clazz)->markFunction)((jobject) self->F_data, mark, depth + 1);
}

void clinit_nro_MobTemplate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_MobTemplate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MobTemplate:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MobTemplate(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_MobTemplate[] {
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
	{ "rangeMove", &class_byte, offsetof(nro_MobTemplate, F_rangeMove), "B", 1 },
	{ "speed", &class_byte, offsetof(nro_MobTemplate, F_speed), "B", 1 },
	{ "type", &class_byte, offsetof(nro_MobTemplate, F_type), "B", 1 },
	{ "hp", &class_long, offsetof(nro_MobTemplate, F_hp), "J", 1 },
	{ "name", &class_java_lang_String, offsetof(nro_MobTemplate, F_name), "Ljava/lang/String;", 1 },
	{ "data", &class_nro_EffectData, offsetof(nro_MobTemplate, F_data), "Lnro/EffectData;", 1 },
	{ "dartType", &class_byte, offsetof(nro_MobTemplate, F_dartType), "B", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MobTemplate, 0, "()V", 1 },
};

Class class_nro_MobTemplate{
		.nativeName = (intptr_t) "nro/MobTemplate",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_MobTemplate),
		.classVtable = (intptr_t) vtable_nro_MobTemplate,
		.staticInitializer = (intptr_t) clinit_nro_MobTemplate,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MobTemplate,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MobTemplate = registerClass(&class_nro_MobTemplate);

}

