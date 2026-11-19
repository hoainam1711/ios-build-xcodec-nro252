#include "com/badlogic/gdx/scenes/scene2d/ui/Cell.h"
#include "java/lang/Integer.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table.h"
#include "java/lang/Boolean.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/Files.h"
#include "com/badlogic/gdx/utils/Pool_Poolable.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Cell.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_Fixed.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_centeri;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_topi;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottomi;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_lefti;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_righti;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_files;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Cell(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_centeri)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_centeri)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_centeri, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_topi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_topi)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_topi, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottomi)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottomi)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottomi, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_lefti)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_lefti)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_lefti, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_righti)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_righti)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_righti, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_files)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_files)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_files, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Cell *) object;
	if (self->F_minWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minWidth)->clazz)->markFunction)((jobject) self->F_minWidth, mark, depth + 1);
	if (self->F_minHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_minHeight)->clazz)->markFunction)((jobject) self->F_minHeight, mark, depth + 1);
	if (self->F_prefWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefWidth)->clazz)->markFunction)((jobject) self->F_prefWidth, mark, depth + 1);
	if (self->F_prefHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_prefHeight)->clazz)->markFunction)((jobject) self->F_prefHeight, mark, depth + 1);
	if (self->F_maxWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_maxWidth)->clazz)->markFunction)((jobject) self->F_maxWidth, mark, depth + 1);
	if (self->F_maxHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_maxHeight)->clazz)->markFunction)((jobject) self->F_maxHeight, mark, depth + 1);
	if (self->F_spaceTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spaceTop)->clazz)->markFunction)((jobject) self->F_spaceTop, mark, depth + 1);
	if (self->F_spaceLeft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spaceLeft)->clazz)->markFunction)((jobject) self->F_spaceLeft, mark, depth + 1);
	if (self->F_spaceBottom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spaceBottom)->clazz)->markFunction)((jobject) self->F_spaceBottom, mark, depth + 1);
	if (self->F_spaceRight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_spaceRight)->clazz)->markFunction)((jobject) self->F_spaceRight, mark, depth + 1);
	if (self->F_padTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padTop)->clazz)->markFunction)((jobject) self->F_padTop, mark, depth + 1);
	if (self->F_padLeft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padLeft)->clazz)->markFunction)((jobject) self->F_padLeft, mark, depth + 1);
	if (self->F_padBottom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padBottom)->clazz)->markFunction)((jobject) self->F_padBottom, mark, depth + 1);
	if (self->F_padRight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padRight)->clazz)->markFunction)((jobject) self->F_padRight, mark, depth + 1);
	if (self->F_fillX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fillX)->clazz)->markFunction)((jobject) self->F_fillX, mark, depth + 1);
	if (self->F_fillY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_fillY)->clazz)->markFunction)((jobject) self->F_fillY, mark, depth + 1);
	if (self->F_align)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_align)->clazz)->markFunction)((jobject) self->F_align, mark, depth + 1);
	if (self->F_expandX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expandX)->clazz)->markFunction)((jobject) self->F_expandX, mark, depth + 1);
	if (self->F_expandY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expandY)->clazz)->markFunction)((jobject) self->F_expandY, mark, depth + 1);
	if (self->F_colspan)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_colspan)->clazz)->markFunction)((jobject) self->F_colspan, mark, depth + 1);
	if (self->F_uniformX)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniformX)->clazz)->markFunction)((jobject) self->F_uniformX, mark, depth + 1);
	if (self->F_uniformY)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_uniformY)->clazz)->markFunction)((jobject) self->F_uniformY, mark, depth + 1);
	if (self->F_actor)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_actor)->clazz)->markFunction)((jobject) self->F_actor, mark, depth + 1);
	if (self->F_table)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_table)->clazz)->markFunction)((jobject) self->F_table, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(44);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(45);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_cellAboveIndex = (jint(-1));
	LINE_NUMBER(46);
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	frame[1].o = sp[0].o;
	LINE_NUMBER(47);
	if ((frame[1].o) == nullptr) goto label_4;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o), (frame[1].o));
	}
label_4:;
	LINE_NUMBER(48);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setTable_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:setTable", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(51);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_table = (jref) (frame[1].o);
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActor_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:setActor", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(56);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == (frame[1].o)) goto label_1;
	}
	{
	LINE_NUMBER(57);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_getParent_R_com_badlogic_gdx_scenes_scene2d_Group])(ctx, sp[0].o);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_table;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean])(ctx, sp[0].o);
	}
label_3:;
	{
	LINE_NUMBER(58);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (frame[1].o);
	LINE_NUMBER(59);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_table;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, sp[0].o, (frame[1].o));
	}
