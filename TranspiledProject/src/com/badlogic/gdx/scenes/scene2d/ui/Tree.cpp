#include "com/badlogic/gdx/scenes/scene2d/ui/Tree.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_TreeStyle.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Selection.h"
#include "java/lang/reflect/Constructor.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/ClickListener.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/Throwable.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "java/lang/reflect/Field.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_2.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_1.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "com/badlogic/gdx/scenes/scene2d/EventListener.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/UIUtils.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/Input.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_Node.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree.h"
#include "com/badlogic/gdx/math/Vector2.h"
#include "java/lang/Deprecated.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Tree_tmp;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Tree(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Tree_tmp)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Tree_tmp)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Tree_tmp, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Tree *) object;
	if (self->F_style)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_style)->clazz)->markFunction)((jobject) self->F_style, mark, depth + 1);
	if (self->F_rootNodes)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rootNodes)->clazz)->markFunction)((jobject) self->F_rootNodes, mark, depth + 1);
	if (self->F_selection)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_selection)->clazz)->markFunction)((jobject) self->F_selection, mark, depth + 1);
	if (self->F_foundNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_foundNode)->clazz)->markFunction)((jobject) self->F_foundNode, mark, depth + 1);
	if (self->F_overNode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_overNode)->clazz)->markFunction)((jobject) self->F_overNode, mark, depth + 1);
	if (self->F_rangeStart)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rangeStart)->clazz)->markFunction)((jobject) self->F_rangeStart, mark, depth + 1);
	if (self->F_clickListener)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_clickListener)->clazz)->markFunction)((jobject) self->F_clickListener, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Tree_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, sp[1].o)));
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:<init>", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Tree_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, sp[1].o)));
	LINE_NUMBER(65);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(67);
	init_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(50);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_rootNodes = (jref) sp[1].o;
	LINE_NUMBER(52);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing = (jfloat(4.0f));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft = (jfloat(2));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight = (jfloat(2));
	LINE_NUMBER(54);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_Tree$1_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_selection = (jref) sp[1].o;
	LINE_NUMBER(80);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_setActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(81);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_setMultiple_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_setMultiple_boolean])(ctx, sp[0].o, (jint(1)));
	LINE_NUMBER(82);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(83);
	M_com_badlogic_gdx_scenes_scene2d_ui_Tree_initialize(ctx, (frame[0].o));
	LINE_NUMBER(84);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_initialize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:initialize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(87);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_Tree$2_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx, sp[2].o, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[1].o))->F_clickListener = (jref) sp[2].o;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_addListener_com_badlogic_gdx_scenes_scene2d_EventListener_R_boolean])(ctx, sp[0].o, sp[2].o);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(141);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style = (jref) (frame[1].o);
	LINE_NUMBER(144);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_indentSpacing), (jfloat(0)), -1)) != 0) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Tree_plusMinusWidth_R_float(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_indentSpacing = temp0;
	}
label_2:;
	LINE_NUMBER(145);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_add_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size), (frame[1].o));
	LINE_NUMBER(149);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(152);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[2].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(153);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[2].o)))->F_parent;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(154);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (jobject(nullptr));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(156);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_indexOf_java_lang_Object_boolean_R_int])(ctx, sp[0].o, (frame[2].o), (jint(1)));
	frame[3].i = temp0;
	LINE_NUMBER(157);
	if ((frame[3].i) == (jint(-1))) goto label_4;
	}
	{
	LINE_NUMBER(158);
	if ((frame[3].i) != (frame[1].i)) goto label_7;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
	{
	LINE_NUMBER(159);
	if ((frame[3].i) >= (frame[1].i)) goto label_8;
	}
	INST_IINC(1, -1);
label_8:;
	{
	LINE_NUMBER(160);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeIndex_int_R_java_lang_Object])(ctx, sp[0].o, (frame[3].i));
	LINE_NUMBER(161);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[2].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(162);
	if ((frame[4].i) == (jint(-1))) goto label_4;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int])(ctx, (frame[2].o), (frame[0].o), (frame[4].i));
	}
label_4:;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	((func_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(169);
	if ((frame[1].i) != 0) goto label_12;
	}
	{
	LINE_NUMBER(170);
	frame[3].i = (jint(0));
	goto label_15;
	}
label_12:;
	{
	LINE_NUMBER(171);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	if (temp0 >= (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_16;
	}
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[1].i) + (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o))))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[1].i) - (jint(1))));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(175);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[4].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int])(ctx, (frame[4].o));
	frame[3].i = (temp0 + temp1);
	}
label_15:;
	{
	LINE_NUMBER(177);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int])(ctx, (frame[2].o), (frame[0].o), (frame[3].i));
	LINE_NUMBER(178);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(181);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(182);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(183);
	popStackFrame(ctx);
	return;
	}
label_1:;
	{
	LINE_NUMBER(185);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
	{
	LINE_NUMBER(186);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[1].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[2].i = temp0;
	LINE_NUMBER(187);
	if ((frame[2].i) == (jint(-1))) goto label_6;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int])(ctx, (frame[1].o), (frame[0].o), (frame[2].i));
	}
