#include "com/badlogic/gdx/utils/Timer.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "com/badlogic/gdx/Application.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/System.h"
#include "com/badlogic/gdx/utils/Timer.h"
#include "java/lang/Runnable.h"

extern "C" {

jobject SF_com_badlogic_gdx_utils_Timer_instance;

void mark_com_badlogic_gdx_utils_Timer(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_utils_Timer_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_utils_Timer_instance)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_utils_Timer_instance, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_utils_Timer *) object;
	if (self->F_tasks)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tasks)->clazz)->markFunction)((jobject) self->F_tasks, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Timer(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Timer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Timer(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(23);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_boolean_int(ctx, sp[1].o, (jint(0)), (8));
	((com_badlogic_gdx_utils_Timer *) NULL_CHECK(sp[0].o))->F_tasks = (jref) sp[1].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Timer_instance_R_com_badlogic_gdx_utils_Timer(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:instance", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, (jobject) &class_com_badlogic_gdx_utils_Timer);

	clinit_com_badlogic_gdx_utils_Timer(ctx);
	{
	LINE_NUMBER(30);
	clinit_com_badlogic_gdx_utils_Timer(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Timer_instance;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(31);
	clinit_com_badlogic_gdx_utils_Timer(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Timer);
	init_com_badlogic_gdx_utils_Timer(ctx, sp[0].o);
	clinit_com_badlogic_gdx_utils_Timer(ctx);
	SF_com_badlogic_gdx_utils_Timer_instance = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(32);
	clinit_com_badlogic_gdx_utils_Timer(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_utils_Timer_instance;
	popStackFrame(ctx, (jobject) &class_com_badlogic_gdx_utils_Timer);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:postTask", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task])(ctx, (frame[0].o), (frame[1].o), (jfloat(0)), (jfloat(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:scheduleTask", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jfloat(0)), (jint(0)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:scheduleTask", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(47);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (frame[3].f), (jint(-1)));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:scheduleTask", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(53);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[1].o)))->F_timer;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(54);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"The same task may not be scheduled twice."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(55);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[1].o)))->F_timer = (jref) (frame[0].o);
	LINE_NUMBER(56);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[5].l = (temp0 / (jlong(1000000ll)));
	LINE_NUMBER(57);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[1].o)))->F_executeTimeMillis = ((frame[5].l) + (jlong(((frame[2].f) * (jfloat(1000.0f))))));
	LINE_NUMBER(58);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[1].o)))->F_intervalMillis = (jlong(((frame[3].f) * (jfloat(1000.0f)))));
	LINE_NUMBER(59);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[1].o)))->F_repeatCount = (frame[4].i);
	LINE_NUMBER(60);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(61);
	popStackFrame(ctx, self);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Timer_stop(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:stop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_stopped = (jint(1));
	LINE_NUMBER(67);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Timer_start(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:start", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(71);
	((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_stopped = (jint(0));
	LINE_NUMBER(72);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Timer_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:clear", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Timer$Task, sp[0].o));
	LINE_NUMBER(78);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[3].o)))->F_executeTimeMillis = (jlong(0));
	LINE_NUMBER(79);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[3].o)))->F_timer = (jref) (jobject(nullptr));
	LINE_NUMBER(76);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(82);
	popStackFrame(ctx, self);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Timer_isEmpty_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:isEmpty", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx, self);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Timer_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:update", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(91);
	if (((jint)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_stopped) == 0) goto label_1;
	}
	popStackFrame(ctx, self);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(92);
	jlong temp0 = (jlong)SM_java_lang_System_nanoTime_R_long(ctx);
	frame[1].l = (temp0 / (jlong(1000000ll)));
	LINE_NUMBER(93);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(94);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Timer$Task, sp[0].o));
	LINE_NUMBER(95);
	if ((longCompare(((jlong)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[5].o)))->F_executeTimeMillis), (frame[1].l))) <= 0) goto label_8;
	}
	LINE_NUMBER(96);
	goto label_10;
