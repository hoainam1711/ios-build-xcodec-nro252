#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener_ChangeEvent.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_Event(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_Event(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener$ChangeEvent:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(37);
	init_com_badlogic_gdx_scenes_scene2d_Event(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_handle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_cancel,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_stop,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setTarget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getListenerActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setListenerActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getBubbles_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setBubbles_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isHandled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isStopped_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isCancelled_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setCapture_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_isCapture_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Event_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
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
	{ "handle", "()V" },
	{ "cancel", "()V" },
	{ "stop", "()V" },
	{ "getTarget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setTarget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getListenerActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setListenerActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getBubbles", "()Z" },
	{ "setBubbles", "(Z)V" },
	{ "isHandled", "()Z" },
	{ "isStopped", "()Z" },
	{ "isCancelled", "()Z" },
	{ "setCapture", "(Z)V" },
	{ "isCapture", "()Z" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent, 0, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/utils/ChangeListener$ChangeEvent",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Event,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 28,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent = registerClass(&class_com_badlogic_gdx_scenes_scene2d_utils_ChangeListener$ChangeEvent);

}

