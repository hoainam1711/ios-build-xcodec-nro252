#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_Node.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_Node.h"

extern "C" {


void mark_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) object;
	if (self->F_actor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actor)->clazz)->markFunction)((jobject) self->F_actor, mark, depth + 1);
	if (self->F_parent)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_parent)->clazz)->markFunction)((jobject) self->F_parent, mark, depth + 1);
	if (self->F_children)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_children)->clazz)->markFunction)((jobject) self->F_children, mark, depth + 1);
	if (self->F_icon)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_icon)->clazz)->markFunction)((jobject) self->F_icon, mark, depth + 1);
	if (self->F_value)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_value)->clazz)->markFunction)((jobject) self->F_value, mark, depth + 1);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(598);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(592);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_selectable = (jint(1));
	LINE_NUMBER(599);
	if ((frame[1].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(600);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (frame[1].o);
	LINE_NUMBER(601);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(604);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(591);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(0)));
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK(sp[0].o))->F_children = (jref) sp[1].o;
	LINE_NUMBER(592);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_selectable = (jint(1));
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:setExpanded", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(608);
	if ((frame[1].i) != ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(609);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded = (frame[1].i);
	LINE_NUMBER(610);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(611);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(612);
	if ((frame[2].o) != nullptr) goto label_5;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(613);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(614);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[4].i = (temp0 + (jint(1)));
	LINE_NUMBER(615);
	if ((frame[1].i) == 0) goto label_8;
	}
	{
	LINE_NUMBER(616);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_12;
	}
	{
	LINE_NUMBER(617);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))))), (frame[2].o), (frame[4].i));
	frame[4].i = (temp0 + temp1);
	LINE_NUMBER(616);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	goto label_15;
label_8:;
	{
	LINE_NUMBER(619);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_17:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_15;
	}
	{
	LINE_NUMBER(620);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i))))), (frame[2].o), (frame[4].i));
	LINE_NUMBER(619);
	INST_IINC(5, 1);
	goto label_17;
	}
label_15:;
	LINE_NUMBER(622);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:addToTree", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(627);
	sp[0].o = frame[1].o;
	jint temp0 = frame[2].i;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, temp0, sp[1].o);
	LINE_NUMBER(628);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_2;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(629);
	frame[3].i = ((frame[2].i) + (jint(1)));
	LINE_NUMBER(630);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(631);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_6:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_7;
	}
	{
	LINE_NUMBER(632);
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))), (frame[1].o), (frame[3].i));
	frame[3].i = (temp0 + temp1);
	LINE_NUMBER(631);
	INST_IINC(5, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(633);
	popStackFrame(ctx);
	return ((frame[3].i) - (frame[2].i));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:removeFromTree", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[1].o), (frame[2].i), (jint(1)));
	frame[3].o = sp[0].o;
	LINE_NUMBER(640);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(641);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[4].o = sp[0].o;
	LINE_NUMBER(642);
	frame[5].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[6].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[6].i)) goto label_6;
	}
	{
	LINE_NUMBER(643);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[4].o), (frame[5].i))))), (frame[1].o), (frame[2].i));
	LINE_NUMBER(642);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(644);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_add_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:add", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(647);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size), (frame[1].o));
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addAll_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:addAll", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(651);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(652);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[1].o))->F_size;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, sp[0].o, temp0, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[1].o)));
	LINE_NUMBER(651);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(653);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jint param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:insert", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(656);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[2].o)))->F_parent = (jref) (frame[0].o);
	LINE_NUMBER(657);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_insert_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	LINE_NUMBER(658);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(659);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree])(ctx, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(660);
	if ((frame[3].o) == nullptr) goto label_5;
	}
	{
	LINE_NUMBER(662);
	if ((frame[1].i) != 0) goto label_7;
	}
	{
	LINE_NUMBER(663);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[4].i = (temp0 + (jint(1)));
	goto label_10;
	}
label_7:;
	{
	LINE_NUMBER(664);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	if (temp0 >= (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)))) goto label_11;
	}
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[1].i) + (jint(1))));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o))))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[4].i = temp0;
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(667);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, ((frame[1].i) - (jint(1))));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, sp[0].o));
	LINE_NUMBER(668);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[5].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int])(ctx, (frame[5].o));
	frame[4].i = (temp0 + temp1);
	}
