#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane_3.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane_4.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_ScrollPaneStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_ListStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ArraySelection.h"
#include "com/badlogic/gdx/scenes/scene2d/InputListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane_1.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxScrollPane_2.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) object;
	if (self->F_selectBox)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selectBox)->clazz)->markFunction)((jobject) self->F_selectBox, mark, depth + 1);
	if (self->F_stagePosition)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_stagePosition)->clazz)->markFunction)((jobject) self->F_stagePosition, mark, depth + 1);
	if (self->F_list)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_list)->clazz)->markFunction)((jobject) self->F_list, mark, depth + 1);
	if (self->F_hideListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_hideListener)->clazz)->markFunction)((jobject) self->F_hideListener, mark, depth + 1);
	if (self->F_previousScrollFocus)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_previousScrollFocus)->clazz)->markFunction)((jobject) self->F_previousScrollFocus, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(431);
	sp[0].o = frame[0].o;
	sp[1].o = jobject(nullptr);
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK((frame[1].o)))->F_style;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[2].o))->F_scrollStyle;
	init_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(425);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_stagePosition = (jref) sp[1].o;
	LINE_NUMBER(432);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox = (jref) (frame[1].o);
	LINE_NUMBER(434);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setOverscroll_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setOverscroll_boolean_boolean])(ctx, (frame[0].o), (jint(0)), (jint(0)));
	LINE_NUMBER(435);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setFadeScrollBars_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setFadeScrollBars_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(436);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setScrollingDisabled_boolean_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setScrollingDisabled_boolean_boolean])(ctx, (frame[0].o), (jint(1)), (jint(0)));
	LINE_NUMBER(438);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_newList_R_com_badlogic_gdx_scenes_scene2d_ui_List) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_newList_R_com_badlogic_gdx_scenes_scene2d_ui_List])(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_list = (jref) sp[1].o;
	LINE_NUMBER(439);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_disabled;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(440);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setTypeToSelect_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setTypeToSelect_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(441);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(443);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$1_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_List_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(459);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$2(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$2_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3);
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$3_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx, sp[1].o, (frame[0].o), (frame[1].o));
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK(sp[0].o))->F_hideListener = (jref) sp[1].o;
	LINE_NUMBER(491);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_newList_R_com_badlogic_gdx_scenes_scene2d_ui_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:newList", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(496);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$4);
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[2].o))->F_style;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle *) NULL_CHECK(sp[2].o))->F_listStyle;
	init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane$4_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_show_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:show", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(504);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_List_isTouchable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_isTouchable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(506);
	((func_com_badlogic_gdx_scenes_scene2d_Stage_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(507);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_hideListener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(508);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener])(ctx, sp[1].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(510);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_stagePosition;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(513);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getItemHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getItemHeight_R_float])(ctx, sp[0].o);
	frame[2].f = temp2;
	LINE_NUMBER(514);
	jfloat temp3 = frame[2].f;
	sp[0].f = temp3;
	sp += 1;
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_maxListCount) > 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_items;
	jint temp0 = (jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size;
	sp[0].i = temp0;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_maxListCount;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox *) NULL_CHECK(sp[0].o))->F_items;
	jint temp1 = (jint)SM_java_lang_Math_min_int_int_R_int(ctx, temp0, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size));
	sp[0].i = temp1;
	sp += 1;
	}
label_8:;
	{
	sp -= 2;
	frame[3].f = (sp[0].f * (jfloat(sp[1].i)));
	LINE_NUMBER(515);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle])(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[4].o = sp[0].o;
	LINE_NUMBER(516);
	if ((frame[4].o) == nullptr) goto label_11;
	}
	{
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[4].o)))(ctx, (frame[4].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[4].o)))(ctx, (frame[4].o));
	frame[3].f = (temp0 + (temp1 + temp2));
	}
label_11:;
	{
	LINE_NUMBER(517);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle])(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle *) NULL_CHECK(sp[0].o))->F_background;
	frame[5].o = sp[0].o;
	LINE_NUMBER(518);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	{
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[5].o)))(ctx, (frame[5].o));
	frame[3].f = (temp0 + (temp1 + temp2));
	}
label_13:;
	{
	LINE_NUMBER(520);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_stagePosition;
	frame[6].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_y);
	LINE_NUMBER(521);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getHeight_R_float])(ctx, (frame[1].o));
	jfloat temp1 = temp0 - (frame[6].f);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getHeight_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getHeight_R_float])(ctx, sp[0].o);
	frame[7].f = (temp1 - temp2);
	LINE_NUMBER(522);
	frame[8].i = (jint(1));
	LINE_NUMBER(523);
	if ((floatCompare((frame[3].f), (frame[6].f), -1)) <= 0) goto label_17;
	}
	{
	LINE_NUMBER(524);
	if ((floatCompare((frame[7].f), (frame[6].f), -1)) <= 0) goto label_19;
	}
	{
	LINE_NUMBER(525);
	frame[8].i = (jint(0));
	LINE_NUMBER(526);
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (frame[3].f), (frame[7].f));
	frame[3].f = temp0;
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(528);
	frame[3].f = (frame[6].f);
	}