label_1:;
	{
	LINE_NUMBER(61);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_clearActor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:clearActor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActor_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActor_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(67);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(72);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Cell_hasActor_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:hasActor", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(77);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_1;
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

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:size", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(82);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(83);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(84);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[1].o);
	LINE_NUMBER(85);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(86);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[1].o);
	LINE_NUMBER(87);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(88);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[1].o);
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(94);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(95);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(96);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(97);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[2].o);
	LINE_NUMBER(98);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(99);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[2].o);
	LINE_NUMBER(100);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(101);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[2].o);
	LINE_NUMBER(102);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:size", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(107);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(108);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:size", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(113);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(114);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:width", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(119);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(120);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(121);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(122);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(123);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:width", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(128);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(129);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:height", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(134);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(135);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[1].o);
	LINE_NUMBER(136);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[1].o);
	LINE_NUMBER(137);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[1].o);
	LINE_NUMBER(138);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:height", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(144);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:minSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(150);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(151);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[1].o);
	LINE_NUMBER(152);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:minSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(157);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(158);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(159);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(160);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[2].o);
	LINE_NUMBER(161);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:minWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(165);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minWidth cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(166);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (frame[1].o);
	LINE_NUMBER(167);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:minHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(171);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"minHeight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(172);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (frame[1].o);
	LINE_NUMBER(173);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:minSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(178);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(179);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:minSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(184);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(185);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:minWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(189);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = (jref) sp[1].o;
	LINE_NUMBER(190);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:minHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(194);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = (jref) sp[1].o;
	LINE_NUMBER(195);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:prefSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(200);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(201);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(202);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[1].o);
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:prefSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(208);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(209);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(210);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(211);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[2].o);
	LINE_NUMBER(212);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:prefWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(216);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"prefWidth cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(217);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (frame[1].o);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:prefHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(222);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"prefHeight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(223);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (frame[1].o);
	LINE_NUMBER(224);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:prefSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(229);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(230);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:prefSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(235);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(236);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:prefWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_prefWidth = (jref) sp[1].o;
	LINE_NUMBER(241);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:prefHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(245);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_prefHeight = (jref) sp[1].o;
	LINE_NUMBER(246);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:maxSize", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(251);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"size cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(252);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(253);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[1].o);
	LINE_NUMBER(254);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:maxSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(259);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"width cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(260);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"height cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(261);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(262);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[2].o);
	LINE_NUMBER(263);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:maxWidth", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(268);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxWidth cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(269);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (frame[1].o);
	LINE_NUMBER(270);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:maxHeight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(275);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"maxHeight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(276);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (frame[1].o);
	LINE_NUMBER(277);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:maxSize", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(282);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(283);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:maxSize", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(288);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(289);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:maxWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_maxWidth = (jref) sp[1].o;
	LINE_NUMBER(295);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:maxHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(300);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_maxHeight = (jref) sp[1].o;
	LINE_NUMBER(301);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:space", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(306);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"space cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(307);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceTop = (jref) (frame[1].o);
	LINE_NUMBER(308);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceLeft = (jref) (frame[1].o);
	LINE_NUMBER(309);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceBottom = (jref) (frame[1].o);
	LINE_NUMBER(310);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceRight = (jref) (frame[1].o);
	LINE_NUMBER(311);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:space", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(315);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"top cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(316);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"left cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(317);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bottom cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(318);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"right cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(319);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceTop = (jref) (frame[1].o);
	LINE_NUMBER(320);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceLeft = (jref) (frame[2].o);
	LINE_NUMBER(321);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceBottom = (jref) (frame[3].o);
	LINE_NUMBER(322);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceRight = (jref) (frame[4].o);
	LINE_NUMBER(323);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:spaceTop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(327);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spaceTop cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(328);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceTop = (jref) (frame[1].o);
	LINE_NUMBER(329);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:spaceLeft", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(333);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spaceLeft cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(334);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceLeft = (jref) (frame[1].o);
	LINE_NUMBER(335);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:spaceBottom", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(339);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spaceBottom cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(340);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceBottom = (jref) (frame[1].o);
	LINE_NUMBER(341);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:spaceRight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(345);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"spaceRight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(346);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceRight = (jref) (frame[1].o);
	LINE_NUMBER(347);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:space", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(352);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"space cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(353);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(354);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:space", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(359);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"top cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(360);
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) >= 0) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"left cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(361);
	if ((floatCompare((frame[3].f), (jfloat(0)), 1)) >= 0) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"bottom cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[3].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(362);
	if ((floatCompare((frame[4].f), (jfloat(0)), 1)) >= 0) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"right cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[4].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(363);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[3].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[3].f));
	sp[4].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[4].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(364);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:spaceTop", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(369);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"spaceTop cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceTop = (jref) sp[1].o;
	LINE_NUMBER(371);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:spaceLeft", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(376);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"spaceLeft cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(377);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceLeft = (jref) sp[1].o;
	LINE_NUMBER(378);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:spaceBottom", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(383);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"spaceBottom cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(384);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceBottom = (jref) sp[1].o;
	LINE_NUMBER(385);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:spaceRight", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(390);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) >= 0) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"spaceRight cannot be < 0: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_float_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].f));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(391);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceRight = (jref) sp[1].o;
	LINE_NUMBER(392);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:pad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(397);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pad cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(398);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(399);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[1].o);
	LINE_NUMBER(400);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[1].o);
	LINE_NUMBER(401);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[1].o);
	LINE_NUMBER(402);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:pad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(406);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"top cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(407);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"left cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(408);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bottom cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(409);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"right cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(410);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(411);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[2].o);
	LINE_NUMBER(412);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[3].o);
	LINE_NUMBER(413);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[4].o);
	LINE_NUMBER(414);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:padTop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(418);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padTop cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(419);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(420);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:padLeft", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(424);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padLeft cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(425);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[1].o);
	LINE_NUMBER(426);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:padBottom", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(430);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padBottom cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(431);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[1].o);
	LINE_NUMBER(432);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:padRight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(436);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padRight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(437);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[1].o);
	LINE_NUMBER(438);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:pad", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(443);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(444);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:pad", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(448);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[2].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	sp[3].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[3].f));
	sp[4].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[4].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o, sp[4].o);
	LINE_NUMBER(449);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:padTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(453);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	LINE_NUMBER(454);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:padLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(458);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	LINE_NUMBER(459);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:padBottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(463);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	LINE_NUMBER(464);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:padRight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(468);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(469);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:fill", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(474);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(475);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fillX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:fillX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(481);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(482);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fillY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:fillY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(487);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(488);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jfloat param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:fill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(492);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(493);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (frame[2].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(494);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:fill", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(499);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	goto label_2;
