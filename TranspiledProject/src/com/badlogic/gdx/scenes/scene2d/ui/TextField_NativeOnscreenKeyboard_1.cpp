#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard_1.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_NativeOnscreenKeyboard.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/input/TextInputWrapper.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) object;
	if (self->F_val$textField)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$textField)->clazz)->markFunction)((jobject) self->F_val$textField, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_com_badlogic_gdx_scenes_scene2d_ui_TextField(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(989);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_val$textField = (jref) (frame[2].o);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getText_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard$1:getText", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(992);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_val$textField;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getText_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getText_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getSelectionStart_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard$1:getSelectionStart", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(997);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_val$textField;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelectionStart_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getSelectionStart_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getSelectionEnd_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard$1:getSelectionEnd", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1002);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_val$textField;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_getCursorPosition_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_getCursorPosition_R_int])(ctx, sp[0].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_writeResults_java_lang_String_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard$1:writeResults", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_val$textField;
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_ui_TextField_access$300_com_badlogic_gdx_scenes_scene2d_ui_TextField_R_boolean(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, (frame[1].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(1009);
	jint temp0 = frame[2].i;
	jint temp1 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp2 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, temp1);
	frame[2].i = temp2;
	LINE_NUMBER(1010);
	jint temp3 = frame[3].i;
	jint temp4 = (jint)((func_java_lang_String_length_R_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_length_R_int])(ctx, (frame[1].o));
	jint temp5 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp3, temp4);
	frame[3].i = temp5;
	}
label_1:;
	{
	LINE_NUMBER(1012);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_val$textField;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setText_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setText_java_lang_String])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(1013);
	if ((frame[2].i) != (frame[3].i)) goto label_6;
	}
	{
	LINE_NUMBER(1014);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_val$textField;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setCursorPosition_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setCursorPosition_int])(ctx, sp[0].o, (frame[3].i));
	goto label_8;
	}
label_6:;
	{
	LINE_NUMBER(1016);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 *) NULL_CHECK((frame[0].o)))->F_val$textField;
	((func_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField_setSelection_int_int])(ctx, sp[0].o, (frame[2].i), (frame[3].i));
	}
label_8:;
	LINE_NUMBER(1018);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getText_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getSelectionStart_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getSelectionEnd_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_writeResults_java_lang_String_int_int,
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
	{ "getText", "()Ljava/lang/String;" },
	{ "getSelectionStart", "()I" },
	{ "getSelectionEnd", "()I" },
	{ "writeResults", "(Ljava/lang/String;II)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_input_TextInputWrapper, };

static FieldMetadata fields[] {
	{ "val$textField", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1, F_val$textField), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;", 4112 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard, offsetof(com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard_com_badlogic_gdx_scenes_scene2d_ui_TextField, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard;Lcom/badlogic/gdx/scenes/scene2d/ui/TextField;)V", 0 },
	{ "getText", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getText_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getText_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "getSelectionStart", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getSelectionStart_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getSelectionStart_R_int, "()I", 1 },
	{ "getSelectionEnd", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getSelectionEnd_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_getSelectionEnd_R_int, "()I", 1 },
	{ "writeResults", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_writeResults_java_lang_String_int_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1_writeResults_java_lang_String_int_int, "(Ljava/lang/String;II)V", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/TextField$NativeOnscreenKeyboard$1",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_TextField$NativeOnscreenKeyboard$1);

}