label_17:;
	{
	LINE_NUMBER(531);
	if ((frame[8].i) == 0) goto label_22;
	}
	{
	LINE_NUMBER(532);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_stagePosition;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setY_float])(ctx, sp[0].o, (((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y) - (frame[3].f)));
	goto label_24;
	}
label_22:;
	{
	LINE_NUMBER(534);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_stagePosition;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getHeight_R_float])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setY_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setY_float])(ctx, sp[0].o, (temp0 + temp1));
	}
label_24:;
	{
	LINE_NUMBER(536);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setHeight_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setHeight_float])(ctx, (frame[0].o), (frame[3].f));
	LINE_NUMBER(537);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_validate])(ctx, (frame[0].o));
	LINE_NUMBER(538);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getPrefWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getPrefWidth_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getWidth_R_float])(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[9].f = temp2;
	LINE_NUMBER(539);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setWidth_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setWidth_float])(ctx, (frame[0].o), (frame[9].f));
	LINE_NUMBER(541);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_stagePosition;
	frame[10].f = ((jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x);
	LINE_NUMBER(542);
	jfloat temp3 = (frame[10].f) + (frame[9].f);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getWidth_R_float])(ctx, (frame[1].o));
	if ((floatCompare(temp3, temp4, -1)) <= 0) goto label_30;
	}
	{
	LINE_NUMBER(543);
	jfloat temp0 = frame[10].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getWidth_R_float])(ctx, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getWidth_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getWidth_R_float])(ctx, sp[0].o);
	frame[10].f = (temp0 - ((temp1 - temp2) - (jfloat(1))));
	LINE_NUMBER(544);
	if ((floatCompare((frame[10].f), (jfloat(0)), 1)) >= 0) goto label_30;
	}
	INST_FCONST(0);
	INST_FSTORE(10);
label_30:;
	{
	LINE_NUMBER(546);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setX_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setX_float])(ctx, (frame[0].o), (frame[10].f));
	LINE_NUMBER(548);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_validate])(ctx, (frame[0].o));
	LINE_NUMBER(549);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getHeight_R_float])(ctx, sp[1].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	jint temp2 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedIndex_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelectedIndex_R_int])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_scrollTo_float_float_float_float_boolean_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_scrollTo_float_float_float_float_boolean_boolean])(ctx, sp[0].o, temp0, ((temp1 - ((jfloat(temp2)) * (frame[2].f))) - ((frame[2].f) / (jfloat(2)))), (jfloat(0)), (jfloat(0)), (jint(1)), (jint(1)));
	LINE_NUMBER(550);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_updateVisualScroll) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_updateVisualScroll])(ctx, (frame[0].o));
	LINE_NUMBER(552);
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus = (jref) (jobject(nullptr));
	LINE_NUMBER(553);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	frame[11].o = sp[0].o;
	LINE_NUMBER(554);
	if ((frame[11].o) == nullptr) goto label_39;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[11].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_isDescendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[11].o), (frame[0].o));
	if (temp0 != 0) goto label_39;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus = (jref) (frame[11].o);
	}
label_39:;
	{
	LINE_NUMBER(555);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(557);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_List *) NULL_CHECK(sp[0].o))->F_selection;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_getSelected_R_java_lang_Object])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_ArraySelection_set_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(558);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_enabled;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(559);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_clearActions) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_clearActions])(ctx, (frame[0].o));
	LINE_NUMBER(560);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onShow_com_badlogic_gdx_scenes_scene2d_Actor_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onShow_com_badlogic_gdx_scenes_scene2d_Actor_boolean])(ctx, sp[0].o, (frame[0].o), (frame[8].i));
	LINE_NUMBER(561);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:hide", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(564);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_List_isTouchable_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_isTouchable_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hasParent_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hasParent_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(565);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_disabled;
	((func_com_badlogic_gdx_scenes_scene2d_ui_List_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(567);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(568);
	if ((frame[1].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(569);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_hideListener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(570);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener])(ctx, sp[1].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(571);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus = (jref) (jobject(nullptr));
	}
label_9:;
	{
	LINE_NUMBER(572);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getScrollFocus_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(573);
	if ((frame[2].o) == nullptr) goto label_11;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_isAscendantOf_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, (frame[0].o), (frame[2].o));
	if (temp0 == 0) goto label_5;
	}
label_11:;
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_previousScrollFocus;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_setScrollFocus_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_5:;
	{
	LINE_NUMBER(576);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_clearActions) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_clearActions])(ctx, (frame[0].o));
	LINE_NUMBER(577);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onHide_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_onHide_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(578);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:draw", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(581);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_temp;
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat(0)), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_localToStageCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(582);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_SelectBox_temp;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_stagePosition;
	jint temp0 = (jint)((func_com_badlogic_gdx_math_Vector2_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_2;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide])(ctx, sp[0].o);
