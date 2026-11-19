#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "java/lang/Runnable.h"
#include "com/badlogic/gdx/utils/Timer.h"

extern "C" {


void mark_com_badlogic_gdx_utils_Timer$Task(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Timer$Task *) object;
	if (self->F_timer)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timer)->clazz)->markFunction)((jobject) self->F_timer, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Timer$Task(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_utils_Timer$Task(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer$Task:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Timer$Task(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(144);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Timer$Task_cancel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer$Task:cancel", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(155);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[0].o)))->F_timer;
	frame[1].o = sp[0].o;
	LINE_NUMBER(156);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[0].o)))->F_executeTimeMillis = (jlong(0));
	LINE_NUMBER(157);
	((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[0].o)))->F_timer = (jref) (jobject(nullptr));
	LINE_NUMBER(158);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(159);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer *) NULL_CHECK((frame[1].o)))->F_tasks;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[0].o), (jint(1)));
	}
label_4:;
	LINE_NUMBER(160);
	popStackFrame(ctx, self);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer$Task:isScheduled", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(173);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[0].o)))->F_timer;
	if (sp[0].o == nullptr) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jlong M_com_badlogic_gdx_utils_Timer$Task_getExecuteTimeMillis_R_long(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Timer$Task:getExecuteTimeMillis", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, self);

	frame[0].o = self;
	{
	LINE_NUMBER(178);
	popStackFrame(ctx, self);
	return ((jlong)((com_badlogic_gdx_utils_Timer$Task *) NULL_CHECK((frame[0].o)))->F_executeTimeMillis);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Timer$Task[] {
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
	(void *) nullptr,
	(void *) M_com_badlogic_gdx_utils_Timer$Task_cancel,
	(void *) M_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean,
	(void *) M_com_badlogic_gdx_utils_Timer$Task_getExecuteTimeMillis_R_long,
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
	{ "run", "()V" },
	{ "cancel", "()V" },
	{ "isScheduled", "()Z" },
	{ "getExecuteTimeMillis", "()J" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "executeTimeMillis", &class_long, offsetof(com_badlogic_gdx_utils_Timer$Task, F_executeTimeMillis), "J", 0 },
	{ "intervalMillis", &class_long, offsetof(com_badlogic_gdx_utils_Timer$Task, F_intervalMillis), "J", 0 },
	{ "repeatCount", &class_int, offsetof(com_badlogic_gdx_utils_Timer$Task, F_repeatCount), "I", 0 },
	{ "timer", &class_com_badlogic_gdx_utils_Timer, offsetof(com_badlogic_gdx_utils_Timer$Task, F_timer), "Lcom/badlogic/gdx/utils/Timer;", 64 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Timer$Task, 0, "()V", 1 },
	{ "run", 0, VTABLE_com_badlogic_gdx_utils_Timer$Task_run, "()V", 1025 },
	{ "cancel", (intptr_t) M_com_badlogic_gdx_utils_Timer$Task_cancel, VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel, "()V", 33 },
	{ "isScheduled", (intptr_t) M_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean, VTABLE_com_badlogic_gdx_utils_Timer$Task_isScheduled_R_boolean, "()Z", 1 },
	{ "getExecuteTimeMillis", (intptr_t) M_com_badlogic_gdx_utils_Timer$Task_getExecuteTimeMillis_R_long, VTABLE_com_badlogic_gdx_utils_Timer$Task_getExecuteTimeMillis_R_long, "()J", 33 },
};

Class class_com_badlogic_gdx_utils_Timer$Task{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Timer$Task",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Timer$Task),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Timer$Task,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Timer$Task,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Timer$Task,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_utils_Timer,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 4,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Timer$Task = registerClass(&class_com_badlogic_gdx_utils_Timer$Task);

}

