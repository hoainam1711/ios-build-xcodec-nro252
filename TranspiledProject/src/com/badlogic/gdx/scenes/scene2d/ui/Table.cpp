#include "com/badlogic/gdx/scenes/scene2d/ui/Table.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_Debug.h"
#include "java/lang/Integer.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Stack.h"
#include "java/lang/Boolean.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_2.h"
#include "com/badlogic/gdx/scenes/scene2d/Group.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_3.h"
#include "java/lang/Float.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Layout.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_1.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label.h"
#include "java/util/Arrays.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label_LabelStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_DebugRect.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/Batch.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/SnapshotArray.h"
#include "com/badlogic/gdx/math/Rectangle.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/WidgetGroup.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/glutils/ShapeRenderer_ShapeType.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/math/Matrix4.h"
#include "com/badlogic/gdx/scenes/scene2d/Stage.h"
#include "com/badlogic/gdx/utils/Pool.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_4.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Table_5.h"
#include "java/lang/IllegalStateException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Cell.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/scenes/scene2d/Touchable.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Value_Fixed.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTableColor;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCellColor;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActorColor;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_columnWeightedWidth;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_rowWeightedHeight;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundTop;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundLeft;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundBottom;
jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundRight;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Table(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTableColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTableColor)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTableColor, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCellColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCellColor)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCellColor, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActorColor)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActorColor)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActorColor, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_columnWeightedWidth)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_columnWeightedWidth)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_columnWeightedWidth, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_rowWeightedHeight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_rowWeightedHeight)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_rowWeightedHeight, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundTop)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundTop)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundTop, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundLeft)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundLeft)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundLeft, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundBottom)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundBottom)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundBottom, mark, depth + 1);
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundRight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundRight)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundRight, mark, depth + 1);
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
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Table *) object;
	if (self->F_cells)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cells)->clazz)->markFunction)((jobject) self->F_cells, mark, depth + 1);
	if (self->F_cellDefaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_cellDefaults)->clazz)->markFunction)((jobject) self->F_cellDefaults, mark, depth + 1);
	if (self->F_columnDefaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_columnDefaults)->clazz)->markFunction)((jobject) self->F_columnDefaults, mark, depth + 1);
	if (self->F_rowDefaults)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rowDefaults)->clazz)->markFunction)((jobject) self->F_rowDefaults, mark, depth + 1);
	if (self->F_columnMinWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_columnMinWidth)->clazz)->markFunction)((jobject) self->F_columnMinWidth, mark, depth + 1);
	if (self->F_rowMinHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rowMinHeight)->clazz)->markFunction)((jobject) self->F_rowMinHeight, mark, depth + 1);
	if (self->F_columnPrefWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_columnPrefWidth)->clazz)->markFunction)((jobject) self->F_columnPrefWidth, mark, depth + 1);
	if (self->F_rowPrefHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rowPrefHeight)->clazz)->markFunction)((jobject) self->F_rowPrefHeight, mark, depth + 1);
	if (self->F_columnWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_columnWidth)->clazz)->markFunction)((jobject) self->F_columnWidth, mark, depth + 1);
	if (self->F_rowHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_rowHeight)->clazz)->markFunction)((jobject) self->F_rowHeight, mark, depth + 1);
	if (self->F_expandWidth)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expandWidth)->clazz)->markFunction)((jobject) self->F_expandWidth, mark, depth + 1);
	if (self->F_expandHeight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_expandHeight)->clazz)->markFunction)((jobject) self->F_expandHeight, mark, depth + 1);
	if (self->F_padTop)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padTop)->clazz)->markFunction)((jobject) self->F_padTop, mark, depth + 1);
	if (self->F_padLeft)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padLeft)->clazz)->markFunction)((jobject) self->F_padLeft, mark, depth + 1);
	if (self->F_padBottom)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padBottom)->clazz)->markFunction)((jobject) self->F_padBottom, mark, depth + 1);
	if (self->F_padRight)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_padRight)->clazz)->markFunction)((jobject) self->F_padRight, mark, depth + 1);
	if (self->F_debug)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_debug)->clazz)->markFunction)((jobject) self->F_debug, mark, depth + 1);
	if (self->F_debugRects)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_debugRects)->clazz)->markFunction)((jobject) self->F_debugRects, mark, depth + 1);
	if (self->F_background)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_background)->clazz)->markFunction)((jobject) self->F_background, mark, depth + 1);
	if (self->F_skin)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_skin)->clazz)->markFunction)((jobject) self->F_skin, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(88);
	init_com_badlogic_gdx_scenes_scene2d_ui_Table_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx, (frame[0].o), (jobject(nullptr)));
	LINE_NUMBER(89);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Table_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(92);
	init_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx, (frame[0].o));
	LINE_NUMBER(63);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(4)));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_cells = (jref) sp[1].o;
	LINE_NUMBER(65);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array_int(ctx, sp[1].o, (jint(2)));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_columnDefaults = (jref) sp[1].o;
	LINE_NUMBER(68);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(76);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundTop;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundLeft;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundBottom;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundRight;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(77);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(79);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_debug = (jref) sp[1].o;
	LINE_NUMBER(85);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_round = (jint(1));
	LINE_NUMBER(93);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin = (jref) (frame[1].o);
	LINE_NUMBER(95);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_cellDefaults = (jref) sp[1].o;
	LINE_NUMBER(97);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setTransform_boolean])(ctx, (frame[0].o), (jint(0)));
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_childrenOnly;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setTouchable_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(99);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:obtainCell", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(102);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	frame[1].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[0].o));
	LINE_NUMBER(103);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_setTable_com_badlogic_gdx_scenes_scene2d_ui_Table) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_setTable_com_badlogic_gdx_scenes_scene2d_ui_Table])(ctx, (frame[1].o), (frame[0].o));
	LINE_NUMBER(104);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:draw", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	{
	LINE_NUMBER(108);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_validate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_validate])(ctx, (frame[0].o));
	LINE_NUMBER(109);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_isTransform_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_isTransform_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_2;
	}
	{
	LINE_NUMBER(110);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_applyTransform_com_badlogic_gdx_graphics_g2d_Batch_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(111);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f), (jfloat(0)), (jfloat(0)));
	LINE_NUMBER(112);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_6;
	}
	{
	LINE_NUMBER(113);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(114);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[3].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[4].f = temp1;
	LINE_NUMBER(115);
	sp[0].o = frame[0].o;
	jfloat temp2 = frame[3].f;
	jfloat temp3 = frame[4].f;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp5 = temp4 - (frame[3].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[0].o));
	jfloat temp7 = temp5 - temp6;
	sp[1].o = frame[0].o;
	LINE_NUMBER(116);
	jfloat temp8 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float])(ctx, sp[1].o);
	jfloat temp9 = temp8 - (frame[4].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp10 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[0].o));
	jfloat temp11 = temp9 - temp10;
	LINE_NUMBER(115);
	jint temp12 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clipBegin_float_float_float_float_R_boolean])(ctx, sp[0].o, temp2, temp3, temp7, temp11);
	if (temp12 == 0) goto label_13;
	}
	{
	LINE_NUMBER(117);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	LINE_NUMBER(118);
	((func_com_badlogic_gdx_graphics_g2d_Batch_flush) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_flush, (frame[1].o)))(ctx, (frame[1].o));
	LINE_NUMBER(119);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clipEnd])(ctx, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(121);
	goto label_17;
label_6:;
	{
	LINE_NUMBER(122);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawChildren_com_badlogic_gdx_graphics_g2d_Batch_float])(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	}
label_17:;
	{
	LINE_NUMBER(123);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_resetTransform_com_badlogic_gdx_graphics_g2d_Batch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_resetTransform_com_badlogic_gdx_graphics_g2d_Batch])(ctx, (frame[0].o), (frame[1].o));
	goto label_18;
	}
label_2:;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getX_R_float])(ctx, (frame[0].o));
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getY_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float])(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2);
	LINE_NUMBER(126);
	M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_draw_com_badlogic_gdx_graphics_g2d_Batch_float(ctx, (frame[0].o), (frame[1].o), (frame[2].f));
	}
label_18:;
	LINE_NUMBER(128);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:drawBackground", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(133);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != nullptr) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getColor_R_com_badlogic_gdx_graphics_Color])(ctx, (frame[0].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(135);
	((func_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_graphics_g2d_Batch, INDEX_com_badlogic_gdx_graphics_g2d_Batch_setColor_float_float_float_float, (frame[1].o)))(ctx, (frame[1].o), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_r), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_g), ((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_b), (((jfloat)((com_badlogic_gdx_graphics_Color *) NULL_CHECK((frame[5].o)))->F_a) * (frame[2].f)));
	LINE_NUMBER(136);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	sp[1].o = frame[1].o;
	jfloat temp0 = frame[3].f;
	jfloat temp1 = frame[4].f;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_draw_com_badlogic_gdx_graphics_g2d_Batch_float_float_float_float, sp[0].o))(ctx, sp[0].o, sp[1].o, temp0, temp1, temp2, temp3);
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:setBackground", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(143);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Table must have a skin set to use this method."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(144);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[1].o, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(145);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:setBackground", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(149);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o != (frame[1].o)) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(150);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float])(ctx, (frame[0].o));
	frame[4].f = temp2;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float])(ctx, (frame[0].o));
	frame[5].f = temp3;
	LINE_NUMBER(151);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background = (jref) (frame[1].o);
	LINE_NUMBER(152);
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float])(ctx, (frame[0].o));
	frame[6].f = temp4;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float])(ctx, (frame[0].o));
	frame[7].f = temp5;
	jfloat temp6 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float])(ctx, (frame[0].o));
	frame[8].f = temp6;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float])(ctx, (frame[0].o));
	frame[9].f = temp7;
	LINE_NUMBER(153);
	if ((floatCompare(((frame[2].f) + (frame[4].f)), ((frame[6].f) + (frame[8].f)), -1)) != 0) goto label_11;
	}
	{
	if ((floatCompare(((frame[3].f) + (frame[5].f)), ((frame[7].f) + (frame[9].f)), -1)) == 0) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(154);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidateHierarchy) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidateHierarchy])(ctx, (frame[0].o));
	goto label_13;
	}
label_12:;
	{
	LINE_NUMBER(155);
	if ((floatCompare((frame[2].f), (frame[6].f), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare((frame[3].f), (frame[7].f), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare((frame[4].f), (frame[8].f), -1)) != 0) goto label_14;
	}
	{
	if ((floatCompare((frame[5].f), (frame[9].f), -1)) == 0) goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(156);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate])(ctx, (frame[0].o));
	}
label_13:;
	LINE_NUMBER(157);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:background", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(161);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(162);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_background_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:background", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(167);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_java_lang_String])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(168);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getBackground", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(172);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jfloat param0, jfloat param1, jbool param2) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:hit", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(176);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_1;
	}
	{
	LINE_NUMBER(177);
	if ((frame[3].i) == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getTouchable_R_com_badlogic_gdx_scenes_scene2d_Touchable])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_Touchable(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_Touchable_disabled;
	if (sp[0].o != sp[1].o) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(178);
	if ((floatCompare((frame[1].f), (jfloat(0)), 1)) < 0) goto label_4;
	}
	{
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) >= 0) goto label_4;
	}
	{
	if ((floatCompare((frame[2].f), (jfloat(0)), 1)) < 0) goto label_4;
	}
	{
	jfloat temp0 = frame[2].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float])(ctx, (frame[0].o));
	if ((floatCompare(temp0, temp1, -1)) < 0) goto label_1;
	}
label_4:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_1:;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].f), (frame[2].f), (frame[3].i));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:clip", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(185);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean])(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(186);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:clip", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(190);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(191);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:setClip", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(197);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_clip = (frame[1].i);
	LINE_NUMBER(198);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_setTransform_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setTransform_boolean])(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(199);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate])(ctx, (frame[0].o));
	LINE_NUMBER(200);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Table_getClip_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getClip", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(203);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_clip);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:invalidate", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(207);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(208);
	M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidate(ctx, (frame[0].o));
	LINE_NUMBER(209);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[10];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(214);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_actor = (jref) (frame[1].o);
	LINE_NUMBER(217);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow) == 0) goto label_3;
	}
	{
	LINE_NUMBER(218);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow = (jint(0));
	LINE_NUMBER(219);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_rows = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_rows) - (jint(1)));
	LINE_NUMBER(220);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[0].o))))->F_endRow = (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(223);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(224);
	if ((frame[3].i) <= 0) goto label_8;
	}
	{
	LINE_NUMBER(226);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[0].o));
	LINE_NUMBER(227);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_endRow) != 0) goto label_11;
	}
	{
	LINE_NUMBER(228);
	sp[0].o = frame[2].o;
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_column;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_colspan;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_column = (temp0 + temp1);
	LINE_NUMBER(229);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_row = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_row);
	goto label_14;
	}
label_11:;
	{
	LINE_NUMBER(231);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_column = (jint(0));
	LINE_NUMBER(232);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_row = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_row) + (jint(1)));
	}
