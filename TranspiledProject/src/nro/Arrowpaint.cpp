#include "nro/Arrowpaint.h"
#include "java/lang/Object.h"
#include "nro/Arrowpaint.h"

extern "C" {


void mark_nro_Arrowpaint(jobject object, jint mark, jint depth) {
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
	auto self = (nro_Arrowpaint *) object;
	if (self->F_imgId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_imgId)->clazz)->markFunction)((jobject) self->F_imgId, mark, depth + 1);
}

void init_nro_Arrowpaint(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Arrowpaint:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Arrowpaint(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(4);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	((nro_Arrowpaint *) NULL_CHECK(sp[0].o))->F_imgId = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_Arrowpaint(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Arrowpaint:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Arrowpaint(ctx);
	{
	LINE_NUMBER(7);
	sp[0].o = (jobject) createArray(ctx, &class_byte, (25));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(2))) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(4))) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (jint(5))) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (6)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (7)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (8)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (9)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (10)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (11)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (12)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (13)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (14)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (15)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (16)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (17)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (18)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (19)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (20)) = (jint(0));
	ARRAY_ACCESS(jbyte, sp[0].o, (21)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (22)) = (jint(2));
	ARRAY_ACCESS(jbyte, sp[0].o, (23)) = (jint(1));
	ARRAY_ACCESS(jbyte, sp[0].o, (24)) = (jint(0));
	frame[0].o = sp[0].o;
	LINE_NUMBER(8);
	sp[0].o = (jobject) createArray(ctx, &class_int, (18));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (15);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (37);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (52);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (75);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (105);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (127);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (142);
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (165);
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (195);
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (217);
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (232);
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (255);
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (285);
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (307);
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (322);
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (345);
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (370);
	frame[1].o = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject) createArray(ctx, &class_int, (16));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (6);
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(3));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(4));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(5));
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(1));
	frame[1].o = sp[0].o;
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Arrowpaint[] {
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
	{ "imgId", getArrayClass(&class_int, 1), offsetof(nro_Arrowpaint, F_imgId), "[I", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Arrowpaint, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_nro_Arrowpaint, 0, "()V", 8 },
};

Class class_nro_Arrowpaint{
		.nativeName = (intptr_t) "nro/Arrowpaint",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Arrowpaint),
		.classVtable = (intptr_t) vtable_nro_Arrowpaint,
		.staticInitializer = (intptr_t) clinit_nro_Arrowpaint,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Arrowpaint,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Arrowpaint = registerClass(&class_nro_Arrowpaint);

}

