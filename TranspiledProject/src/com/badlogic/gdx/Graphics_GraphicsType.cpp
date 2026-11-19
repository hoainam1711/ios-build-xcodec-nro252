#include "com/badlogic/gdx/Graphics_GraphicsType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Graphics.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/Graphics_GraphicsType.h"

extern "C" {

jobject SF_com_badlogic_gdx_Graphics$GraphicsType_AndroidGL;
jobject SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL;
jobject SF_com_badlogic_gdx_Graphics$GraphicsType_WebGL;
jobject SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL;
jobject SF_com_badlogic_gdx_Graphics$GraphicsType_JGLFW;
jobject SF_com_badlogic_gdx_Graphics$GraphicsType_Mock;
jobject SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL3;
jobject SF_com_badlogic_gdx_Graphics$GraphicsType_$VALUES;

void mark_com_badlogic_gdx_Graphics$GraphicsType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_Graphics$GraphicsType_AndroidGL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_AndroidGL)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_AndroidGL, mark, depth + 1);
		if (SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL, mark, depth + 1);
		if (SF_com_badlogic_gdx_Graphics$GraphicsType_WebGL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_WebGL)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_WebGL, mark, depth + 1);
		if (SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL, mark, depth + 1);
		if (SF_com_badlogic_gdx_Graphics$GraphicsType_JGLFW)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_JGLFW)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_JGLFW, mark, depth + 1);
		if (SF_com_badlogic_gdx_Graphics$GraphicsType_Mock)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_Mock)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_Mock, mark, depth + 1);
		if (SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL3)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL3)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL3, mark, depth + 1);
		if (SF_com_badlogic_gdx_Graphics$GraphicsType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_Graphics$GraphicsType_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_Graphics$GraphicsType *) object;
}

jobject SM_com_badlogic_gdx_Graphics$GraphicsType_values_R_Array1_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Graphics$GraphicsType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	{
	LINE_NUMBER(54);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_Graphics$GraphicsType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_Graphics$GraphicsType_valueOf_java_lang_String_R_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Graphics$GraphicsType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_Graphics$GraphicsType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Graphics$GraphicsType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(54);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_Graphics$GraphicsType_$values_R_Array1_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Graphics$GraphicsType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType, (7));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_AndroidGL;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_WebGL;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL;
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_JGLFW;
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	jint temp5 = jint(5);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_Mock;
	ARRAY_ACCESS(jobject, sp[0].o, temp5) = sp[1].o;
	jint temp6 = 6;
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL3;
	ARRAY_ACCESS(jobject, sp[0].o, temp6) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_Graphics$GraphicsType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/Graphics$GraphicsType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	{
	LINE_NUMBER(55);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType);
	init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"AndroidGL"_j))), (jint(0)));
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	SF_com_badlogic_gdx_Graphics$GraphicsType_AndroidGL = sp[0].o;
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType);
	init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LWJGL"_j))), (jint(1)));
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL = sp[0].o;
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType);
	init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"WebGL"_j))), (jint(2)));
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	SF_com_badlogic_gdx_Graphics$GraphicsType_WebGL = sp[0].o;
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType);
	init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"iOSGL"_j))), (jint(3)));
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL = sp[0].o;
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType);
	init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"JGLFW"_j))), (jint(4)));
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	SF_com_badlogic_gdx_Graphics$GraphicsType_JGLFW = sp[0].o;
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType);
	init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Mock"_j))), (jint(5)));
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	SF_com_badlogic_gdx_Graphics$GraphicsType_Mock = sp[0].o;
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_Graphics$GraphicsType);
	init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"LWJGL3"_j))), (6));
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL3 = sp[0].o;
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_com_badlogic_gdx_Graphics$GraphicsType_$values_R_Array1_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	clinit_com_badlogic_gdx_Graphics$GraphicsType(ctx);
	SF_com_badlogic_gdx_Graphics$GraphicsType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_Graphics$GraphicsType[] {
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
	{ "AndroidGL", &class_com_badlogic_gdx_Graphics$GraphicsType, (intptr_t) &SF_com_badlogic_gdx_Graphics$GraphicsType_AndroidGL, "Lcom/badlogic/gdx/Graphics$GraphicsType;", 16409 },
	{ "LWJGL", &class_com_badlogic_gdx_Graphics$GraphicsType, (intptr_t) &SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL, "Lcom/badlogic/gdx/Graphics$GraphicsType;", 16409 },
	{ "WebGL", &class_com_badlogic_gdx_Graphics$GraphicsType, (intptr_t) &SF_com_badlogic_gdx_Graphics$GraphicsType_WebGL, "Lcom/badlogic/gdx/Graphics$GraphicsType;", 16409 },
	{ "iOSGL", &class_com_badlogic_gdx_Graphics$GraphicsType, (intptr_t) &SF_com_badlogic_gdx_Graphics$GraphicsType_iOSGL, "Lcom/badlogic/gdx/Graphics$GraphicsType;", 16409 },
	{ "JGLFW", &class_com_badlogic_gdx_Graphics$GraphicsType, (intptr_t) &SF_com_badlogic_gdx_Graphics$GraphicsType_JGLFW, "Lcom/badlogic/gdx/Graphics$GraphicsType;", 16409 },
	{ "Mock", &class_com_badlogic_gdx_Graphics$GraphicsType, (intptr_t) &SF_com_badlogic_gdx_Graphics$GraphicsType_Mock, "Lcom/badlogic/gdx/Graphics$GraphicsType;", 16409 },
	{ "LWJGL3", &class_com_badlogic_gdx_Graphics$GraphicsType, (intptr_t) &SF_com_badlogic_gdx_Graphics$GraphicsType_LWJGL3, "Lcom/badlogic/gdx/Graphics$GraphicsType;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_Graphics$GraphicsType, 1), (intptr_t) &SF_com_badlogic_gdx_Graphics$GraphicsType_$VALUES, "[Lcom/badlogic/gdx/Graphics$GraphicsType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_Graphics$GraphicsType_values_R_Array1_com_badlogic_gdx_Graphics$GraphicsType, 0, "()[Lcom/badlogic/gdx/Graphics$GraphicsType;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_Graphics$GraphicsType_valueOf_java_lang_String_R_com_badlogic_gdx_Graphics$GraphicsType, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/Graphics$GraphicsType;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_Graphics$GraphicsType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_Graphics$GraphicsType_$values_R_Array1_com_badlogic_gdx_Graphics$GraphicsType, 0, "()[Lcom/badlogic/gdx/Graphics$GraphicsType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_Graphics$GraphicsType, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_Graphics$GraphicsType{
		.nativeName = (intptr_t) "com/badlogic/gdx/Graphics$GraphicsType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_Graphics$GraphicsType),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_Graphics$GraphicsType,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_Graphics$GraphicsType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_Graphics$GraphicsType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_Graphics,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_Graphics$GraphicsType = registerClass(&class_com_badlogic_gdx_Graphics$GraphicsType);

}

