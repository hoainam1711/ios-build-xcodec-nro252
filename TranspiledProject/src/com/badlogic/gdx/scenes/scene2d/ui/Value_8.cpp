#include "com/badlogic/gdx/scenes/scene2d/ui/Value_8.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_8.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Value$8(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Value$8 *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$8(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Value$8_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$8:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$8(ctx);
	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(128);
	((com_badlogic_gdx_scenes_scene2d_ui_Value$8 *) NULL_CHECK((frame[0].o)))->F_val$percent = (frame[1].f);
	init_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Value$8:get", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(130);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return (temp0 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Value$8 *) NULL_CHECK((frame[0].o)))->F_val$percent));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Value$8[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float,
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
	{ "val$percent", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Value$8, F_val$percent), "F", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Value$8_float, 0, "(F)V", 0 },
	{ "get", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value$8_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)F", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Value$8{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Value$8",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Value,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Value$8),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Value$8,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Value$8,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Value$8,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Value$8 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Value$8);

}

