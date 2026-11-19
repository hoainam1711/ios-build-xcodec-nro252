#include "nro/ItemOption.h"
#include "nro/GameScr.h"
#include "nro/ItemOptionTemplate.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/ItemOption.h"
#include "nro/NinjaUtil.h"

extern "C" {


void mark_nro_ItemOption(jobject object, jint mark, jint depth) {
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
	auto self = (nro_ItemOption *) object;
	if (self->F_optionTemplate)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_optionTemplate)->clazz)->markFunction)((jobject) self->F_optionTemplate, mark, depth + 1);
}

void clinit_nro_ItemOption(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_ItemOption(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemOption:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemOption(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(8);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(9);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_nro_ItemOption_int_int(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemOption:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ItemOption(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	if ((frame[1].i) != (22)) goto label_2;
	}
	{
	LINE_NUMBER(13);
	frame[1].i = (6);
	LINE_NUMBER(14);
	frame[2].i = ((frame[2].i) * (1000));
	}
label_2:;
	{
	LINE_NUMBER(17);
	if ((frame[1].i) != (23)) goto label_5;
	}
	{
	LINE_NUMBER(18);
	frame[1].i = (7);
	LINE_NUMBER(19);
	frame[2].i = ((frame[2].i) * (1000));
	}
label_5:;
	{
	LINE_NUMBER(22);
	((nro_ItemOption *) NULL_CHECK((frame[0].o)))->F_param = (frame[2].i);
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[1].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[1].o))->F_iOptionTemplates;
	((nro_ItemOption *) NULL_CHECK(sp[0].o))->F_optionTemplate = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i)));
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_ItemOption_getOptionString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ItemOption:getOptionString", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((nro_ItemOption *) NULL_CHECK((frame[0].o)))->F_optionTemplate;
	sp[0].o = (jobject)((nro_ItemOptionTemplate *) NULL_CHECK(sp[0].o))->F_name;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"#"_j));
	sp[2].o = (jobject)SM_java_lang_String_valueOf_int_R_java_lang_String(ctx, ((jint)((nro_ItemOption *) NULL_CHECK((frame[0].o)))->F_param));
	sp[0].o = (jobject)SM_nro_NinjaUtil_replace_java_lang_String_java_lang_String_java_lang_String_R_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ItemOption[] {
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
	(void *) M_nro_ItemOption_getOptionString_R_java_lang_String,
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
	{ "getOptionString", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "param", &class_int, offsetof(nro_ItemOption, F_param), "I", 1 },
	{ "active", &class_byte, offsetof(nro_ItemOption, F_active), "B", 1 },
	{ "optionTemplate", &class_nro_ItemOptionTemplate, offsetof(nro_ItemOption, F_optionTemplate), "Lnro/ItemOptionTemplate;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ItemOption, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_nro_ItemOption_int_int, 0, "(II)V", 1 },
	{ "getOptionString", (intptr_t) M_nro_ItemOption_getOptionString_R_java_lang_String, VTABLE_nro_ItemOption_getOptionString_R_java_lang_String, "()Ljava/lang/String;", 17 },
};

Class class_nro_ItemOption{
		.nativeName = (intptr_t) "nro/ItemOption",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ItemOption),
		.classVtable = (intptr_t) vtable_nro_ItemOption,
		.staticInitializer = (intptr_t) clinit_nro_ItemOption,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ItemOption,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ItemOption = registerClass(&class_nro_ItemOption);

}

