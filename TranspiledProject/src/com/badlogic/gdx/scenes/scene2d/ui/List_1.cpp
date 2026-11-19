#include "com/badlogic/gdx/scenes/scene2d/ui/List_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_1.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/UIUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/scenes/scene2d/InputEvent.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "java/lang/Character.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "java/lang/System.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_List$1(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_List$1 *) object;
	if (self->F_prefix)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefix)->clazz)->markFunction)((jobject) self->F_prefix, mark, depth + 1);
	if (self->F_this$0)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_this$0)->clazz)->markFunction)((jobject) self->F_this$0, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_List$1(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_InputListener(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_List$1_com_badlogic_gdx_scenes_scene2d_ui_List(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List$1:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_List$1(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(73);
	((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0 = (jref) (frame[1].o);
	init_com_badlogic_gdx_scenes_scene2d_InputListener(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_List$1_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List$1:keyDown", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(78);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_isEmpty_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_isEmpty_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(80);
	switch((frame[2].i)) {
		case 3: goto label_2;
		case 19: goto label_3;
		case 20: goto label_4;
		case 29: goto label_5;
		case 111: goto label_6;
		case 123: goto label_7;
		default: goto label_8;
	}
	}
label_5:;
	{
	LINE_NUMBER(82);
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_R_boolean(ctx);
	if (temp0 == 0) goto label_8;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_selection;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_getMultiple_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_getMultiple_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_8;
	}
	{
	LINE_NUMBER(83);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_clear])(ctx, sp[0].o);
	LINE_NUMBER(84);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_selection;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[1].o))->F_items;
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_addAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_addAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return (jint(1));
	}
label_2:;
	{
	LINE_NUMBER(89);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int])(ctx, sp[0].o, (jint(0)));
	LINE_NUMBER(90);
	popStackFrame(ctx);
	return (jint(1));
	}
label_7:;
	{
	LINE_NUMBER(92);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[1].o))->F_items;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int])(ctx, sp[0].o, (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size) - (jint(1))));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(95);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object])(ctx, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	frame[3].i = (temp0 + (jint(1)));
	LINE_NUMBER(96);
	jint temp1 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_items;
	if (temp1 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_15;
	}
	INST_ICONST(0);
	INST_ISTORE(3);
label_15:;
	{
	LINE_NUMBER(97);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (jint(1));
	}
label_3:;
	{
	LINE_NUMBER(100);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_items;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getSelected_R_java_lang_Object])(ctx, sp[1].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, sp[1].o, (jint(0)));
	frame[3].i = (temp0 - (jint(1)));
	LINE_NUMBER(101);
	if ((frame[3].i) >= 0) goto label_18;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_18:;
	{
	LINE_NUMBER(102);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(103);
	popStackFrame(ctx);
	return (jint(1));
	}
label_6:;
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setKeyboardFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, sp[0].o, (jobject(nullptr)));
	}
label_20:;
	{
	LINE_NUMBER(106);
	popStackFrame(ctx);
	return (jint(1));
	}
label_8:;
	{
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_List$1_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean(jcontext ctx, jobject self, jobject param0, jchar param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/List$1:keyTyped", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(112);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_typeToSelect) != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(113);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[3].l = temp0;
	LINE_NUMBER(114);
	if ((longCompare((frame[3].l), ((jlong)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_typeTimeout))) <= 0) goto label_3;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_prefix = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_3:;
	{
	LINE_NUMBER(115);
	((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_typeTimeout = ((frame[3].l) + (jlong(300ll)));
	LINE_NUMBER(116);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK(sp[1].o))->F_prefix;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[2].o);
	jint temp0 = (jint)SM_java_lang_Character_toLowerCase_char_R_char(ctx, (frame[2].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK(sp[1].o))->F_prefix = (jref) sp[0].o;
	LINE_NUMBER(117);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_items;
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_8;
	}
	{
	LINE_NUMBER(118);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[1].o))->F_items;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, (frame[5].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_toString_java_lang_Object_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_String_toLowerCase_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_toLowerCase_R_java_lang_String])(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_prefix;
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(119);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$1 *) NULL_CHECK((frame[0].o)))->F_this$0;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setSelectedIndex_int])(ctx, sp[0].o, (frame[5].i));
	LINE_NUMBER(120);
	goto label_8;
	}
label_10:;
	{
	LINE_NUMBER(117);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_List$1[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDown_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchUp_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_touchDragged_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_mouseMoved_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_enter_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_exit_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_scrolled_com_badlogic_gdx_scenes_scene2d_InputEvent_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List$1_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_InputListener_keyUp_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_List$1_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean,
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
	{ "typeTimeout", &class_long, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$1, F_typeTimeout), "J", 0 },
	{ "prefix", &class_java_lang_String, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$1, F_prefix), "Ljava/lang/String;", 0 },
	{ "this$0", &class_com_badlogic_gdx_scenes_scene2d_ui_List, offsetof(com_badlogic_gdx_scenes_scene2d_ui_List$1, F_this$0), "Lcom/badlogic/gdx/scenes/scene2d/ui/List;", 4112 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_List$1_com_badlogic_gdx_scenes_scene2d_ui_List, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/List;)V", 0 },
	{ "keyDown", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List$1_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$1_keyDown_com_badlogic_gdx_scenes_scene2d_InputEvent_int_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;I)Z", 1 },
	{ "keyTyped", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_List$1_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List$1_keyTyped_com_badlogic_gdx_scenes_scene2d_InputEvent_char_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/InputEvent;C)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_List$1{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/List$1",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_InputListener,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_List$1),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_List$1,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_List$1,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_List$1,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 32,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 22,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = true,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_List$1 = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_List$1);

}