label_14:;
	{
	LINE_NUMBER(235);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_row) <= 0) goto label_16;
	}
	{
	LINE_NUMBER(236);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[5].o = sp[0].o;
	LINE_NUMBER(238);
	frame[6].i = ((frame[3].i) - (jint(1)));
	}
label_19:;
	INST_ILOAD(6);
	if ((--sp)->i < 0) goto label_16;
	{
	LINE_NUMBER(239);
	frame[7].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[5].o), (frame[6].i)))));
	LINE_NUMBER(240);
	frame[8].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[7].o)))->F_column);
	jint temp0 = frame[8].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[7].o)))->F_colspan;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[9].i = (temp0 + temp1);
	}
label_23:;
	{
	if ((frame[8].i) >= (frame[9].i)) goto label_24;
	}
	{
	LINE_NUMBER(241);
	if ((frame[8].i) != ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_column)) goto label_26;
	}
	{
	LINE_NUMBER(242);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_cellAboveIndex = (frame[6].i);
	LINE_NUMBER(243);
	goto label_16;
	}
label_26:;
	{
	LINE_NUMBER(240);
	INST_IINC(8, 1);
	goto label_23;
	}
label_24:;
	{
	LINE_NUMBER(238);
	INST_IINC(6, -1);
	goto label_19;
	}
label_16:;
	LINE_NUMBER(248);
	goto label_29;
label_8:;
	{
	LINE_NUMBER(249);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_column = (jint(0));
	LINE_NUMBER(250);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_row = (jint(0));
	}
label_29:;
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	LINE_NUMBER(254);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cellDefaults;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_set_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(255);
	jint temp0 = (jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_column;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	if (temp0 >= ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_33;
	}
	{
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	sp[1].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[1].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[2].o)))->F_column));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_merge_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_merge_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[1].o)));
	}
label_33:;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_merge_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_merge_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(258);
	if ((frame[1].o) == nullptr) goto label_35;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[0].o), (frame[1].o));
	}
label_35:;
	{
	LINE_NUMBER(260);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(264);
	frame[2].i = (jint(0));
	frame[3].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_2:;
	{
	if ((frame[2].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(265);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[2].i))));
	LINE_NUMBER(264);
	INST_IINC(2, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(266);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Table must have a skin set to use this method."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(273);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:add", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(279);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Table must have a skin set to use this method."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(280);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label);
	sp[2].o = frame[1].o;
	sp[3].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	sp[3].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[3].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[3].o, (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle)));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[1].o, sp[2].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle, sp[3].o)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:add", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(286);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Table must have a skin set to use this method."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(287);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label);
	sp[2].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle);
	sp[4].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	sp[4].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[4].o, (frame[2].o));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(ctx, sp[3].o, sp[4].o, (frame[3].o));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:add", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(293);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalStateException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalStateException);
	init_java_lang_IllegalStateException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Table must have a skin set to use this method."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(294);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label);
	sp[2].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx);
	sp[3].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle);
	sp[4].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	sp[4].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont) ((void **) nullCheck(ctx, sp[4].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont])(ctx, sp[4].o, (frame[2].o));
	sp[5].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	sp[5].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getColor_java_lang_String_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[5].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getColor_java_lang_String_R_com_badlogic_gdx_graphics_Color])(ctx, sp[5].o, (frame[3].o));
	init_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle_com_badlogic_gdx_graphics_g2d_BitmapFont_com_badlogic_gdx_graphics_Color(ctx, sp[3].o, sp[4].o, sp[5].o);
	init_com_badlogic_gdx_scenes_scene2d_ui_Label_java_lang_CharSequence_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle(ctx, sp[1].o, sp[2].o, sp[3].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:add", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o), (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_Actor, (jobject(nullptr)))));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_stack_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:stack", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(305);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Stack(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Stack);
	init_com_badlogic_gdx_scenes_scene2d_ui_Stack(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(306);
	if ((frame[1].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(307);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_2;
	}
	{
	LINE_NUMBER(308);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Stack_addActor_com_badlogic_gdx_scenes_scene2d_Actor) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Stack_addActor_com_badlogic_gdx_scenes_scene2d_Actor])(ctx, (frame[2].o), ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i))));
	LINE_NUMBER(307);
	INST_IINC(3, 1);
	goto label_5;
	}
label_2:;
	{
	LINE_NUMBER(310);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o), (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:removeActor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(314);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean])(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:removeActor", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(318);
	jint temp0 = (jint)M_com_badlogic_gdx_scenes_scene2d_Group_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean(ctx, (frame[0].o), (frame[1].o), (frame[2].i));
	if (temp0 != 0) goto label_1;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_1:;
	{
	LINE_NUMBER(319);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(320);
	if ((frame[3].o) == nullptr) goto label_3;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[3].o)))->F_actor = (jref) (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(321);
	popStackFrame(ctx);
	return (jint(1));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:removeActorAt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(325);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Group_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o), (frame[1].i), (frame[2].i));
	frame[3].o = sp[0].o;
	LINE_NUMBER(326);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell])(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(327);
	if ((frame[4].o) == nullptr) goto label_3;
	}
	{
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_actor = (jref) (jobject(nullptr));
	}
label_3:;
	{
	LINE_NUMBER(328);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearChildren_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:clearChildren", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(333);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(334);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_2:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_3;
	{
	LINE_NUMBER(335);
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))));
	LINE_NUMBER(336);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_actor;
	frame[5].o = sp[0].o;
	LINE_NUMBER(337);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_remove_R_boolean])(ctx, (frame[5].o));
	}
label_7:;
	{
	LINE_NUMBER(334);
	INST_IINC(3, -1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(339);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	((func_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(340);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(341);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rows = (jint(0));
	LINE_NUMBER(342);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columns = (jint(0));
	LINE_NUMBER(343);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(344);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults = (jref) (jobject(nullptr));
	LINE_NUMBER(345);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow = (jint(0));
	LINE_NUMBER(347);
	M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren_boolean(ctx, (frame[0].o), (frame[1].i));
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_reset(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:reset", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(353);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_clearChildren) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clearChildren])(ctx, (frame[0].o));
	LINE_NUMBER(354);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundTop;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	LINE_NUMBER(355);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundLeft;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundBottom;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	LINE_NUMBER(357);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundRight;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(358);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(359);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(360);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cellDefaults;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_reset) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_reset])(ctx, sp[0].o);
	LINE_NUMBER(361);
	frame[1].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_10:;
	{
	if ((frame[1].i) >= (frame[2].i)) goto label_11;
	}
	{
	LINE_NUMBER(362);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[0].o));
	LINE_NUMBER(363);
	if ((frame[3].o) == nullptr) goto label_14;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	}
label_14:;
	{
	LINE_NUMBER(361);
	INST_IINC(1, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(365);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(366);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_row_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:row", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(371);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= 0) goto label_1;
	}
	{
	LINE_NUMBER(372);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow) != 0) goto label_3;
	}
	{
	LINE_NUMBER(373);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[0].o))))->F_endRow) == 0) goto label_5;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(374);
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_endRow(ctx, (frame[0].o));
	}
label_3:;
	{
	LINE_NUMBER(376);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate])(ctx, (frame[0].o));
	}
label_1:;
	{
	LINE_NUMBER(378);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow = (jint(0));
	LINE_NUMBER(379);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	if (sp[0].o == nullptr) goto label_7;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	((func_com_badlogic_gdx_utils_Pool_free_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_free_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	}
label_7:;
	{
	LINE_NUMBER(380);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx, (frame[0].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_rowDefaults = (jref) sp[1].o;
	LINE_NUMBER(381);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_clear])(ctx, sp[0].o);
	LINE_NUMBER(382);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowDefaults;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_endRow(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:endRow", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(386);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(387);
	frame[2].i = (jint(0));
	LINE_NUMBER(388);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[3].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_3:;
	INST_ILOAD(3);
	if ((--sp)->i < 0) goto label_4;
	{
	LINE_NUMBER(389);
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)))));
	LINE_NUMBER(390);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_endRow) == 0) goto label_7;
	}
	goto label_4;
label_7:;
	{
	LINE_NUMBER(391);
	jint temp0 = frame[2].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[4].o)))->F_colspan;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[2].i = (temp0 + temp1);
	LINE_NUMBER(388);
	INST_IINC(3, -1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(393);
	sp[0].o = frame[0].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columns), (frame[2].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_columns = temp0;
	LINE_NUMBER(394);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_rows = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_rows) + (jint(1)));
	LINE_NUMBER(395);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[0].o))))->F_endRow = (jint(1));
	LINE_NUMBER(396);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_columnDefaults_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:columnDefaults", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(401);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) <= (frame[1].i)) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[0].o);
	sp += 1;
	goto label_2;
	}
label_1:;
	INST_ACONST_NULL();
label_2:;
	{
	sp -= 1;
	frame[2].o = sp[0].o;
	LINE_NUMBER(402);
	if ((frame[2].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(403);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(404);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Cell_clear) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Cell_clear])(ctx, (frame[2].o));
	LINE_NUMBER(405);
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	if (temp0 < ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size)) goto label_8;
	}
	{
	LINE_NUMBER(406);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	frame[3].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_10:;
	{
	if ((frame[3].i) >= (frame[1].i)) goto label_11;
	}
	{
	LINE_NUMBER(407);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (jobject(nullptr)));
	LINE_NUMBER(406);
	INST_IINC(3, 1);
	goto label_10;
	}
label_11:;
	{
	LINE_NUMBER(408);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(410);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnDefaults;
	((func_com_badlogic_gdx_utils_Array_set_int_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_set_int_java_lang_Object])(ctx, sp[0].o, (frame[1].i), (frame[2].o));
	}
label_4:;
	{
	LINE_NUMBER(412);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getCell", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(417);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"actor cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(418);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[2].o = sp[0].o;
	LINE_NUMBER(419);
	frame[3].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_4:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_5;
	}
	{
	LINE_NUMBER(420);
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)))));
	LINE_NUMBER(421);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[5].o)))->F_actor;
	if (sp[0].o != (frame[1].o)) goto label_8;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(419);
	INST_IINC(3, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(423);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getCells_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getCells", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPrefWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(432);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(433);
	frame[1].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth);
	LINE_NUMBER(434);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}
label_3:;
	{
	LINE_NUMBER(435);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPrefHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(439);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(440);
	frame[1].f = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight);
	LINE_NUMBER(441);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	jfloat temp0 = frame[1].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, sp[0].o))(ctx, sp[0].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	popStackFrame(ctx);
	return temp2;
	}
label_3:;
	{
	LINE_NUMBER(442);
	popStackFrame(ctx);
	return (frame[1].f);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinWidth_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getMinWidth", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(446);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(447);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinHeight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getMinHeight", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(451);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(452);
	popStackFrame(ctx);
	return ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:defaults", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(457);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cellDefaults;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:pad", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(462);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"pad cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(463);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(464);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[1].o);
	LINE_NUMBER(465);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[1].o);
	LINE_NUMBER(466);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[1].o);
	LINE_NUMBER(467);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(468);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2, jobject param3) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:pad", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	frame[4].o = param3;
	{
	LINE_NUMBER(472);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"top cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(473);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"left cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(474);
	if ((frame[3].o) != nullptr) goto label_3;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"bottom cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_3:;
	{
	LINE_NUMBER(475);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"right cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(476);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(477);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[2].o);
	LINE_NUMBER(478);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[3].o);
	LINE_NUMBER(479);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[4].o);
	LINE_NUMBER(480);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(481);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:padTop", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(486);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padTop cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(487);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop = (jref) (frame[1].o);
	LINE_NUMBER(488);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(489);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:padLeft", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(494);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padLeft cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(495);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft = (jref) (frame[1].o);
	LINE_NUMBER(496);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(497);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:padBottom", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(502);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padBottom cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(503);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom = (jref) (frame[1].o);
	LINE_NUMBER(504);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(505);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:padRight", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(510);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"padRight cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(511);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight = (jref) (frame[1].o);
	LINE_NUMBER(512);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(513);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:pad", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(518);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(519);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:pad", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(523);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	LINE_NUMBER(524);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[2].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	LINE_NUMBER(525);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[3].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	LINE_NUMBER(526);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[4].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(527);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(528);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:padTop", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(533);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padTop = (jref) sp[1].o;
	LINE_NUMBER(534);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(535);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:padLeft", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(540);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padLeft = (jref) sp[1].o;
	LINE_NUMBER(541);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:padBottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(547);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padBottom = (jref) sp[1].o;
	LINE_NUMBER(548);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(549);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:padRight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(554);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed_valueOf_float_R_com_badlogic_gdx_scenes_scene2d_ui_Value$Fixed(ctx, (frame[1].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_padRight = (jref) sp[1].o;
	LINE_NUMBER(555);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(1));
	LINE_NUMBER(556);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:align", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(562);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_align = (frame[1].i);
	LINE_NUMBER(563);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_center_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:center", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(568);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_align = (jint(1));
	LINE_NUMBER(569);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_top_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:top", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(574);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align) | (jint(2)));
	LINE_NUMBER(575);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align) & (-5));
	LINE_NUMBER(576);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_left_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:left", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(581);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align) | (8));
	LINE_NUMBER(582);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align) & (-17));
	LINE_NUMBER(583);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:bottom", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(588);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align) | (jint(4)));
	LINE_NUMBER(589);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align) & (-3));
	LINE_NUMBER(590);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_right_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:right", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(595);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align) | (16));
	LINE_NUMBER(596);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align = (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_align) & (-9));
	LINE_NUMBER(597);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_setDebug_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:setDebug", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(601);
	sp[0].o = frame[0].o;
	sp += 1;
	if ((frame[1].i) == 0) goto label_1;
	}
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_all;
	goto label_2;
