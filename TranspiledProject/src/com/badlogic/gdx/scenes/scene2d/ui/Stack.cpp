#include "com/badlogic/gdx/scenes/scene2d/ui/Stack.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Stack.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Stack(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Stack *) object;
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Stack(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Stack(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Stack(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(45);
	init_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(43);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_setTransform_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(47);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_setWidth_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_setWidth_float])(ctx, (frame[0].o), (jfloat(150.0f)));
	LINE_NUMBER(48);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_setHeight_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_setHeight_float])(ctx, (frame[0].o), (jfloat(150.0f)));
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_childrenOnly;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(50);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Stack_Array1_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:<init>", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Stack(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	init_com_badlogic_gdx_scenes_scene2d_ui_Stack(ctx, (frame[0].o));
	LINE_NUMBER(54);
	frame[2].o = (frame[1].o);
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_3;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(55);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[5].o));
	LINE_NUMBER(54);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(56);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Stack_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(59);
	M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(60);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:computeSize", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(64);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(0));
	LINE_NUMBER(65);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jfloat(0));
	LINE_NUMBER(66);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jfloat(0));
	LINE_NUMBER(67);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_minWidth = (jfloat(0));
	LINE_NUMBER(68);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_minHeight = (jfloat(0));
	LINE_NUMBER(69);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jfloat(0));
	LINE_NUMBER(70);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jfloat(0));
	LINE_NUMBER(71);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_getChildren_R_com_badlogic_gdx_utils_SnapshotArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getChildren_R_com_badlogic_gdx_utils_SnapshotArray])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(72);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_10:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_11;
	}
	{
	LINE_NUMBER(73);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_SnapshotArray_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[0].o));
	LINE_NUMBER(75);
	if ((isInstance(ctx, (frame[4].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(76);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[4].o)));
	LINE_NUMBER(77);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_prefWidth = temp2;
	LINE_NUMBER(78);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_prefHeight = temp5;
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_minWidth;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp6, temp7);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_minWidth = temp8;
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	jfloat temp9 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_minHeight;
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMinHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	jfloat temp11 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp9, temp10);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_minHeight = temp11;
	LINE_NUMBER(81);
	jfloat temp12 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMaxWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMaxWidth_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[5].f = temp12;
	LINE_NUMBER(82);
	jfloat temp13 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMaxHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getMaxHeight_R_float, (frame[7].o)))(ctx, (frame[7].o));
	frame[6].f = temp13;
	LINE_NUMBER(83);
	goto label_23;
	}
label_14:;
	{
	LINE_NUMBER(84);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, (frame[4].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_prefWidth = temp2;
	LINE_NUMBER(85);
	sp[0].o = frame[0].o;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, (frame[4].o));
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_prefHeight = temp5;
	LINE_NUMBER(86);
	sp[0].o = frame[0].o;
	jfloat temp6 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_minWidth;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, (frame[4].o));
	jfloat temp8 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp6, temp7);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_minWidth = temp8;
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	jfloat temp9 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_minHeight;
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, (frame[4].o));
	jfloat temp11 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp9, temp10);
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_minHeight = temp11;
	LINE_NUMBER(88);
	frame[5].f = (jfloat(0));
	LINE_NUMBER(89);
	frame[6].f = (jfloat(0));
	}
label_23:;
	{
	LINE_NUMBER(91);
	if ((floatCompare((frame[5].f), (jfloat(0)), -1)) <= 0) goto label_29;
	}
	{
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_maxWidth), (jfloat(0)), -1)) != 0) goto label_30;
	}
	INST_FLOAD(5);
	goto label_31;
label_30:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_maxWidth), (frame[5].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_31:;
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_maxWidth = sp[1].f;
label_29:;
	{
	LINE_NUMBER(92);
	if ((floatCompare((frame[6].f), (jfloat(0)), -1)) <= 0) goto label_32;
	}
	{
	sp[0].o = frame[0].o;
	sp += 1;
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_maxHeight), (jfloat(0)), -1)) != 0) goto label_33;
	}
	INST_FLOAD(6);
	goto label_34;
label_33:;
	{
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_maxHeight), (frame[6].f));
	sp[0].f = temp0;
	sp += 1;
	}
label_34:;
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK(sp[0].o))->F_maxHeight = sp[1].f;
label_32:;
	{
	LINE_NUMBER(72);
	INST_IINC(2, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(94);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Stack_add_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:add", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Stack_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:layout", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(101);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(102);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getHeight_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(103);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_getChildren_R_com_badlogic_gdx_utils_SnapshotArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getChildren_R_com_badlogic_gdx_utils_SnapshotArray])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(104);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[3].o)))->F_size);
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_7;
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[3].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, sp[0].o));
	LINE_NUMBER(106);
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float])(ctx, (frame[6].o), (jfloat(0)), (jfloat(0)), (frame[1].f), (frame[2].f));
	LINE_NUMBER(107);
	if ((isInstance(ctx, (frame[6].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_11;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[6].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[6].o))));
	}