label_10:;
	{
	LINE_NUMBER(670);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int])(ctx, (frame[2].o), (frame[3].o), (frame[4].i));
	}
label_5:;
	LINE_NUMBER(672);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:countActors", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(675);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_1;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(676);
	frame[1].i = (jint(1));
	LINE_NUMBER(677);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(678);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_6;
	}
	{
	LINE_NUMBER(679);
	jint temp0 = frame[1].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i))))));
	frame[1].i = (temp0 + temp1);
	LINE_NUMBER(678);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(680);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:remove", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(685);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(686);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(687);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, (frame[1].o), (frame[0].o));
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(688);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_parent;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(689);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_parent;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, sp[0].o, (frame[0].o));
	}
label_4:;
	LINE_NUMBER(690);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:remove", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(694);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_removeValue_java_lang_Object_boolean_R_boolean])(ctx, sp[0].o, (frame[1].o), (jint(1)));
	if (temp0 != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(695);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_2;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(696);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(697);
	if ((frame[2].o) == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = frame[2].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[1].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[2].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[2].o);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int])(ctx, sp[0].o, sp[1].o, temp0);
	}
label_4:;
	LINE_NUMBER(698);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_clearChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:clearChildren", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(702);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded) == 0) goto label_1;
	}
	{
	LINE_NUMBER(703);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(704);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(705);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 + (jint(1)));
	LINE_NUMBER(706);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(707);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_8:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_1;
	}
	{
	LINE_NUMBER(708);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[4].i))))), (frame[1].o), (frame[2].i));
	LINE_NUMBER(707);
	INST_IINC(4, 1);
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(711);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(712);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:getTree", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(717);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(718);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_ui_Tree)) == 0) goto label_2;
	}
	{
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree, (frame[1].o)));
	}
label_2:;
	{
	LINE_NUMBER(719);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setActor_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:setActor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(723);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(724);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree])(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(725);
	if ((frame[2].o) == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(726);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[3].i = temp0;
	LINE_NUMBER(727);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o), (frame[3].i), (jint(1)));
	LINE_NUMBER(728);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree_addActorAt_int_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o), (frame[3].i), (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(731);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (frame[1].o);
	LINE_NUMBER(732);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:getActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(735);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isExpanded_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:isExpanded", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(739);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getChildren_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:getChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(746);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_hasChildren_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:hasChildren", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(750);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_updateChildren(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:updateChildren", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(757);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree])(ctx, (frame[0].o));
	frame[1].o = sp[0].o;
	LINE_NUMBER(759);
	if ((frame[1].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(761);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(762);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getZIndex_R_int])(ctx, sp[0].o);
	frame[4].i = (temp0 + (jint(1)));
	LINE_NUMBER(763);
	frame[5].i = (jint(0));
	}
label_7:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_8;
	}
	{
	LINE_NUMBER(764);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))))), (frame[1].o), (frame[4].i));
	LINE_NUMBER(763);
	INST_IINC(5, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(765);
	frame[5].i = (jint(0));
	}
