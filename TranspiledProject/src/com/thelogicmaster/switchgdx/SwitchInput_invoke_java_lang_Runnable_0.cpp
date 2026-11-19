#include "com/thelogicmaster/switchgdx/SwitchInput_invoke_java_lang_Runnable_0.h"
#include "com/badlogic/gdx/Input_TextInputListener.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/thelogicmaster/switchgdx/SwitchInput_invoke_java_lang_Runnable_0.h"
#include "com/badlogic/gdx/Input_OnscreenKeyboardType.h"
#include "com/thelogicmaster/switchgdx/SwitchInput.h"
#include "java/lang/Runnable.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
	if (self->F_field1)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field1)->clazz)->markFunction)((jobject) self->F_field1, mark, depth + 1);
	if (self->F_field2)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field2)->clazz)->markFunction)((jobject) self->F_field2, mark, depth + 1);
	if (self->F_field3)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field3)->clazz)->markFunction)((jobject) self->F_field3, mark, depth + 1);
	if (self->F_field4)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field4)->clazz)->markFunction)((jobject) self->F_field4, mark, depth + 1);
	if (self->F_field5)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field5)->clazz)->markFunction)((jobject) self->F_field5, mark, depth + 1);
}

void clinit_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void M_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchInput_invoke_java_lang_Runnable_0:run", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0 *) self;
	M_com_thelogicmaster_switchgdx_SwitchInput_lambda$getTextInput$0_java_lang_String_java_lang_String_java_lang_String_com_badlogic_gdx_Input$OnscreenKeyboardType_com_badlogic_gdx_Input$TextInputListener(ctx, (jobject) proxy->F_field0, (jobject) proxy->F_field1, (jobject) proxy->F_field2, (jobject) proxy->F_field3, (jobject) proxy->F_field4, (jobject) proxy->F_field5);
	popStackFrame(ctx);
	return;

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0_run,
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
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "field0", &class_com_thelogicmaster_switchgdx_SwitchInput, offsetof(com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0, F_field0), "Lcom/thelogicmaster/switchgdx/SwitchInput;", 0 },
	{ "field1", &class_java_lang_String, offsetof(com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0, F_field1), "Ljava/lang/String;", 0 },
	{ "field2", &class_java_lang_String, offsetof(com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0, F_field2), "Ljava/lang/String;", 0 },
	{ "field3", &class_java_lang_String, offsetof(com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0, F_field3), "Ljava/lang/String;", 0 },
	{ "field4", &class_com_badlogic_gdx_Input$OnscreenKeyboardType, offsetof(com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0, F_field4), "Lcom/badlogic/gdx/Input$OnscreenKeyboardType;", 0 },
	{ "field5", &class_com_badlogic_gdx_Input$TextInputListener, offsetof(com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0, F_field5), "Lcom/badlogic/gdx/Input$TextInputListener;", 0 },
};

static MethodMetadata methods[] {
	{ "run", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0_run, VTABLE_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0_run, "()V", 0 },
};

Class class_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchInput_invoke_java_lang_Runnable_0",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0 = registerClass(&class_com_thelogicmaster_switchgdx_SwitchInput_invoke_java_lang_Runnable_0);

}