label_6:;
	LINE_NUMBER(188);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_clearChildren_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:clearChildren", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(192);
	M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(193);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_setOverNode_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setOverNode_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(194);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(195);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_clear])(ctx, sp[0].o);
	LINE_NUMBER(196);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(199);
	M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(200);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(201);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree_plusMinusWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:plusMinusWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_plus;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_minus;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	LINE_NUMBER(205);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_plusOver;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_plusOver;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_2:;
	{
	LINE_NUMBER(206);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_minusOver;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_minusOver;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	frame[1].f = temp2;
	}
label_3:;
	{
	LINE_NUMBER(207);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:computeSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(211);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(0));
	LINE_NUMBER(212);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Tree_plusMinusWidth_R_float(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_prefWidth = temp0;
	LINE_NUMBER(213);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jfloat(0));
	LINE_NUMBER(214);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize_com_badlogic_gdx_utils_Array_float_float(ctx, sp[0].o, sp[1].o, (jfloat(0)), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_prefWidth));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_prefWidth = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_prefWidth) + (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_paddingLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_paddingRight)));
	LINE_NUMBER(216);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize_com_badlogic_gdx_utils_Array_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:computeSize", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(219);
	frame[4].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing);
	LINE_NUMBER(220);
	frame[5].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight));
	LINE_NUMBER(221);
	frame[6].i = (jint(0));
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_4:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_5;
	}
	{
	LINE_NUMBER(222);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[6].i));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(223);
	frame[9].f = ((frame[2].f) + (frame[3].f));
	LINE_NUMBER(224);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[8].o)))->F_actor;
	frame[10].o = sp[0].o;
	LINE_NUMBER(225);
	if ((isInstance(ctx, (frame[10].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_10;
	}
	{
	LINE_NUMBER(226);
	frame[11].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[10].o)));
	LINE_NUMBER(227);
	jfloat temp0 = frame[9].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefWidth_R_float, (frame[11].o)))(ctx, (frame[11].o));
	frame[9].f = (temp0 + temp1);
	LINE_NUMBER(228);
	sp[0].o = frame[8].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_getPrefHeight_R_float, (frame[11].o)))(ctx, (frame[11].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK(sp[0].o))->F_height = temp2;
	LINE_NUMBER(229);
	goto label_15;
	}
label_10:;
	{
	LINE_NUMBER(230);
	jfloat temp0 = frame[9].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getWidth_R_float])(ctx, (frame[10].o));
	frame[9].f = (temp0 + temp1);
	LINE_NUMBER(231);
	sp[0].o = frame[8].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getHeight_R_float])(ctx, (frame[10].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK(sp[0].o))->F_height = temp2;
	}
label_15:;
	{
	LINE_NUMBER(233);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[8].o)))->F_icon;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	LINE_NUMBER(234);
	jfloat temp0 = frame[9].f;
	jfloat temp1 = frame[5].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[8].o)))->F_icon;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[9].f = (temp0 + (temp1 + temp2));
	LINE_NUMBER(235);
	sp[0].o = frame[8].o;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[8].o)))->F_height;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[8].o)))->F_icon;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[1].o))(ctx, sp[1].o);
	jfloat temp5 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp3, temp4);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK(sp[0].o))->F_height = temp5;
	}
label_17:;
	{
	LINE_NUMBER(237);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_prefWidth), (frame[9].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_prefWidth = temp0;
	LINE_NUMBER(238);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_prefHeight = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK(sp[0].o))->F_prefHeight) + (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[8].o)))->F_height) + (frame[4].f)));
	LINE_NUMBER(239);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[8].o)))->F_expanded) == 0) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[8].o)))->F_children;
	M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize_com_badlogic_gdx_utils_Array_float_float(ctx, sp[0].o, sp[1].o, ((frame[2].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_indentSpacing)), (frame[3].f));
	}
label_22:;
	{
	LINE_NUMBER(221);
	INST_IINC(6, 1);
	goto label_4;
	}
label_5:;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:layout", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(244);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_paddingLeft;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp1 - (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing) / (jfloat(2)));
	jfloat temp3 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Tree_plusMinusWidth_R_float(ctx, (frame[0].o));
	jfloat temp4 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout_com_badlogic_gdx_utils_Array_float_float_float_R_float(ctx, sp[0].o, sp[1].o, temp0, temp2, temp3);
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout_com_badlogic_gdx_utils_Array_float_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[17];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:layout", 17 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(249);
	frame[5].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing);
	LINE_NUMBER(250);
	frame[6].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft);
	LINE_NUMBER(251);
	frame[7].f = ((frame[6].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight));
	LINE_NUMBER(252);
	frame[8].i = (jint(0));
	frame[9].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_5:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_6;
	}
	{
	LINE_NUMBER(253);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[8].i));
	frame[10].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(254);
	frame[11].f = ((frame[2].f) + (frame[4].f));
	LINE_NUMBER(255);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[10].o)))->F_icon;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(256);
	jfloat temp0 = frame[11].f;
	jfloat temp1 = frame[7].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[10].o)))->F_icon;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	frame[11].f = (temp0 + (temp1 + temp2));
	goto label_12;
	}