label_1:;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof;
label_2:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(500);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_4;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	goto label_5;
label_4:;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof;
label_5:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(501);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:fill", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(506);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	goto label_2;
label_1:;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof;
label_2:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(507);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_4;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	goto label_5;
label_4:;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof;
label_5:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(508);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:align", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(514);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	LINE_NUMBER(515);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_center_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:center", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(520);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_centeri;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	LINE_NUMBER(521);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_top_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:top", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(526);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(527);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_topi;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(529);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((temp0 | (jint(2))) & (-5)));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(530);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_left_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:left", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(535);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(536);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_lefti;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(538);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((temp0 | (8)) & (-17)));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(539);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:bottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(544);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(545);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottomi;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((temp0 | (jint(4))) & (-3)));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(548);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_right_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:right", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(553);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_righti;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	goto label_3;
	}
label_1:;
	{
	LINE_NUMBER(556);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, ((temp0 | (16)) & (-9)));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(557);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_grow_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:grow", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(562);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	LINE_NUMBER(563);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	LINE_NUMBER(564);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(565);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(566);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_growX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:growX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(571);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	LINE_NUMBER(572);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(573);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_growY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:growY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(578);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	LINE_NUMBER(579);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(580);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:expand", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(585);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	LINE_NUMBER(586);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	LINE_NUMBER(587);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expandX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:expandX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(592);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	LINE_NUMBER(593);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expandY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:expandY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(598);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	LINE_NUMBER(599);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_int_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jint param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:expand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(603);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	LINE_NUMBER(604);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[2].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	LINE_NUMBER(605);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:expand", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(610);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	goto label_2;
