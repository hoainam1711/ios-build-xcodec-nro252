#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer_ShapeType.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer_ShapeType.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Point;
jobject SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
jobject SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
jobject SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$VALUES;

void mark_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Point)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Point)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Point, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType *) object;
}

jobject SM_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_values_R_Array1_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	{
	LINE_NUMBER(81);
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(86);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	LINE_NUMBER(87);
	((com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType *) NULL_CHECK((frame[0].o)))->F_glType = (frame[3].i);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_getGlType_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType:getGlType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType *) NULL_CHECK((frame[0].o)))->F_glType);
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$values_R_Array1_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, (jint(3)));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Point;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[5];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	{
	LINE_NUMBER(82);
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType);
	init_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Point"_j))), (jint(0)), (jint(0)));
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Point = sp[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType);
	init_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Line"_j))), (jint(1)), (jint(1)));
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line = sp[0].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType);
	init_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_java_lang_String_int_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Filled"_j))), (jint(2)), (jint(4)));
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled = sp[0].o;
	LINE_NUMBER(81);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$values_R_Array1_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType[] {
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
	(void *) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_getGlType_R_int,
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
	{ "getGlType", "()I" },
};

static FieldMetadata fields[] {
	{ "Point", &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Point, "Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 16409 },
	{ "Line", &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line, "Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 16409 },
	{ "Filled", &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Filled, "Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 16409 },
	{ "glType", &class_int, offsetof(com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, F_glType), "I", 18 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$VALUES, "[Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_values_R_Array1_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, 0, "()[Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_java_lang_String_int_int, 0, "(Ljava/lang/String;II)V", 2 },
	{ "getGlType", (intptr_t) M_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_getGlType_R_int, VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_getGlType_R_int, "()I", 1 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_$values_R_Array1_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, 0, "()[Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/glutils/ShapeRenderer$ShapeType",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 6,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType = registerClass(&class_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType);

}

