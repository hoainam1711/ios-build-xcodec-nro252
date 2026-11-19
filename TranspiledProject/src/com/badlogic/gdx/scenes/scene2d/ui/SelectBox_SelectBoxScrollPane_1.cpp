#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ClickListener.h"
#include "com/badlogic/gdx/utils/OrderedSet.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane_1.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) object;
	if (self->F_val$selectBox)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_val$selectBox)->clazz)->markFunction)((jobject) self->F_val$selectBox, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane$1:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(443);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_val$selectBox = (jref) (frame[2].o);
	init_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane$1:clicked", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(447);
	if ((frame[4].o) == nullptr) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_val$selectBox;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_selection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_items_R_com_badlogic_gdx_utils_OrderedSet) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_items_R_com_badlogic_gdx_utils_OrderedSet])(ctx, sp[0].o);
	((func_com_badlogic_gdx_utils_OrderedSet_clear_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_OrderedSet_clear_int])(ctx, sp[0].o, (51));
	}
label_2:;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_val$selectBox;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_choose_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_choose_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(449);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide])(ctx, sp[0].o);
	LINE_NUMBER(450);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane$1:mouseMoved", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(453);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getItemIndexAt_float_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getItemIndexAt_float_R_int])(ctx, sp[0].o, (frame[3].f));
	frame[4].i = temp0;
	LINE_NUMBER(454);
	if ((frame[4].i) == (jint(-1))) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int])(ctx, sp[0].o, (frame[4].i));
	}
label_2:;
	{
	LINE_NUMBER(455);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_cancel,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_com_badlogic_gdx_scenes_scene2d_Actor_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_inTapSquare_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_invalidateTapSquare,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isPressed_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isVisualPressed_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setVisualPressed_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_isOver_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapSquareSize_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapSquareSize_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCountInterval_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTapCount_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setTapCount_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getTouchDownY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedButton_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getPressedPointer_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_getButton_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_utils_ClickListener_setButton_int,
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
	{ "cancel", "()V" },
	{ "clicked", "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)V" },
	{ "isOver", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;FF)Z" },
	{ "inTapSquare", "(FF)Z" },
	{ "inTapSquare", "()Z" },
	{ "invalidateTapSquare", "()V" },
	{ "isPressed", "()Z" },
	{ "isVisualPressed", "()Z" },
	{ "setVisualPressed", "(Z)V" },
	{ "isOver", "()Z" },
	{ "setTapSquareSize", "(F)V" },
	{ "getTapSquareSize", "()F" },
	{ "setTapCountInterval", "(F)V" },
	{ "getTapCount", "()I" },
	{ "setTapCount", "(I)V" },
	{ "getTouchDownX", "()F" },
	{ "getTouchDownY", "()F" },
	{ "getPressedButton", "()I" },
	{ "getPressedPointer", "()I" },
	{ "getButton", "()I" },
	{ "setButton", "(I)V" },
};

static FieldMetadata fields[] {
	{ "val$selectBox", &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1, F_val$selectBox), "Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox;", 4112 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane;Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox;)V", 0 },
	{ "clicked", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_clicked_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)V", 1 },
	{ "mouseMoved", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;FF)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_utils_ClickListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1,
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
		.vtableSize = 43,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1);

}

