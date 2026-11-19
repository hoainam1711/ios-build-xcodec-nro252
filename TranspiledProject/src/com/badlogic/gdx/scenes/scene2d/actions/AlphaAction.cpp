#include "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/TemporalAction.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) object;
	if (self->F_color)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_color)->clazz)->markFunction)((jobject) self->F_color, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(26);
	init_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_begin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction:begin", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(31);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_color;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_target;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK(sp[0].o))->F_color = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(32);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_color;
	((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK(sp[0].o))->F_start = ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[1].o))->F_a);
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_update_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction:update", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(36);
	if ((floatCompare((frame[1].f), (jfloat(0)), -1)) != 0) goto label_1;
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_color;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_start);
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(38);
	if ((floatCompare((frame[1].f), (jfloat(1)), -1)) != 0) goto label_4;
	}
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_color;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_end);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(41);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_color;
	((com_badlogic_gdx_graphics_Color *) NULL_CHECK(sp[0].o))->F_a = (((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_start) + ((((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_end) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_start)) * (frame[1].f)));
	}
label_3:;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(45);
	M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_reset(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_color = (jref) (jobject(nullptr));
	LINE_NUMBER(47);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction:getColor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_color;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction:setColor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_color = (jref) (frame[1].o);
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_getAlpha_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction:getAlpha", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(60);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_end);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_setAlpha_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction:setAlpha", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(64);
	((com_badlogic_gdx_scenes_scene2d_actions_AlphaAction *) NULL_CHECK((frame[0].o)))->F_end = (frame[1].f);
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_act_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_finish,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_begin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_end,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_update_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getTime_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getDuration_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setDuration_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_getInterpolation_R_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setInterpolation_com_badlogic_gdx_math_Interpolation,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isReverse_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_setReverse_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction_isComplete_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_getAlpha_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_setAlpha_float,
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
	{ "finish", "()V" },
	{ "begin", "()V" },
	{ "end", "()V" },
	{ "update", "(F)V" },
	{ "getTime", "()F" },
	{ "setTime", "(F)V" },
	{ "getDuration", "()F" },
	{ "setDuration", "(F)V" },
	{ "getInterpolation", "()Lcom/badlogic/gdx/math/Interpolation;" },
	{ "setInterpolation", "(Lcom/badlogic/gdx/math/Interpolation;)V" },
	{ "isReverse", "()Z" },
	{ "setReverse", "(Z)V" },
	{ "isComplete", "()Z" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "getAlpha", "()F" },
	{ "setAlpha", "(F)V" },
};

static FieldMetadata fields[] {
	{ "start", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_AlphaAction, F_start), "F", 2 },
	{ "end", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_actions_AlphaAction, F_end), "F", 2 },
	{ "color", &class_com_badlogic_gdx_graphics_Color, offsetof(com_badlogic_gdx_scenes_scene2d_actions_AlphaAction, F_color), "Lcom/badlogic/gdx/graphics/Color;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction, 0, "()V", 1 },
	{ "begin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_begin, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_begin, "()V", 4 },
	{ "update", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_update_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_update_float, "(F)V", 4 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_reset, "()V", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_getColor_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_getColor_R_com_badlogic_gdx_graphics_Color, "()Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "setColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_setColor_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_setColor_com_badlogic_gdx_graphics_Color, "(Lcom/badlogic/gdx/graphics/Color;)V", 1 },
	{ "getAlpha", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_getAlpha_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_getAlpha_R_float, "()F", 1 },
	{ "setAlpha", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_setAlpha_float, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction_setAlpha_float, "(F)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/AlphaAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_TemporalAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_AlphaAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 37,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_AlphaAction);

}

