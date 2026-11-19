#include "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Action.h"
#include "java/lang/Throwable.h"
#include "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) object;
	if (self->F_actions)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actions)->clazz)->markFunction)((jobject) self->F_actions, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Action(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(30);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK(sp[0].o))->F_actions = (jref) sp[1].o;
	LINE_NUMBER(31);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(33);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK(sp[0].o))->F_actions = (jref) sp[1].o;
	LINE_NUMBER(34);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(35);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(37);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK(sp[0].o))->F_actions = (jref) sp[1].o;
	LINE_NUMBER(38);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(39);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(40);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(42);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK(sp[0].o))->F_actions = (jref) sp[1].o;
	LINE_NUMBER(43);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(44);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(45);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(46);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(48);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK(sp[0].o))->F_actions = (jref) sp[1].o;
	LINE_NUMBER(49);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(50);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(51);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(52);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(53);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(55);
	init_com_badlogic_gdx_scenes_scene2d_Action(ctx, (frame[0].o));
	LINE_NUMBER(27);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK(sp[0].o))->F_actions = (jref) sp[1].o;
	LINE_NUMBER(56);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(57);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(58);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[3].o));
	LINE_NUMBER(59);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[4].o));
	LINE_NUMBER(60);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_act_float_R_boolean(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:act", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[3]{};

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(64);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_complete) == 0) goto label_10;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(65);
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_complete = (jint(1));
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_getPool_R_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_getPool_R_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(67);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (jobject(nullptr)));
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[2]) { bypasses[2] = false; goto label_15; }
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	frame[3].o = sp[0].o;
	LINE_NUMBER(70);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_15:;
	{
	if ((frame[4].i) >= (frame[5].i)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_6; } // goto label_16
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); bypasses[1] = true; goto label_6; } // goto label_16
	}
	{
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o));
	LINE_NUMBER(72);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[6].o));
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_act_float_R_boolean])(ctx, (frame[6].o), (frame[1].f));
	if (temp0 != 0) goto label_19;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_complete = (jint(0));
	}
label_19:;
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	INST_ICONST(1);
	INST_ISTORE(7);
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(77);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return (frame[7].i);
	}
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_16; }
	if (bypasses[1]) { bypasses[1] = false; goto label_16; }
	{
	LINE_NUMBER(70);
	INST_IINC(4, 1);
	{ popExceptionFrames(frameRef, 1); bypasses[2] = true; goto label_3; } // goto label_15
	}
label_16:;
	{
	LINE_NUMBER(75);
	frame[4].i = ((jint)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_complete);
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(77);
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(75);
	popStackFrame(ctx);
	return (frame[4].i);
	}
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	LINE_NUMBER(77);
	INST_ASTORE(8);
	popExceptionFrame(frameRef);
	{
	((func_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setPool_com_badlogic_gdx_utils_Pool) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setPool_com_badlogic_gdx_utils_Pool])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(78);
	throwException(ctx, (frame[8].o));	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_restart(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:restart", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(82);
	((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_complete = (jint(0));
	LINE_NUMBER(83);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	frame[1].o = sp[0].o;
	LINE_NUMBER(84);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_4:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_5;
	}
	{
	LINE_NUMBER(85);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	((func_com_badlogic_gdx_scenes_scene2d_Action_restart) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_restart])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o)));
	LINE_NUMBER(84);
	INST_IINC(2, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(86);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:reset", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(89);
	M_com_badlogic_gdx_scenes_scene2d_Action_reset(ctx, (frame[0].o));
	LINE_NUMBER(90);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:addAction", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_Action *) NULL_CHECK((frame[0].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	LINE_NUMBER(96);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:setActor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	frame[2].o = sp[0].o;
	LINE_NUMBER(100);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(101);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	((func_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Action, sp[0].o)), (frame[1].o));
	LINE_NUMBER(100);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(102);
	M_com_badlogic_gdx_scenes_scene2d_Action_setActor_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_getActions_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:getActions", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(106);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction:toString", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(110);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder_int(ctx, sp[0].o, (64));
	frame[1].o = sp[0].o;
	LINE_NUMBER(111);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Action_toString_R_java_lang_String(ctx, (frame[0].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(112);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (40));
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_actions_ParallelAction *) NULL_CHECK((frame[0].o)))->F_actions;
	frame[2].o = sp[0].o;
	LINE_NUMBER(114);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_6:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_7;
	}
	{
	LINE_NUMBER(115);
	if ((frame[3].i) <= 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8", "_j))));
	}
label_9:;
	{
	LINE_NUMBER(116);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(114);
	INST_IINC(3, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, (frame[1].o), (41));
	LINE_NUMBER(119);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_act_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_restart,
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
	{ "actions", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_actions_ParallelAction, F_actions), "Lcom/badlogic/gdx/utils/Array;", 0 },
	{ "complete", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_actions_ParallelAction, F_complete), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action_com_badlogic_gdx_scenes_scene2d_Action, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_act_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_act_float_R_boolean, "(F)Z", 1 },
	{ "restart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_restart, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_restart, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_reset, "()V", 1 },
	{ "addAction", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_addAction_com_badlogic_gdx_scenes_scene2d_Action, "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V", 1 },
	{ "setActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_setActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "getActions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_getActions_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_getActions_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/actions/ParallelAction",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Action,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_actions_ParallelAction),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction = registerClass(&class_com_badlogic_gdx_scenes_scene2d_actions_ParallelAction);

}

