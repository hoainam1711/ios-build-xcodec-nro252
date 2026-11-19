#include "nro/MapTemplate.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/MapTemplate.h"

extern "C" {

jobject SF_nro_MapTemplate_tmw;
jobject SF_nro_MapTemplate_tmh;
jobject SF_nro_MapTemplate_pxw;
jobject SF_nro_MapTemplate_pxh;
jobject SF_nro_MapTemplate_maps;
jobject SF_nro_MapTemplate_types;
jobject SF_nro_MapTemplate_vCurrItem;

void mark_nro_MapTemplate(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_MapTemplate_tmw)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MapTemplate_tmw)->clazz)->markFunction)((jobject) SF_nro_MapTemplate_tmw, mark, depth + 1);
		if (SF_nro_MapTemplate_tmh)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MapTemplate_tmh)->clazz)->markFunction)((jobject) SF_nro_MapTemplate_tmh, mark, depth + 1);
		if (SF_nro_MapTemplate_pxw)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MapTemplate_pxw)->clazz)->markFunction)((jobject) SF_nro_MapTemplate_pxw, mark, depth + 1);
		if (SF_nro_MapTemplate_pxh)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MapTemplate_pxh)->clazz)->markFunction)((jobject) SF_nro_MapTemplate_pxh, mark, depth + 1);
		if (SF_nro_MapTemplate_maps)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MapTemplate_maps)->clazz)->markFunction)((jobject) SF_nro_MapTemplate_maps, mark, depth + 1);
		if (SF_nro_MapTemplate_types)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MapTemplate_types)->clazz)->markFunction)((jobject) SF_nro_MapTemplate_types, mark, depth + 1);
		if (SF_nro_MapTemplate_vCurrItem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MapTemplate_vCurrItem)->clazz)->markFunction)((jobject) SF_nro_MapTemplate_vCurrItem, mark, depth + 1);
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
	auto self = (nro_MapTemplate *) object;
}

void init_nro_MapTemplate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MapTemplate:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MapTemplate(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_nro_MapTemplate(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MapTemplate:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MapTemplate(ctx);
	{
	LINE_NUMBER(4);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	clinit_nro_MapTemplate(ctx);
	SF_nro_MapTemplate_tmw = sp[0].o;
	LINE_NUMBER(5);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	clinit_nro_MapTemplate(ctx);
	SF_nro_MapTemplate_tmh = sp[0].o;
	LINE_NUMBER(6);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	clinit_nro_MapTemplate(ctx);
	SF_nro_MapTemplate_pxw = sp[0].o;
	LINE_NUMBER(7);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	clinit_nro_MapTemplate(ctx);
	SF_nro_MapTemplate_pxh = sp[0].o;
	LINE_NUMBER(8);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(3)));
	clinit_nro_MapTemplate(ctx);
	SF_nro_MapTemplate_maps = sp[0].o;
	LINE_NUMBER(9);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(3)));
	clinit_nro_MapTemplate(ctx);
	SF_nro_MapTemplate_types = sp[0].o;
	LINE_NUMBER(10);
	sp[0].o = (jobject)createArray(ctx, &class_nro_MyVector, (jint(3)));
	clinit_nro_MapTemplate(ctx);
	SF_nro_MapTemplate_vCurrItem = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_MapTemplate[] {
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
	{ "tmw", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_MapTemplate_tmw, "[I", 9 },
	{ "tmh", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_MapTemplate_tmh, "[I", 9 },
	{ "pxw", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_MapTemplate_pxw, "[I", 9 },
	{ "pxh", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_MapTemplate_pxh, "[I", 9 },
	{ "maps", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_MapTemplate_maps, "[[I", 9 },
	{ "types", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_MapTemplate_types, "[[I", 9 },
	{ "vCurrItem", getArrayClass(&class_nro_MyVector, 1), (intptr_t) &SF_nro_MapTemplate_vCurrItem, "[Lnro/MyVector;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MapTemplate, 0, "()V", 1 },
	{ "<clinit>", (intptr_t) clinit_nro_MapTemplate, 0, "()V", 8 },
};

Class class_nro_MapTemplate{
		.nativeName = (intptr_t) "nro/MapTemplate",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_MapTemplate),
		.classVtable = (intptr_t) vtable_nro_MapTemplate,
		.staticInitializer = (intptr_t) clinit_nro_MapTemplate,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MapTemplate,
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
static bool registered_nro_MapTemplate = registerClass(&class_nro_MapTemplate);

}