label_2:;
	{
	LINE_NUMBER(583);
	M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(584);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_act_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:act", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(587);
	M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_act_float(ctx, (frame[0].o), (frame[1].f));
	LINE_NUMBER(588);
	((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_toFront) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_toFront])(ctx, (frame[0].o));
	LINE_NUMBER(589);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setStage_com_badlogic_gdx_scenes_scene2d_Stage(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:setStage", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(592);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(593);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(594);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_hideListener;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_removeCaptureListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(595);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_List_getKeyListener_R_com_badlogic_gdx_scenes_scene2d_InputListener])(ctx, sp[1].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Stage_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_removeListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[1].o);
	}
label_2:;
	{
	LINE_NUMBER(597);
	M_com_badlogic_gdx_scenes_scene2d_Group_setStage_com_badlogic_gdx_scenes_scene2d_Stage(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(598);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getList_R_com_badlogic_gdx_scenes_scene2d_ui_List(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:getList", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(601);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_list;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getSelectBox_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane:getSelectBox", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane *) NULL_CHECK((frame[0].o)))->F_selectBox;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setStage_com_badlogic_gdx_scenes_scene2d_Stage,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorBefore_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addActorAfter_com_badlogic_gdx_scenes_scene2d_Actor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addCaptureListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFlickScrollListener_R_com_badlogic_gdx_scenes_scene2d_utils_ActorGestureListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_addScrollListener,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsVisible_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancelTouchFocus,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_cancel,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_clamp,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setStyle_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateActorPosition,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_drawScrollBars_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_fling_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setWidget_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getWidget_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_visualScrollY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMouseWheelY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_updateVisualScroll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVisualScrollPercentY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollPercentY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollPercentY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScroll_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlickScrollTapSquareSize_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_scrollTo_float_float_float_float_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getMaxY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollBarWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getScrollHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollX_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollY_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollingDisabled_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledX_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isScrollingDisabledY_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isLeftEdge_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isRightEdge_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isTopEdge_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isBottomEdge_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isDragging_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isPanning_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isFlinging_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVelocityY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVelocityY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setOverscroll_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupOverscroll_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getOverscrollDistance_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setForceScroll_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollX_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_isForceScrollY_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFlingTime_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setClamp_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarPositions_boolean_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setFadeScrollBars_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setupFadeScrollBars_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getFadeScrollBars_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollBarTouch_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setSmoothScrolling_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_smoothScroll_float_float_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setScrollbarsOnTop_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_getVariableSizeKnobs_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setVariableSizeKnobs_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane_setCancelTouchFocus_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_newList_R_com_badlogic_gdx_scenes_scene2d_ui_List,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_show_com_badlogic_gdx_scenes_scene2d_Stage,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getList_R_com_badlogic_gdx_scenes_scene2d_ui_List,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getSelectBox_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox,
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
	{ "getStyle", "()Ljava/lang/Object;" },
	{ "setStyle", "(Ljava/lang/Object;)V" },
	{ "addCaptureListener", "()V" },
	{ "getFlickScrollListener", "()Lcom/badlogic/gdx/scenes/scene2d/utils/ActorGestureListener;" },
	{ "addScrollListener", "()V" },
	{ "setScrollbarsVisible", "(Z)V" },
	{ "cancelTouchFocus", "()V" },
	{ "cancel", "()V" },
	{ "clamp", "()V" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;)V" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/ScrollPane$ScrollPaneStyle;" },
	{ "updateActorPosition", "()V" },
	{ "drawScrollBars", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "fling", "(FFF)V" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "setWidget", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getWidget", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "scrollX", "(F)V" },
	{ "scrollY", "(F)V" },
	{ "visualScrollX", "(F)V" },
	{ "visualScrollY", "(F)V" },
	{ "getMouseWheelX", "()F" },
	{ "getMouseWheelY", "()F" },
	{ "setScrollX", "(F)V" },
	{ "getScrollX", "()F" },
	{ "setScrollY", "(F)V" },
	{ "getScrollY", "()F" },
	{ "updateVisualScroll", "()V" },
	{ "getVisualScrollX", "()F" },
	{ "getVisualScrollY", "()F" },
	{ "getVisualScrollPercentX", "()F" },
	{ "getVisualScrollPercentY", "()F" },
	{ "getScrollPercentX", "()F" },
	{ "setScrollPercentX", "(F)V" },
	{ "getScrollPercentY", "()F" },
	{ "setScrollPercentY", "(F)V" },
	{ "setFlickScroll", "(Z)V" },
	{ "setFlickScrollTapSquareSize", "(F)V" },
	{ "scrollTo", "(FFFF)V" },
	{ "scrollTo", "(FFFFZZ)V" },
	{ "getMaxX", "()F" },
	{ "getMaxY", "()F" },
	{ "getScrollBarHeight", "()F" },
	{ "getScrollBarWidth", "()F" },
	{ "getScrollWidth", "()F" },
	{ "getScrollHeight", "()F" },
	{ "isScrollX", "()Z" },
	{ "isScrollY", "()Z" },
	{ "setScrollingDisabled", "(ZZ)V" },
	{ "isScrollingDisabledX", "()Z" },
	{ "isScrollingDisabledY", "()Z" },
	{ "isLeftEdge", "()Z" },
	{ "isRightEdge", "()Z" },
	{ "isTopEdge", "()Z" },
	{ "isBottomEdge", "()Z" },
	{ "isDragging", "()Z" },
	{ "isPanning", "()Z" },
	{ "isFlinging", "()Z" },
	{ "setVelocityX", "(F)V" },
	{ "getVelocityX", "()F" },
	{ "setVelocityY", "(F)V" },
	{ "getVelocityY", "()F" },
	{ "setOverscroll", "(ZZ)V" },
	{ "setupOverscroll", "(FFF)V" },
	{ "getOverscrollDistance", "()F" },
	{ "setForceScroll", "(ZZ)V" },
	{ "isForceScrollX", "()Z" },
	{ "isForceScrollY", "()Z" },
	{ "setFlingTime", "(F)V" },
	{ "setClamp", "(Z)V" },
	{ "setScrollBarPositions", "(ZZ)V" },
	{ "setFadeScrollBars", "(Z)V" },
	{ "setupFadeScrollBars", "(FF)V" },
	{ "getFadeScrollBars", "()Z" },
	{ "setScrollBarTouch", "(Z)V" },
	{ "setSmoothScrolling", "(Z)V" },
	{ "smoothScroll", "(FF)F" },
	{ "setScrollbarsOnTop", "(Z)V" },
	{ "getVariableSizeKnobs", "()Z" },
	{ "setVariableSizeKnobs", "(Z)V" },
	{ "setCancelTouchFocus", "(Z)V" },
	{ "newList", "()Lcom/badlogic/gdx/scenes/scene2d/ui/List;" },
	{ "show", "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V" },
	{ "hide", "()V" },
	{ "getList", "()Lcom/badlogic/gdx/scenes/scene2d/ui/List;" },
	{ "getSelectBox", "()Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox;" },
};

