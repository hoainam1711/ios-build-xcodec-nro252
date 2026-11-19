#include "com/badlogic/gdx/utils/Os.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Os.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_Os_Windows;
jobject SF_com_badlogic_gdx_utils_Os_Linux;
jobject SF_com_badlogic_gdx_utils_Os_MacOsX;
jobject SF_com_badlogic_gdx_utils_Os_Android;
jobject SF_com_badlogic_gdx_utils_Os_IOS;
jobject SF_com_badlogic_gdx_utils_Os_$VALUES;

void mark_com_badlogic_gdx_utils_Os(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_Os_Windows)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Os_Windows)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Os_Windows, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Os_Linux)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Os_Linux)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Os_Linux, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Os_MacOsX)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Os_MacOsX)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Os_MacOsX, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Os_Android)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Os_Android)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Os_Android, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Os_IOS)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Os_IOS)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Os_IOS, mark, depth + 1);
		if (SF_com_badlogic_gdx_utils_Os_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Os_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Os_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_Os *) object;
}

jobject SM_com_badlogic_gdx_utils_Os_values_R_Array1_com_badlogic_gdx_utils_Os(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Os:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Os(ctx);
	{
	LINE_NUMBER(4);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Os_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_utils_Os, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Os_valueOf_java_lang_String_R_com_badlogic_gdx_utils_Os(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Os:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Os(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(4);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_utils_Os)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_utils_Os, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Os_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Os:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Os(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(4);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Os_getJniPlatform_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Os:getJniPlatform", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(8);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Windows;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"win32"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(9);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Linux;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"linux"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(10);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_MacOsX;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"mac"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(11);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Os_getLibPrefix_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Os:getLibPrefix", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(15);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Linux;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Android;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_MacOsX;
	if (sp[0].o != sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(16);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"lib"_j)));
	}
label_2:;
	{
	LINE_NUMBER(18);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Os_getLibExtension_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Os:getLibExtension", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(22);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Windows;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"dll"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(23);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Linux;
	if (sp[0].o != sp[1].o) goto label_2;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"so"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(24);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_MacOsX;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"dylib"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(25);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Android;
	if (sp[0].o != sp[1].o) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"so"_j));
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(26);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_utils_Os(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Os:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Os(ctx);
	{
	LINE_NUMBER(5);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Os);
	init_com_badlogic_gdx_utils_Os_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Windows"_j))), (jint(0)));
	clinit_com_badlogic_gdx_utils_Os(ctx);
	SF_com_badlogic_gdx_utils_Os_Windows = sp[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Os);
	init_com_badlogic_gdx_utils_Os_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Linux"_j))), (jint(1)));
	clinit_com_badlogic_gdx_utils_Os(ctx);
	SF_com_badlogic_gdx_utils_Os_Linux = sp[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Os);
	init_com_badlogic_gdx_utils_Os_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"MacOsX"_j))), (jint(2)));
	clinit_com_badlogic_gdx_utils_Os(ctx);
	SF_com_badlogic_gdx_utils_Os_MacOsX = sp[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Os);
	init_com_badlogic_gdx_utils_Os_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Android"_j))), (jint(3)));
	clinit_com_badlogic_gdx_utils_Os(ctx);
	SF_com_badlogic_gdx_utils_Os_Android = sp[0].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Os);
	init_com_badlogic_gdx_utils_Os_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"IOS"_j))), (jint(4)));
	clinit_com_badlogic_gdx_utils_Os(ctx);
	SF_com_badlogic_gdx_utils_Os_IOS = sp[0].o;
	LINE_NUMBER(4);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_utils_Os, (jint(5)));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Windows;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Linux;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_MacOsX;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_Android;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_utils_Os(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_utils_Os_IOS;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	clinit_com_badlogic_gdx_utils_Os(ctx);
	SF_com_badlogic_gdx_utils_Os_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Os[] {
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
	(void *) M_com_badlogic_gdx_utils_Os_getJniPlatform_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Os_getLibPrefix_R_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Os_getLibExtension_R_java_lang_String,
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
	{ "getJniPlatform", "()Ljava/lang/String;" },
	{ "getLibPrefix", "()Ljava/lang/String;" },
	{ "getLibExtension", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "Windows", &class_com_badlogic_gdx_utils_Os, (intptr_t) &SF_com_badlogic_gdx_utils_Os_Windows, "Lcom/badlogic/gdx/utils/Os;", 16409 },
	{ "Linux", &class_com_badlogic_gdx_utils_Os, (intptr_t) &SF_com_badlogic_gdx_utils_Os_Linux, "Lcom/badlogic/gdx/utils/Os;", 16409 },
	{ "MacOsX", &class_com_badlogic_gdx_utils_Os, (intptr_t) &SF_com_badlogic_gdx_utils_Os_MacOsX, "Lcom/badlogic/gdx/utils/Os;", 16409 },
	{ "Android", &class_com_badlogic_gdx_utils_Os, (intptr_t) &SF_com_badlogic_gdx_utils_Os_Android, "Lcom/badlogic/gdx/utils/Os;", 16409 },
	{ "IOS", &class_com_badlogic_gdx_utils_Os, (intptr_t) &SF_com_badlogic_gdx_utils_Os_IOS, "Lcom/badlogic/gdx/utils/Os;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_utils_Os, 1), (intptr_t) &SF_com_badlogic_gdx_utils_Os_$VALUES, "[Lcom/badlogic/gdx/utils/Os;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_utils_Os_values_R_Array1_com_badlogic_gdx_utils_Os, 0, "()[Lcom/badlogic/gdx/utils/Os;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_utils_Os_valueOf_java_lang_String_R_com_badlogic_gdx_utils_Os, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Os;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Os_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "getJniPlatform", (intptr_t) M_com_badlogic_gdx_utils_Os_getJniPlatform_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Os_getJniPlatform_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getLibPrefix", (intptr_t) M_com_badlogic_gdx_utils_Os_getLibPrefix_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Os_getLibPrefix_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getLibExtension", (intptr_t) M_com_badlogic_gdx_utils_Os_getLibExtension_R_java_lang_String, VTABLE_com_badlogic_gdx_utils_Os_getLibExtension_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_utils_Os, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_utils_Os{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Os",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_utils_Os),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Os,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Os,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Os,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16433,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 7,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Os = registerClass(&class_com_badlogic_gdx_utils_Os);

}