label_11:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_12;
	}
	{
	LINE_NUMBER(766);
	jint temp0 = frame[4].i;
	jint temp1 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[5].i))))), (frame[1].o), (frame[4].i));
	frame[4].i = (temp0 + temp1);
	LINE_NUMBER(765);
	INST_IINC(5, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(767);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getParent_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:getParent", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(771);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_parent;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setIcon_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:setIcon", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(776);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_icon = (jref) (frame[1].o);
	LINE_NUMBER(777);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getValue_R_java_lang_Object(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:getValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(780);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_value;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setValue_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:setValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(785);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_value = (jref) (frame[1].o);
	LINE_NUMBER(786);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getIcon_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:getIcon", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(789);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_icon;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getLevel_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:getLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(793);
	frame[1].i = (jint(0));
	LINE_NUMBER(794);
	frame[2].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(796);
	INST_IINC(1, 1);
	LINE_NUMBER(797);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getParent_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getParent_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, (frame[2].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(798);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(799);
	popStackFrame(ctx);
	return (frame[1].i);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:findNode", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(804);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"value cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(805);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_value;
	jint temp0 = (jint)((func_java_lang_Object_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Object_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 == 0) goto label_2;
	}
	INST_ALOAD(0);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(806);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findNode_com_badlogic_gdx_utils_Array_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_collapseAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:collapseAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(811);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(812);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_collapseAll_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	LINE_NUMBER(813);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandAll(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:expandAll", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(817);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(818);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_expandAll_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	}
label_2:;
	LINE_NUMBER(819);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandTo(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:expandTo", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(823);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_parent;
	frame[1].o = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(824);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(825);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean])(ctx, (frame[1].o), (jint(1)));
	LINE_NUMBER(826);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[1].o)))->F_parent;
	frame[1].o = sp[0].o;
	goto label_1;
	}
label_2:;
	LINE_NUMBER(828);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isSelectable_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:isSelectable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(831);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_selectable);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setSelectable_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:setSelectable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(835);
	((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_selectable = (frame[1].i);
	LINE_NUMBER(836);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findExpandedValues_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:findExpandedValues", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(839);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_expanded) == 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_children;
	jint temp0 = (jint)SM_com_badlogic_gdx_scenes_scene2d_ui_Tree_findExpandedValues_com_badlogic_gdx_utils_Array_com_badlogic_gdx_utils_Array_R_boolean(ctx, sp[0].o, (frame[1].o));
	if (temp0 != 0) goto label_1;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_value;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_1:;
	LINE_NUMBER(840);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_restoreExpandedValues_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:restoreExpandedValues", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(843);
	frame[2].i = (jint(0));
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[1].o)))->F_size);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(844);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[1].o), (frame[2].i));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node])(ctx, sp[0].o, sp[1].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(845);
	if ((frame[4].o) == nullptr) goto label_6;
	}
	{
	LINE_NUMBER(846);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean])(ctx, (frame[4].o), (jint(1)));
	LINE_NUMBER(847);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandTo) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandTo])(ctx, (frame[4].o));
	}
label_6:;
	{
	LINE_NUMBER(843);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	LINE_NUMBER(850);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:getHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[0].o)))->F_height);
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isAscendantOf_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:isAscendantOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(860);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"node cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(861);
	frame[2].o = (frame[1].o);
	}