label_8:;
	{
	LINE_NUMBER(97);
	if (((jint)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[5].o)))->F_repeatCount) != 0) goto label_11;
	}
	{
	LINE_NUMBER(98);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[5].o)))->F_timer = (jref) (jobject(nullptr));
	LINE_NUMBER(99);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(100);
	INST_IINC(3, -1);
	LINE_NUMBER(101);
	INST_IINC(4, -1);
	goto label_16;
	}
label_11:;
	{
	LINE_NUMBER(103);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[5].o)))->F_executeTimeMillis = ((frame[1].l) + ((jlong)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[5].o)))->F_intervalMillis));
	LINE_NUMBER(104);
	if (((jint)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[5].o)))->F_repeatCount) <= 0) goto label_16;
	}
	{
	sp[0].o = frame[5].o;
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK(sp[0].o))->F_repeatCount = (((jint)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK(sp[0].o))->F_repeatCount) - (jint(1)));
	}
label_16:;
	{
	LINE_NUMBER(106);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	((func_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_postRunnable_java_lang_Runnable, sp[0].o))(ctx, sp[0].o, (frame[5].o));
	}
label_10:;
	{
	LINE_NUMBER(93);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(108);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Timer_delay_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:delay", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(112);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_3;
	}
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[0].o)))->F_tasks;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_Timer$Task, sp[0].o));
	LINE_NUMBER(114);
	sp[0].o = frame[5].o;
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK(sp[0].o))->F_executeTimeMillis = (((jlong)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK(sp[0].o))->F_executeTimeMillis) + (frame[1].l));
	LINE_NUMBER(112);
	INST_IINC(3, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(116);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Timer_post_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:post", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Timer(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(121);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_instance_R_com_badlogic_gdx_utils_Timer(ctx);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject param0, jfloat param1) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:schedule", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	{
	LINE_NUMBER(127);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_instance_R_com_badlogic_gdx_utils_Timer(ctx);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task])(ctx, sp[0].o, (frame[0].o), (frame[1].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:schedule", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_instance_R_com_badlogic_gdx_utils_Timer(ctx);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject param0, jfloat param1, jfloat param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer:schedule", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Timer(ctx);
	frame[0].o = param0;
	frame[1].f = param1;
	frame[2].f = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_Timer_instance_R_com_badlogic_gdx_utils_Timer(ctx);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task])(ctx, sp[0].o, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Timer[] {
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
	(void *) M_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task,
	(void *) M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task,
	(void *) M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task,
	(void *) M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task,
	(void *) M_com_badlogic_gdx_utils_Timer_stop,
	(void *) M_com_badlogic_gdx_utils_Timer_start,
	(void *) M_com_badlogic_gdx_utils_Timer_clear,
	(void *) M_com_badlogic_gdx_utils_Timer_isEmpty_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Timer_update,
	(void *) M_com_badlogic_gdx_utils_Timer_delay_long,
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
	{ "postTask", "(Lcom/badlogic/gdx/utils/Timer$Task;)Lcom/badlogic/gdx/utils/Timer$Task;" },
	{ "scheduleTask", "(Lcom/badlogic/gdx/utils/Timer$Task;F)Lcom/badlogic/gdx/utils/Timer$Task;" },
	{ "scheduleTask", "(Lcom/badlogic/gdx/utils/Timer$Task;FF)Lcom/badlogic/gdx/utils/Timer$Task;" },
	{ "scheduleTask", "(Lcom/badlogic/gdx/utils/Timer$Task;FFI)Lcom/badlogic/gdx/utils/Timer$Task;" },
	{ "stop", "()V" },
	{ "start", "()V" },
	{ "clear", "()V" },
	{ "isEmpty", "()Z" },
	{ "update", "()V" },
	{ "delay", "(J)V" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_utils_Timer$Task,
};

static FieldMetadata fields[] {
	{ "instance", &class_com_badlogic_gdx_utils_Timer, (intptr_t) &SF_com_badlogic_gdx_utils_Timer_instance, "Lcom/badlogic/gdx/utils/Timer;", 10 },
	{ "tasks", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_utils_Timer, F_tasks), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "stopped", &class_boolean, offsetof(com_badlogic_gdx_utils_Timer, F_stopped), "Z", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Timer, 0, "()V", 1 },
	{ "instance", (intptr_t) SM_com_badlogic_gdx_utils_Timer_instance_R_com_badlogic_gdx_utils_Timer, 0, "()Lcom/badlogic/gdx/utils/Timer;", 41 },
	{ "postTask", (intptr_t) M_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task, VTABLE_com_badlogic_gdx_utils_Timer_postTask_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task, "(Lcom/badlogic/gdx/utils/Timer$Task;)Lcom/badlogic/gdx/utils/Timer$Task;", 1 },
	{ "scheduleTask", (intptr_t) M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task, VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task, "(Lcom/badlogic/gdx/utils/Timer$Task;F)Lcom/badlogic/gdx/utils/Timer$Task;", 1 },
	{ "scheduleTask", (intptr_t) M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task, VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task, "(Lcom/badlogic/gdx/utils/Timer$Task;FF)Lcom/badlogic/gdx/utils/Timer$Task;", 1 },
	{ "scheduleTask", (intptr_t) M_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task, VTABLE_com_badlogic_gdx_utils_Timer_scheduleTask_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task, "(Lcom/badlogic/gdx/utils/Timer$Task;FFI)Lcom/badlogic/gdx/utils/Timer$Task;", 33 },
	{ "stop", (intptr_t) M_com_badlogic_gdx_utils_Timer_stop, VTABLE_com_badlogic_gdx_utils_Timer_stop, "()V", 33 },
	{ "start", (intptr_t) M_com_badlogic_gdx_utils_Timer_start, VTABLE_com_badlogic_gdx_utils_Timer_start, "()V", 33 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_utils_Timer_clear, VTABLE_com_badlogic_gdx_utils_Timer_clear, "()V", 33 },
	{ "isEmpty", (intptr_t) M_com_badlogic_gdx_utils_Timer_isEmpty_R_boolean, VTABLE_com_badlogic_gdx_utils_Timer_isEmpty_R_boolean, "()Z", 33 },
	{ "update", (intptr_t) M_com_badlogic_gdx_utils_Timer_update, VTABLE_com_badlogic_gdx_utils_Timer_update, "()V", 33 },
	{ "delay", (intptr_t) M_com_badlogic_gdx_utils_Timer_delay_long, VTABLE_com_badlogic_gdx_utils_Timer_delay_long, "(J)V", 33 },
	{ "post", (intptr_t) SM_com_badlogic_gdx_utils_Timer_post_com_badlogic_gdx_utils_Timer$Task_R_com_badlogic_gdx_utils_Timer$Task, 0, "(Lcom/badlogic/gdx/utils/Timer$Task;)Lcom/badlogic/gdx/utils/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_R_com_badlogic_gdx_utils_Timer$Task, 0, "(Lcom/badlogic/gdx/utils/Timer$Task;F)Lcom/badlogic/gdx/utils/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_R_com_badlogic_gdx_utils_Timer$Task, 0, "(Lcom/badlogic/gdx/utils/Timer$Task;FF)Lcom/badlogic/gdx/utils/Timer$Task;", 9 },
	{ "schedule", (intptr_t) SM_com_badlogic_gdx_utils_Timer_schedule_com_badlogic_gdx_utils_Timer$Task_float_float_int_R_com_badlogic_gdx_utils_Timer$Task, 0, "(Lcom/badlogic/gdx/utils/Timer$Task;FFI)Lcom/badlogic/gdx/utils/Timer$Task;", 9 },
};

Class class_com_badlogic_gdx_utils_Timer{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Timer",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Timer),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Timer,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Timer,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Timer,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 21,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Timer = registerClass(&class_com_badlogic_gdx_utils_Timer);

}

