#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_DefaultOnscreenKeyboard.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_DefaultOnscreenKeyboard.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_OnscreenKeyboard.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$DefaultOnscreenKeyboard:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(923);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$DefaultOnscreenKeyboard:show", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(925);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean, sp[0].o))(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(926);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard_close(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$DefaultOnscreenKeyboard:close", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(929);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	((func_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_setOnscreenKeyboardVisible_boolean, sp[0].o))(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(930);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard_close,
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
	{ "show", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V" },
	{ "close", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$OnscreenKeyboard, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard, 0, "()V", 1 },
	{ "show", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard_show_com_badlogic_gdx_scenes_scene2d_ui_TextField, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V", 1 },
	{ "close", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard_close, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard_close, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$DefaultOnscreenKeyboard",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$DefaultOnscreenKeyboard);

}