label_1:;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	(sp++)->o = SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
label_2:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(602);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:debug", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(605);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Actor_debug_R_com_badlogic_gdx_scenes_scene2d_Actor(ctx, (frame[0].o));
	LINE_NUMBER(606);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:debugAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(610);
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_Group_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group(ctx, (frame[0].o));
	LINE_NUMBER(611);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:debugTable", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(616);
	M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(617);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_table;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(618);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_table;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_debug = (jref) sp[1].o;
	LINE_NUMBER(619);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(621);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCell_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:debugCell", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(626);
	M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_cell;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(628);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_cell;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_debug = (jref) sp[1].o;
	LINE_NUMBER(629);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(631);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActor_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:debugActor", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(636);
	M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(637);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_actor;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	LINE_NUMBER(638);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_actor;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_debug = (jref) sp[1].o;
	LINE_NUMBER(639);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate])(ctx, (frame[0].o));
	}
label_2:;
	{
	LINE_NUMBER(641);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:debug", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(646);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	sp += 1;
	if (sp[0].o == sp[1].o) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	{
	sp -= 2;
	M_com_badlogic_gdx_scenes_scene2d_Actor_setDebug_boolean(ctx, sp[0].o, sp[1].i);
	LINE_NUMBER(647);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	if (sp[0].o == (frame[1].o)) goto label_4;
	}
	{
	LINE_NUMBER(648);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug = (jref) (frame[1].o);
	LINE_NUMBER(649);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	if (sp[0].o != sp[1].o) goto label_7;
	}
	{
	LINE_NUMBER(650);
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearDebugRects(ctx, (frame[0].o));
	goto label_4;
	}
label_7:;
	{
	LINE_NUMBER(652);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate])(ctx, (frame[0].o));
	}
label_4:;
	{
	LINE_NUMBER(654);
	popStackFrame(ctx);
	return (frame[0].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getTableDebug_R_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getTableDebug", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(658);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadTopValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(662);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadTop", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(666);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadLeftValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(670);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadLeft", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(674);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadBottomValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(678);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadBottom", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(682);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadRightValue", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(686);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadRight", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(690);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadX_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadX", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(695);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadY_R_float(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getPadY", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(700);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	popStackFrame(ctx);
	return (temp0 + temp1);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Table_getAlign_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getAlign", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(704);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_align);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRow_float_R_int(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getRow", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(710);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(711);
	if ((frame[2].i) != 0) goto label_2;
	}
	INST_ICONST(-1);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(712);
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float])(ctx, (frame[0].o));
	frame[1].f = (temp0 + temp1);
	LINE_NUMBER(713);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[3].o = sp[0].o;
	LINE_NUMBER(714);
	frame[4].i = (jint(0));
	frame[5].i = (jint(0));
	}
label_6:;
	{
	if ((frame[4].i) >= (frame[2].i)) goto label_7;
	}
	{
	LINE_NUMBER(715);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	INST_IINC(4, 1);
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, temp0))));
	LINE_NUMBER(716);
	if ((floatCompare((((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[6].o)))->F_actorY) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[6].o)))->F_computedPadTop)), (frame[1].f), 1)) >= 0) goto label_10;
	}
	INST_ILOAD(5);
	popStackFrame(ctx);
	INST_IRETURN();
label_10:;
	{
	LINE_NUMBER(717);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[6].o)))->F_endRow) == 0) goto label_11;
	}
	INST_IINC(5, 1);
label_11:;
	LINE_NUMBER(718);
	goto label_6;
label_7:;
	{
	LINE_NUMBER(719);
	popStackFrame(ctx);
	return (jint(-1));
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:setSkin", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(723);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin = (jref) (frame[1].o);
	LINE_NUMBER(724);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_setRound_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:setRound", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(728);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_round = (frame[1].i);
	LINE_NUMBER(729);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRows_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getRows", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(732);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rows);
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumns_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getColumns", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(736);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columns);
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowHeight_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getRowHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(741);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(742);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowMinHeight_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getRowMinHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(747);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(748);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowPrefHeight_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getRowPrefHeight", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(753);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(754);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnWidth_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getColumnWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(759);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnWidth;
	if (sp[0].o != nullptr) goto label_1;
	}
	INST_FCONST(0);
	popStackFrame(ctx);
	INST_FRETURN();
label_1:;
	{
	LINE_NUMBER(760);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnWidth;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnMinWidth_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getColumnMinWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(765);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(766);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jfloat M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnPrefWidth_int_R_float(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getColumnPrefWidth", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(771);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(772);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	popStackFrame(ctx);
	return ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[1].i)));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:ensureSize", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(776);
	if ((frame[1].o) == nullptr) goto label_1;
	}
	{
	if ((((jarray) nullCheck(ctx, (frame[1].o)))->length) >= (frame[2].i)) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[2].i));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(777);
	SM_java_util_Arrays_fill_Array1_float_int_int_float(ctx, (frame[1].o), (jint(0)), (frame[2].i), (jfloat(0)));
	LINE_NUMBER(778);
	popStackFrame(ctx);
	return (frame[1].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[40];
	auto stack = &frame[34];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:computeSize", 40 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(782);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid = (jint(0));
	LINE_NUMBER(784);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[1].o = sp[0].o;
	LINE_NUMBER(785);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[2].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(788);
	if ((frame[2].i) <= 0) goto label_4;
	}
	{
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((frame[2].i) - (jint(1)))))))))->F_endRow) != 0) goto label_4;
	}
	{
	LINE_NUMBER(789);
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_endRow(ctx, (frame[0].o));
	LINE_NUMBER(790);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_implicitEndRow = (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(793);
	frame[3].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columns);
	frame[4].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rows);
	LINE_NUMBER(794);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[3].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_columnMinWidth = (jref) sp[1].o;
	frame[5].o = sp[1].o;
	LINE_NUMBER(795);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[4].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_rowMinHeight = (jref) sp[1].o;
	frame[6].o = sp[1].o;
	LINE_NUMBER(796);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[3].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_columnPrefWidth = (jref) sp[1].o;
	frame[7].o = sp[1].o;
	LINE_NUMBER(797);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[4].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_rowPrefHeight = (jref) sp[1].o;
	frame[8].o = sp[1].o;
	LINE_NUMBER(798);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnWidth;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[3].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_columnWidth = (jref) sp[1].o;
	frame[9].o = sp[1].o;
	LINE_NUMBER(799);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[4].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_rowHeight = (jref) sp[1].o;
	frame[10].o = sp[1].o;
	LINE_NUMBER(800);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[3].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_expandWidth = (jref) sp[1].o;
	frame[11].o = sp[1].o;
	LINE_NUMBER(801);
	sp[0].o = frame[0].o;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_expandHeight;
	sp[1].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[1].o, sp[2].o, (frame[4].i));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_expandHeight = (jref) sp[1].o;
	frame[12].o = sp[1].o;
	LINE_NUMBER(803);
	frame[13].f = (jfloat(0));
	LINE_NUMBER(804);
	frame[14].i = (jint(0));
	}
label_18:;
	{
	if ((frame[14].i) >= (frame[2].i)) goto label_19;
	}
	{
	LINE_NUMBER(805);
	frame[15].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[14].i)))));
	LINE_NUMBER(806);
	frame[16].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_column);
	frame[17].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_row);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_colspan;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[18].i = temp0;
	LINE_NUMBER(807);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_actor;
	frame[19].o = sp[0].o;
	LINE_NUMBER(810);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_expandY;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	if (temp1 == 0) goto label_26;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[12].o), (frame[17].i))), (jfloat(0)), -1)) != 0) goto label_26;
	}
	{
	sp[0].o = frame[12].o;
	jint temp0 = frame[17].i;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_expandY;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat(temp1));
	}
label_26:;
	{
	LINE_NUMBER(811);
	if ((frame[18].i) != (jint(1))) goto label_27;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_expandX;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	if (temp0 == 0) goto label_27;
	}
	{
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[11].o), (frame[16].i))), (jfloat(0)), -1)) != 0) goto label_27;
	}
	{
	sp[0].o = frame[11].o;
	jint temp0 = frame[16].i;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_expandX;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[1].o);
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (jfloat(temp1));
	}
label_27:;
	{
	LINE_NUMBER(815);
	sp[0].o = frame[15].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[19].o));
	sp[1].f = temp0;
	sp += 2;
	if ((frame[16].i) != 0) goto label_28;
	}
	INST_FCONST(0);
	goto label_29;
label_28:;
	{
	jfloat temp0 = jfloat(0);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_spaceLeft;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, (temp1 - (frame[13].f)));
	sp[0].f = temp2;
	sp += 1;
	}
label_29:;
	{
	sp -= 3;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_computedPadLeft = (sp[1].f + sp[2].f);
	LINE_NUMBER(816);
	sp[0].o = frame[15].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_padTop;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[19].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_computedPadTop = temp0;
	LINE_NUMBER(817);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_cellAboveIndex) == (jint(-1))) goto label_32;
	}
	{
	LINE_NUMBER(818);
	frame[20].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_cellAboveIndex)))));
	LINE_NUMBER(819);
	sp[0].o = frame[15].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_computedPadTop;
	jfloat temp1 = jfloat(0);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_spaceTop;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[19].o));
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[20].o)))->F_spaceBottom;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[19].o));
	jfloat temp4 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp1, (temp2 - temp3));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_computedPadTop = (temp0 + temp4);
	}
label_32:;
	{
	LINE_NUMBER(821);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_spaceRight;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	frame[20].f = temp0;
	LINE_NUMBER(822);
	sp[0].o = frame[15].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_padRight;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[19].o));
	sp[1].f = temp1;
	sp += 2;
	if (((frame[16].i) + (frame[18].i)) != (frame[3].i)) goto label_36;
	}
	INST_FCONST(0);
	goto label_37;
label_36:;
	INST_FLOAD(20);
label_37:;
	{
	sp -= 3;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_computedPadRight = (sp[1].f + sp[2].f);
	LINE_NUMBER(823);
	sp[0].o = frame[15].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_padBottom;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, (frame[19].o));
	sp[1].f = temp0;
	sp += 2;
	if ((frame[17].i) != ((frame[4].i) - (jint(1)))) goto label_39;
	}
	INST_FCONST(0);
	goto label_40;
label_39:;
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_spaceBottom;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	sp[0].f = temp0;
	sp += 1;
	}
label_40:;
	{
	sp -= 3;
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_computedPadBottom = (sp[1].f + sp[2].f);
	LINE_NUMBER(824);
	frame[13].f = (frame[20].f);
	LINE_NUMBER(827);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_prefWidth;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	frame[21].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_prefHeight;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	frame[22].f = temp1;
	LINE_NUMBER(828);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_minWidth;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	frame[23].f = temp2;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_minHeight;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	frame[24].f = temp3;
	LINE_NUMBER(829);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_maxWidth;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	frame[25].f = temp4;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_maxHeight;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[19].o));
	frame[26].f = temp5;
	LINE_NUMBER(830);
	if ((floatCompare((frame[21].f), (frame[23].f), 1)) >= 0) goto label_49;
	}
	INST_FLOAD(23);
	INST_FSTORE(21);
label_49:;
	{
	LINE_NUMBER(831);
	if ((floatCompare((frame[22].f), (frame[24].f), 1)) >= 0) goto label_50;
	}
	INST_FLOAD(24);
	INST_FSTORE(22);
label_50:;
	{
	LINE_NUMBER(832);
	if ((floatCompare((frame[25].f), (jfloat(0)), -1)) <= 0) goto label_51;
	}
	{
	if ((floatCompare((frame[21].f), (frame[25].f), -1)) <= 0) goto label_51;
	}
	INST_FLOAD(25);
	INST_FSTORE(21);
label_51:;
	{
	LINE_NUMBER(833);
	if ((floatCompare((frame[26].f), (jfloat(0)), -1)) <= 0) goto label_52;
	}
	{
	if ((floatCompare((frame[22].f), (frame[26].f), -1)) <= 0) goto label_52;
	}
	INST_FLOAD(26);
	INST_FSTORE(22);
label_52:;
	{
	LINE_NUMBER(834);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_53;
	}
	{
	LINE_NUMBER(835);
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[23].f))));
	frame[23].f = (jfloat(temp0));
	LINE_NUMBER(836);
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[24].f))));
	frame[24].f = (jfloat(temp1));
	LINE_NUMBER(837);
	jdouble temp2 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[21].f))));
	frame[21].f = (jfloat(temp2));
	LINE_NUMBER(838);
	jdouble temp3 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[22].f))));
	frame[22].f = (jfloat(temp3));
	}
