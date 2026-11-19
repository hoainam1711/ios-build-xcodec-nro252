#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager_2.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager_2.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Container.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/utils/Timer_Task.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tooltip.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) object;
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_utils_Timer$Task(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager$2:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(65);
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_utils_Timer$Task(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager$2:run", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_showTooltip;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_showTooltip;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_targetActor;
	if (sp[0].o != nullptr) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(69);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_showTooltip;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_targetActor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(70);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(71);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[1].o))->F_showTooltip;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK(sp[1].o))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_Stage_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_showTooltip;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_toFront) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_toFront])(ctx, sp[0].o);
	LINE_NUMBER(73);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_shown;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[1].o))->F_showTooltip;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(75);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_showTooltip;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_container;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Container_clearActions) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Container_clearActions])(ctx, sp[0].o);
	LINE_NUMBER(76);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[1].o))->F_showTooltip;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_showAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager_showAction_com_badlogic_gdx_scenes_scene2d_ui_Tooltip])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_showTooltip;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tooltip *) NULL_CHECK(sp[0].o))->F_instant) != 0) goto label_10;
	}
	{
	LINE_NUMBER(79);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_time = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[1].o))->F_subsequentTime);
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TooltipManager *) NULL_CHECK(sp[0].o))->F_resetTask;
	((func_com_badlogic_gdx_utils_Timer$Task_cancel) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Timer$Task_cancel])(ctx, sp[0].o);
	}
label_10:;
	LINE_NUMBER(82);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_run,
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
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TooltipManager;)V", 0 },
	{ "run", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_run, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2_run, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TooltipManager$2",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_utils_Timer$Task,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2,
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
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TooltipManager$2);

}

