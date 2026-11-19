#include "nro/EffectChar.h"
#include "java/lang/Object.h"
#include "nro/EffectChar.h"
#include "nro/EffectTemplate.h"

extern "C" {


void mark_nro_EffectChar(jobject object, jint mark, jint depth) {
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
	auto self = (nro_EffectChar *) object;
	if (self->F_template)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_template)->clazz)->markFunction)((jobject) self->F_template, mark, depth + 1);
}

void clinit_nro_EffectChar(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_EffectChar_byte_int_int_short(jcontext ctx, jobject self, jbyte param0, jint param1, jint param2, jshort param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectChar:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectChar(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(7);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(5);
	((nro_EffectChar *) NULL_CHECK((frame[0].o)))->F_template = (jref) (jobject(nullptr));
	LINE_NUMBER(8);
	((nro_EffectChar *) NULL_CHECK((frame[0].o)))->F_param = (frame[4].i);
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_EffectChar[] {
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
	{ "param", &class_short, offsetof(nro_EffectChar, F_param), "S", 1 },
	{ "template", &class_nro_EffectTemplate, offsetof(nro_EffectChar, F_template), "Lnro/EffectTemplate;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_EffectChar_byte_int_int_short, 0, "(BIIS)V", 1 },
};

Class class_nro_EffectChar{
		.nativeName = (intptr_t) "nro/EffectChar",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_EffectChar),
		.classVtable = (intptr_t) vtable_nro_EffectChar,
		.staticInitializer = (intptr_t) clinit_nro_EffectChar,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_EffectChar,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_EffectChar = registerClass(&class_nro_EffectChar);

}