label_53:;
	{
	LINE_NUMBER(841);
	if ((frame[18].i) != (jint(1))) goto label_58;
	}
	{
	LINE_NUMBER(842);
	frame[27].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_computedPadLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_computedPadRight));
	LINE_NUMBER(843);
	sp[0].o = frame[7].o;
	jint temp0 = frame[16].i;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (frame[16].i))), ((frame[21].f) + (frame[27].f)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(844);
	sp[0].o = frame[5].o;
	jint temp2 = frame[16].i;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[16].i))), ((frame[23].f) + (frame[27].f)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp3;
	}
label_58:;
	{
	LINE_NUMBER(846);
	frame[27].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_computedPadTop) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[15].o)))->F_computedPadBottom));
	LINE_NUMBER(847);
	sp[0].o = frame[8].o;
	jint temp0 = frame[17].i;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), (frame[17].i))), ((frame[22].f) + (frame[27].f)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(848);
	sp[0].o = frame[6].o;
	jint temp2 = frame[17].i;
	jfloat temp3 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[17].i))), ((frame[24].f) + (frame[27].f)));
	ARRAY_ACCESS(jfloat, sp[0].o, temp2) = temp3;
	LINE_NUMBER(804);
	INST_IINC(14, 1);
	goto label_18;
	}
label_19:;
	{
	LINE_NUMBER(851);
	frame[14].f = (jfloat(0));
	frame[15].f = (jfloat(0));
	LINE_NUMBER(852);
	frame[16].f = (jfloat(0));
	frame[17].f = (jfloat(0));
	LINE_NUMBER(853);
	frame[18].i = (jint(0));
	}
label_69:;
	{
	if ((frame[18].i) >= (frame[2].i)) goto label_70;
	}
	{
	LINE_NUMBER(854);
	frame[19].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[18].i)))));
	LINE_NUMBER(855);
	frame[20].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_column);
	LINE_NUMBER(858);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_expandX;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[21].i = temp0;
	LINE_NUMBER(860);
	if ((frame[21].i) == 0) goto label_75;
	}
	{
	LINE_NUMBER(861);
	jint temp0 = frame[20].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_colspan;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[22].i = (temp0 + temp1);
	LINE_NUMBER(862);
	frame[23].i = (frame[20].i);
	}
label_78:;
	{
	if ((frame[23].i) >= (frame[22].i)) goto label_79;
	}
	{
	LINE_NUMBER(863);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[11].o), (frame[23].i))), (jfloat(0)), -1)) == 0) goto label_81;
	}
	goto label_75;
label_81:;
	{
	LINE_NUMBER(862);
	INST_IINC(23, 1);
	goto label_78;
	}
label_79:;
	{
	LINE_NUMBER(864);
	frame[23].i = (frame[20].i);
	}
label_82:;
	{
	if ((frame[23].i) >= (frame[22].i)) goto label_75;
	}
	{
	LINE_NUMBER(865);
	ARRAY_ACCESS(jfloat, (frame[11].o), (frame[23].i)) = (jfloat((frame[21].i)));
	LINE_NUMBER(864);
	INST_IINC(23, 1);
	goto label_82;
	}
label_75:;
	{
	LINE_NUMBER(869);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_uniformX;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	if (sp[0].o != sp[1].o) goto label_85;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_colspan;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_85;
	}
	{
	LINE_NUMBER(870);
	frame[22].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadRight));
	LINE_NUMBER(871);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[14].f), (((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[20].i))) - (frame[22].f)));
	frame[14].f = temp0;
	LINE_NUMBER(872);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[16].f), (((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (frame[20].i))) - (frame[22].f)));
	frame[16].f = temp1;
	}
label_85:;
	{
	LINE_NUMBER(874);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_uniformY;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	if (sp[0].o != sp[1].o) goto label_89;
	}
	{
	LINE_NUMBER(875);
	frame[22].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadTop) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadBottom));
	LINE_NUMBER(876);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[15].f), (((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_row))) - (frame[22].f)));
	frame[15].f = temp0;
	LINE_NUMBER(877);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (frame[17].f), (((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_row))) - (frame[22].f)));
	frame[17].f = temp1;
	}
label_89:;
	{
	LINE_NUMBER(853);
	INST_IINC(18, 1);
	goto label_69;
	}
label_70:;
	{
	LINE_NUMBER(882);
	if ((floatCompare((frame[16].f), (jfloat(0)), -1)) > 0) goto label_93;
	}
	{
	if ((floatCompare((frame[17].f), (jfloat(0)), -1)) <= 0) goto label_94;
	}
label_93:;
	{
	LINE_NUMBER(883);
	frame[18].i = (jint(0));
	}
label_95:;
	{
	if ((frame[18].i) >= (frame[2].i)) goto label_94;
	}
	{
	LINE_NUMBER(884);
	frame[19].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[18].i)))));
	LINE_NUMBER(885);
	if ((floatCompare((frame[16].f), (jfloat(0)), -1)) <= 0) goto label_98;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_uniformX;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	if (sp[0].o != sp[1].o) goto label_98;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_colspan;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	if (temp0 != (jint(1))) goto label_98;
	}
	{
	LINE_NUMBER(886);
	frame[20].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadRight));
	LINE_NUMBER(887);
	ARRAY_ACCESS(jfloat, (frame[5].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_column)) = ((frame[14].f) + (frame[20].f));
	LINE_NUMBER(888);
	ARRAY_ACCESS(jfloat, (frame[7].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_column)) = ((frame[16].f) + (frame[20].f));
	}
label_98:;
	{
	LINE_NUMBER(890);
	if ((floatCompare((frame[17].f), (jfloat(0)), -1)) <= 0) goto label_102;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_uniformY;
	clinit_java_lang_Boolean(ctx);
	sp[1].o = (jobject)SF_java_lang_Boolean_TRUE;
	if (sp[0].o != sp[1].o) goto label_102;
	}
	{
	LINE_NUMBER(891);
	frame[20].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadTop) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadBottom));
	LINE_NUMBER(892);
	ARRAY_ACCESS(jfloat, (frame[6].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_row)) = ((frame[15].f) + (frame[20].f));
	LINE_NUMBER(893);
	ARRAY_ACCESS(jfloat, (frame[8].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_row)) = ((frame[17].f) + (frame[20].f));
	}
label_102:;
	{
	LINE_NUMBER(883);
	INST_IINC(18, 1);
	goto label_95;
	}
label_94:;
	{
	LINE_NUMBER(899);
	frame[18].i = (jint(0));
	}
label_106:;
	{
	if ((frame[18].i) >= (frame[2].i)) goto label_107;
	}
	{
	LINE_NUMBER(900);
	frame[19].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[18].i)))));
	LINE_NUMBER(901);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_colspan;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[20].i = temp0;
	LINE_NUMBER(902);
	if ((frame[20].i) != (jint(1))) goto label_111;
	}
	goto label_112;
label_111:;
	{
	LINE_NUMBER(903);
	frame[21].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_column);
	LINE_NUMBER(905);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_actor;
	frame[22].o = sp[0].o;
	LINE_NUMBER(906);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_minWidth;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[22].o));
	frame[23].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_prefWidth;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[22].o));
	frame[24].f = temp1;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_maxWidth;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[22].o));
	frame[25].f = temp2;
	LINE_NUMBER(907);
	if ((floatCompare((frame[24].f), (frame[23].f), 1)) >= 0) goto label_118;
	}
	INST_FLOAD(23);
	INST_FSTORE(24);
label_118:;
	{
	LINE_NUMBER(908);
	if ((floatCompare((frame[25].f), (jfloat(0)), -1)) <= 0) goto label_119;
	}
	{
	if ((floatCompare((frame[24].f), (frame[25].f), -1)) <= 0) goto label_119;
	}
	INST_FLOAD(25);
	INST_FSTORE(24);
label_119:;
	{
	LINE_NUMBER(909);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_120;
	}
	{
	LINE_NUMBER(910);
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[23].f))));
	frame[23].f = (jfloat(temp0));
	LINE_NUMBER(911);
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble((frame[24].f))));
	frame[24].f = (jfloat(temp1));
	}
label_120:;
	{
	LINE_NUMBER(914);
	frame[26].f = (-(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[19].o)))->F_computedPadRight)));
	frame[27].f = (frame[26].f);
	LINE_NUMBER(915);
	frame[28].f = (jfloat(0));
	LINE_NUMBER(916);
	frame[29].i = (frame[21].i);
	frame[30].i = ((frame[29].i) + (frame[20].i));
	}
label_127:;
	{
	if ((frame[29].i) >= (frame[30].i)) goto label_128;
	}
	{
	LINE_NUMBER(917);
	frame[26].f = ((frame[26].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[29].i))));
	LINE_NUMBER(918);
	frame[27].f = ((frame[27].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (frame[29].i))));
	LINE_NUMBER(919);
	frame[28].f = ((frame[28].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[11].o), (frame[29].i))));
	LINE_NUMBER(916);
	INST_IINC(29, 1);
	goto label_127;
	}
label_128:;
	{
	LINE_NUMBER(922);
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[23].f) - (frame[26].f)));
	frame[29].f = temp0;
	LINE_NUMBER(923);
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[24].f) - (frame[27].f)));
	frame[30].f = temp1;
	LINE_NUMBER(924);
	frame[31].i = (frame[21].i);
	frame[32].i = ((frame[31].i) + (frame[20].i));
	}
label_136:;
	{
	if ((frame[31].i) >= (frame[32].i)) goto label_112;
	}
	{
	LINE_NUMBER(925);
	if ((floatCompare((frame[28].f), (jfloat(0)), -1)) != 0) goto label_138;
	}
	{
	jfloat temp0 = (jfloat(1)) / (jfloat((frame[20].i)));
	sp[0].f = temp0;
	sp += 1;
	goto label_139;
	}
label_138:;
	{
	jfloat temp0 = ((jfloat)ARRAY_ACCESS(jfloat, (frame[11].o), (frame[31].i))) / (frame[28].f);
	sp[0].f = temp0;
	sp += 1;
	}
label_139:;
	{
	sp -= 1;
	frame[33].f = sp[0].f;
	LINE_NUMBER(926);
	sp[0].o = frame[5].o;
	jint temp0 = frame[31].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((frame[29].f) * (frame[33].f)));
	LINE_NUMBER(927);
	sp[0].o = frame[7].o;
	jint temp3 = frame[31].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp3) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp3)) + ((frame[30].f) * (frame[33].f)));
	LINE_NUMBER(924);
	INST_IINC(31, 1);
	goto label_136;
	}
label_112:;
	{
	LINE_NUMBER(899);
	INST_IINC(18, 1);
	goto label_106;
	}
label_107:;
	{
	LINE_NUMBER(932);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[18].f = (temp0 + temp1);
	LINE_NUMBER(933);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[19].f = (temp2 + temp3);
	LINE_NUMBER(934);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth = (frame[18].f);
	LINE_NUMBER(935);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth = (frame[18].f);
	LINE_NUMBER(936);
	frame[20].i = (jint(0));
	}
label_147:;
	{
	if ((frame[20].i) >= (frame[3].i)) goto label_148;
	}
	{
	LINE_NUMBER(937);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tableMinWidth = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tableMinWidth) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[20].i))));
	LINE_NUMBER(938);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tablePrefWidth = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tablePrefWidth) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[7].o), (frame[20].i))));
	LINE_NUMBER(936);
	INST_IINC(20, 1);
	goto label_147;
	}
label_148:;
	{
	LINE_NUMBER(940);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight = (frame[19].f);
	LINE_NUMBER(941);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight = (frame[19].f);
	LINE_NUMBER(942);
	frame[20].i = (jint(0));
	}
label_154:;
	{
	if ((frame[20].i) >= (frame[4].i)) goto label_155;
	}
	{
	LINE_NUMBER(943);
	sp[0].o = frame[0].o;
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tableMinHeight = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tableMinHeight) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[20].i))));
	LINE_NUMBER(944);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tablePrefHeight;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[20].i))), ((jfloat)ARRAY_ACCESS(jfloat, (frame[8].o), (frame[20].i))));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tablePrefHeight = (temp0 + temp1);
	LINE_NUMBER(942);
	INST_IINC(20, 1);
	goto label_154;
	}
label_155:;
	{
	LINE_NUMBER(946);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tablePrefWidth = temp0;
	LINE_NUMBER(947);
	sp[0].o = frame[0].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight));
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_tablePrefHeight = temp1;
	LINE_NUMBER(948);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_layout(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[39];
	auto stack = &frame[33];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:layout", 39 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(953);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_sizeInvalid) == 0) goto label_1;
	}
	INST_ALOAD(0);
	POP_N(1); // Pop method args
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize(ctx, sp[0].o);
label_1:;
	{
	LINE_NUMBER(955);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float])(ctx, (frame[0].o));
	frame[1].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float])(ctx, (frame[0].o));
	frame[2].f = temp1;
	LINE_NUMBER(956);
	frame[3].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columns);
	frame[4].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rows);
	LINE_NUMBER(957);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnWidth;
	frame[5].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	frame[6].o = sp[0].o;
	LINE_NUMBER(958);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[7].f = temp2;
	jfloat temp3 = frame[7].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[8].f = (temp3 + temp4);
	LINE_NUMBER(959);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[9].f = temp5;
	jfloat temp6 = frame[9].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[10].f = (temp6 + temp7);
	LINE_NUMBER(963);
	frame[12].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefWidth) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth));
	LINE_NUMBER(964);
	if ((floatCompare((frame[12].f), (jfloat(0)), -1)) != 0) goto label_13;
	}
	{
	LINE_NUMBER(965);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	frame[11].o = sp[0].o;
	goto label_16;
	}