label_10:;
	{
	LINE_NUMBER(258);
	frame[11].f = ((frame[11].f) + (frame[6].f));
	}
label_12:;
	{
	LINE_NUMBER(259);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[10].o)))->F_actor;
	if ((isInstance(ctx, sp[0].o, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_13;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[10].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_pack) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_pack, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, sp[0].o)));
	}
label_13:;
	{
	LINE_NUMBER(260);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getHeight_R_float) ((void **) nullCheck(ctx, (frame[10].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getHeight_R_float])(ctx, (frame[10].o));
	frame[3].f = (temp0 - temp1);
	LINE_NUMBER(261);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[10].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setPosition_float_float])(ctx, sp[0].o, (frame[11].f), (frame[3].f));
	LINE_NUMBER(262);
	frame[3].f = ((frame[3].f) - (frame[5].f));
	LINE_NUMBER(263);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[10].o)))->F_expanded) == 0) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[10].o)))->F_children;
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout_com_badlogic_gdx_utils_Array_float_float_float_R_float(ctx, sp[0].o, sp[1].o, ((frame[2].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_indentSpacing)), (frame[3].f), (frame[4].f));
	frame[3].f = temp0;
	}
label_17:;
	{
	LINE_NUMBER(252);
	INST_IINC(8, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(265);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:draw", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(269);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(270);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(271);
	frame[4].f = (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * (frame[2].f));
	LINE_NUMBER(272);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (frame[4].f));
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b;
	jfloat temp3 = frame[4].f;
	sp[2].o = jobject(nullptr);
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jfloat temp4 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_paddingLeft;
	jfloat temp5 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Tree_plusMinusWidth_R_float(ctx, (frame[0].o));
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcons_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_utils_Array_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcons_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_utils_Array_float_float_R_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o, sp[3].o, temp4, temp5);
	LINE_NUMBER(274);
	M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_draw_com_badlogic_gdx_graphics_g2d_Batch_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(275);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:drawBackground", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_background;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(280);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(281);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[3].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(282);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_background;
	sp[1].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getX_R_float])(ctx, (frame[0].o));
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getY_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	}
label_1:;
	LINE_NUMBER(284);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcons_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_utils_Array_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4, jobject param5, jobject param6, jfloat param7, jfloat param8) {
	NULL_CHECK(self);
	jtype frame[36];
	auto stack = &frame[26];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:drawIcons", 36 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].o = param5;
	frame[7].o = param6;
	frame[8].f = param7;
	frame[9].f = param8;
	{
	LINE_NUMBER(292);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getCullingArea_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getCullingArea_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[0].o));
	frame[10].o = sp[0].o;
	LINE_NUMBER(293);
	frame[11].f = (jfloat(0));
	frame[12].f = (jfloat(0));
	LINE_NUMBER(294);
	if ((frame[10].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(295);
	frame[11].f = ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[10].o)))->F_y);
	LINE_NUMBER(296);
	frame[12].f = ((frame[11].f) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[10].o)))->F_height));
	}
label_4:;
	{
	LINE_NUMBER(298);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	frame[13].o = sp[0].o;
	LINE_NUMBER(299);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getX_R_float])(ctx, (frame[0].o));
	frame[14].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getY_R_float])(ctx, (frame[0].o));
	frame[15].f = temp1;
	frame[16].f = ((frame[14].f) + (frame[8].f));
	frame[17].f = (((frame[16].f) + (frame[9].f)) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft));
	frame[18].f = (jfloat(0));
	LINE_NUMBER(300);
	frame[19].i = (jint(0));
	frame[20].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[7].o)))->F_size);
	}
label_14:;
	{
	if ((frame[19].i) >= (frame[20].i)) goto label_15;
	}
	{
	LINE_NUMBER(301);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[7].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[7].o), (frame[19].i));
	frame[21].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_actor;
	frame[22].o = sp[0].o;
	LINE_NUMBER(303);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float])(ctx, (frame[22].o));
	frame[18].f = temp0;
	LINE_NUMBER(304);
	frame[23].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_height);
	LINE_NUMBER(305);
	if ((frame[10].o) == nullptr) goto label_21;
	}
	{
	if ((floatCompare(((frame[18].f) + (frame[23].f)), (frame[11].f), -1)) < 0) goto label_22;
	}
	{
	if ((floatCompare((frame[18].f), (frame[12].f), 1)) > 0) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(306);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_contains_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_contains_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[21].o));
	if (temp0 == 0) goto label_23;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[13].o)))->F_selection;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	LINE_NUMBER(307);
	sp[0].o = frame[0].o;
	sp[1].o = frame[21].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[13].o)))->F_selection;
	sp[3].o = frame[1].o;
	jfloat temp0 = frame[14].f;
	jfloat temp1 = ((frame[15].f) + (frame[18].f)) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing) / (jfloat(2)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawSelection_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawSelection_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, temp1, temp2, ((frame[23].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing)));
	goto label_25;
	}
