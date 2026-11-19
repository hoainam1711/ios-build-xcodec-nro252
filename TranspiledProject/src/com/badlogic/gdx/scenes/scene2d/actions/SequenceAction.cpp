#include "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_SequenceAction *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(27);
	init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(30);
	init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(31);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(32);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(34);
	init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(35);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(36);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(39);
	init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(40);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(41);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(42);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(43);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(45);
	init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(47);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(48);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(49);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(52);
	init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx, (frame[0].o));
	LINE_NUMBER(53);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(54);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(55);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(56);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(57);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(58);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction:act", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(61);
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_actions_SequenceAction *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_13;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_13:;
	{
	LINE_NUMBER(62);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_getPool_R_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_getPool_R_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(63);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(65);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_actions_SequenceAction *) NULL_CHECK((frame[0].o)))->F_index));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o)), (frame[1].f));
	if (temp0 == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(3);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(72);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(66);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(67);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_actions_SequenceAction *) NULL_CHECK(sp[0].o))->F_index = (((jint)((com_badlogic_gdx_scenes_scene2d_actions_SequenceAction *) NULL_CHECK(sp[0].o))->F_index) + (jint(1)));
	LINE_NUMBER(68);
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_actions_SequenceAction *) NULL_CHECK((frame[0].o)))->F_index;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	INST_ICONST(1);
	INST_ISTORE(3);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(72);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(68);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(70);
	frame[3].i = (jint(0));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(72);
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(70);
	popStackFrame(ctx);
	return (frame[3].i);
	}
label_2:;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(72);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	{
	((func_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(73);
	throwException(ctx, (frame[4].o));	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction:restart", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_restart(ctx, (frame[0].o));
	LINE_NUMBER(78);
	((com_badlogic_gdx_scenes_scene2d_actions_SequenceAction *) NULL_CHECK((frame[0].o)))->F_index = (jint(0));
	LINE_NUMBER(79);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_act_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_restart,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_getPool_R_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Action_setPool_com_badlogic_gdx_utils_Pool,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_getActions_R_com_badlogic_gdx_utils_Array,
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
	{ "addAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getActions", "()Lcom/badlogic/gdx/utils/Array;" },
};

static FieldMetadata fields[] {
	{ "index", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_actions_SequenceAction, F_index), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_act_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_act_float_R_boolean, "(F)Z", 1 },
	{ "restart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_restart, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction_restart, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/SequenceAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_SequenceAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction,
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
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_SequenceAction);

}

