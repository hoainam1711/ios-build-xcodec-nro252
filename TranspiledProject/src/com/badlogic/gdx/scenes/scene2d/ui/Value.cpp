#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_10.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_5.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_6.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_7.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_8.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_2.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_3.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_4.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_9.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_Fixed.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minWidth;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minHeight;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefWidth;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefHeight;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxWidth;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxHeight;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Value(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minWidth)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minWidth, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minHeight)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minHeight, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefWidth)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefWidth, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefHeight)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefHeight, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxWidth)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxWidth, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxHeight)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxHeight, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Value *) object;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Value_get_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(29);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, (frame[0].o), (jobject(nullptr)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_Value_percentWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value:percentWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(119);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$7(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$7);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$7_float(ctx, sp[0].o, (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_Value_percentHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jfloat param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value:percentHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(128);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$8(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$8);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$8_float(ctx, sp[0].o, (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_Value_percentWidth_float_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value:percentWidth", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(137);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(138);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$9(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$9);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$9_com_badlogic_gdx_scenes_scene2d_Actor_float(ctx, sp[0].o, (frame[1].o), (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_Value_percentHeight_float_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jfloat param0, jobject param1) {
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value:percentHeight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	frame[0].f = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(147);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(148);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$10(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$10);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$10_com_badlogic_gdx_scenes_scene2d_Actor_float(ctx, sp[0].o, (frame[1].o), (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[3];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value:<clinit>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	{
	LINE_NUMBER(36);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_float(ctx, sp[0].o, (jfloat(0)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero = sp[0].o;
	LINE_NUMBER(69);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$1(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minWidth = sp[0].o;
	LINE_NUMBER(77);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minHeight = sp[0].o;
	LINE_NUMBER(85);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$3);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefWidth = sp[0].o;
	LINE_NUMBER(94);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$4);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$4(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefHeight = sp[0].o;
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$5);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$5(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxWidth = sp[0].o;
	LINE_NUMBER(110);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$6(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$6);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$6(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxHeight = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Value[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Value_get_R_float,
	(void *) nullptr,
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
	{ "get", "()F" },
	{ "get", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)F" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed,
};

static FieldMetadata fields[] {
	{ "zero", &class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value$Fixed;", 25 },
	{ "minWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minWidth, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "minHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minHeight, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "prefWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefWidth, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "prefHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefHeight, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "maxWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxWidth, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "maxHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxHeight, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Value, 0, "()V", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Value_get_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_R_float, "()F", 1 },
	{ "get", 0, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)F", 1025 },
	{ "percentWidth", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Value_percentWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value, 0, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "percentHeight", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Value_percentHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value, 0, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "percentWidth", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Value_percentWidth_float_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Value, 0, "(FLcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "percentHeight", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Value_percentHeight_float_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Value, 0, "(FLcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Value, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Value{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Value",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Value),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Value,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Value,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Value,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Value = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Value);

}