label_23:;
	{
	LINE_NUMBER(308);
	sp[0].o = frame[21].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_overNode;
	if (sp[0].o != sp[1].o) goto label_25;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[13].o)))->F_over;
	if (sp[0].o == nullptr) goto label_25;
	}
	{
	LINE_NUMBER(309);
	sp[0].o = frame[0].o;
	sp[1].o = frame[21].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK((frame[13].o)))->F_over;
	sp[3].o = frame[1].o;
	jfloat temp0 = frame[14].f;
	jfloat temp1 = ((frame[15].f) + (frame[18].f)) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing) / (jfloat(2)));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getWidth_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawOver_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawOver_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, temp0, temp1, temp2, ((frame[23].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing)));
	}
label_25:;
	{
	LINE_NUMBER(312);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_icon;
	if (sp[0].o == nullptr) goto label_27;
	}
	{
	LINE_NUMBER(313);
	jfloat temp0 = (frame[15].f) + (frame[18].f);
	jfloat temp1 = frame[23].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_icon;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((temp1 - temp2) / (jfloat(2))));
	frame[24].f = (temp0 + (jfloat(temp3)));
	LINE_NUMBER(314);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[22].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[22].o));
	frame[25].o = sp[0].o;
	LINE_NUMBER(315);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[25].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[25].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[25].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[25].o)))->F_a) * (frame[5].f)));
	LINE_NUMBER(316);
	sp[0].o = frame[0].o;
	sp[1].o = frame[21].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_icon;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float])(ctx, sp[0].o, sp[1].o, sp[2].o, (frame[1].o), (frame[17].f), (frame[24].f));
	LINE_NUMBER(317);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	}
label_27:;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_children;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_33;
	}
	{
	LINE_NUMBER(321);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[21].o), (frame[17].f));
	frame[24].o = sp[0].o;
	LINE_NUMBER(322);
	jfloat temp0 = (frame[15].f) + (frame[18].f);
	jfloat temp1 = frame[23].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[24].o)))(ctx, (frame[24].o));
	jint temp3 = (jint)SM_java_lang_Math_round_float_R_int(ctx, ((temp1 - temp2) / (jfloat(2))));
	frame[25].f = (temp0 + (jfloat(temp3)));
	LINE_NUMBER(323);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float])(ctx, (frame[0].o), (frame[21].o), (frame[24].o), (frame[1].o), (frame[16].f), (frame[25].f));
	LINE_NUMBER(324);
	goto label_33;
	}
label_22:;
	{
	LINE_NUMBER(325);
	if ((floatCompare((frame[18].f), (frame[11].f), 1)) >= 0) goto label_33;
	}
	LINE_NUMBER(326);
	goto label_15;
label_33:;
	{
	LINE_NUMBER(327);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_expanded) == 0) goto label_39;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_children;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_39;
	}
	{
	LINE_NUMBER(328);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = frame[3].f;
	jfloat temp2 = frame[4].f;
	jfloat temp3 = frame[5].f;
	sp[2].o = frame[21].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[21].o)))->F_children;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcons_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_utils_Array_float_float_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcons_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_utils_Array_float_float_R_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3, sp[2].o, sp[3].o, ((frame[8].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_indentSpacing)), (frame[9].f));
	}
label_39:;
	{
	LINE_NUMBER(300);
	INST_IINC(19, 1);
	goto label_14;
	}
label_15:;
	{
	LINE_NUMBER(330);
	popStackFrame(ctx);
	return (frame[18].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawSelection_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:drawSelection", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(334);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f));
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawOver_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4, jfloat param5, jfloat param6) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:drawOver", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	frame[6].f = param5;
	frame[7].f = param6;
	{
	LINE_NUMBER(338);
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, (frame[2].o)))(ctx, (frame[2].o), (frame[3].o), (frame[4].f), (frame[5].f), (frame[6].f), (frame[7].f));
	LINE_NUMBER(339);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:drawExpandIcon", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(342);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(343);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:drawIcon", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(346);
	sp[0].o = frame[2].o;
	sp[1].o = frame[3].o;
	jfloat temp0 = frame[4].f;
	jfloat temp1 = frame[5].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[2].o)))(ctx, (frame[2].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[2].o)))(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getExpandIcon", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(354);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_overNode;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	LINE_NUMBER(355);
	sp[0].o = (jobject)((func_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_getType_R_com_badlogic_gdx_Application$ApplicationType, sp[0].o))(ctx, sp[0].o);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	if (sp[0].o != sp[1].o) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	LINE_NUMBER(356);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_getMultiple_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_getMultiple_R_boolean])(ctx, sp[0].o);
	if (temp0 == 0) goto label_4;
	}
	sp->i = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_ctrl_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) goto label_1;
	sp->i = (jint)SM_com_badlogic_gdx_scenes_scene2d_utils_UIUtils_shift_R_boolean(ctx);
	sp++;
	if ((--sp)->i != 0) goto label_1;