label_13:;
	{
	LINE_NUMBER(967);
	jfloat temp0 = frame[12].f;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[1].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinWidth)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[13].f = temp2;
	LINE_NUMBER(968);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_columnWeightedWidth;
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[0].o, sp[1].o, (frame[3].i));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_columnWeightedWidth = sp[0].o;
	frame[11].o = sp[0].o;
	LINE_NUMBER(969);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnMinWidth;
	frame[14].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnPrefWidth;
	frame[15].o = sp[0].o;
	LINE_NUMBER(970);
	frame[16].i = (jint(0));
	}
label_21:;
	{
	if ((frame[16].i) >= (frame[3].i)) goto label_16;
	}
	{
	LINE_NUMBER(971);
	frame[17].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[15].o), (frame[16].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), (frame[16].i))));
	LINE_NUMBER(972);
	frame[18].f = ((frame[17].f) / (frame[12].f));
	LINE_NUMBER(973);
	ARRAY_ACCESS(jfloat, (frame[11].o), (frame[16].i)) = (((jfloat)ARRAY_ACCESS(jfloat, (frame[14].o), (frame[16].i))) + ((frame[13].f) * (frame[18].f)));
	LINE_NUMBER(970);
	INST_IINC(16, 1);
	goto label_21;
	}
label_16:;
	{
	LINE_NUMBER(978);
	frame[14].f = (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tablePrefHeight) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight));
	LINE_NUMBER(979);
	if ((floatCompare((frame[14].f), (jfloat(0)), -1)) != 0) goto label_27;
	}
	{
	LINE_NUMBER(980);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	frame[13].o = sp[0].o;
	goto label_30;
	}
label_27:;
	{
	LINE_NUMBER(982);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_rowWeightedHeight;
	sp[0].o = (jobject)M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float(ctx, sp[0].o, sp[1].o, (frame[4].i));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_rowWeightedHeight = sp[0].o;
	frame[13].o = sp[0].o;
	LINE_NUMBER(983);
	jfloat temp0 = frame[14].f;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), ((frame[2].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_tableMinHeight)));
	jfloat temp2 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, temp0, temp1);
	frame[15].f = temp2;
	LINE_NUMBER(984);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowMinHeight;
	frame[16].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowPrefHeight;
	frame[17].o = sp[0].o;
	LINE_NUMBER(985);
	frame[18].i = (jint(0));
	}
label_35:;
	{
	if ((frame[18].i) >= (frame[4].i)) goto label_30;
	}
	{
	LINE_NUMBER(986);
	frame[19].f = (((jfloat)ARRAY_ACCESS(jfloat, (frame[17].o), (frame[18].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), (frame[18].i))));
	LINE_NUMBER(987);
	frame[20].f = ((frame[19].f) / (frame[14].f));
	LINE_NUMBER(988);
	ARRAY_ACCESS(jfloat, (frame[13].o), (frame[18].i)) = (((jfloat)ARRAY_ACCESS(jfloat, (frame[16].o), (frame[18].i))) + ((frame[15].f) * (frame[20].f)));
	LINE_NUMBER(985);
	INST_IINC(18, 1);
	goto label_35;
	}
label_30:;
	{
	LINE_NUMBER(993);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_items;
	frame[15].o = sp[0].o;
	LINE_NUMBER(994);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[16].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	LINE_NUMBER(995);
	frame[17].i = (jint(0));
	}
label_42:;
	{
	if ((frame[17].i) >= (frame[16].i)) goto label_43;
	}
	{
	LINE_NUMBER(996);
	frame[18].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[15].o), (frame[17].i)))));
	LINE_NUMBER(997);
	frame[19].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_column);
	frame[20].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_row);
	LINE_NUMBER(998);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_actor;
	frame[21].o = sp[0].o;
	LINE_NUMBER(1000);
	frame[22].f = (jfloat(0));
	LINE_NUMBER(1001);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_colspan;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[23].i = temp0;
	LINE_NUMBER(1002);
	frame[24].i = (frame[19].i);
	frame[25].i = ((frame[24].i) + (frame[23].i));
	}
label_52:;
	{
	if ((frame[24].i) >= (frame[25].i)) goto label_53;
	}
	{
	LINE_NUMBER(1003);
	frame[22].f = ((frame[22].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[11].o), (frame[24].i))));
	LINE_NUMBER(1002);
	INST_IINC(24, 1);
	goto label_52;
	}
label_53:;
	{
	LINE_NUMBER(1004);
	frame[24].f = ((jfloat)ARRAY_ACCESS(jfloat, (frame[13].o), (frame[20].i)));
	LINE_NUMBER(1006);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_prefWidth;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[21].o));
	frame[25].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_prefHeight;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[21].o));
	frame[26].f = temp1;
	LINE_NUMBER(1007);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_minWidth;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[21].o));
	frame[27].f = temp2;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_minHeight;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[21].o));
	frame[28].f = temp3;
	LINE_NUMBER(1008);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_maxWidth;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[21].o));
	frame[29].f = temp4;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_maxHeight;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[21].o));
	frame[30].f = temp5;
	LINE_NUMBER(1009);
	if ((floatCompare((frame[25].f), (frame[27].f), 1)) >= 0) goto label_63;
	}
	INST_FLOAD(27);
	INST_FSTORE(25);
label_63:;
	{
	LINE_NUMBER(1010);
	if ((floatCompare((frame[26].f), (frame[28].f), 1)) >= 0) goto label_64;
	}
	INST_FLOAD(28);
	INST_FSTORE(26);
label_64:;
	{
	LINE_NUMBER(1011);
	if ((floatCompare((frame[29].f), (jfloat(0)), -1)) <= 0) goto label_65;
	}
	{
	if ((floatCompare((frame[25].f), (frame[29].f), -1)) <= 0) goto label_65;
	}
	INST_FLOAD(29);
	INST_FSTORE(25);
label_65:;
	{
	LINE_NUMBER(1012);
	if ((floatCompare((frame[30].f), (jfloat(0)), -1)) <= 0) goto label_66;
	}
	{
	if ((floatCompare((frame[26].f), (frame[30].f), -1)) <= 0) goto label_66;
	}
	INST_FLOAD(30);
	INST_FSTORE(26);
label_66:;
	{
	LINE_NUMBER(1014);
	sp[0].o = frame[18].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((frame[22].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_computedPadLeft)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_computedPadRight)), (frame[25].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorWidth = temp0;
	LINE_NUMBER(1015);
	sp[0].o = frame[18].o;
	jfloat temp1 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, (((frame[24].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_computedPadTop)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[18].o)))->F_computedPadBottom)), (frame[26].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorHeight = temp1;
	LINE_NUMBER(1017);
	if ((frame[23].i) != (jint(1))) goto label_69;
	}
	{
	sp[0].o = frame[5].o;
	jint temp0 = frame[19].i;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[19].i))), (frame[22].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	}
label_69:;
	{
	LINE_NUMBER(1018);
	sp[0].o = frame[6].o;
	jint temp0 = frame[20].i;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[20].i))), (frame[24].f));
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = temp1;
	LINE_NUMBER(995);
	INST_IINC(17, 1);
	goto label_42;
	}
label_43:;
	{
	LINE_NUMBER(1022);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_expandWidth;
	frame[17].o = sp[0].o;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_expandHeight;
	frame[18].o = sp[0].o;
	LINE_NUMBER(1023);
	frame[19].f = (jfloat(0));
	LINE_NUMBER(1024);
	frame[20].i = (jint(0));
	}
label_74:;
	{
	if ((frame[20].i) >= (frame[3].i)) goto label_75;
	}
	{
	LINE_NUMBER(1025);
	frame[19].f = ((frame[19].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[17].o), (frame[20].i))));
	LINE_NUMBER(1024);
	INST_IINC(20, 1);
	goto label_74;
	}
label_75:;
	{
	LINE_NUMBER(1026);
	if ((floatCompare((frame[19].f), (jfloat(0)), -1)) <= 0) goto label_78;
	}
	{
	LINE_NUMBER(1027);
	frame[20].f = ((frame[1].f) - (frame[8].f));
	LINE_NUMBER(1028);
	frame[21].i = (jint(0));
	}
label_81:;
	{
	if ((frame[21].i) >= (frame[3].i)) goto label_82;
	}
	{
	LINE_NUMBER(1029);
	frame[20].f = ((frame[20].f) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[21].i))));
	LINE_NUMBER(1028);
	INST_IINC(21, 1);
	goto label_81;
	}
label_82:;
	{
	LINE_NUMBER(1030);
	if ((floatCompare((frame[20].f), (jfloat(0)), -1)) <= 0) goto label_78;
	}
	{
	LINE_NUMBER(1031);
	frame[21].f = (jfloat(0));
	LINE_NUMBER(1032);
	frame[22].i = (jint(0));
	LINE_NUMBER(1033);
	frame[23].i = (jint(0));
	}
label_88:;
	{
	if ((frame[23].i) >= (frame[3].i)) goto label_89;
	}
	{
	LINE_NUMBER(1034);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[17].o), (frame[23].i))), (jfloat(0)), -1)) != 0) goto label_91;
	}
	goto label_92;
label_91:;
	{
	LINE_NUMBER(1035);
	frame[24].f = (((frame[20].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[17].o), (frame[23].i)))) / (frame[19].f));
	LINE_NUMBER(1036);
	sp[0].o = frame[5].o;
	jint temp0 = frame[23].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[24].f));
	LINE_NUMBER(1037);
	frame[21].f = ((frame[21].f) + (frame[24].f));
	LINE_NUMBER(1038);
	frame[22].i = (frame[23].i);
	}
label_92:;
	{
	LINE_NUMBER(1033);
	INST_IINC(23, 1);
	goto label_88;
	}
label_89:;
	{
	LINE_NUMBER(1040);
	sp[0].o = frame[5].o;
	jint temp0 = frame[22].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((frame[20].f) - (frame[21].f)));
	}
label_78:;
	{
	LINE_NUMBER(1044);
	frame[19].f = (jfloat(0));
	LINE_NUMBER(1045);
	frame[20].i = (jint(0));
	}
label_97:;
	{
	if ((frame[20].i) >= (frame[4].i)) goto label_98;
	}
	{
	LINE_NUMBER(1046);
	frame[19].f = ((frame[19].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[18].o), (frame[20].i))));
	LINE_NUMBER(1045);
	INST_IINC(20, 1);
	goto label_97;
	}
label_98:;
	{
	LINE_NUMBER(1047);
	if ((floatCompare((frame[19].f), (jfloat(0)), -1)) <= 0) goto label_101;
	}
	{
	LINE_NUMBER(1048);
	frame[20].f = ((frame[2].f) - (frame[10].f));
	LINE_NUMBER(1049);
	frame[21].i = (jint(0));
	}
label_104:;
	{
	if ((frame[21].i) >= (frame[4].i)) goto label_105;
	}
	{
	LINE_NUMBER(1050);
	frame[20].f = ((frame[20].f) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[21].i))));
	LINE_NUMBER(1049);
	INST_IINC(21, 1);
	goto label_104;
	}
label_105:;
	{
	LINE_NUMBER(1051);
	if ((floatCompare((frame[20].f), (jfloat(0)), -1)) <= 0) goto label_101;
	}
	{
	LINE_NUMBER(1052);
	frame[21].f = (jfloat(0));
	LINE_NUMBER(1053);
	frame[22].i = (jint(0));
	LINE_NUMBER(1054);
	frame[23].i = (jint(0));
	}
label_111:;
	{
	if ((frame[23].i) >= (frame[4].i)) goto label_112;
	}
	{
	LINE_NUMBER(1055);
	if ((floatCompare(((jfloat)ARRAY_ACCESS(jfloat, (frame[18].o), (frame[23].i))), (jfloat(0)), -1)) != 0) goto label_114;
	}
	goto label_115;
label_114:;
	{
	LINE_NUMBER(1056);
	frame[24].f = (((frame[20].f) * ((jfloat)ARRAY_ACCESS(jfloat, (frame[18].o), (frame[23].i)))) / (frame[19].f));
	LINE_NUMBER(1057);
	sp[0].o = frame[6].o;
	jint temp0 = frame[23].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[24].f));
	LINE_NUMBER(1058);
	frame[21].f = ((frame[21].f) + (frame[24].f));
	LINE_NUMBER(1059);
	frame[22].i = (frame[23].i);
	}
label_115:;
	{
	LINE_NUMBER(1054);
	INST_IINC(23, 1);
	goto label_111;
	}
label_112:;
	{
	LINE_NUMBER(1061);
	sp[0].o = frame[6].o;
	jint temp0 = frame[22].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + ((frame[20].f) - (frame[21].f)));
	}