label_1:;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi;
label_2:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	LINE_NUMBER(611);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[2].i) == 0) goto label_4;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	goto label_5;
label_4:;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi;
label_5:;
	{
	sp -= 2;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	LINE_NUMBER(612);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_colspan_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:colspan", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(616);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[1].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_colspan = (jref) sp[1].o;
	LINE_NUMBER(617);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:uniform", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(622);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformX = (jref) sp[1].o;
	LINE_NUMBER(623);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformY = (jref) sp[1].o;
	LINE_NUMBER(624);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniformX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:uniformX", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(629);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformX = (jref) sp[1].o;
	LINE_NUMBER(630);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniformY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:uniformY", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(635);
	sp[0].o = frame[0].o;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformY = (jref) sp[1].o;
	LINE_NUMBER(636);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:uniform", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(640);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[1].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformX = (jref) sp[1].o;
	LINE_NUMBER(641);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[1].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformY = (jref) sp[1].o;
	LINE_NUMBER(642);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jbool param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:uniform", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(646);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[1].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformX = (jref) sp[1].o;
	LINE_NUMBER(647);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_java_lang_Boolean_valueOf_boolean_R_java_lang_Boolean(ctx, (frame[2].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformY = (jref) sp[1].o;
	LINE_NUMBER(648);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorBounds_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:setActorBounds", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(652);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorX = (frame[1].f);
	LINE_NUMBER(653);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorY = (frame[2].f);
	LINE_NUMBER(654);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorWidth = (frame[3].f);
	LINE_NUMBER(655);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorHeight = (frame[4].f);
	LINE_NUMBER(656);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getActorX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(659);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorX);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorX_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:setActorX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(663);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorX = (frame[1].f);
	LINE_NUMBER(664);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getActorY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(667);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorY);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorY_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:setActorY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(671);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorY = (frame[1].f);
	LINE_NUMBER(672);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getActorWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(675);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorWidth);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorWidth_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:setActorWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(679);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorWidth = (frame[1].f);
	LINE_NUMBER(680);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getActorHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(683);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorHeight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorHeight_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:setActorHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(687);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actorHeight = (frame[1].f);
	LINE_NUMBER(688);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getColumn_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getColumn", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(691);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_column);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getRow_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getRow", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_row);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getMinWidthValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getMinWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(704);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getMinHeightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(709);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getMinHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(713);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPrefWidthValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(718);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPrefWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(722);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPrefHeightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(727);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPrefHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(731);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getMaxWidthValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(736);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getMaxWidth", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(740);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getMaxHeightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(745);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getMaxHeight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(749);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getSpaceTopValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceTop;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getSpaceTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(758);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceTop;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getSpaceLeftValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(763);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceLeft_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getSpaceLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(767);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceLeft;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getSpaceBottomValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceBottom;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceBottom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getSpaceBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(776);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceBottom;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getSpaceRightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(781);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceRight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getSpaceRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(785);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceRight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadTopValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(790);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padTop;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(794);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padTop;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadLeftValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(799);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadLeft_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(803);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadBottomValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(808);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadBottom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(812);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadRightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(817);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padRight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padRight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(826);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padRight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getPadY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(831);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padTop;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getFillX_R_java_lang_Float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getFillX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(835);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_fillX;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getFillY_R_java_lang_Float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getFillY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(839);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_fillY;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getAlign_R_java_lang_Integer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(843);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getExpandX_R_java_lang_Integer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getExpandX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(847);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_expandX;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getExpandY_R_java_lang_Integer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getExpandY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(851);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_expandY;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getColspan_R_java_lang_Integer(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getColspan", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(855);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_colspan;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getUniformX_R_java_lang_Boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getUniformX", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(859);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_uniformX;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getUniformY_R_java_lang_Boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getUniformY", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(863);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_uniformY;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Cell_isEndRow_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:isEndRow", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(868);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_endRow);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getComputedPadTop", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(873);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_computedPadTop);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadLeft_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getComputedPadLeft", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(878);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_computedPadLeft);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadBottom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getComputedPadBottom", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(883);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_computedPadBottom);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getComputedPadRight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(888);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_computedPadRight);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_row(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:row", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(892);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_table;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_row_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_row_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o);
	LINE_NUMBER(893);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:getTable", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(896);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_table;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_clear(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:clear", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(901);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minWidth = (jref) (jobject(nullptr));
	LINE_NUMBER(902);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_minHeight = (jref) (jobject(nullptr));
	LINE_NUMBER(903);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefWidth = (jref) (jobject(nullptr));
	LINE_NUMBER(904);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_prefHeight = (jref) (jobject(nullptr));
	LINE_NUMBER(905);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxWidth = (jref) (jobject(nullptr));
	LINE_NUMBER(906);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_maxHeight = (jref) (jobject(nullptr));
	LINE_NUMBER(907);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceTop = (jref) (jobject(nullptr));
	LINE_NUMBER(908);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceLeft = (jref) (jobject(nullptr));
	LINE_NUMBER(909);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceBottom = (jref) (jobject(nullptr));
	LINE_NUMBER(910);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_spaceRight = (jref) (jobject(nullptr));
	LINE_NUMBER(911);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (jobject(nullptr));
	LINE_NUMBER(912);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (jobject(nullptr));
	LINE_NUMBER(913);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (jobject(nullptr));
	LINE_NUMBER(914);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (jobject(nullptr));
	LINE_NUMBER(915);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_fillX = (jref) (jobject(nullptr));
	LINE_NUMBER(916);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_fillY = (jref) (jobject(nullptr));
	LINE_NUMBER(917);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_align = (jref) (jobject(nullptr));
	LINE_NUMBER(918);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_expandX = (jref) (jobject(nullptr));
	LINE_NUMBER(919);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_expandY = (jref) (jobject(nullptr));
	LINE_NUMBER(920);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_colspan = (jref) (jobject(nullptr));
	LINE_NUMBER(921);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_uniformX = (jref) (jobject(nullptr));
	LINE_NUMBER(922);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_uniformY = (jref) (jobject(nullptr));
	LINE_NUMBER(923);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:reset", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(927);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor = (jref) (jobject(nullptr));
	LINE_NUMBER(928);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_table = (jref) (jobject(nullptr));
	LINE_NUMBER(929);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_endRow = (jint(0));
	LINE_NUMBER(930);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_cellAboveIndex = (jint(-1));
	LINE_NUMBER(931);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(932);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:set", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(935);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_minWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = (jref) sp[1].o;
	LINE_NUMBER(936);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_minHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = (jref) sp[1].o;
	LINE_NUMBER(937);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_prefWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_prefWidth = (jref) sp[1].o;
	LINE_NUMBER(938);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_prefHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_prefHeight = (jref) sp[1].o;
	LINE_NUMBER(939);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_maxWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_maxWidth = (jref) sp[1].o;
	LINE_NUMBER(940);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_maxHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_maxHeight = (jref) sp[1].o;
	LINE_NUMBER(941);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceTop;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceTop = (jref) sp[1].o;
	LINE_NUMBER(942);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceLeft;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceLeft = (jref) sp[1].o;
	LINE_NUMBER(943);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceBottom;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceBottom = (jref) sp[1].o;
	LINE_NUMBER(944);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceRight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceRight = (jref) sp[1].o;
	LINE_NUMBER(945);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padTop;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	LINE_NUMBER(946);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padLeft;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	LINE_NUMBER(947);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padBottom;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	LINE_NUMBER(948);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padRight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(949);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_fillX;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(950);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_fillY;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(951);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_align;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	LINE_NUMBER(952);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_expandX;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	LINE_NUMBER(953);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_expandY;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	LINE_NUMBER(954);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_colspan;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_colspan = (jref) sp[1].o;
	LINE_NUMBER(955);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_uniformX;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformX = (jref) sp[1].o;
	LINE_NUMBER(956);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_uniformY;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformY = (jref) sp[1].o;
	LINE_NUMBER(957);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Cell_merge_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:merge", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(960);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(961);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_minWidth;
	if (sp[0].o == nullptr) goto label_2;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_minWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = (jref) sp[1].o;
	}