label_4:;
	{
	LINE_NUMBER(358);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Tree_tmp;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_Gdx_input;
	jint temp0 = (jint)((func_com_badlogic_gdx_Input_getX_R_int) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Input, INDEX_com_badlogic_gdx_Input_getX_R_int, sp[2].o))(ctx, sp[2].o);
	sp[1].o = (jobject)((func_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_math_Vector2_set_float_float_R_com_badlogic_gdx_math_Vector2])(ctx, sp[1].o, (jfloat(temp0)), (jfloat(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_screenToLocalCoordinates_com_badlogic_gdx_math_Vector2_R_com_badlogic_gdx_math_Vector2])(ctx, sp[0].o, sp[1].o);
	jfloat temp1 = (jfloat)((com_badlogic_gdx_math_Vector2 *) NULL_CHECK(sp[0].o))->F_x;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getX_R_float])(ctx, (frame[0].o));
	frame[3].f = (temp1 + temp2);
	LINE_NUMBER(359);
	if ((floatCompare((frame[3].f), (jfloat(0)), -1)) < 0) goto label_1;
	}
	{
	if ((floatCompare((frame[3].f), (frame[2].f), 1)) >= 0) goto label_1;
	}
	{
	LINE_NUMBER(360);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[1].o)))->F_expanded) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_minusOver;
	sp += 1;
	goto label_8;
	}
label_7:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_plusOver;
	sp += 1;
	}
label_8:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(361);
	if ((frame[4].o) == nullptr) goto label_1;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(364);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[1].o)))->F_expanded) == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_minus;
	sp += 1;
	goto label_11;
	}
label_10:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle *) NULL_CHECK(sp[0].o))->F_plus;
	sp += 1;
	}
label_11:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_float_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getNodeAt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(369);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_foundNode = (jref) (jobject(nullptr));
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_com_badlogic_gdx_utils_Array_float_float_R_float(ctx, sp[0].o, sp[1].o, temp0, temp1);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(372);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_foundNode;
	frame[2].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(374);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_foundNode = (jref) (jobject(nullptr));
	LINE_NUMBER(372);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(374);
	frame[3].o = sp[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_foundNode = (jref) (jobject(nullptr));
	LINE_NUMBER(375);
	throwException(ctx, (frame[3].o));	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_com_badlogic_gdx_utils_Array_float_float_R_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getNodeAt", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(379);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_3;
	}
	{
	LINE_NUMBER(380);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(381);
	frame[7].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[6].o)))->F_height);
	LINE_NUMBER(382);
	jfloat temp0 = frame[3].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getHeight_R_float) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getHeight_R_float])(ctx, (frame[6].o));
	frame[3].f = (temp0 - (temp1 - (frame[7].f)));
	LINE_NUMBER(383);
	if ((floatCompare((frame[2].f), (((frame[3].f) - (frame[7].f)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing)), -1)) < 0) goto label_8;
	}
	{
	if ((floatCompare((frame[2].f), (frame[3].f), 1)) >= 0) goto label_8;
	}
	{
	LINE_NUMBER(384);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_foundNode = (jref) (frame[6].o);
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (jfloat(-1.0f));
	}
label_8:;
	{
	LINE_NUMBER(387);
	frame[3].f = ((frame[3].f) - ((frame[7].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing)));
	LINE_NUMBER(388);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[6].o)))->F_expanded) == 0) goto label_12;
	}
	{
	LINE_NUMBER(389);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[6].o)))->F_children;
	jfloat temp0 = (jfloat)M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_com_badlogic_gdx_utils_Array_float_float_R_float(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	frame[3].f = temp0;
	LINE_NUMBER(390);
	if ((floatCompare((frame[3].f), (jfloat(-1.0f)), -1)) != 0) goto label_12;
	}
	(sp++)->f = jfloat(-1.0f);
	popStackFrame(ctx);
	INST_FRETURN();
label_12:;
	{
	LINE_NUMBER(379);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return (frame[3].f);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_selectNodes_com_badlogic_gdx_utils_Array_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:selectNodes", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	{
	LINE_NUMBER(397);
	frame[4].i = (jint(0));
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_3;
	}
	{
	LINE_NUMBER(398);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(399);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[6].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (frame[2].f), 1)) >= 0) goto label_6;
	}
	goto label_3;
label_6:;
	{
	LINE_NUMBER(400);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isSelectable_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isSelectable_R_boolean])(ctx, (frame[6].o));
	if (temp0 != 0) goto label_7;
	}
	goto label_8;
label_7:;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[6].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getY_R_float])(ctx, sp[0].o);
	if ((floatCompare(temp0, (frame[3].f), 1)) > 0) goto label_9;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	}
