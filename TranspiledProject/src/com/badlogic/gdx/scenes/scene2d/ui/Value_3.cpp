#include "com/badlogic/gdx/scenes/scene2d/ui/Value_3.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_3.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Value$3(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Value$3 *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Value$3(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$3:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$3(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(85);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Value$3_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$3:get", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(87);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_1;
	}
	{
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[1].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[1].o))));
	popStackFrame(ctx);
	return temp0;
	}
label_1:;
	{
	LINE_NUMBER(88);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_FCONST(0);
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->f = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_FRETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Value$3[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Value$3_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float,
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

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Value$3, 0, "()V", 0 },
	{ "get", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Value$3_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$3_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)F", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Value$3{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Value$3",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Value,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Value$3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Value$3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Value$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Value$3 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Value$3);

}

