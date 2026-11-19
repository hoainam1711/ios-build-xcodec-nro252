#include "com/badlogic/gdx/scenes/scene2d/Stage_TouchFocus.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage_TouchFocus.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/utils/Pool_Poolable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) object;
	if (self->F_listener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listener)->clazz)->markFunction)((jobject) self->F_listener, mark, depth + 1);
	if (self->F_listenerActor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_listenerActor)->clazz)->markFunction)((jobject) self->F_listenerActor, mark, depth + 1);
	if (self->F_target)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_target)->clazz)->markFunction)((jobject) self->F_target, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage$TouchFocus:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(885);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/Stage$TouchFocus:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(891);
	((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[0].o)))->F_listenerActor = (jref) (jobject(nullptr));
	LINE_NUMBER(892);
	((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[0].o)))->F_listener = (jref) (jobject(nullptr));
	LINE_NUMBER(893);
	((com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus *) NULL_CHECK((frame[0].o)))->F_target = (jref) (jobject(nullptr));
	LINE_NUMBER(894);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus_reset,
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
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "listener", &class_com_badlogic_gdx_scenes_scene2d_EventListener, offsetof(com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, F_listener), "Lcom/badlogic/gdx/scenes/scene2d/EventListener;", 0 },
	{ "listenerActor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, F_listenerActor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 0 },
	{ "target", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, F_target), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 0 },
	{ "pointer", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, F_pointer), "I", 0 },
	{ "button", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, F_button), "I", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus, 0, "()V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus_reset, "()V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/Stage$TouchFocus",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_Stage,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus = registerClass(&class_com_badlogic_gdx_scenes_scene2d_Stage$TouchFocus);

}