label_11:;
	{
	LINE_NUMBER(104);
	INST_IINC(4, 1);
	goto label_6;
	}
label_7:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(112);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(113);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_prefWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(117);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_prefHeight);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(122);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_minWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(127);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(128);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_minHeight);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMaxWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:getMaxWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(132);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(133);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_maxWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMaxHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Stack:getMaxHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(137);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Stack *) NULL_CHECK((frame[0].o)))->F_maxHeight);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Stack[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getCaptureListeners_R_com_badlogic_gdx_utils_DelayedRemovalArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_addAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_removeAction_com_badlogic_gdx_scenes_scene2d_Action,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getActions_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasActions_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearActions,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clearListeners,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_firstAscendant_java_lang_Class_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasParent_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setParent_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setVisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ascendantsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_ancestorsVisible_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasKeyboardFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_hasScrollFocus_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusTarget_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_isTouchFocusListener_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getUserObject_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setUserObject_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getX_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setX_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setY_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getY_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_moveBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_positionChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_sizeChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotationChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setSize_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_sizeBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getOriginY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOriginY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setOrigin_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getScaleY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScaleY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setScale_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_scaleBy_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getRotation_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setRotation_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_rotateBy_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setColor_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getName_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setName_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toFront,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_toBack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setZIndex_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipBegin_float_float_float_float_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_clipEnd,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_stageToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_parentToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToScreenCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToParentCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToAscendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_localToActorCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setCullingArea_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_computeTransform_R_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_g2d_Batch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getCullingArea_R_com_badlogic_gdx_math_Rectangle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_childrenChanged,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clear_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_findActor_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_int_int_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_swapActor_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getChild_int_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_getChildren_R_com_badlogic_gdx_utils_SnapshotArray,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_hasChildren_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setTransform_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_isTransform_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_localToDescendantCoordinates_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_setDebug_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_add_com_badlogic_gdx_scenes_scene2d_Actor,
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
	{ "draw", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "act", "(F)V" },
	{ "fire", "(Lcom/badlogic/gdx/scenes/scene2d/Event;)Z" },
	{ "notify", "(Lcom/badlogic/gdx/scenes/scene2d/Event;Z)Z" },
	{ "hit", "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "remove", "()Z" },
	{ "addListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "removeCaptureListener", "(Lcom/badlogic/gdx/scenes/scene2d/EventListener;)Z" },
	{ "getCaptureListeners", "()Lcom/badlogic/gdx/utils/DelayedRemovalArray;" },
	{ "addAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "removeAction", "(Lcom/badlogic/gdx/scenes/scene2d/Action;)V" },
	{ "getActions", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "hasActions", "()Z" },
	{ "clearActions", "()V" },
	{ "clearListeners", "()V" },
	{ "clear", "()V" },
	{ "getStage", "()Lcom/badlogic/gdx/scenes/scene2d/Stage;" },
	{ "setStage", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "isDescendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "isAscendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "firstAscendant", "(Ljava/lang/Class;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "hasParent", "()Z" },
	{ "getParent", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "setParent", "(Lcom/badlogic/gdx/scenes/scene2d/Group;)V" },
	{ "isTouchable", "()Z" },
	{ "getTouchable", "()Lcom/badlogic/gdx/scenes/scene2d/Touchable;" },
	{ "setTouchable", "(Lcom/badlogic/gdx/scenes/scene2d/Touchable;)V" },
	{ "isVisible", "()Z" },
	{ "setVisible", "(Z)V" },
	{ "ascendantsVisible", "()Z" },
	{ "ancestorsVisible", "()Z" },
	{ "hasKeyboardFocus", "()Z" },
	{ "hasScrollFocus", "()Z" },
	{ "isTouchFocusTarget", "()Z" },
	{ "isTouchFocusListener", "()Z" },
	{ "getUserObject", "()Ljava/lang/Object;" },
	{ "setUserObject", "(Ljava/lang/Object;)V" },
	{ "getX", "()F" },
	{ "getX", "(I)F" },
	{ "setX", "(F)V" },
	{ "setX", "(FI)V" },
	{ "getY", "()F" },
	{ "setY", "(F)V" },
	{ "setY", "(FI)V" },
	{ "getY", "(I)F" },
	{ "setPosition", "(FF)V" },
	{ "setPosition", "(FFI)V" },
	{ "moveBy", "(FF)V" },
	{ "getWidth", "()F" },
	{ "setWidth", "(F)V" },
	{ "getHeight", "()F" },
	{ "setHeight", "(F)V" },
	{ "getTop", "()F" },
	{ "getRight", "()F" },
	{ "positionChanged", "()V" },
	{ "sizeChanged", "()V" },
	{ "scaleChanged", "()V" },
	{ "rotationChanged", "()V" },
	{ "setSize", "(FF)V" },
	{ "sizeBy", "(F)V" },
	{ "sizeBy", "(FF)V" },
	{ "setBounds", "(FFFF)V" },
	{ "getOriginX", "()F" },
	{ "setOriginX", "(F)V" },
	{ "getOriginY", "()F" },
	{ "setOriginY", "(F)V" },
	{ "setOrigin", "(FF)V" },
	{ "setOrigin", "(I)V" },
	{ "getScaleX", "()F" },
	{ "setScaleX", "(F)V" },
	{ "getScaleY", "()F" },
	{ "setScaleY", "(F)V" },
	{ "setScale", "(F)V" },
	{ "setScale", "(FF)V" },
	{ "scaleBy", "(F)V" },
	{ "scaleBy", "(FF)V" },
	{ "getRotation", "()F" },
	{ "setRotation", "(F)V" },
	{ "rotateBy", "(F)V" },
	{ "setColor", "(Lcom/badlogic/gdx/graphics/Color;)V" },
	{ "setColor", "(FFFF)V" },
	{ "getColor", "()Lcom/badlogic/gdx/graphics/Color;" },
	{ "getName", "()Ljava/lang/String;" },
	{ "setName", "(Ljava/lang/String;)V" },
	{ "toFront", "()V" },
	{ "toBack", "()V" },
	{ "setZIndex", "(I)Z" },
	{ "getZIndex", "()I" },
	{ "clipBegin", "()Z" },
	{ "clipBegin", "(FFFF)Z" },
	{ "clipEnd", "()V" },
	{ "screenToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "stageToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "parentToLocalCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToScreenCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToStageCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToParentCoordinates", "(Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToAscendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "localToActorCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "drawDebug", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "drawDebugBounds", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "setDebug", "(Z)V" },
	{ "getDebug", "()Z" },
	{ "debug", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setCullingArea", "(Lcom/badlogic/gdx/math/Rectangle;)V" },
	{ "drawChildren", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "drawDebugChildren", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "computeTransform", "()Lcom/badlogic/gdx/math/Matrix4;" },
	{ "applyTransform", "(Lcom/badlogic/gdx/graphics/g2d/Batch;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "resetTransform", "(Lcom/badlogic/gdx/graphics/g2d/Batch;)V" },
	{ "applyTransform", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;Lcom/badlogic/gdx/math/Matrix4;)V" },
	{ "resetTransform", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "getCullingArea", "()Lcom/badlogic/gdx/math/Rectangle;" },
	{ "childrenChanged", "()V" },
	{ "addActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorAt", "(ILcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorBefore", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "addActorAfter", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "removeActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "removeActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z" },
	{ "removeActorAt", "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "clearChildren", "()V" },
	{ "clearChildren", "(Z)V" },
	{ "clear", "(Z)V" },
	{ "findActor", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "swapActor", "(II)Z" },
	{ "swapActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z" },
	{ "getChild", "(I)Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "getChildren", "()Lcom/badlogic/gdx/utils/SnapshotArray;" },
	{ "hasChildren", "()Z" },
	{ "setTransform", "(Z)V" },
	{ "isTransform", "()Z" },
	{ "localToDescendantCoordinates", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Lcom/badlogic/gdx/math/Vector2;)Lcom/badlogic/gdx/math/Vector2;" },
	{ "setDebug", "(ZZ)V" },
	{ "debugAll", "()Lcom/badlogic/gdx/scenes/scene2d/Group;" },
	{ "toString", "(Ljava/lang/StringBuilder;I)V" },
	{ "layout", "()V" },
	{ "invalidate", "()V" },
	{ "invalidateHierarchy", "()V" },
	{ "validate", "()V" },
	{ "pack", "()V" },
	{ "setFillParent", "(Z)V" },
	{ "setLayoutEnabled", "(Z)V" },
	{ "getMinWidth", "()F" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeight", "()F" },
	{ "setLayoutEnabled", "(Lcom/badlogic/gdx/scenes/scene2d/Group;Z)V" },
	{ "needsLayout", "()Z" },
	{ "computeSize", "()V" },
	{ "add", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
};

static FieldMetadata fields[] {
	{ "prefWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Stack, F_prefWidth), "F", 2 },
	{ "prefHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Stack, F_prefHeight), "F", 2 },
	{ "minWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Stack, F_minWidth), "F", 2 },
	{ "minHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Stack, F_minHeight), "F", 2 },
	{ "maxWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Stack, F_maxWidth), "F", 2 },
	{ "maxHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Stack, F_maxHeight), "F", 2 },
	{ "sizeInvalid", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Stack, F_sizeInvalid), "Z", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Stack, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Stack_Array1_com_badlogic_gdx_scenes_scene2d_Actor, 0, "([Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 129 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_invalidate, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_invalidate, "()V", 1 },
	{ "computeSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_computeSize, "()V", 2 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_add_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_add_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_layout, "()V", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getPrefHeight_R_float, "()F", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMinHeight_R_float, "()F", 1 },
	{ "getMaxWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMaxWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMaxWidth_R_float, "()F", 1 },
	{ "getMaxHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMaxHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_getMaxHeight_R_float, "()F", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Stack{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Stack",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Stack),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Stack,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Stack,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Stack,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 7,
		.nativeFields = (intptr_t) fields,
		.methodCount = 12,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 167,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Stack = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Stack);

}

