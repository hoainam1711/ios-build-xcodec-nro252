#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration_NativeInputCloseCallback_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration_NativeInputCloseCallback_1.h"
#include "com/badlogic/gdx/input/NativeInputConfiguration_NativeInputCloseCallback.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1 *) object;
	if (self->F_field0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_field0)->clazz)->markFunction)((jobject) self->F_field0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1_onClose_boolean_R_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1:onClose", 0 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, nullptr, nullptr);

auto proxy = (com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1 *) self;
	auto object = SM_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_lambda$openNativeInputField$2_com_badlogic_gdx_scenes_scene2d_ui_TextField_boolean_R_boolean(ctx, (jobject) proxy->F_field0, param0);
	popStackFrame(ctx);
	return object;

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1_onClose_boolean_R_boolean,
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
	{ "onClose", "(Z)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback, };

static FieldMetadata fields[] {
	{ "field0", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1, F_field0), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;", 0 },
};

static MethodMetadata methods[] {
	{ "onClose", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1_onClose_boolean_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1_onClose_boolean_R_boolean, "(Z)Z", 0 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 0,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 1,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_invoke_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_1);

}