label_2:;
	{
	LINE_NUMBER(962);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_minHeight;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_minHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = (jref) sp[1].o;
	}
label_3:;
	{
	LINE_NUMBER(963);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_prefWidth;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_prefWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_prefWidth = (jref) sp[1].o;
	}
label_4:;
	{
	LINE_NUMBER(964);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_prefHeight;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_prefHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_prefHeight = (jref) sp[1].o;
	}
label_5:;
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_maxWidth;
	if (sp[0].o == nullptr) goto label_6;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_maxWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_maxWidth = (jref) sp[1].o;
	}
label_6:;
	{
	LINE_NUMBER(966);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_maxHeight;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_maxHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_maxHeight = (jref) sp[1].o;
	}
label_7:;
	{
	LINE_NUMBER(967);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceTop;
	if (sp[0].o == nullptr) goto label_8;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceTop;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceTop = (jref) sp[1].o;
	}
label_8:;
	{
	LINE_NUMBER(968);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceLeft;
	if (sp[0].o == nullptr) goto label_9;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceLeft;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceLeft = (jref) sp[1].o;
	}
label_9:;
	{
	LINE_NUMBER(969);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceBottom;
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceBottom;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceBottom = (jref) sp[1].o;
	}
label_10:;
	{
	LINE_NUMBER(970);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceRight;
	if (sp[0].o == nullptr) goto label_11;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_spaceRight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceRight = (jref) sp[1].o;
	}
label_11:;
	{
	LINE_NUMBER(971);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padTop;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padTop;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	}
label_12:;
	{
	LINE_NUMBER(972);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padLeft;
	if (sp[0].o == nullptr) goto label_13;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padLeft;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	}
label_13:;
	{
	LINE_NUMBER(973);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padBottom;
	if (sp[0].o == nullptr) goto label_14;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padBottom;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	}
label_14:;
	{
	LINE_NUMBER(974);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padRight;
	if (sp[0].o == nullptr) goto label_15;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_padRight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	}
label_15:;
	{
	LINE_NUMBER(975);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_fillX;
	if (sp[0].o == nullptr) goto label_16;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_fillX;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	}
label_16:;
	{
	LINE_NUMBER(976);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_fillY;
	if (sp[0].o == nullptr) goto label_17;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_fillY;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	}
label_17:;
	{
	LINE_NUMBER(977);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_align;
	if (sp[0].o == nullptr) goto label_18;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_align;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	}
label_18:;
	{
	LINE_NUMBER(978);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_expandX;
	if (sp[0].o == nullptr) goto label_19;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_expandX;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	}
label_19:;
	{
	LINE_NUMBER(979);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_expandY;
	if (sp[0].o == nullptr) goto label_20;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_expandY;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	}
label_20:;
	{
	LINE_NUMBER(980);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_colspan;
	if (sp[0].o == nullptr) goto label_21;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_colspan;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_colspan = (jref) sp[1].o;
	}
label_21:;
	{
	LINE_NUMBER(981);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_uniformX;
	if (sp[0].o == nullptr) goto label_22;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_uniformX;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformX = (jref) sp[1].o;
	}
label_22:;
	{
	LINE_NUMBER(982);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_uniformY;
	if (sp[0].o == nullptr) goto label_23;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[1].o)))->F_uniformY;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformY = (jref) sp[1].o;
	}
label_23:;
	LINE_NUMBER(983);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Cell_toString_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:toString", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(986);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[0].o)))->F_actor;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	sp->o = (jobject)M_java_lang_Object_toString_R_java_lang_String(ctx, sp[0].o);
	sp++;
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:defaults", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	{
	LINE_NUMBER(992);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_files;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_files;
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	if (sp[0].o == sp[1].o) goto label_2;
	}
label_1:;
	{
	LINE_NUMBER(993);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_files;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_files = sp[0].o;
	LINE_NUMBER(994);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell);
	init_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults = sp[0].o;
	LINE_NUMBER(995);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_minWidth = (jref) sp[1].o;
	LINE_NUMBER(996);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_minHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_minHeight = (jref) sp[1].o;
	LINE_NUMBER(997);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_prefWidth = (jref) sp[1].o;
	LINE_NUMBER(998);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_prefHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_prefHeight = (jref) sp[1].o;
	LINE_NUMBER(999);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxWidth;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_maxWidth = (jref) sp[1].o;
	LINE_NUMBER(1000);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_maxHeight;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_maxHeight = (jref) sp[1].o;
	LINE_NUMBER(1001);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceTop = (jref) sp[1].o;
	LINE_NUMBER(1002);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceLeft = (jref) sp[1].o;
	LINE_NUMBER(1003);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceBottom = (jref) sp[1].o;
	LINE_NUMBER(1004);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_spaceRight = (jref) sp[1].o;
	LINE_NUMBER(1005);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	LINE_NUMBER(1006);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	LINE_NUMBER(1007);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	LINE_NUMBER(1008);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Value(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Value_zero;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(1009);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillX = (jref) sp[1].o;
	LINE_NUMBER(1010);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_fillY = (jref) sp[1].o;
	LINE_NUMBER(1011);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_centeri;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_align = (jref) sp[1].o;
	LINE_NUMBER(1012);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandX = (jref) sp[1].o;
	LINE_NUMBER(1013);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_expandY = (jref) sp[1].o;
	LINE_NUMBER(1014);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_colspan = (jref) sp[1].o;
	LINE_NUMBER(1015);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformX = (jref) (jobject(nullptr));
	LINE_NUMBER(1016);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_uniformY = (jref) (jobject(nullptr));
	}
