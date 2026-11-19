#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_KeyRepeatTask.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_KeyRepeatTask.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_utils_Timer$Task(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Timer$Task(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$KeyRepeatTask:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(882);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_utils_Timer$Task(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$KeyRepeatTask:run", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(886);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(887);
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_cancel) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_cancel])(ctx, (frame[0].o));
	LINE_NUMBER(888);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(890);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField *) NULL_CHECK(sp[0].o))->F_inputListener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean])(ctx, sp[0].o, (jobject(nullptr)), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask *) NULL_CHECK((frame[0].o)))->F_keycode));
	LINE_NUMBER(891);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_run,
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

static FieldMetadata fields[] {
	{ "keycode", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask, F_keycode), "I", 0 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_com_badlogic_gdx_scenes_scene2d_ui_TextField, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V", 0 },
	{ "run", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_run, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask_run, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$KeyRepeatTask",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Timer$Task,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$KeyRepeatTask);

}