label_2:;
	{
	LINE_NUMBER(863);
	if ((frame[2].o) != (frame[0].o)) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(864);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(865);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(866);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isDescendantOf_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node:isDescendantOf", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(871);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"node cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(872);
	frame[2].o = (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(874);
	if ((frame[2].o) != (frame[1].o)) goto label_3;
	}
	INST_ICONST(1);
	popStackFrame(ctx);
	INST_IRETURN();
label_3:;
	{
	LINE_NUMBER(875);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Tree$Node *) NULL_CHECK((frame[2].o)))->F_parent;
	frame[2].o = sp[0].o;
	LINE_NUMBER(876);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(877);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_add_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addAll_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_clearChildren,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setActor_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isExpanded_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getChildren_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_hasChildren_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_updateChildren,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getParent_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setIcon_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getValue_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setValue_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getIcon_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getLevel_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_collapseAll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandAll,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandTo,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isSelectable_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setSelectable_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findExpandedValues_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_restoreExpandedValues_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isAscendantOf_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isDescendantOf_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_R_boolean,
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
	{ "setExpanded", "(Z)V" },
	{ "addToTree", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree;I)I" },
	{ "removeFromTree", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree;I)V" },
	{ "add", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V" },
	{ "addAll", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "insert", "(ILcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V" },
	{ "countActors", "()I" },
	{ "remove", "()V" },
	{ "remove", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V" },
	{ "clearChildren", "()V" },
	{ "getTree", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree;" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V" },
	{ "getActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "isExpanded", "()Z" },
	{ "getChildren", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "hasChildren", "()Z" },
	{ "updateChildren", "()V" },
	{ "getParent", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;" },
	{ "setIcon", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "getValue", "()Ljava/lang/Object;" },
	{ "setValue", "(Ljava/lang/Object;)V" },
	{ "getIcon", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "getLevel", "()I" },
	{ "findNode", "(Ljava/lang/Object;)Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;" },
	{ "collapseAll", "()V" },
	{ "expandAll", "()V" },
	{ "expandTo", "()V" },
	{ "isSelectable", "()Z" },
	{ "setSelectable", "(Z)V" },
	{ "findExpandedValues", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "restoreExpandedValues", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "getHeight", "()F" },
	{ "isAscendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)Z" },
	{ "isDescendantOf", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)Z" },
};

static FieldMetadata fields[] {
	{ "actor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, F_actor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 0 },
	{ "parent", &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, F_parent), "Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 0 },
	{ "children", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, F_children), "Lcom/badlogic/gdx/utils/Array;", 16 },
	{ "selectable", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, F_selectable), "Z", 0 },
	{ "expanded", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, F_expanded), "Z", 0 },
	{ "icon", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, F_icon), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 0 },
	{ "height", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, F_height), "F", 0 },
	{ "value", &class_java_lang_Object, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, F_value), "Ljava/lang/Object;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_com_badlogic_gdx_scenes_scene2d_Actor, 0, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, 0, "()V", 1 },
	{ "setExpanded", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setExpanded_boolean, "(Z)V", 1 },
	{ "addToTree", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addToTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int_R_int, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree;I)I", 4 },
	{ "removeFromTree", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_removeFromTree_com_badlogic_gdx_scenes_scene2d_ui_Tree_int, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree;I)V", 4 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_add_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_add_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V", 1 },
	{ "addAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addAll_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_addAll_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_insert_int_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(ILcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V", 1 },
	{ "countActors", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_countActors_R_int, "()I", 0 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove, "()V", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_remove_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)V", 1 },
	{ "clearChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_clearChildren, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_clearChildren, "()V", 1 },
	{ "getTree", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getTree_R_com_badlogic_gdx_scenes_scene2d_ui_Tree, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree;", 1 },
	{ "setActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setActor_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setActor_com_badlogic_gdx_scenes_scene2d_Actor, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)V", 1 },
	{ "getActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "isExpanded", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isExpanded_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isExpanded_R_boolean, "()Z", 1 },
	{ "getChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getChildren_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getChildren_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "hasChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_hasChildren_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_hasChildren_R_boolean, "()Z", 1 },
	{ "updateChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_updateChildren, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_updateChildren, "()V", 1 },
	{ "getParent", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getParent_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getParent_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 1 },
	{ "setIcon", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setIcon_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setIcon_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "getValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getValue_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getValue_R_java_lang_Object, "()Ljava/lang/Object;", 1 },
	{ "setValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setValue_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setValue_java_lang_Object, "(Ljava/lang/Object;)V", 1 },
	{ "getIcon", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getIcon_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getIcon_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "getLevel", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getLevel_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getLevel_R_int, "()I", 1 },
	{ "findNode", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findNode_java_lang_Object_R_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node, "(Ljava/lang/Object;)Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;", 1 },
	{ "collapseAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_collapseAll, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_collapseAll, "()V", 1 },
	{ "expandAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandAll, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandAll, "()V", 1 },
	{ "expandTo", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandTo, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_expandTo, "()V", 1 },
	{ "isSelectable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isSelectable_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isSelectable_R_boolean, "()Z", 1 },
	{ "setSelectable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setSelectable_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_setSelectable_boolean, "(Z)V", 1 },
	{ "findExpandedValues", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findExpandedValues_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_findExpandedValues_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "restoreExpandedValues", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_restoreExpandedValues_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_restoreExpandedValues_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "getHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_getHeight_R_float, "()F", 1 },
	{ "isAscendantOf", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isAscendantOf_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isAscendantOf_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)Z", 1 },
	{ "isDescendantOf", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isDescendantOf_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_isDescendantOf_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Tree$Node;)Z", 1 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Tree$Node",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Tree$Node),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_Tree,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 1057,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 36,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 45,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Tree$Node);

}