label_9:;
	{
	LINE_NUMBER(402);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[6].o)))->F_expanded) == 0) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[6].o)))->F_children;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_selectNodes_com_badlogic_gdx_utils_Array_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_selectNodes_com_badlogic_gdx_utils_Array_float_float])(ctx, sp[0].o, sp[1].o, (frame[2].f), (frame[3].f));
	}
label_8:;
	{
	LINE_NUMBER(397);
	INST_IINC(4, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(404);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_Selection(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getSelection", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelectedNode_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getSelectedNode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(412);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelectedValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getSelectedValue", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(417);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_selection;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_Selection_first_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(418);
	if ((frame[1].o) != nullptr) goto label_2;
	}
	INST_ACONST_NULL();
	goto label_3;
label_2:;
	INST_ALOAD(1);
	POP_N(1); // Pop method args
	sp->o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getValue_R_java_lang_Object])(ctx, sp[0].o);
	sp++;
label_3:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_style;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getRootNodes_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getRootNodes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodes_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getNodes", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(434);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_updateRootNodes(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:updateRootNodes", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(441);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(442);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(443);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[3].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	LINE_NUMBER(444);
	if ((frame[4].i) == (jint(-1))) goto label_7;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int])(ctx, (frame[3].o), (frame[0].o), (frame[4].i));
	}
label_7:;
	{
	LINE_NUMBER(441);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(446);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	frame[3].i = (jint(0));
	}
label_10:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(447);
	jint temp0 = frame[3].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o)), (frame[0].o), (frame[3].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(446);
	INST_IINC(1, 1);
	goto label_10;
	}
label_11:;
	LINE_NUMBER(448);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getOverNode_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getOverNode", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(452);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_overNode;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getOverValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getOverValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_overNode;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_overNode;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getValue_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getValue_R_java_lang_Object])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setOverNode_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:setOverNode", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(463);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_overNode = (jref) (frame[1].o);
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setPadding_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:setPadding", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(468);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_paddingLeft = (frame[1].f);
	LINE_NUMBER(469);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_paddingRight = (frame[1].f);
	LINE_NUMBER(470);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setPadding_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:setPadding", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(474);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_paddingLeft = (frame[1].f);
	LINE_NUMBER(475);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_paddingRight = (frame[2].f);
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setIndentSpacing_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:setIndentSpacing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(479);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_indentSpacing = (frame[1].f);
	LINE_NUMBER(480);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getIndentSpacing_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getIndentSpacing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(484);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_indentSpacing);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setYSpacing_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:setYSpacing", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(489);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing = (frame[1].f);
	LINE_NUMBER(490);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getYSpacing_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getYSpacing", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(493);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_ySpacing);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setIconSpacing_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:setIconSpacing", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(499);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingLeft = (frame[1].f);
	LINE_NUMBER(500);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_iconSpacingRight = (frame[2].f);
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getPrefWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(504);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_prefWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getPrefHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(509);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(510);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_prefHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:findExpandedValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(514);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array_R_boolean(ctx, sp[0].o, (frame[1].o));
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_restoreExpandedValues_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:restoreExpandedValues", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(518);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(519);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(520);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(521);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(522);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandTo) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandTo])(ctx, (frame[4].o));
	}
label_6:;
	{
	LINE_NUMBER(518);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(525);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array_R_boolean(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:findExpandedValues", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(528);
	frame[2].i = (jint(0));
	LINE_NUMBER(529);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(530);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(531);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[5].o)))->F_expanded) == 0) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[5].o)))->F_children;
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array_R_boolean(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_7;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[5].o)))->F_value;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(529);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(533);
	popStackFrame(ctx);
	return (frame[2].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:findNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(538);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"value cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(539);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_com_badlogic_gdx_utils_Array_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_com_badlogic_gdx_utils_Array_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:findNode", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(543);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(545);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[4].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_6;
	}
	INST_ALOAD(4);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(543);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(547);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_8:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_9;
	}
	{
	LINE_NUMBER(548);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[2].i));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(549);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[4].o)))->F_children;
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_com_badlogic_gdx_utils_Array_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(ctx, sp[0].o, (frame[1].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(550);
	if ((frame[5].o) == nullptr) goto label_13;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_13:;
	{
	LINE_NUMBER(547);
	INST_IINC(2, 1);
	goto label_8;
	}
label_9:;
	{
	LINE_NUMBER(552);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:collapseAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(556);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject param0) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:collapseAll", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(560);
	frame[1].i = (jint(0));
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(561);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(562);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(563);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[3].o)))->F_children;
	SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	LINE_NUMBER(560);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(565);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_expandAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:expandAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(568);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_rootNodes;
	SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_expandAll_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_expandAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:expandAll", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(572);
	frame[1].i = (jint(0));
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[0].o)))->F_size);
	}
