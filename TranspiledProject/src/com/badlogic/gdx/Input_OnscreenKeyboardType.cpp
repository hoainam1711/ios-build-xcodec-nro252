#include "com/badlogic/gdx/Input_OnscreenKeyboardType.h"
#include "com/badlogic/gdx/Input.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Input_OnscreenKeyboardType.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default;
jobject SF_com_badlogic_gdx_Input$OnscreenKeyboardType_NumberPad;
jobject SF_com_badlogic_gdx_Input$OnscreenKeyboardType_PhonePad;
jobject SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Email;
jobject SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password;
jobject SF_com_badlogic_gdx_Input$OnscreenKeyboardType_URI;
jobject SF_com_badlogic_gdx_Input$OnscreenKeyboardType_$VALUES;

void mark_com_badlogic_gdx_Input$OnscreenKeyboardType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$OnscreenKeyboardType_NumberPad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_NumberPad)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_NumberPad, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$OnscreenKeyboardType_PhonePad)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_PhonePad)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_PhonePad, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Email)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Email)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Email, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$OnscreenKeyboardType_URI)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_URI)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_URI, mark, depth + 1);
		if (SF_com_badlogic_gdx_Input$OnscreenKeyboardType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Input$OnscreenKeyboardType_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_Input$OnscreenKeyboardType *) object;
}

jobject SM_com_badlogic_gdx_Input$OnscreenKeyboardType_values_R_Array1_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$OnscreenKeyboardType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	{
	LINE_NUMBER(848);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_Input$OnscreenKeyboardType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_Input$OnscreenKeyboardType_valueOf_java_lang_String_R_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$OnscreenKeyboardType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_Input$OnscreenKeyboardType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_Input$OnscreenKeyboardType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_Input$OnscreenKeyboardType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$OnscreenKeyboardType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(848);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_Input$OnscreenKeyboardType_$values_R_Array1_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$OnscreenKeyboardType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	{
	LINE_NUMBER(848);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_Input$OnscreenKeyboardType, (6));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_NumberPad;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_PhonePad;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Email;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Input$OnscreenKeyboardType_URI;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Input$OnscreenKeyboardType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	{
	LINE_NUMBER(849);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$OnscreenKeyboardType);
	init_com_badlogic_gdx_Input$OnscreenKeyboardType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Default"_j))), (jint(0)));
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default = sp[0].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$OnscreenKeyboardType);
	init_com_badlogic_gdx_Input$OnscreenKeyboardType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NumberPad"_j))), (jint(1)));
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	SF_com_badlogic_gdx_Input$OnscreenKeyboardType_NumberPad = sp[0].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$OnscreenKeyboardType);
	init_com_badlogic_gdx_Input$OnscreenKeyboardType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"PhonePad"_j))), (jint(2)));
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	SF_com_badlogic_gdx_Input$OnscreenKeyboardType_PhonePad = sp[0].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$OnscreenKeyboardType);
	init_com_badlogic_gdx_Input$OnscreenKeyboardType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Email"_j))), (jint(3)));
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Email = sp[0].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$OnscreenKeyboardType);
	init_com_badlogic_gdx_Input$OnscreenKeyboardType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Password"_j))), (jint(4)));
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password = sp[0].o;
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Input$OnscreenKeyboardType);
	init_com_badlogic_gdx_Input$OnscreenKeyboardType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"URI"_j))), (jint(5)));
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	SF_com_badlogic_gdx_Input$OnscreenKeyboardType_URI = sp[0].o;
	LINE_NUMBER(848);
	sp[0].o = (jobject)SM_com_badlogic_gdx_Input$OnscreenKeyboardType_$values_R_Array1_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	clinit_com_badlogic_gdx_Input$OnscreenKeyboardType(ctx);
	SF_com_badlogic_gdx_Input$OnscreenKeyboardType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Input$OnscreenKeyboardType[] {
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
};

static FieldMetadata fields[] {
	{ "Default", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, (intptr_t) &SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Default, "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 16409 },
	{ "NumberPad", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, (intptr_t) &SF_com_badlogic_gdx_Input$OnscreenKeyboardType_NumberPad, "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 16409 },
	{ "PhonePad", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, (intptr_t) &SF_com_badlogic_gdx_Input$OnscreenKeyboardType_PhonePad, "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 16409 },
	{ "Email", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, (intptr_t) &SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Email, "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 16409 },
	{ "Password", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, (intptr_t) &SF_com_badlogic_gdx_Input$OnscreenKeyboardType_Password, "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 16409 },
	{ "URI", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, (intptr_t) &SF_com_badlogic_gdx_Input$OnscreenKeyboardType_URI, "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_Input$OnscreenKeyboardType, 1), (intptr_t) &SF_com_badlogic_gdx_Input$OnscreenKeyboardType_$VALUES, "[Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_Input$OnscreenKeyboardType_values_R_Array1_com_badlogic_gdx_Input$OnscreenKeyboardType, 0, "()[Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_Input$OnscreenKeyboardType_valueOf_java_lang_String_R_com_badlogic_gdx_Input$OnscreenKeyboardType, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Input$OnscreenKeyboardType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_Input$OnscreenKeyboardType_$values_R_Array1_com_badlogic_gdx_Input$OnscreenKeyboardType, 0, "()[Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_Input$OnscreenKeyboardType, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_Input$OnscreenKeyboardType{
		.nativeName = (intptr_t) "com/badlogic/gdx/Input$OnscreenKeyboardType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_Input$OnscreenKeyboardType),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Input$OnscreenKeyboardType,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Input$OnscreenKeyboardType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Input$OnscreenKeyboardType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Input,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Input$OnscreenKeyboardType = registerClass(&class_com_badlogic_gdx_Input$OnscreenKeyboardType);

}

