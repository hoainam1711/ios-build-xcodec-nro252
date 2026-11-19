#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldFilter_DigitsOnlyFilter.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldFilter.h"
#include "java/lang/Character.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldFilter_DigitsOnlyFilter.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldFilter$DigitsOnlyFilter:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(905);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldFilter$DigitsOnlyFilter:acceptChar", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(907);
	jint temp0 = (jint)SM_java_lang_Character_isDigit_char_R_boolean(ctx, (frame[2].i));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean,
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
	{ "acceptChar", "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;C)Z" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter, };

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter, 0, "()V", 1 },
	{ "acceptChar", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter_acceptChar_com_badlogic_gdx_scenes_scene2d_ui_TextField_char_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;C)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$TextFieldFilter$DigitsOnlyFilter",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldFilter$DigitsOnlyFilter);

}

