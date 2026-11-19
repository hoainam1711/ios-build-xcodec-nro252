#include "com/badlogic/gdx/scenes/scene2d/actions/LayoutAction.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/LayoutAction.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_Action(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_LayoutAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Action(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/LayoutAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/LayoutAction:setTarget", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(31);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) != 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Actor must implement layout: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(32);
	M_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/LayoutAction:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(36);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_setLayoutEnabled_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_setLayoutEnabled_boolean, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)), ((jint)((com_badlogic_gdx_scenes_scene2d_actions_LayoutAction *) NULL_CHECK((frame[0].o)))->F_enabled));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_isEnabled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/LayoutAction:isEnabled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(41);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_actions_LayoutAction *) NULL_CHECK((frame[0].o)))->F_enabled);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_setLayoutEnabled_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/LayoutAction:setLayoutEnabled", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(45);
	((com_badlogic_gdx_scenes_scene2d_actions_LayoutAction *) NULL_CHECK((frame[0].o)))->F_enabled = (frame[1].i);
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_act_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_isEnabled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_setLayoutEnabled_boolean,
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
	{ "reset", "()V" },
	{ "act", "(F)Z" },
	{ "restart", "()V" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setTarget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getTarget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "getPool", "()Lcom/badlogic/gdx/utils/Pool;" },
	{ "setPool", "(Lcom/badlogic/gdx/utils/Pool;)V" },
	{ "isEnabled", "()Z" },
	{ "setLayoutEnabled", "(Z)V" },
};

static FieldMetadata fields[] {
	{ "enabled", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_actions_LayoutAction, F_enabled), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction, 0, "()V", 1 },
	{ "setTarget", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_setTarget_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_act_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_act_float_R_boolean, "(F)Z", 1 },
	{ "isEnabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_isEnabled_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_isEnabled_R_boolean, "()Z", 1 },
	{ "setLayoutEnabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_setLayoutEnabled_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction_setLayoutEnabled_boolean, "(Z)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/LayoutAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Action,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_LayoutAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_LayoutAction);

}