label_101:;
	{
	LINE_NUMBER(1066);
	frame[20].i = (jint(0));
	}
label_119:;
	{
	if ((frame[20].i) >= (frame[16].i)) goto label_120;
	}
	{
	LINE_NUMBER(1067);
	frame[21].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[15].o), (frame[20].i)))));
	LINE_NUMBER(1068);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[21].o)))->F_colspan;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[22].i = temp0;
	LINE_NUMBER(1069);
	if ((frame[22].i) != (jint(1))) goto label_124;
	}
	goto label_125;
label_124:;
	{
	LINE_NUMBER(1071);
	frame[23].f = (jfloat(0));
	LINE_NUMBER(1072);
	frame[24].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[21].o)))->F_column);
	frame[25].i = ((frame[24].i) + (frame[22].i));
	}
label_128:;
	{
	if ((frame[24].i) >= (frame[25].i)) goto label_129;
	}
	{
	LINE_NUMBER(1073);
	frame[23].f = ((frame[23].f) + (((jfloat)ARRAY_ACCESS(jfloat, (frame[11].o), (frame[24].i))) - ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[24].i)))));
	LINE_NUMBER(1072);
	INST_IINC(24, 1);
	goto label_128;
	}
label_129:;
	{
	LINE_NUMBER(1074);
	jfloat temp0 = frame[23].f;
	jfloat temp1 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, (jfloat(0)), (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[21].o)))->F_computedPadLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[21].o)))->F_computedPadRight)));
	frame[23].f = (temp0 - temp1);
	LINE_NUMBER(1076);
	frame[23].f = ((frame[23].f) / (jfloat((frame[22].i))));
	LINE_NUMBER(1077);
	if ((floatCompare((frame[23].f), (jfloat(0)), -1)) <= 0) goto label_125;
	}
	{
	LINE_NUMBER(1078);
	frame[24].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[21].o)))->F_column);
	frame[25].i = ((frame[24].i) + (frame[22].i));
	}
label_136:;
	{
	if ((frame[24].i) >= (frame[25].i)) goto label_125;
	}
	{
	LINE_NUMBER(1079);
	sp[0].o = frame[5].o;
	jint temp0 = frame[24].i;
	ARRAY_ACCESS(jfloat, sp[0].o, temp0) = (((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, temp0)) + (frame[23].f));
	LINE_NUMBER(1078);
	INST_IINC(24, 1);
	goto label_136;
	}
label_125:;
	{
	LINE_NUMBER(1066);
	INST_IINC(20, 1);
	goto label_119;
	}
label_120:;
	{
	LINE_NUMBER(1084);
	frame[20].f = (frame[8].f);
	frame[21].f = (frame[10].f);
	LINE_NUMBER(1085);
	frame[22].i = (jint(0));
	}
label_141:;
	{
	if ((frame[22].i) >= (frame[3].i)) goto label_142;
	}
	{
	LINE_NUMBER(1086);
	frame[20].f = ((frame[20].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[22].i))));
	LINE_NUMBER(1085);
	INST_IINC(22, 1);
	goto label_141;
	}
label_142:;
	{
	LINE_NUMBER(1087);
	frame[22].i = (jint(0));
	}
label_145:;
	{
	if ((frame[22].i) >= (frame[4].i)) goto label_146;
	}
	{
	LINE_NUMBER(1088);
	frame[21].f = ((frame[21].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), (frame[22].i))));
	LINE_NUMBER(1087);
	INST_IINC(22, 1);
	goto label_145;
	}
label_146:;
	{
	LINE_NUMBER(1091);
	frame[22].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_align);
	LINE_NUMBER(1092);
	frame[23].f = (frame[7].f);
	LINE_NUMBER(1093);
	if (((frame[22].i) & (16)) == 0) goto label_151;
	}
	{
	LINE_NUMBER(1094);
	frame[23].f = ((frame[23].f) + ((frame[1].f) - (frame[20].f)));
	goto label_153;
	}
label_151:;
	{
	LINE_NUMBER(1095);
	if (((frame[22].i) & (8)) != 0) goto label_153;
	}
	{
	LINE_NUMBER(1096);
	frame[23].f = ((frame[23].f) + (((frame[1].f) - (frame[20].f)) / (jfloat(2))));
	}
label_153:;
	{
	LINE_NUMBER(1098);
	frame[24].f = (frame[9].f);
	LINE_NUMBER(1099);
	if (((frame[22].i) & (jint(4))) == 0) goto label_156;
	}
	{
	LINE_NUMBER(1100);
	frame[24].f = ((frame[24].f) + ((frame[2].f) - (frame[21].f)));
	goto label_158;
	}
label_156:;
	{
	LINE_NUMBER(1101);
	if (((frame[22].i) & (jint(2))) != 0) goto label_158;
	}
	{
	LINE_NUMBER(1102);
	frame[24].f = ((frame[24].f) + (((frame[2].f) - (frame[21].f)) / (jfloat(2))));
	}
label_158:;
	{
	LINE_NUMBER(1105);
	frame[25].f = (frame[23].f);
	frame[26].f = (frame[24].f);
	LINE_NUMBER(1106);
	frame[27].i = (jint(0));
	}
label_162:;
	{
	if ((frame[27].i) >= (frame[16].i)) goto label_163;
	}
	{
	LINE_NUMBER(1107);
	frame[28].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, ((jobject)ARRAY_ACCESS(jobject, (frame[15].o), (frame[27].i)))));
	LINE_NUMBER(1109);
	frame[29].f = (jfloat(0));
	LINE_NUMBER(1110);
	frame[30].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_column);
	jint temp0 = frame[30].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_colspan;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[31].i = (temp0 + temp1);
	}
label_168:;
	{
	if ((frame[30].i) >= (frame[31].i)) goto label_169;
	}
	{
	LINE_NUMBER(1111);
	frame[29].f = ((frame[29].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[5].o), (frame[30].i))));
	LINE_NUMBER(1110);
	INST_IINC(30, 1);
	goto label_168;
	}
label_169:;
	{
	LINE_NUMBER(1112);
	frame[29].f = ((frame[29].f) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadRight)));
	LINE_NUMBER(1114);
	frame[25].f = ((frame[25].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadLeft));
	LINE_NUMBER(1116);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_fillX;
	jfloat temp0 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, sp[0].o);
	frame[30].f = temp0;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_fillY;
	jfloat temp1 = (jfloat)((func_java_lang_Float_floatValue_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Float_floatValue_R_float])(ctx, sp[0].o);
	frame[31].f = temp1;
	LINE_NUMBER(1117);
	if ((floatCompare((frame[30].f), (jfloat(0)), -1)) <= 0) goto label_176;
	}
	{
	LINE_NUMBER(1118);
	sp[0].o = frame[28].o;
	jfloat temp0 = (frame[29].f) * (frame[30].f);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_minWidth;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actor;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, sp[2].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorWidth = temp2;
	LINE_NUMBER(1119);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_maxWidth;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actor;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[32].f = temp3;
	LINE_NUMBER(1120);
	if ((floatCompare((frame[32].f), (jfloat(0)), -1)) <= 0) goto label_176;
	}
	{
	sp[0].o = frame[28].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorWidth), (frame[32].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorWidth = temp0;
	}
label_176:;
	{
	LINE_NUMBER(1122);
	if ((floatCompare((frame[31].f), (jfloat(0)), -1)) <= 0) goto label_180;
	}
	{
	LINE_NUMBER(1123);
	sp[0].o = frame[28].o;
	jfloat temp0 = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_row))) * (frame[31].f)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadTop)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadBottom);
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_minHeight;
	sp[2].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actor;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[1].o, sp[2].o);
	jfloat temp2 = (jfloat)SM_java_lang_Math_max_float_float_R_float(ctx, temp0, temp1);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorHeight = temp2;
	LINE_NUMBER(1124);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_maxHeight;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actor;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, sp[1].o);
	frame[32].f = temp3;
	LINE_NUMBER(1125);
	if ((floatCompare((frame[32].f), (jfloat(0)), -1)) <= 0) goto label_180;
	}
	{
	sp[0].o = frame[28].o;
	jfloat temp0 = (jfloat)SM_java_lang_Math_min_float_float_R_float(ctx, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorHeight), (frame[32].f));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorHeight = temp0;
	}
label_180:;
	{
	LINE_NUMBER(1128);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_align;
	jint temp0 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[22].i = temp0;
	LINE_NUMBER(1129);
	if (((frame[22].i) & (8)) == 0) goto label_185;
	}
	{
	LINE_NUMBER(1130);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorX = (frame[25].f);
	goto label_187;
	}
label_185:;
	{
	LINE_NUMBER(1131);
	if (((frame[22].i) & (16)) == 0) goto label_188;
	}
	{
	LINE_NUMBER(1132);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorX = (((frame[25].f) + (frame[29].f)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorWidth));
	goto label_187;
	}
label_188:;
	{
	LINE_NUMBER(1134);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorX = ((frame[25].f) + (((frame[29].f) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorWidth)) / (jfloat(2))));
	}
label_187:;
	{
	LINE_NUMBER(1136);
	if (((frame[22].i) & (jint(2))) == 0) goto label_190;
	}
	{
	LINE_NUMBER(1137);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorY = ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadTop);
	goto label_192;
	}
label_190:;
	{
	LINE_NUMBER(1138);
	if (((frame[22].i) & (jint(4))) == 0) goto label_193;
	}
	{
	LINE_NUMBER(1139);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorY = ((((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_row))) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorHeight)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadBottom));
	goto label_192;
	}
label_193:;
	{
	LINE_NUMBER(1141);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorY = ((((((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_row))) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorHeight)) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadTop)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadBottom)) / (jfloat(2)));
	}
label_192:;
	{
	LINE_NUMBER(1142);
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorY = ((((frame[2].f) - (frame[26].f)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorY)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorHeight));
	LINE_NUMBER(1144);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_round) == 0) goto label_196;
	}
	{
	LINE_NUMBER(1145);
	sp[0].o = frame[28].o;
	jdouble temp0 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorWidth))));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorWidth = (jfloat(temp0));
	LINE_NUMBER(1146);
	sp[0].o = frame[28].o;
	jdouble temp1 = (jdouble)SM_java_lang_Math_ceil_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorHeight))));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorHeight = (jfloat(temp1));
	LINE_NUMBER(1147);
	sp[0].o = frame[28].o;
	jdouble temp2 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorX))));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorX = (jfloat(temp2));
	LINE_NUMBER(1148);
	sp[0].o = frame[28].o;
	jdouble temp3 = (jdouble)SM_java_lang_Math_floor_double_R_double(ctx, (jdouble(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorY))));
	((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK(sp[0].o))->F_actorY = (jfloat(temp3));
	}
label_196:;
	{
	LINE_NUMBER(1151);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actor;
	if (sp[0].o == nullptr) goto label_201;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actor;
	((func_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Actor_setBounds_float_float_float_float])(ctx, sp[0].o, ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorX), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorY), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorWidth), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_actorHeight));
	}
label_201:;
	{
	LINE_NUMBER(1153);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_endRow) == 0) goto label_202;
	}
	{
	LINE_NUMBER(1154);
	frame[25].f = (frame[23].f);
	LINE_NUMBER(1155);
	frame[26].f = ((frame[26].f) + ((jfloat)ARRAY_ACCESS(jfloat, (frame[6].o), ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_row))));
	goto label_205;
	}
label_202:;
	{
	LINE_NUMBER(1157);
	frame[25].f = ((frame[25].f) + ((frame[29].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[28].o)))->F_computedPadRight)));
	}
label_205:;
	{
	LINE_NUMBER(1106);
	INST_IINC(27, 1);
	goto label_162;
	}
label_163:;
	{
	LINE_NUMBER(1161);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getChildren_R_com_badlogic_gdx_utils_SnapshotArray) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getChildren_R_com_badlogic_gdx_utils_SnapshotArray])(ctx, (frame[0].o));
	frame[27].o = sp[0].o;
	LINE_NUMBER(1162);
	sp[0].o = (jobject)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[27].o)))->F_items;
	frame[28].o = (checkCast(ctx, getArrayClass(&class_com_badlogic_gdx_scenes_scene2d_Actor, 1), sp[0].o));
	LINE_NUMBER(1163);
	frame[29].i = (jint(0));
	frame[30].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[27].o)))->F_size);
	}
label_209:;
	{
	if ((frame[29].i) >= (frame[30].i)) goto label_210;
	}
	{
	LINE_NUMBER(1164);
	frame[31].o = ((jobject)ARRAY_ACCESS(jobject, (frame[28].o), (frame[29].i)));
	LINE_NUMBER(1165);
	if ((isInstance(ctx, (frame[31].o), &class_com_badlogic_gdx_scenes_scene2d_utils_Layout)) == 0) goto label_213;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Layout_validate, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[31].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Layout, (frame[31].o))));
	}
label_213:;
	{
	LINE_NUMBER(1163);
	INST_IINC(29, 1);
	goto label_209;
	}