label_2:;
	{
	LINE_NUMBER(1018);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Cell:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	{
	LINE_NUMBER(15);
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(0)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof = sp[0].o;
	sp[0].o = (jobject)SM_java_lang_Float_valueOf_float_R_java_lang_Float(ctx, (jfloat(1)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef = sp[0].o;
	LINE_NUMBER(16);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(0)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi = sp[0].o;
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(1)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei = sp[0].o;
	LINE_NUMBER(17);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_centeri = sp[0].o;
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(2)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_topi = sp[0].o;
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (jint(4)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottomi = sp[0].o;
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (8));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_lefti = sp[0].o;
	LINE_NUMBER(18);
	sp[0].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (16));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_righti = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Cell[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setTable_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActor_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_clearActor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_hasActor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fillX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fillY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_center_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_top_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_left_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_right_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_grow_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_growX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_growY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expandX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expandY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_int_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_colspan_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniformX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniformY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorBounds_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorX_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorY_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorWidth_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorHeight_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getColumn_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getRow_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceLeft_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceBottom_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadLeft_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadBottom_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getFillX_R_java_lang_Float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getFillY_R_java_lang_Float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getAlign_R_java_lang_Integer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getExpandX_R_java_lang_Integer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getExpandY_R_java_lang_Integer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getColspan_R_java_lang_Integer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getUniformX_R_java_lang_Boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getUniformY_R_java_lang_Boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_isEndRow_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadLeft_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadBottom_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_row,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_clear,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_merge_com_badlogic_gdx_scenes_scene2d_ui_Cell,
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
	{ "reset", "()V" },
	{ "setTable", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Table;)V" },
	{ "setActor", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "clearActor", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "getActor", "()Lcom/badlogic/gdx/scenes/scene2d/Actor;" },
	{ "hasActor", "()Z" },
	{ "size", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "size", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "size", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "size", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "width", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "width", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "height", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "height", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "minSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "minSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "minWidth", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "minHeight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "minSize", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "minSize", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "minWidth", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "minHeight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "prefSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "prefSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "prefWidth", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "prefHeight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "prefSize", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "prefSize", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "prefWidth", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "prefHeight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "maxSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "maxSize", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "maxWidth", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "maxHeight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "maxSize", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "maxSize", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "maxWidth", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "maxHeight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "space", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "space", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "spaceTop", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "spaceLeft", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "spaceBottom", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "spaceRight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "space", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "space", "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "spaceTop", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "spaceLeft", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "spaceBottom", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "spaceRight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "pad", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "pad", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "padTop", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "padLeft", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "padBottom", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "padRight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "pad", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "pad", "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "padTop", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "padLeft", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "padBottom", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "padRight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "fill", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "fillX", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "fillY", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "fill", "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "fill", "(ZZ)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "fill", "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "align", "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "center", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "top", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "left", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "bottom", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "right", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "grow", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "growX", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "growY", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "expand", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "expandX", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "expandY", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "expand", "(II)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "expand", "(ZZ)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "colspan", "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "uniform", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "uniformX", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "uniformY", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "uniform", "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "uniform", "(ZZ)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "setActorBounds", "(FFFF)V" },
	{ "getActorX", "()F" },
	{ "setActorX", "(F)V" },
	{ "getActorY", "()F" },
	{ "setActorY", "(F)V" },
	{ "getActorWidth", "()F" },
	{ "setActorWidth", "(F)V" },
	{ "getActorHeight", "()F" },
	{ "setActorHeight", "(F)V" },
	{ "getColumn", "()I" },
	{ "getRow", "()I" },
	{ "getMinWidthValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getMinWidth", "()F" },
	{ "getMinHeightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getMinHeight", "()F" },
	{ "getPrefWidthValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPrefWidth", "()F" },
	{ "getPrefHeightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPrefHeight", "()F" },
	{ "getMaxWidthValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getMaxWidth", "()F" },
	{ "getMaxHeightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getMaxHeight", "()F" },
	{ "getSpaceTopValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getSpaceTop", "()F" },
	{ "getSpaceLeftValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getSpaceLeft", "()F" },
	{ "getSpaceBottomValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getSpaceBottom", "()F" },
	{ "getSpaceRightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getSpaceRight", "()F" },
	{ "getPadTopValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadTop", "()F" },
	{ "getPadLeftValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadLeft", "()F" },
	{ "getPadBottomValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadBottom", "()F" },
	{ "getPadRightValue", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;" },
	{ "getPadRight", "()F" },
	{ "getPadX", "()F" },
	{ "getPadY", "()F" },
	{ "getFillX", "()Ljava/lang/Float;" },
	{ "getFillY", "()Ljava/lang/Float;" },
	{ "getAlign", "()Ljava/lang/Integer;" },
	{ "getExpandX", "()Ljava/lang/Integer;" },
	{ "getExpandY", "()Ljava/lang/Integer;" },
	{ "getColspan", "()Ljava/lang/Integer;" },
	{ "getUniformX", "()Ljava/lang/Boolean;" },
	{ "getUniformY", "()Ljava/lang/Boolean;" },
	{ "isEndRow", "()Z" },
	{ "getComputedPadTop", "()F" },
	{ "getComputedPadLeft", "()F" },
	{ "getComputedPadBottom", "()F" },
	{ "getComputedPadRight", "()F" },
	{ "row", "()V" },
	{ "getTable", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "clear", "()V" },
	{ "set", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;)V" },
	{ "merge", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;)V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Pool$Poolable, };

static FieldMetadata fields[] {
	{ "zerof", &class_java_lang_Float, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zerof, "Ljava/lang/Float;", 26 },
	{ "onef", &class_java_lang_Float, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onef, "Ljava/lang/Float;", 26 },
	{ "zeroi", &class_java_lang_Integer, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_zeroi, "Ljava/lang/Integer;", 26 },
	{ "onei", &class_java_lang_Integer, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_onei, "Ljava/lang/Integer;", 26 },
	{ "centeri", &class_java_lang_Integer, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_centeri, "Ljava/lang/Integer;", 26 },
	{ "topi", &class_java_lang_Integer, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_topi, "Ljava/lang/Integer;", 26 },
	{ "bottomi", &class_java_lang_Integer, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottomi, "Ljava/lang/Integer;", 26 },
	{ "lefti", &class_java_lang_Integer, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_lefti, "Ljava/lang/Integer;", 26 },
	{ "righti", &class_java_lang_Integer, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_righti, "Ljava/lang/Integer;", 26 },
	{ "files", &class_com_badlogic_gdx_Files, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_files, "Lcom/badlogic/gdx/Files;", 10 },
	{ "defaults", &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults, "Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 10 },
	{ "minWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_minWidth), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "minHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_minHeight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "prefWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_prefWidth), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "prefHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_prefHeight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "maxWidth", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_maxWidth), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "maxHeight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_maxHeight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "spaceTop", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_spaceTop), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "spaceLeft", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_spaceLeft), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "spaceBottom", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_spaceBottom), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "spaceRight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_spaceRight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "padTop", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_padTop), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "padLeft", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_padLeft), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "padBottom", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_padBottom), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "padRight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_padRight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "fillX", &class_java_lang_Float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_fillX), "Ljava/lang/Float;", 0 },
	{ "fillY", &class_java_lang_Float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_fillY), "Ljava/lang/Float;", 0 },
	{ "align", &class_java_lang_Integer, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_align), "Ljava/lang/Integer;", 0 },
	{ "expandX", &class_java_lang_Integer, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_expandX), "Ljava/lang/Integer;", 0 },
	{ "expandY", &class_java_lang_Integer, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_expandY), "Ljava/lang/Integer;", 0 },
	{ "colspan", &class_java_lang_Integer, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_colspan), "Ljava/lang/Integer;", 0 },
	{ "uniformX", &class_java_lang_Boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_uniformX), "Ljava/lang/Boolean;", 0 },
	{ "uniformY", &class_java_lang_Boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_uniformY), "Ljava/lang/Boolean;", 0 },
	{ "actor", &class_com_badlogic_gdx_scenes_scene2d_Actor, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_actor), "Lcom/badlogic/gdx/scenes/scene2d/Actor;", 0 },
	{ "actorX", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_actorX), "F", 0 },
	{ "actorY", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_actorY), "F", 0 },
	{ "actorWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_actorWidth), "F", 0 },
	{ "actorHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_actorHeight), "F", 0 },
	{ "table", &class_com_badlogic_gdx_scenes_scene2d_ui_Table, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_table), "Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 2 },
	{ "endRow", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_endRow), "Z", 0 },
	{ "column", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_column), "I", 0 },
	{ "row", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_row), "I", 0 },
	{ "cellAboveIndex", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_cellAboveIndex), "I", 0 },
	{ "computedPadTop", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_computedPadTop), "F", 0 },
	{ "computedPadLeft", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_computedPadLeft), "F", 0 },
	{ "computedPadBottom", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_computedPadBottom), "F", 0 },
	{ "computedPadRight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Cell, F_computedPadRight), "F", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Cell, 0, "()V", 1 },
	{ "setTable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setTable_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setTable_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Table;)V", 1 },
	{ "setActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActor_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActor_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "clearActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_clearActor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_clearActor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "getActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActor_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "hasActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_hasActor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_hasActor_R_boolean, "()Z", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "size", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_size_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "width", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "width", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_width_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "height", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "height", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_height_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "minSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "minSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "minWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "minHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "minSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "minSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "minWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "minHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_minHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_minHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "prefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "prefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "prefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "prefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "prefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "prefSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "prefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "prefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_prefHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "maxSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "maxSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "maxWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxWidth_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "maxHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxHeight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "maxSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "maxSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxSize_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "maxWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxWidth_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "maxHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_maxHeight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "space", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "space", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "spaceTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "spaceLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "spaceBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "spaceRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "space", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "space", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_space_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "spaceTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "spaceLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "spaceBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "spaceRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_spaceRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "padTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "padLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "padBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "padRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "padTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "padLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "padBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "padRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "fillX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fillX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_fillX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "fillY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fillY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_fillY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(FF)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(ZZ)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "fill", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_fill_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "align", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "center", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_center_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_center_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "top", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_top_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_top_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "left", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_left_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_left_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "bottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "right", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_right_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_right_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "grow", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_grow_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_grow_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "growX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_growX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_growX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "growY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_growY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_growY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "expand", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "expandX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expandX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_expandX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "expandY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expandY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_expandY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "expand", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_int_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_int_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(II)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "expand", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_expand_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(ZZ)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "colspan", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_colspan_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_colspan_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "uniform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "uniformX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniformX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniformX_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "uniformY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniformY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniformY_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "uniform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "uniform", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_uniform_boolean_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(ZZ)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "setActorBounds", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorBounds_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorBounds_float_float_float_float, "(FFFF)V", 1 },
	{ "getActorX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorX_R_float, "()F", 1 },
	{ "setActorX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorX_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorX_float, "(F)V", 1 },
	{ "getActorY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorY_R_float, "()F", 1 },
	{ "setActorY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorY_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorY_float, "(F)V", 1 },
	{ "getActorWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorWidth_R_float, "()F", 1 },
	{ "setActorWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorWidth_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorWidth_float, "(F)V", 1 },
	{ "getActorHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getActorHeight_R_float, "()F", 1 },
	{ "setActorHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorHeight_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setActorHeight_float, "(F)V", 1 },
	{ "getColumn", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getColumn_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getColumn_R_int, "()I", 1 },
	{ "getRow", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getRow_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getRow_R_int, "()I", 1 },
	{ "getMinWidthValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMinHeight_R_float, "()F", 1 },
	{ "getPrefWidthValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPrefHeight_R_float, "()F", 1 },
	{ "getMaxWidthValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxWidthValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getMaxWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxWidth_R_float, "()F", 1 },
	{ "getMaxHeightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxHeightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getMaxHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getMaxHeight_R_float, "()F", 1 },
	{ "getSpaceTopValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getSpaceTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceTop_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceTop_R_float, "()F", 1 },
	{ "getSpaceLeftValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getSpaceLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceLeft_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceLeft_R_float, "()F", 1 },
	{ "getSpaceBottomValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getSpaceBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceBottom_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceBottom_R_float, "()F", 1 },
	{ "getSpaceRightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getSpaceRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceRight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getSpaceRight_R_float, "()F", 1 },
	{ "getPadTopValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadTop_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadTop_R_float, "()F", 1 },
	{ "getPadLeftValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadLeft_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadLeft_R_float, "()F", 1 },
	{ "getPadBottomValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadBottom_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadBottom_R_float, "()F", 1 },
	{ "getPadRightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadRight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadRight_R_float, "()F", 1 },
	{ "getPadX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadX_R_float, "()F", 1 },
	{ "getPadY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getPadY_R_float, "()F", 1 },
	{ "getFillX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getFillX_R_java_lang_Float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getFillX_R_java_lang_Float, "()Ljava/lang/Float;", 1 },
	{ "getFillY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getFillY_R_java_lang_Float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getFillY_R_java_lang_Float, "()Ljava/lang/Float;", 1 },
	{ "getAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getAlign_R_java_lang_Integer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getAlign_R_java_lang_Integer, "()Ljava/lang/Integer;", 1 },
	{ "getExpandX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getExpandX_R_java_lang_Integer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getExpandX_R_java_lang_Integer, "()Ljava/lang/Integer;", 1 },
	{ "getExpandY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getExpandY_R_java_lang_Integer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getExpandY_R_java_lang_Integer, "()Ljava/lang/Integer;", 1 },
	{ "getColspan", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getColspan_R_java_lang_Integer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getColspan_R_java_lang_Integer, "()Ljava/lang/Integer;", 1 },
	{ "getUniformX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getUniformX_R_java_lang_Boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getUniformX_R_java_lang_Boolean, "()Ljava/lang/Boolean;", 1 },
	{ "getUniformY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getUniformY_R_java_lang_Boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getUniformY_R_java_lang_Boolean, "()Ljava/lang/Boolean;", 1 },
	{ "isEndRow", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_isEndRow_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_isEndRow_R_boolean, "()Z", 1 },
	{ "getComputedPadTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadTop_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadTop_R_float, "()F", 1 },
	{ "getComputedPadLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadLeft_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadLeft_R_float, "()F", 1 },
	{ "getComputedPadBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadBottom_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadBottom_R_float, "()F", 1 },
	{ "getComputedPadRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadRight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getComputedPadRight_R_float, "()F", 1 },
	{ "row", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_row, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_row, "()V", 1 },
	{ "getTable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_getTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_getTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "clear", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_clear, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_clear, "()V", 0 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_reset, "()V", 1 },
	{ "set", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;)V", 0 },
	{ "merge", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_merge_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_merge_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;)V", 0 },
	{ "toString", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Cell_toString_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_toString_R_java_lang_String, "()Ljava/lang/String;", 1 },
	{ "defaults", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Cell_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, 0, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 9 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Cell{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Cell",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Cell),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Cell,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Cell,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Cell,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 47,
		.nativeFields = (intptr_t) fields,
		.methodCount = 151,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 158,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Cell = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Cell);

}

