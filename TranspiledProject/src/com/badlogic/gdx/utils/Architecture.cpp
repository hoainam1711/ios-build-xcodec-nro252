#include "com/badlogic/gdx/utils/Architecture.h"
#include "com/badlogic/gdx/utils/Architecture.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Architecture_Bitness.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_Architecture_x86;
jobject SF_com_badlogic_gdx_utils_Architecture_ARM;
jobject SF_com_badlogic_gdx_utils_Architecture_RISCV;
jobject SF_com_badlogic_gdx_utils_Architecture_LOONGARCH;
jobject SF_com_badlogic_gdx_utils_Architecture_$VALUES;

void mark_com_badlogic_gdx_utils_Architecture(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_Architecture_x86)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Architecture_x86)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Architecture_x86, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Architecture_ARM)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Architecture_ARM)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Architecture_ARM, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Architecture_RISCV)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Architecture_RISCV)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Architecture_RISCV, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Architecture_LOONGARCH)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Architecture_LOONGARCH)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Architecture_LOONGARCH, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Architecture_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Architecture_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Architecture_$VALUES, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_java_lang_Enum(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_utils_Architecture *) object;
}

jobject SM_com_badlogic_gdx_utils_Architecture_values_R_Array1_com_badlogic_gdx_utils_Architecture(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Architecture:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	{
	LINE_NUMBER(3);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_utils_Architecture, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Architecture_valueOf_java_lang_String_R_com_badlogic_gdx_utils_Architecture(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Architecture:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(3);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_utils_Architecture)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_utils_Architecture, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Architecture_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Architecture:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(3);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Architecture_toSuffix_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Architecture:toSuffix", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(7);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_x86;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(8);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Architecture_name_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Architecture_name_R_java_lang_String])(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_Architecture(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Architecture:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	{
	LINE_NUMBER(4);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Architecture);
	init_com_badlogic_gdx_utils_Architecture_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"x86"_j))), (jint(0)));
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	SF_com_badlogic_gdx_utils_Architecture_x86 = sp[0].o;
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Architecture);
	init_com_badlogic_gdx_utils_Architecture_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"ARM"_j))), (jint(1)));
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	SF_com_badlogic_gdx_utils_Architecture_ARM = sp[0].o;
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Architecture);
	init_com_badlogic_gdx_utils_Architecture_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"RISCV"_j))), (jint(2)));
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	SF_com_badlogic_gdx_utils_Architecture_RISCV = sp[0].o;
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Architecture);
	init_com_badlogic_gdx_utils_Architecture_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LOONGARCH"_j))), (jint(3)));
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	SF_com_badlogic_gdx_utils_Architecture_LOONGARCH = sp[0].o;
	LINE_NUMBER(3);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_Architecture, (jint(4)));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_x86;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_ARM;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_RISCV;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Architecture_LOONGARCH;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	clinit_com_badlogic_gdx_utils_Architecture(ctx);
	SF_com_badlogic_gdx_utils_Architecture_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Architecture[] {
	(void *) M_java_lang_Enum_hashCode_R_int,
	(void *) M_java_lang_Enum_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Enum_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Enum_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Object_R_int,
	(void *) M_java_lang_Enum_compareTo_java_lang_Enum_R_int,
	(void *) M_java_lang_Enum_name_R_java_lang_String,
	(void *) M_java_lang_Enum_ordinal_R_int,
	(void *) M_java_lang_Enum_getDeclaringClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_utils_Architecture_toSuffix_R_java_lang_String,
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
	{ "compareTo", "(Ljava/lang/Object;)I" },
	{ "compareTo", "(Ljava/lang/Enum;)I" },
	{ "name", "()Ljava/lang/String;" },
	{ "ordinal", "()I" },
	{ "getDeclaringClass", "()Ljava/lang/Class;" },
	{ "toSuffix", "()Ljava/lang/String;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_Architecture$Bitness,
};

static FieldMetadata fields[] {
	{ "x86", &class_com_badlogic_gdx_utils_Architecture, (intptr_t) &SF_com_badlogic_gdx_utils_Architecture_x86, "Lcom/badlogic/gdx/utils/Architecture;", 16409 },
	{ "ARM", &class_com_badlogic_gdx_utils_Architecture, (intptr_t) &SF_com_badlogic_gdx_utils_Architecture_ARM, "Lcom/badlogic/gdx/utils/Architecture;", 16409 },
	{ "RISCV", &class_com_badlogic_gdx_utils_Architecture, (intptr_t) &SF_com_badlogic_gdx_utils_Architecture_RISCV, "Lcom/badlogic/gdx/utils/Architecture;", 16409 },
	{ "LOONGARCH", &class_com_badlogic_gdx_utils_Architecture, (intptr_t) &SF_com_badlogic_gdx_utils_Architecture_LOONGARCH, "Lcom/badlogic/gdx/utils/Architecture;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_utils_Architecture, 1), (intptr_t) &SF_com_badlogic_gdx_utils_Architecture_$VALUES, "[Lcom/badlogic/gdx/utils/Architecture;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_utils_Architecture_values_R_Array1_com_badlogic_gdx_utils_Architecture, 0, "()[Lcom/badlogic/gdx/utils/Architecture;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_utils_Architecture_valueOf_java_lang_String_R_com_badlogic_gdx_utils_Architecture, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Architecture;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Architecture_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "toSuffix", (intptr_t) M_com_badlogic_gdx_utils_Architecture_toSuffix_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Architecture_toSuffix_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_Architecture, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_Architecture{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Architecture",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_utils_Architecture),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Architecture,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Architecture,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Architecture,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Architecture = registerClass(&class_com_badlogic_gdx_utils_Architecture);

}

