#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_GuillotineStrategy_GuillotinePage.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_GuillotineStrategy_Node.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "java/util/Comparator.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_GuillotineStrategy.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Bounds.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_GuillotineStrategy_1.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_PackStrategy.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy *) object;
	if (self->F_comparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comparator)->clazz)->markFunction)((jobject) self->F_comparator, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(530);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_sort_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(534);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(535);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$1);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$1_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy *) NULL_CHECK(sp[0].o))->F_comparator = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(541);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy *) NULL_CHECK((frame[0].o)))->F_comparator;
	((func_com_badlogic_gdx_utils_Array_sort_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_sort_java_util_Comparator])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(542);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy:pack", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(546);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	if (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) != 0) goto label_1;
	}
	{
	LINE_NUMBER(548);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(549);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(552);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage, sp[0].o));
	}
label_4:;
	{
	LINE_NUMBER(555);
	frame[5].i = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding);
	LINE_NUMBER(556);
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width) + (frame[5].i));
	LINE_NUMBER(557);
	sp[0].o = frame[3].o;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height) + (frame[5].i));
	LINE_NUMBER(558);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[4].o)))->F_root;
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(559);
	if ((frame[6].o) != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(561);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx, sp[0].o, (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(562);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(563);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage *) NULL_CHECK((frame[4].o)))->F_root;
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[3].o));
	frame[6].o = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(565);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_full = (jint(1));
	LINE_NUMBER(566);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_rect;
	jint temp0 = (jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_x;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_rect;
	jint temp1 = (jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_y;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_rect;
	jint temp2 = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_width) - (frame[5].i);
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[6].o)))->F_rect;
	((func_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_set_int_int_int_int])(ctx, sp[0].o, temp0, temp1, temp2, (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_height) - (frame[5].i)));
	LINE_NUMBER(567);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy:insert", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(571);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_full) != 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(572);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(573);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[2].o));
	frame[3].o = sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(574);
	popStackFrame(ctx);
	return (frame[3].o);
	}
label_1:;
	{
	LINE_NUMBER(576);
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_full) == 0) goto label_5;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_5:;
	{
	LINE_NUMBER(577);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width) != ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_width)) goto label_6;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height) != ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_height)) goto label_6;
	}
	INST_ALOAD(1);
	popStackFrame(ctx);
	INST_ARETURN();
label_6:;
	{
	LINE_NUMBER(578);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width) < ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_width)) goto label_7;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height) >= ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_height)) goto label_8;
	}
label_7:;
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_8:;
	{
	LINE_NUMBER(580);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_leftChild = (jref) sp[1].o;
	LINE_NUMBER(581);
	sp[0].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[1].o);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rightChild = (jref) sp[1].o;
	LINE_NUMBER(583);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	frame[3].i = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width) - ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_width));
	LINE_NUMBER(584);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	frame[4].i = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height) - ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_height));
	LINE_NUMBER(585);
	if ((frame[3].i) <= (frame[4].i)) goto label_13;
	}
	{
	LINE_NUMBER(586);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_x = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(587);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_y = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(588);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_width);
	LINE_NUMBER(589);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_height);
	LINE_NUMBER(591);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_x = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_x) + ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_width));
	LINE_NUMBER(592);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_y = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(593);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_width) - ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_width));
	LINE_NUMBER(594);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_height);
	goto label_22;
	}
label_13:;
	{
	LINE_NUMBER(596);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_x = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(597);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_y = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_y);
	LINE_NUMBER(598);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(599);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_height);
	LINE_NUMBER(601);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_x = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_x);
	LINE_NUMBER(602);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_y = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_y) + ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_height));
	LINE_NUMBER(603);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_width = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_width);
	LINE_NUMBER(604);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rightChild;
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK(sp[0].o))->F_rect;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_rect;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[0].o))->F_height = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK(sp[1].o))->F_height) - ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[2].o)))->F_height));
	}
label_22:;
	{
	LINE_NUMBER(607);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node *) NULL_CHECK((frame[1].o)))->F_leftChild;
	sp[0].o = (jobject)M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_sort_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node,
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
	{ "sort", "(Lcom/badlogic/gdx/utils/Array;)V" },
	{ "pack", "(Lcom/badlogic/gdx/graphics/g2d/PixmapPacker;Ljava/lang/String;Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Page;" },
	{ "insert", "(Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$GuillotinePage,
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node,
};

static FieldMetadata fields[] {
	{ "comparator", &class_java_util_Comparator, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy, F_comparator), "Ljava/util/Comparator;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy, 0, "()V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_sort_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_sort_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "pack", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, "(Lcom/badlogic/gdx/graphics/g2d/PixmapPacker;Ljava/lang/String;Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Page;", 1 },
	{ "insert", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy_insert_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy$Node, "(Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy$Node;", 2 },
};

Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PixmapPacker$GuillotineStrategy",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_PixmapPacker,
		.innerClassCount = 2,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 14,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy = registerClass(&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$GuillotineStrategy);

}