label_2:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_3;
	}
	{
	LINE_NUMBER(573);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].i));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandAll) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o)))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandAll])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o)));
	LINE_NUMBER(572);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(574);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getClickListener", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree *) NULL_CHECK((frame[0].o)))->F_clickListener;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:setStyle", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(46);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, (frame[1].o))));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:getStyle", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(46);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx);
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree:<clinit>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	{
	LINE_NUMBER(47);
	clinit_com_badlogic_gdx_math_Vector2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_math_Vector2);
	init_com_badlogic_gdx_math_Vector2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Tree_tmp = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_scenes_scene2d_ui_Tree;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method getNodes
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[35]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[36]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[37]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[38]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[39]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[40]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[41]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[42]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[43]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[44]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[45]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[46]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[47]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[48]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[49]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[50]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[51]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[52]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[53]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[54]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Tree[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_clearChildren_boolean,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_initialize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_add_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_plusMinusWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize_com_badlogic_gdx_utils_Array_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout_com_badlogic_gdx_utils_Array_float_float_float_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcons_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_utils_Array_float_float_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawSelection_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawOver_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_float_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_com_badlogic_gdx_utils_Array_float_float_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_selectNodes_com_badlogic_gdx_utils_Array_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_Selection,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelectedNode_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelectedValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getRootNodes_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodes_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_updateRootNodes,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getOverNode_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getOverValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setOverNode_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setPadding_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setPadding_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setIndentSpacing_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getIndentSpacing_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setYSpacing_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getYSpacing_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setIconSpacing_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_restoreExpandedValues_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_expandAll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener,
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
	{ "initialize", "()V" },
	{ "setStyle", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle;)V" },
	{ "add", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V" },
	{ "insert", "(ILcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V" },
	{ "remove", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V" },
	{ "plusMinusWidth", "()F" },
	{ "computeSize", "()V" },
	{ "computeSize", "(Lcom/badlogic/gdx/utils/Array;FF)V" },
	{ "layout", "(Lcom/badlogic/gdx/utils/Array;FFF)F" },
	{ "drawBackground", "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V" },
	{ "drawIcons", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFLcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/utils/Array;FF)F" },
	{ "drawSelection", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "drawOver", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V" },
	{ "drawExpandIcon", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FF)V" },
	{ "drawIcon", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FF)V" },
	{ "getExpandIcon", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;F)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getNodeAt", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;" },
	{ "getNodeAt", "(Lcom/badlogic/gdx/utils/Array;FF)F" },
	{ "selectNodes", "(Lcom/badlogic/gdx/utils/Array;FF)V" },
	{ "getSelection", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Selection;" },
	{ "getSelectedNode", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;" },
	{ "getSelectedValue", "()Ljava/lang/Object;" },
	{ "getStyle", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle;" },
	{ "getRootNodes", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "getNodes", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "updateRootNodes", "()V" },
	{ "getOverNode", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;" },
	{ "getOverValue", "()Ljava/lang/Object;" },
	{ "setOverNode", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V" },
	{ "setPadding", "(F)V" },
	{ "setPadding", "(FF)V" },
	{ "setIndentSpacing", "(F)V" },
	{ "getIndentSpacing", "()F" },
	{ "setYSpacing", "(F)V" },
	{ "getYSpacing", "()F" },
	{ "setIconSpacing", "(FF)V" },
	{ "findExpandedValues", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "restoreExpandedValues", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "findNode", "(Ljava/lang/Object;)Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;" },
	{ "collapseAll", "()V" },
	{ "expandAll", "()V" },
	{ "getClickListener", "()Lcom/badlogic/gdx/scenes/scene2d/utils/ClickListener;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle,
	&class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
};

static FieldMetadata fields[] {
	{ "tmp", &class_com_badlogic_gdx_math_Vector2, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Tree_tmp, "Lcom/badlogic/gdx/math/Vector2;", 26 },
	{ "style", &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_style), "Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle;", 0 },
	{ "rootNodes", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_rootNodes), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "selection", &class_com_badlogic_gdx_scenes_scene2d_utils_Selection, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_selection), "Lcom/badlogic/gdx/scenes/scene2d/utils/Selection;", 16 },
	{ "ySpacing", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_ySpacing), "F", 0 },
	{ "iconSpacingLeft", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_iconSpacingLeft), "F", 0 },
	{ "iconSpacingRight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_iconSpacingRight), "F", 0 },
	{ "paddingLeft", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_paddingLeft), "F", 0 },
	{ "paddingRight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_paddingRight), "F", 0 },
	{ "indentSpacing", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_indentSpacing), "F", 0 },
	{ "prefWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_prefWidth), "F", 2 },
	{ "prefHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_prefHeight), "F", 2 },
	{ "sizeInvalid", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_sizeInvalid), "Z", 2 },
	{ "foundNode", &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_foundNode), "Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 2 },
	{ "overNode", &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_overNode), "Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 2 },
	{ "rangeStart", &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_rangeStart), "Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 0 },
	{ "clickListener", &class_com_badlogic_gdx_scenes_scene2d_utils_ClickListener, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree, F_clickListener), "Lcom/badlogic/gdx/scenes/scene2d/utils/ClickListener;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree_com_badlogic_gdx_scenes_scene2d_ui_Skin_java_lang_String, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle;)V", 1 },
	{ "initialize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_initialize, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_initialize, "()V", 2 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_add_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_add_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(ILcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V", 1 },
	{ "clearChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_clearChildren_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_clearChildren_boolean, "(Z)V", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_invalidate, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_invalidate, "()V", 1 },
	{ "plusMinusWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_plusMinusWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_plusMinusWidth_R_float, "()F", 2 },
	{ "computeSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize, "()V", 2 },
	{ "computeSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize_com_badlogic_gdx_utils_Array_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_computeSize_com_badlogic_gdx_utils_Array_float_float, "(Lcom/badlogic/gdx/utils/Array;FF)V", 2 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout, "()V", 1 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout_com_badlogic_gdx_utils_Array_float_float_float_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_layout_com_badlogic_gdx_utils_Array_float_float_float_R_float, "(Lcom/badlogic/gdx/utils/Array;FFF)F", 2 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 4 },
	{ "drawIcons", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcons_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_utils_Array_float_float_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcons_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_utils_Array_float_float_R_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFFFLcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/utils/Array;FF)F", 4 },
	{ "drawSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawSelection_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawSelection_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 4 },
	{ "drawOver", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawOver_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawOver_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FFFF)V", 4 },
	{ "drawExpandIcon", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FF)V", 4 },
	{ "drawIcon", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_drawIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_g2d_Batch_float_float, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/g2d/Batch;FF)V", 4 },
	{ "getExpandIcon", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getExpandIcon_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;F)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 4 },
	{ "getNodeAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_float_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_float_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 1 },
	{ "getNodeAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_com_badlogic_gdx_utils_Array_float_float_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodeAt_com_badlogic_gdx_utils_Array_float_float_R_float, "(Lcom/badlogic/gdx/utils/Array;FF)F", 2 },
	{ "selectNodes", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_selectNodes_com_badlogic_gdx_utils_Array_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_selectNodes_com_badlogic_gdx_utils_Array_float_float, "(Lcom/badlogic/gdx/utils/Array;FF)V", 0 },
	{ "getSelection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_Selection, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelection_R_com_badlogic_gdx_scenes_scene2d_utils_Selection, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Selection;", 1 },
	{ "getSelectedNode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelectedNode_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelectedNode_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 1 },
	{ "getSelectedValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelectedValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getSelectedValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$TreeStyle;", 1 },
	{ "getRootNodes", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getRootNodes_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getRootNodes_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getNodes", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodes_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getNodes_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 131073 },
	{ "updateRootNodes", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_updateRootNodes, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_updateRootNodes, "()V", 1 },
	{ "getOverNode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getOverNode_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getOverNode_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 1 },
	{ "getOverValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getOverValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getOverValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setOverNode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setOverNode_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setOverNode_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V", 1 },
	{ "setPadding", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setPadding_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setPadding_float, "(F)V", 1 },
	{ "setPadding", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setPadding_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setPadding_float_float, "(FF)V", 1 },
	{ "setIndentSpacing", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setIndentSpacing_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setIndentSpacing_float, "(F)V", 1 },
	{ "getIndentSpacing", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getIndentSpacing_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getIndentSpacing_R_float, "()F", 1 },
	{ "setYSpacing", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setYSpacing_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setYSpacing_float, "(F)V", 1 },
	{ "getYSpacing", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getYSpacing_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getYSpacing_R_float, "()F", 1 },
	{ "setIconSpacing", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setIconSpacing_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setIconSpacing_float_float, "(FF)V", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getPrefHeight_R_float, "()F", 1 },
	{ "findExpandedValues", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "restoreExpandedValues", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_restoreExpandedValues_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_restoreExpandedValues_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "findExpandedValues", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array_R_boolean, 0, "(Lcom/badlogic/gdx/utils/Array;Lcom/badlogic/gdx/utils/Array;)Z", 8 },
	{ "findNode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(Ljava/lang/Object;)Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 1 },
	{ "findNode", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_com_badlogic_gdx_utils_Array_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, 0, "(Lcom/badlogic/gdx/utils/Array;Ljava/lang/Object;)Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 8 },
	{ "collapseAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll, "()V", 1 },
	{ "collapseAll", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 8 },
	{ "expandAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_expandAll, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_expandAll, "()V", 1 },
	{ "expandAll", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_expandAll_com_badlogic_gdx_utils_Array, 0, "(Lcom/badlogic/gdx/utils/Array;)V", 8 },
	{ "getClickListener", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getClickListener_R_com_badlogic_gdx_scenes_scene2d_utils_ClickListener, "()Lcom/badlogic/gdx/scenes/scene2d/utils/ClickListener;", 1 },
	{ "setStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_setStyle_java_lang_Object, "(Ljava/lang/Object;)V", 4161 },
	{ "getStyle", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_getStyle_R_java_lang_Object, "()Ljava/lang/Object;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Tree{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Tree",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Tree),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Tree,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Tree,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 17,
		.nativeFields = (intptr_t) fields,
		.methodCount = 58,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 209,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Tree = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Tree);

}

