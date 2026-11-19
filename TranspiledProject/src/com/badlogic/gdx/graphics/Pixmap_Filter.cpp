#include "com/badlogic/gdx/graphics/Pixmap_Filter.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/Pixmap_Filter.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/Pixmap.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_Pixmap$Filter_NearestNeighbour;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear;
jobject SF_com_badlogic_gdx_graphics_Pixmap$Filter_$VALUES;

void mark_com_badlogic_gdx_graphics_Pixmap$Filter(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_Pixmap$Filter_NearestNeighbour)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Filter_NearestNeighbour)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Filter_NearestNeighbour, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_Pixmap$Filter_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Filter_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_Pixmap$Filter_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_Pixmap$Filter *) object;
}

jobject SM_com_badlogic_gdx_graphics_Pixmap$Filter_values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Filter(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Filter:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	{
	LINE_NUMBER(89);
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_Pixmap$Filter, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Pixmap$Filter_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Pixmap$Filter(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Filter:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_Pixmap$Filter)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Filter, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_Pixmap$Filter_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Filter:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(89);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_Pixmap$Filter_$values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Filter(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Filter:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Filter, (jint(2)));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_NearestNeighbour;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_Pixmap$Filter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/Pixmap$Filter:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	{
	LINE_NUMBER(90);
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Filter);
	init_com_badlogic_gdx_graphics_Pixmap$Filter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"NearestNeighbour"_j))), (jint(0)));
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Filter_NearestNeighbour = sp[0].o;
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Pixmap$Filter);
	init_com_badlogic_gdx_graphics_Pixmap$Filter_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"BiLinear"_j))), (jint(1)));
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear = sp[0].o;
	LINE_NUMBER(89);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_Pixmap$Filter_$values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	clinit_com_badlogic_gdx_graphics_Pixmap$Filter(ctx);
	SF_com_badlogic_gdx_graphics_Pixmap$Filter_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_Pixmap$Filter[] {
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
	{ "NearestNeighbour", &class_com_badlogic_gdx_graphics_Pixmap$Filter, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Filter_NearestNeighbour, "Lcom/badlogic/gdx/graphics/Pixmap$Filter;", 16409 },
	{ "BiLinear", &class_com_badlogic_gdx_graphics_Pixmap$Filter, (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Filter_BiLinear, "Lcom/badlogic/gdx/graphics/Pixmap$Filter;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_Pixmap$Filter, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_Pixmap$Filter_$VALUES, "[Lcom/badlogic/gdx/graphics/Pixmap$Filter;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Filter_values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Filter, 0, "()[Lcom/badlogic/gdx/graphics/Pixmap$Filter;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Filter_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_Pixmap$Filter, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Pixmap$Filter;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_Pixmap$Filter_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_Pixmap$Filter_$values_R_Array1_com_badlogic_gdx_graphics_Pixmap$Filter, 0, "()[Lcom/badlogic/gdx/graphics/Pixmap$Filter;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_Pixmap$Filter, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_Pixmap$Filter{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/Pixmap$Filter",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_Pixmap$Filter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_Pixmap$Filter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_Pixmap$Filter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_Pixmap$Filter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_Pixmap,
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
static bool registered_com_badlogic_gdx_graphics_Pixmap$Filter = registerClass(&class_com_badlogic_gdx_graphics_Pixmap$Filter);

}