static FieldMetadata fields[] {
	{ "selectBox", &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, F_selectBox), "Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox;", 16 },
	{ "maxListCount", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, F_maxListCount), "I", 0 },
	{ "stagePosition", &class_com_badlogic_gdx_math_Vector2, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, F_stagePosition), "Lcom/badlogic/gdx/math/Vector2;", 18 },
	{ "list", &class_com_badlogic_gdx_scenes_scene2d_ui_List, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, F_list), "Lcom/badlogic/gdx/scenes/scene2d/ui/List;", 16 },
	{ "hideListener", &class_com_badlogic_gdx_scenes_scene2d_InputListener, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, F_hideListener), "Lcom/badlogic/gdx/scenes/scene2d/InputListener;", 2 },
	{ "previousScrollFocus", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane, F_previousScrollFocus), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox;)V", 1 },
	{ "newList", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_newList_R_com_badlogic_gdx_scenes_scene2d_ui_List, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_newList_R_com_badlogic_gdx_scenes_scene2d_ui_List, "()Lcom/badlogic/gdx/scenes/scene2d/ui/List;", 4 },
	{ "show", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_show_com_badlogic_gdx_scenes_scene2d_Stage, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_show_com_badlogic_gdx_scenes_scene2d_Stage, "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V", 1 },
	{ "hide", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_hide, "()V", 1 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "act", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_act_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_act_float, "(F)V", 1 },
	{ "setStage", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setStage_com_badlogic_gdx_scenes_scene2d_Stage, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_setStage_com_badlogic_gdx_scenes_scene2d_Stage, "(Lcom/badlogic/gdx/scenes/scene2d/Stage;)V", 4 },
	{ "getList", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getList_R_com_badlogic_gdx_scenes_scene2d_ui_List, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getList_R_com_badlogic_gdx_scenes_scene2d_ui_List, "()Lcom/badlogic/gdx/scenes/scene2d/ui/List;", 1 },
	{ "getSelectBox", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getSelectBox_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane_getSelectBox_R_com_badlogic_gdx_scenes_scene2d_ui_SelectBox, "()Lcom/badlogic/gdx/scenes/scene2d/ui/SelectBox;", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/SelectBox$SelectBoxScrollPane",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 252,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxScrollPane);

}

