#include "nro/StaticObj.h"
#include "java/lang/Object.h"
#include "nro/StaticObj.h"

extern "C" {

jint SF_nro_StaticObj_TOP_CENTER;
jint SF_nro_StaticObj_TOP_RIGHT;
jint SF_nro_StaticObj_TOP_LEFT;
jint SF_nro_StaticObj_BOTTOM_HCENTER;
jint SF_nro_StaticObj_BOTTOM_LEFT;
jint SF_nro_StaticObj_VCENTER_HCENTER;
jobject SF_nro_StaticObj_SKYCOLOR;

void mark_nro_StaticObj(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_StaticObj_SKYCOLOR)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_StaticObj_SKYCOLOR)->clazz)->markFunction)((jobject) SF_nro_StaticObj_SKYCOLOR, mark, depth + 1);
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
	auto self = (nro_StaticObj *) object;
}

void init_nro_StaticObj(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/StaticObj:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_StaticObj(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_StaticObj(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/StaticObj:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_StaticObj(ctx);
	{
	LINE_NUMBER(4);
	clinit_nro_StaticObj(ctx);
	SF_nro_StaticObj_TOP_CENTER = (17);
	LINE_NUMBER(5);
	clinit_nro_StaticObj(ctx);
	SF_nro_StaticObj_TOP_RIGHT = (24);
	LINE_NUMBER(6);
	clinit_nro_StaticObj(ctx);
	SF_nro_StaticObj_TOP_LEFT = (33);
	LINE_NUMBER(7);
	clinit_nro_StaticObj(ctx);
	SF_nro_StaticObj_BOTTOM_HCENTER = (36);
	LINE_NUMBER(8);
	clinit_nro_StaticObj(ctx);
	SF_nro_StaticObj_BOTTOM_LEFT = (40);
	LINE_NUMBER(9);
	clinit_nro_StaticObj(ctx);
	SF_nro_StaticObj_VCENTER_HCENTER = (jint(3));
	LINE_NUMBER(10);
	sp[0].o = (jobject) createArray(ctx, &class_int, (17));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(1618168));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1938102));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(43488));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(16316528));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(1628316));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(3270903));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(3576979));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(6999725));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(14594155));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(8562616));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(16026508));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(1052688));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(13952747));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(15268088));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(1628316));
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(2631752));
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (jint(4079166));
	clinit_nro_StaticObj(ctx);
	SF_nro_StaticObj_SKYCOLOR = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_StaticObj[] {
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
	{ "TOP_CENTER", &class_int, (intptr_t) &SF_nro_StaticObj_TOP_CENTER, "I", 9 },
	{ "TOP_RIGHT", &class_int, (intptr_t) &SF_nro_StaticObj_TOP_RIGHT, "I", 9 },
	{ "TOP_LEFT", &class_int, (intptr_t) &SF_nro_StaticObj_TOP_LEFT, "I", 9 },
	{ "BOTTOM_HCENTER", &class_int, (intptr_t) &SF_nro_StaticObj_BOTTOM_HCENTER, "I", 9 },
	{ "BOTTOM_LEFT", &class_int, (intptr_t) &SF_nro_StaticObj_BOTTOM_LEFT, "I", 9 },
	{ "VCENTER_HCENTER", &class_int, (intptr_t) &SF_nro_StaticObj_VCENTER_HCENTER, "I", 9 },
	{ "SKYCOLOR", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_StaticObj_SKYCOLOR, "[I", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_StaticObj, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_nro_StaticObj, 0, "()V", 8 },
};

Class class_nro_StaticObj{
		.nativeName = (intptr_t) "nro/StaticObj",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_StaticObj),
		.classVtable = (intptr_t) vtable_nro_StaticObj,
		.staticInitializer = (intptr_t) clinit_nro_StaticObj,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_StaticObj,
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
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_StaticObj = registerClass(&class_nro_StaticObj);

}

