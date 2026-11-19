#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane_3.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane_3.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "com/badlogic/gdx/scenes/scene2d/Event.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_InputListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) object;
	if (self->F_val$selectBox)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$selectBox)->clazz)->markFunction)((jobject) self->F_val$selectBox, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane$3:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(468);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_val$selectBox = (jref) (frame[2].o);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jint param3, jint param4) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane$3:touchDown", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].i = param3;
	frame[5].i = param4;
	{
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_InputEvent_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_getTarget_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(471);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, sp[0].o, (frame[6].o));
	if (temp0 == 0) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(472);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_selection;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_val$selectBox;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(473);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide])(ctx, sp[0].o);
	LINE_NUMBER(474);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane$3:keyDown", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(478);
	switch((frame[2].i)) {
		case 66: goto label_1;
		case 111: goto label_2;
		case 160: goto label_1;
		default: goto label_3;
	}
	}
label_1:;
	{
	LINE_NUMBER(481);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_val$selectBox;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_selection;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[1].o))->F_list;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_choose_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_choose_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(484);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide])(ctx, sp[0].o);
	LINE_NUMBER(485);
	((func_com_badlogic_gdx_scenes_scene2d_InputEvent_stop) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_InputEvent_stop])(ctx, (frame[1].o));
	LINE_NUMBER(486);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_handle_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
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
	{ "handle", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "touchDown", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z" },
	{ "touchUp", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)V" },
	{ "touchDragged", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFI)V" },
	{ "mouseMoved", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z" },
	{ "enter", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "exit", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "scrolled", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFFF)Z" },
	{ "keyDown", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z" },
	{ "keyUp", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z" },
	{ "keyTyped", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;C)Z" },
};

static FieldMetadata fields[] {
	{ "val$selectBox", &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3, F_val$selectBox), "Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox;", 4112 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox;)V", 0 },
	{ "touchDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FFII)Z", 1 },
	{ "keyDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane$3",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_InputListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3);

}

