#include "com/badlogic/gdx/scenes/scene2d/ui/Value_Fixed.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_Fixed.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_cache;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_cache)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_cache)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_cache, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_Value(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed *) object;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$Fixed:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(45);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed *) NULL_CHECK((frame[0].o)))->F_value = (frame[1].f);
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$Fixed:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed *) NULL_CHECK((frame[0].o)))->F_value);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$Fixed:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)SM_java_lang_Float_toString_float_R_java_lang_String(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed *) NULL_CHECK((frame[0].o)))->F_value));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(jcontext ctx, jfloat param0) {
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$Fixed:valueOf", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	frame[0].f = param0;
	{
	LINE_NUMBER(58);
	if ((floatCompare((frame[0].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(59);
	if ((floatCompare((frame[0].f), (jfloat(-10.0f)), -1)) < 0) goto label_2;
	}
	{
	if ((floatCompare((frame[0].f), (jfloat(100.0f)), 1)) > 0) goto label_2;
	}
	{
	if ((floatCompare((frame[0].f), (jfloat((jint((frame[0].f))))), -1)) != 0) goto label_2;
	}
	{
	LINE_NUMBER(60);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_cache;
	frame[1].o = ((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint((frame[0].f))) + (10))));
	LINE_NUMBER(61);
	if ((frame[1].o) != nullptr) goto label_5;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_cache;
	jint temp0 = (jint((frame[0].f))) + (10);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_float(ctx, sp[1].o, (frame[0].f));
	frame[1].o = sp[1].o;
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(64);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_float(ctx, sp[0].o, (frame[0].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$Fixed:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)createArray(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed, (111));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_cache = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Value_get_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float,
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

static FieldMetadata fields[] {
	{ "cache", getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed, 1), (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_cache, "[Lcom/badlogic/gdx/scenes/scene2d/ui/Value$Fixed;", 24 },
	{ "value", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed, F_value), "F", 18 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_float, 0, "(F)V", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)F", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "valueOf", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed, 0, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Value$Fixed;", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Value$Fixed",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Value,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Value,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed);

}

