#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/TextureData_TextureDataType.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/TextureData.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap;
jobject SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom;
jobject SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_$VALUES;

void mark_com_badlogic_gdx_graphics_TextureData$TextureDataType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_TextureData$TextureDataType *) object;
}

jobject SM_com_badlogic_gdx_graphics_TextureData$TextureDataType_values_R_Array1_com_badlogic_gdx_graphics_TextureData$TextureDataType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/TextureData$TextureDataType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	{
	LINE_NUMBER(45);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_TextureData$TextureDataType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_TextureData$TextureDataType_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_TextureData$TextureDataType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/TextureData$TextureDataType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_TextureData$TextureDataType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_TextureData$TextureDataType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_TextureData$TextureDataType_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/TextureData$TextureDataType:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(45);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_TextureData$TextureDataType_$values_R_Array1_com_badlogic_gdx_graphics_TextureData$TextureDataType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/TextureData$TextureDataType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	{
	LINE_NUMBER(45);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_TextureData$TextureDataType, (jint(2)));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/TextureData$TextureDataType:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	{
	LINE_NUMBER(46);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_TextureData$TextureDataType);
	init_com_badlogic_gdx_graphics_TextureData$TextureDataType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Pixmap"_j))), (jint(0)));
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap = sp[0].o;
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_TextureData$TextureDataType);
	init_com_badlogic_gdx_graphics_TextureData$TextureDataType_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Custom"_j))), (jint(1)));
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom = sp[0].o;
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_TextureData$TextureDataType_$values_R_Array1_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType(ctx);
	SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_TextureData$TextureDataType[] {
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
	{ "Pixmap", &class_com_badlogic_gdx_graphics_TextureData$TextureDataType, (intptr_t) &SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Pixmap, "Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 16409 },
	{ "Custom", &class_com_badlogic_gdx_graphics_TextureData$TextureDataType, (intptr_t) &SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_Custom, "Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_TextureData$TextureDataType, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_TextureData$TextureDataType_$VALUES, "[Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_TextureData$TextureDataType_values_R_Array1_com_badlogic_gdx_graphics_TextureData$TextureDataType, 0, "()[Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_TextureData$TextureDataType_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_TextureData$TextureDataType, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_TextureData$TextureDataType_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_TextureData$TextureDataType_$values_R_Array1_com_badlogic_gdx_graphics_TextureData$TextureDataType, 0, "()[Lcom/badlogic/gdx/graphics/TextureData$TextureDataType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_TextureData$TextureDataType{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/TextureData$TextureDataType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_TextureData$TextureDataType),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_TextureData$TextureDataType,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_TextureData$TextureDataType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_TextureData$TextureDataType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_TextureData,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_TextureData$TextureDataType = registerClass(&class_com_badlogic_gdx_graphics_TextureData$TextureDataType);

}

