#include "nro/ItemTemplates.h"
#include "java/lang/Short.h"
#include "java/lang/Object.h"
#include "java/util/Hashtable.h"
#include "java/lang/String.h"
#include "nro/mHashTable.h"
#include "nro/ItemTemplate.h"
#include "nro/ItemTemplates.h"

extern "C" {

jobject SF_nro_ItemTemplates_itemTemplates;

void mark_nro_ItemTemplates(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ItemTemplates_itemTemplates)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ItemTemplates_itemTemplates)->clazz)->markFunction)((jobject) SF_nro_ItemTemplates_itemTemplates, mark, depth + 1);
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
	auto self = (nro_ItemTemplates *) object;
}

void init_nro_ItemTemplates(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTemplates:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTemplates(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(3);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_ItemTemplates_add_nro_ItemTemplate(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTemplates:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTemplates(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(7);
	clinit_nro_ItemTemplates(ctx);
	sp[0].o = (jobject)SF_nro_ItemTemplates_itemTemplates;
	sp[1].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, ((jint)((nro_ItemTemplate *) NULL_CHECK((frame[0].o)))->F_id));
	sp[0].o = (jobject)((func_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[0].o));
	LINE_NUMBER(8);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate(jcontext ctx, jshort param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTemplates:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTemplates(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(11);
	clinit_nro_ItemTemplates(ctx);
	sp[0].o = (jobject)SF_nro_ItemTemplates_itemTemplates;
	sp[1].o = (jobject)SM_java_lang_Short_valueOf_short_R_java_lang_Short(ctx, (frame[0].i));
	sp[0].o = (jobject)((func_nro_mHashTable_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_mHashTable_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_nro_ItemTemplate, sp[0].o));
	}

	popStackFrame(ctx);
}

void clinit_nro_ItemTemplates(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemTemplates:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemTemplates(ctx);
	{
	LINE_NUMBER(4);
	clinit_nro_mHashTable(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_mHashTable);
	init_nro_mHashTable_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"item template"_j))));
	clinit_nro_ItemTemplates(ctx);
	SF_nro_ItemTemplates_itemTemplates = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ItemTemplates[] {
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
	{ "itemTemplates", &class_nro_mHashTable, (intptr_t) &SF_nro_ItemTemplates_itemTemplates, "Lnro/mHashTable;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ItemTemplates, 0, "()V", 1 },
	{ "add", (intptr_t) SM_nro_ItemTemplates_add_nro_ItemTemplate, 0, "(Lnro/ItemTemplate;)V", 9 },
	{ "get", (intptr_t) SM_nro_ItemTemplates_get_short_R_nro_ItemTemplate, 0, "(S)Lnro/ItemTemplate;", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_ItemTemplates, 0, "()V", 8 },
};

Class class_nro_ItemTemplates{
		.nativeName = (intptr_t) "nro/ItemTemplates",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ItemTemplates),
		.classVtable = (intptr_t) vtable_nro_ItemTemplates,
		.staticInitializer = (intptr_t) clinit_nro_ItemTemplates,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ItemTemplates,
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
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ItemTemplates = registerClass(&class_nro_ItemTemplates);

}