label_210:;
	{
	LINE_NUMBER(1169);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_none;
	if (sp[0].o == sp[1].o) goto label_214;
	}
	{
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRects_float_float_float_float(ctx, (frame[0].o), (frame[23].f), (frame[24].f), ((frame[20].f) - (frame[8].f)), ((frame[21].f) - (frame[10].f)));
	}
label_214:;
	LINE_NUMBER(1170);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRects_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[12];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:addDebugRects", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	{
	LINE_NUMBER(1173);
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearDebugRects(ctx, (frame[0].o));
	LINE_NUMBER(1174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_table;
	if (sp[0].o == sp[1].o) goto label_2;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_all;
	if (sp[0].o != sp[1].o) goto label_3;
	}
label_2:;
	{
	LINE_NUMBER(1176);
	sp[0].o = frame[0].o;
	jfloat temp0 = jfloat(0);
	jfloat temp1 = jfloat(0);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float])(ctx, (frame[0].o));
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float])(ctx, (frame[0].o));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTableColor;
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	LINE_NUMBER(1178);
	sp[0].o = frame[0].o;
	jfloat temp4 = frame[1].f;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp6 = temp5 - (frame[2].f);
	jfloat temp7 = frame[3].f;
	jfloat temp8 = -(frame[4].f);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTableColor;
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, temp4, temp6, temp7, temp8, sp[1].o);
	}
label_3:;
	{
	LINE_NUMBER(1180);
	frame[5].f = (frame[1].f);
	LINE_NUMBER(1181);
	frame[6].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	frame[7].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_7:;
	{
	if ((frame[6].i) >= (frame[7].i)) goto label_8;
	}
	{
	LINE_NUMBER(1182);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_cells;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[6].i));
	frame[8].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, sp[0].o));
	LINE_NUMBER(1185);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_actor;
	if (sp[0].o == sp[1].o) goto label_11;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_all;
	if (sp[0].o != sp[1].o) goto label_12;
	}
label_11:;
	{
	LINE_NUMBER(1186);
	sp[0].o = frame[0].o;
	jfloat temp0 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_actorX;
	jfloat temp1 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_actorY;
	jfloat temp2 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_actorWidth;
	jfloat temp3 = (jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_actorHeight;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActorColor;
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, temp0, temp1, temp2, temp3, sp[1].o);
	}
label_12:;
	{
	LINE_NUMBER(1189);
	frame[9].f = (jfloat(0));
	LINE_NUMBER(1190);
	frame[10].i = ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_column);
	jint temp0 = frame[10].i;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_colspan;
	jint temp1 = (jint)((func_java_lang_Integer_intValue_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Integer_intValue_R_int])(ctx, sp[0].o);
	frame[11].i = (temp0 + temp1);
	}
label_15:;
	{
	if ((frame[10].i) >= (frame[11].i)) goto label_16;
	}
	{
	LINE_NUMBER(1191);
	jfloat temp0 = frame[9].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_columnWidth;
	frame[9].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, (frame[10].i))));
	LINE_NUMBER(1190);
	INST_IINC(10, 1);
	goto label_15;
	}
label_16:;
	{
	LINE_NUMBER(1192);
	frame[9].f = ((frame[9].f) - (((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadLeft) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadRight)));
	LINE_NUMBER(1193);
	frame[1].f = ((frame[1].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadLeft));
	LINE_NUMBER(1194);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_cell;
	if (sp[0].o == sp[1].o) goto label_21;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debug;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_all;
	if (sp[0].o != sp[1].o) goto label_22;
	}
label_21:;
	{
	LINE_NUMBER(1195);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	frame[10].f = ((((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_row))) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadTop)) - ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadBottom));
	LINE_NUMBER(1196);
	frame[11].f = ((frame[2].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadTop));
	LINE_NUMBER(1197);
	sp[0].o = frame[0].o;
	jfloat temp0 = frame[1].f;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float])(ctx, (frame[0].o));
	jfloat temp2 = temp1 - (frame[11].f);
	jfloat temp3 = frame[9].f;
	jfloat temp4 = -(frame[10].f);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCellColor;
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color(ctx, sp[0].o, temp0, temp2, temp3, temp4, sp[1].o);
	}
label_22:;
	{
	LINE_NUMBER(1200);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_endRow) == 0) goto label_25;
	}
	{
	LINE_NUMBER(1201);
	frame[1].f = (frame[5].f);
	LINE_NUMBER(1202);
	jfloat temp0 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_rowHeight;
	frame[2].f = (temp0 + ((jfloat)ARRAY_ACCESS(jfloat, sp[0].o, ((jint)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_row))));
	goto label_28;
	}
label_25:;
	{
	LINE_NUMBER(1204);
	frame[1].f = ((frame[1].f) + ((frame[9].f) + ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Cell *) NULL_CHECK((frame[8].o)))->F_computedPadRight)));
	}
label_28:;
	{
	LINE_NUMBER(1181);
	INST_IINC(6, 1);
	goto label_7;
	}
label_8:;
	LINE_NUMBER(1206);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearDebugRects(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:clearDebugRects", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1209);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debugRects;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK(sp[0].o))->F_debugRects = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(1210);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_pool;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debugRects;
	((func_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_freeAll_com_badlogic_gdx_utils_Array])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1211);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debugRects;
	((func_com_badlogic_gdx_utils_Array_clear) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_clear])(ctx, sp[0].o);
	LINE_NUMBER(1212);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3, jobject param4) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:addDebugRect", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].o = param4;
	{
	LINE_NUMBER(1215);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_pool;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Pool_obtain_R_java_lang_Object])(ctx, sp[0].o);
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect, sp[0].o));
	LINE_NUMBER(1216);
	((com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect *) NULL_CHECK((frame[6].o)))->F_color = (jref) (frame[5].o);
	LINE_NUMBER(1217);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect_set_float_float_float_float_R_com_badlogic_gdx_math_Rectangle])(ctx, (frame[6].o), (frame[1].f), (frame[2].f), (frame[3].f), (frame[4].f));
	LINE_NUMBER(1218);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debugRects;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[6].o));
	LINE_NUMBER(1219);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:drawDebug", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1222);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_isTransform_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_isTransform_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_1;
	}
	{
	LINE_NUMBER(1223);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_computeTransform_R_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_computeTransform_R_com_badlogic_gdx_math_Matrix4])(ctx, (frame[0].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_applyTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer_com_badlogic_gdx_math_Matrix4])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(1224);
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugRects_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1225);
	if (((jint)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_clip) == 0) goto label_5;
	}
	{
	LINE_NUMBER(1226);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_flush])(ctx, (frame[1].o));
	LINE_NUMBER(1227);
	frame[2].f = (jfloat(0));
	frame[3].f = (jfloat(0));
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getWidth_R_float])(ctx, (frame[0].o));
	frame[4].f = temp0;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getHeight_R_float])(ctx, (frame[0].o));
	frame[5].f = temp1;
	LINE_NUMBER(1228);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_background;
	if (sp[0].o == nullptr) goto label_12;
	}
	{
	LINE_NUMBER(1229);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padLeft;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(1230);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padBottom;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[3].f = temp1;
	LINE_NUMBER(1231);
	jfloat temp2 = frame[4].f;
	jfloat temp3 = frame[2].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padRight;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[4].f = (temp2 - (temp3 + temp4));
	LINE_NUMBER(1232);
	jfloat temp5 = frame[5].f;
	jfloat temp6 = frame[3].f;
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_padTop;
	jfloat temp7 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Value_get_com_badlogic_gdx_scenes_scene2d_Actor_R_float])(ctx, sp[0].o, (frame[0].o));
	frame[5].f = (temp5 - (temp6 + temp7));
	}
label_12:;
	{
	LINE_NUMBER(1234);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_clipBegin_float_float_float_float_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clipBegin_float_float_float_float_R_boolean])(ctx, (frame[0].o), (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	if (temp0 == 0) goto label_17;
	}
	{
	LINE_NUMBER(1235);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1236);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_clipEnd) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clipEnd])(ctx, (frame[0].o));
	}
label_17:;
	LINE_NUMBER(1238);
	goto label_20;
label_5:;
	{
	LINE_NUMBER(1239);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugChildren_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	}
label_20:;
	{
	LINE_NUMBER(1240);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Table_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_resetTransform_com_badlogic_gdx_graphics_glutils_ShapeRenderer])(ctx, (frame[0].o), (frame[1].o));
	goto label_21;
	}
label_1:;
	{
	LINE_NUMBER(1242);
	M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugRects_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(1243);
	M_com_badlogic_gdx_scenes_scene2d_Group_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer(ctx, (frame[0].o), (frame[1].o));
	}
label_21:;
	LINE_NUMBER(1245);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:drawDebugBounds", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	LINE_NUMBER(1248);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugRects_com_badlogic_gdx_graphics_glutils_ShapeRenderer(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[12];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:drawDebugRects", 12 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(1251);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debugRects;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getDebug_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getDebug_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_2;
	}
label_1:;
	popStackFrame(ctx);
	INST_RETURN();
label_2:;
	{
	LINE_NUMBER(1252);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType_Line;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_set_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_set_com_badlogic_gdx_graphics_glutils_ShapeRenderer$ShapeType])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1253);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getStage_R_com_badlogic_gdx_scenes_scene2d_Stage])(ctx, (frame[0].o));
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_Stage_getDebugColor_R_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_Stage_getDebugColor_R_com_badlogic_gdx_graphics_Color])(ctx, sp[1].o);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	}
label_4:;
	{
	LINE_NUMBER(1254);
	frame[2].f = (jfloat(0));
	frame[3].f = (jfloat(0));
	LINE_NUMBER(1255);
	jint temp0 = (jint)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_isTransform_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_isTransform_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(1256);
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getX_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getX_R_float])(ctx, (frame[0].o));
	frame[2].f = temp0;
	LINE_NUMBER(1257);
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_getY_R_float) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getY_R_float])(ctx, (frame[0].o));
	frame[3].f = temp1;
	}
label_7:;
	{
	LINE_NUMBER(1259);
	frame[4].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debugRects;
	frame[5].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_11:;
	{
	if ((frame[4].i) >= (frame[5].i)) goto label_12;
	}
	{
	LINE_NUMBER(1260);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_debugRects;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[4].i));
	frame[6].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect, sp[0].o));
	LINE_NUMBER(1261);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect *) NULL_CHECK((frame[6].o)))->F_color;
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_setColor_com_badlogic_gdx_graphics_Color])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(1262);
	((func_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_glutils_ShapeRenderer_rect_float_float_float_float])(ctx, (frame[1].o), ((frame[2].f) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_x)), ((frame[3].f) + ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_y)), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_width), ((jfloat)((com_badlogic_gdx_math_Rectangle *) NULL_CHECK((frame[6].o)))->F_height));
	LINE_NUMBER(1259);
	INST_IINC(4, 1);
	goto label_11;
	}
