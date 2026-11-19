#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_WrapState.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout.h"
#include "com/badlogic/gdx/graphics/g2d/GlyphLayout_WrapState.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/lang/Enum.h"
#include "java/lang/Class.h"

extern "C" {

jobject SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_notWrapped;
jobject SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped;
jobject SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped;
jobject SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$VALUES;

void mark_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_notWrapped)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_notWrapped)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_notWrapped, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped, mark, depth + 1);
		if (SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$VALUES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$VALUES)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$VALUES, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState *) object;
}

jobject SM_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_values_R_Array1_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState:values", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	{
	LINE_NUMBER(580);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$VALUES;
	sp[0].o = (jobject)((func_java_lang_Object_clone_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_clone_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, 1), sp[0].o));
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState:valueOf", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)SM_java_lang_Enum_valueOf_java_lang_Class_java_lang_String_R_java_lang_Enum(ctx, (((jobject) &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState)), (frame[0].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, sp[0].o));
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(580);
	init_java_lang_Enum_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$values_R_Array1_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState:$values", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	{
	LINE_NUMBER(580);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, (jint(3)));
	jint temp0 = jint(0);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_notWrapped;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped;
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped;
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_java_lang_Enum(ctx);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	{
	LINE_NUMBER(581);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState);
	init_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"notWrapped"_j))), (jint(0)));
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_notWrapped = sp[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState);
	init_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"wrapped"_j))), (jint(1)));
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped = sp[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState);
	init_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_java_lang_String_int(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"lastWrapped"_j))), (jint(2)));
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped = sp[0].o;
	LINE_NUMBER(580);
	sp[0].o = (jobject)SM_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$values_R_Array1_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState(ctx);
	SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$VALUES = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState[] {
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
	{ "notWrapped", &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_notWrapped, "Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;", 16409 },
	{ "wrapped", &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_wrapped, "Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;", 16409 },
	{ "lastWrapped", &class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_lastWrapped, "Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;", 16409 },
	{ "$VALUES", getArrayClass(&class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, 1), (intptr_t) &SF_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$VALUES, "[Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;", 4122 },
};

static MethodMetadata methods[] {
	{ "values", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_values_R_Array1_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, 0, "()[Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;", 9 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_valueOf_java_lang_String_R_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, 0, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;", 9 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 2 },
	{ "$values", (intptr_t) SM_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState_$values_R_Array1_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, 0, "()[Lcom/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState;", 4106 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/GlyphLayout$WrapState",
		.parentClass = (intptr_t) &class_java_lang_Enum,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_GlyphLayout,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 16441,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 16,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState = registerClass(&class_com_badlogic_gdx_graphics_g2d_GlyphLayout$WrapState);

}