label_12:;
	LINE_NUMBER(1264);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_getSkin_R_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:getSkin", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(1268);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Table *) NULL_CHECK((frame[0].o)))->F_skin;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:debugAll", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_ui_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_ui_Table])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_Actor(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:debug", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table])(ctx, (frame[0].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup(ctx);
	jtype frame[6];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Table:<clinit>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	{
	LINE_NUMBER(49);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(0)), (jfloat(1)), (jfloat(1)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTableColor = sp[0].o;
	LINE_NUMBER(50);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(1)), (jfloat(0)), (jfloat(0)), (jfloat(1)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCellColor = sp[0].o;
	LINE_NUMBER(51);
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[0].o, (jfloat(0)), (jfloat(1)), (jfloat(0)), (jfloat(1)));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActorColor = sp[0].o;
	LINE_NUMBER(53);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_Table$1(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool = sp[0].o;
	LINE_NUMBER(1284);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$2(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_Table$2(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundTop = sp[0].o;
	LINE_NUMBER(1293);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$3(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table$3);
	init_com_badlogic_gdx_scenes_scene2d_ui_Table$3(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundLeft = sp[0].o;
	LINE_NUMBER(1302);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$4(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table$4);
	init_com_badlogic_gdx_scenes_scene2d_ui_Table$4(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundBottom = sp[0].o;
	LINE_NUMBER(1311);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table$5(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Table$5);
	init_com_badlogic_gdx_scenes_scene2d_ui_Table$5(ctx, sp[0].o);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Table(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundRight = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Table[] {
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_draw_com_badlogic_gdx_graphics_g2d_Batch_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_act_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_fire_com_badlogic_gdx_scenes_scene2d_Event_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_notify_com_badlogic_gdx_scenes_scene2d_Event_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setDebug_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Actor_getDebug_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_Actor,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_clearChildren,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearChildren_boolean,
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
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group,
	(void *) M_com_badlogic_gdx_scenes_scene2d_Group_toString_java_lang_StringBuilder_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_layout,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_invalidateHierarchy,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_validate,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_pack,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setFillParent_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxWidth_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_getMaxHeight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_setLayoutEnabled_com_badlogic_gdx_scenes_scene2d_Group_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup_needsLayout_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_background_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getClip_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_stack_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_reset,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_row_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_endRow,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_columnDefaults_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getCells_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_center_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_top_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_left_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_right_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCell_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActor_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getTableDebug_R_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadX_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadY_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getAlign_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRow_float_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setRound_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRows_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumns_R_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowHeight_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowMinHeight_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowPrefHeight_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnWidth_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnMinWidth_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnPrefWidth_int_R_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRects_float_float_float_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearDebugRects,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugRects_com_badlogic_gdx_graphics_glutils_ShapeRenderer,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getSkin_R_com_badlogic_gdx_scenes_scene2d_ui_Skin,
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
	{ "obtainCell", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "drawBackground", "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFF)V" },
	{ "setBackground", "(Ljava/lang/String;)V" },
	{ "setBackground", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "background", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "background", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "getBackground", "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "clip", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "clip", "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "setClip", "(Z)V" },
	{ "getClip", "()Z" },
	{ "add", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "([Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "add", "(Ljava/lang/CharSequence;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "(Ljava/lang/CharSequence;Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "add", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "stack", "([Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "reset", "()V" },
	{ "row", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "endRow", "()V" },
	{ "columnDefaults", "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "getCell", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "getCells", "()Lcom/badlogic/gdx/utils/Array;" },
	{ "defaults", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;" },
	{ "pad", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "pad", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padTop", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padLeft", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padBottom", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padRight", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "pad", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "pad", "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padTop", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padLeft", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padBottom", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "padRight", "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "align", "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "center", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "top", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "left", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "bottom", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "right", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debug", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debugAll", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debugTable", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debugCell", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debugActor", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "debug", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;" },
	{ "getTableDebug", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;" },
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
	{ "getAlign", "()I" },
	{ "getRow", "(F)I" },
	{ "setSkin", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V" },
	{ "setRound", "(Z)V" },
	{ "getRows", "()I" },
	{ "getColumns", "()I" },
	{ "getRowHeight", "(I)F" },
	{ "getRowMinHeight", "(I)F" },
	{ "getRowPrefHeight", "(I)F" },
	{ "getColumnWidth", "(I)F" },
	{ "getColumnMinWidth", "(I)F" },
	{ "getColumnPrefWidth", "(I)F" },
	{ "ensureSize", "([FI)[F" },
	{ "computeSize", "()V" },
	{ "addDebugRects", "(FFFF)V" },
	{ "clearDebugRects", "()V" },
	{ "addDebugRect", "(FFFFLcom/badlogic/gdx/graphics/Color;)V" },
	{ "drawDebugRects", "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V" },
	{ "getSkin", "()Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;" },
};

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug,
	&class_com_badlogic_gdx_scenes_scene2d_ui_Table$DebugRect,
};

static FieldMetadata fields[] {
	{ "debugTableColor", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTableColor, "Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "debugCellColor", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCellColor, "Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "debugActorColor", &class_com_badlogic_gdx_graphics_Color, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActorColor, "Lcom/badlogic/gdx/graphics/Color;", 9 },
	{ "cellPool", &class_com_badlogic_gdx_utils_Pool, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_cellPool, "Lcom/badlogic/gdx/utils/Pool;", 24 },
	{ "columnWeightedWidth", getArrayClass(&class_float, 1), (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_columnWeightedWidth, "[F", 10 },
	{ "rowWeightedHeight", getArrayClass(&class_float, 1), (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_rowWeightedHeight, "[F", 10 },
	{ "columns", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_columns), "I", 2 },
	{ "rows", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_rows), "I", 2 },
	{ "implicitEndRow", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_implicitEndRow), "Z", 2 },
	{ "cells", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_cells), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "cellDefaults", &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_cellDefaults), "Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 18 },
	{ "columnDefaults", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_columnDefaults), "Lcom/badlogic/gdx/utils/Array;", 18 },
	{ "rowDefaults", &class_com_badlogic_gdx_scenes_scene2d_ui_Cell, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_rowDefaults), "Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 2 },
	{ "sizeInvalid", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_sizeInvalid), "Z", 2 },
	{ "columnMinWidth", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_columnMinWidth), "[F", 2 },
	{ "rowMinHeight", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_rowMinHeight), "[F", 2 },
	{ "columnPrefWidth", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_columnPrefWidth), "[F", 2 },
	{ "rowPrefHeight", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_rowPrefHeight), "[F", 2 },
	{ "tableMinWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_tableMinWidth), "F", 2 },
	{ "tableMinHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_tableMinHeight), "F", 2 },
	{ "tablePrefWidth", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_tablePrefWidth), "F", 2 },
	{ "tablePrefHeight", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_tablePrefHeight), "F", 2 },
	{ "columnWidth", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_columnWidth), "[F", 2 },
	{ "rowHeight", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_rowHeight), "[F", 2 },
	{ "expandWidth", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_expandWidth), "[F", 2 },
	{ "expandHeight", getArrayClass(&class_float, 1), offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_expandHeight), "[F", 2 },
	{ "padTop", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_padTop), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "padLeft", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_padLeft), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "padBottom", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_padBottom), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "padRight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_padRight), "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 0 },
	{ "align", &class_int, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_align), "I", 0 },
	{ "debug", &class_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_debug), "Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;", 0 },
	{ "debugRects", &class_com_badlogic_gdx_utils_Array, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_debugRects), "Lcom/badlogic/gdx/utils/Array;", 0 },
	{ "background", &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_background), "Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 0 },
	{ "clip", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_clip), "Z", 2 },
	{ "skin", &class_com_badlogic_gdx_scenes_scene2d_ui_Skin, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_skin), "Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 2 },
	{ "round", &class_boolean, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Table, F_round), "Z", 0 },
	{ "backgroundTop", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundTop, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "backgroundLeft", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundLeft, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "backgroundBottom", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundBottom, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
	{ "backgroundRight", &class_com_badlogic_gdx_scenes_scene2d_ui_Value, (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Table_backgroundRight, "Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Table, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Table_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "obtainCell", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_obtainCell_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 2 },
	{ "draw", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_draw_com_badlogic_gdx_graphics_g2d_Batch_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_draw_com_badlogic_gdx_graphics_g2d_Batch_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;F)V", 1 },
	{ "drawBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawBackground_com_badlogic_gdx_graphics_g2d_Batch_float_float_float, "(Lcom/badlogic/gdx/graphics/g2d/Batch;FFF)V", 4 },
	{ "setBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "setBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setBackground_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "background", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_background_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "background", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_background_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_background_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "getBackground", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getBackground_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "()Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "hit", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_hit_float_float_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(FFZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "clip", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "clip", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clip_boolean_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Z)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "setClip", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setClip_boolean, "(Z)V", 1 },
	{ "getClip", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getClip_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getClip_R_boolean, "()Z", 1 },
	{ "invalidate", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_invalidate, "()V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "([Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 129 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Ljava/lang/CharSequence;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Ljava/lang/CharSequence;Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Ljava/lang/CharSequence;Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_java_lang_CharSequence_java_lang_String_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Ljava/lang/CharSequence;Ljava/lang/String;Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_add_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_add_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "stack", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_stack_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_stack_Array1_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "([Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 129 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Z", 1 },
	{ "removeActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActor_com_badlogic_gdx_scenes_scene2d_Actor_boolean_R_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)Z", 1 },
	{ "removeActorAt", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_removeActorAt_int_boolean_R_com_badlogic_gdx_scenes_scene2d_Actor, "(IZ)Lcom/badlogic/gdx/scenes/scene2d/Actor;", 1 },
	{ "clearChildren", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearChildren_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clearChildren_boolean, "(Z)V", 1 },
	{ "reset", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_reset, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_reset, "()V", 1 },
	{ "row", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_row_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_row_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "endRow", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_endRow, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_endRow, "()V", 2 },
	{ "columnDefaults", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_columnDefaults_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_columnDefaults_int_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "getCell", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getCell_com_badlogic_gdx_scenes_scene2d_Actor_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;)Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "getCells", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getCells_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getCells_R_com_badlogic_gdx_utils_Array, "()Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefWidth_R_float, "()F", 1 },
	{ "getPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPrefHeight_R_float, "()F", 1 },
	{ "getMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinWidth_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinWidth_R_float, "()F", 1 },
	{ "getMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinHeight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getMinHeight_R_float, "()F", 1 },
	{ "defaults", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_defaults_R_com_badlogic_gdx_scenes_scene2d_ui_Cell, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Cell;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "padTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "padLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "padBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "padRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_com_badlogic_gdx_scenes_scene2d_ui_Value_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Value;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "pad", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_pad_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(FFFF)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "padTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_padTop_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "padLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_padLeft_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "padBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_padBottom_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "padRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_padRight_float_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(F)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "align", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_align_int_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(I)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "center", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_center_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_center_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "top", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_top_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_top_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "left", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_left_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_left_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "bottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_bottom_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "right", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_right_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_right_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "setDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setDebug_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setDebug_boolean, "(Z)V", 1 },
	{ "debug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "debugAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "debugTable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debugTable_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "debugCell", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCell_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debugCell_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "debugActor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActor_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debugActor_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "debug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug_R_com_badlogic_gdx_scenes_scene2d_ui_Table, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;)Lcom/badlogic/gdx/scenes/scene2d/ui/Table;", 1 },
	{ "getTableDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getTableDebug_R_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getTableDebug_R_com_badlogic_gdx_scenes_scene2d_ui_Table$Debug, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Table$Debug;", 1 },
	{ "getPadTopValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTopValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadTop", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadTop_R_float, "()F", 1 },
	{ "getPadLeftValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeftValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadLeft", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadLeft_R_float, "()F", 1 },
	{ "getPadBottomValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottomValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadBottom", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadBottom_R_float, "()F", 1 },
	{ "getPadRightValue", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRightValue_R_com_badlogic_gdx_scenes_scene2d_ui_Value, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Value;", 1 },
	{ "getPadRight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadRight_R_float, "()F", 1 },
	{ "getPadX", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadX_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadX_R_float, "()F", 1 },
	{ "getPadY", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadY_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getPadY_R_float, "()F", 1 },
	{ "getAlign", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getAlign_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getAlign_R_int, "()I", 1 },
	{ "getRow", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRow_float_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getRow_float_R_int, "(F)I", 1 },
	{ "setSkin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setSkin_com_badlogic_gdx_scenes_scene2d_ui_Skin, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;)V", 1 },
	{ "setRound", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_setRound_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_setRound_boolean, "(Z)V", 1 },
	{ "getRows", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRows_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getRows_R_int, "()I", 1 },
	{ "getColumns", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumns_R_int, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumns_R_int, "()I", 1 },
	{ "getRowHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowHeight_int_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowHeight_int_R_float, "(I)F", 1 },
	{ "getRowMinHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowMinHeight_int_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowMinHeight_int_R_float, "(I)F", 1 },
	{ "getRowPrefHeight", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowPrefHeight_int_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getRowPrefHeight_int_R_float, "(I)F", 1 },
	{ "getColumnWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnWidth_int_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnWidth_int_R_float, "(I)F", 1 },
	{ "getColumnMinWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnMinWidth_int_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnMinWidth_int_R_float, "(I)F", 1 },
	{ "getColumnPrefWidth", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnPrefWidth_int_R_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getColumnPrefWidth_int_R_float, "(I)F", 1 },
	{ "ensureSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_ensureSize_Array1_float_int_R_Array1_float, "([FI)[F", 2 },
	{ "computeSize", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_computeSize, "()V", 2 },
	{ "layout", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_layout, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_layout, "()V", 1 },
	{ "addDebugRects", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRects_float_float_float_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRects_float_float_float_float, "(FFFF)V", 2 },
	{ "clearDebugRects", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_clearDebugRects, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_clearDebugRects, "()V", 2 },
	{ "addDebugRect", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_addDebugRect_float_float_float_float_com_badlogic_gdx_graphics_Color, "(FFFFLcom/badlogic/gdx/graphics/Color;)V", 2 },
	{ "drawDebug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebug_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 1 },
	{ "drawDebugBounds", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugBounds_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 4 },
	{ "drawDebugRects", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugRects_com_badlogic_gdx_graphics_glutils_ShapeRenderer, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_drawDebugRects_com_badlogic_gdx_graphics_glutils_ShapeRenderer, "(Lcom/badlogic/gdx/graphics/glutils/ShapeRenderer;)V", 2 },
	{ "getSkin", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_getSkin_R_com_badlogic_gdx_scenes_scene2d_ui_Skin, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_getSkin_R_com_badlogic_gdx_scenes_scene2d_ui_Skin, "()Lcom/badlogic/gdx/scenes/scene2d/ui/Skin;", 1 },
	{ "debugAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debugAll_R_com_badlogic_gdx_scenes_scene2d_Group, "()Lcom/badlogic/gdx/scenes/scene2d/Group;", 4161 },
	{ "debug", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_Actor, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Table_debug_R_com_badlogic_gdx_scenes_scene2d_Actor, "()Lcom/badlogic/gdx/scenes/scene2d/Actor;", 4161 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Table, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Table{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Table",
		.parentClass = (intptr_t) &class_com_badlogic_gdx_scenes_scene2d_ui_WidgetGroup,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Table),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Table,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Table,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Table,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 41,
		.nativeFields = (intptr_t) fields,
		.methodCount = 100,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 245,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Table = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Table);

}

