#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "java/lang/Math.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Page.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_Bounds.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy_1.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "java/lang/String.h"
#include "java/util/Comparator.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_SkylineStrategy_SkylinePage_Row.h"
#include "com/badlogic/gdx/graphics/g2d/PixmapPacker_PackStrategy.h"

extern "C" {


void mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy *) object;
	if (self->F_comparator)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_comparator)->clazz)->markFunction)((jobject) self->F_comparator, mark, depth + 1);
}

void clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$SkylineStrategy:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(634);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy_sort_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$SkylineStrategy:sort", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(638);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy *) NULL_CHECK((frame[0].o)))->F_comparator;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(639);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$1(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$1);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$1_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy(ctx, sp[1].o, (frame[0].o));
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy *) NULL_CHECK(sp[0].o))->F_comparator = (jref) sp[1].o;
	}
label_1:;
	{
	LINE_NUMBER(645);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy *) NULL_CHECK((frame[0].o)))->F_comparator;
	((func_com_badlogic_gdx_utils_Array_sort_java_util_Comparator) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_sort_java_util_Comparator])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(646);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[19];
	auto stack = &frame[16];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/graphics/g2d/PixmapPacker$SkylineStrategy:pack", 19 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(649);
	frame[4].i = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_padding);
	LINE_NUMBER(650);
	frame[5].i = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageWidth) - ((frame[4].i) * (jint(2))));
	frame[6].i = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pageHeight) - ((frame[4].i) * (jint(2))));
	LINE_NUMBER(651);
	frame[7].i = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[3].o)))->F_width) + (frame[4].i));
	frame[8].i = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[3].o)))->F_height) + (frame[4].i));
	LINE_NUMBER(652);
	frame[9].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	frame[10].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size);
	}
label_7:;
	{
	if ((frame[9].i) >= (frame[10].i)) goto label_8;
	}
	{
	LINE_NUMBER(653);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[9].i));
	frame[11].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage, sp[0].o));
	LINE_NUMBER(654);
	frame[12].o = (jobject(nullptr));
	LINE_NUMBER(656);
	frame[13].i = (jint(0));
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[11].o)))->F_rows;
	frame[14].i = (((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK(sp[0].o))->F_size) - (jint(1)));
	}
label_13:;
	{
	if ((frame[13].i) >= (frame[14].i)) goto label_14;
	}
	{
	LINE_NUMBER(657);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[11].o)))->F_rows;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, sp[0].o, (frame[13].i));
	frame[15].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row, sp[0].o));
	LINE_NUMBER(658);
	if ((((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[15].o)))->F_x) + (frame[7].i)) < (frame[5].i)) goto label_17;
	}
	goto label_18;
label_17:;
	{
	LINE_NUMBER(659);
	if ((((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[15].o)))->F_y) + (frame[8].i)) < (frame[6].i)) goto label_19;
	}
	goto label_18;
label_19:;
	{
	LINE_NUMBER(660);
	if ((frame[8].i) <= ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[15].o)))->F_height)) goto label_20;
	}
	goto label_18;
label_20:;
	{
	LINE_NUMBER(661);
	if ((frame[12].o) == nullptr) goto label_21;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[15].o)))->F_height) >= ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_height)) goto label_18;
	}
label_21:;
	INST_ALOAD(15);
	INST_ASTORE(12);
label_18:;
	{
	LINE_NUMBER(656);
	INST_IINC(13, 1);
	goto label_13;
	}
label_14:;
	{
	LINE_NUMBER(663);
	if ((frame[12].o) != nullptr) goto label_22;
	}
	{
	LINE_NUMBER(665);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[11].o)))->F_rows;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_peek_R_java_lang_Object])(ctx, sp[0].o);
	frame[13].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row, sp[0].o));
	LINE_NUMBER(666);
	if ((((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_y) + (frame[8].i)) < (frame[6].i)) goto label_25;
	}
	goto label_26;
label_25:;
	{
	LINE_NUMBER(667);
	if ((((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_x) + (frame[7].i)) >= (frame[5].i)) goto label_27;
	}
	{
	LINE_NUMBER(668);
	sp[0].o = frame[13].o;
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_height), (frame[8].i));
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK(sp[0].o))->F_height = temp0;
	LINE_NUMBER(669);
	frame[12].o = (frame[13].o);
	goto label_22;
	}
label_27:;
	{
	LINE_NUMBER(670);
	if (((((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_y) + ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_height)) + (frame[8].i)) >= (frame[6].i)) goto label_22;
	}
	{
	LINE_NUMBER(672);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row(ctx, sp[0].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(673);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_y = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_y) + ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[13].o)))->F_height));
	LINE_NUMBER(674);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_height = (frame[8].i);
	LINE_NUMBER(675);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[11].o)))->F_rows;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[12].o));
	}
label_22:;
	{
	LINE_NUMBER(678);
	if ((frame[12].o) == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(679);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[3].o)))->F_x = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_x);
	LINE_NUMBER(680);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[3].o)))->F_y = ((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[12].o)))->F_y);
	LINE_NUMBER(681);
	sp[0].o = frame[12].o;
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK(sp[0].o))->F_x = (((jint)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK(sp[0].o))->F_x) + (frame[7].i));
	LINE_NUMBER(682);
	popStackFrame(ctx);
	return (frame[11].o);
	}
label_26:;
	{
	LINE_NUMBER(652);
	INST_IINC(9, 1);
	goto label_7;
	}
label_8:;
	{
	LINE_NUMBER(686);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage_com_badlogic_gdx_graphics_g2d_PixmapPacker(ctx, sp[0].o, (frame[1].o));
	frame[9].o = sp[0].o;
	LINE_NUMBER(687);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker *) NULL_CHECK((frame[1].o)))->F_pages;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[9].o));
	LINE_NUMBER(688);
	clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row);
	init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row(ctx, sp[0].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(689);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[10].o)))->F_x = ((frame[4].i) + (frame[7].i));
	LINE_NUMBER(690);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[10].o)))->F_y = (frame[4].i);
	LINE_NUMBER(691);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage$Row *) NULL_CHECK((frame[10].o)))->F_height = (frame[8].i);
	LINE_NUMBER(692);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage *) NULL_CHECK((frame[9].o)))->F_rows;
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, sp[0].o, (frame[10].o));
	LINE_NUMBER(693);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[3].o)))->F_x = (frame[4].i);
	LINE_NUMBER(694);
	((com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds *) NULL_CHECK((frame[3].o)))->F_y = (frame[4].i);
	LINE_NUMBER(695);
	popStackFrame(ctx);
	return (frame[9].o);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy[] {
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
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy_sort_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page,
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
};

static jclass interfaces[] { &class_com_badlogic_gdx_graphics_g2d_PixmapPacker$PackStrategy, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy$SkylinePage,
};

static FieldMetadata fields[] {
	{ "comparator", &class_java_util_Comparator, offsetof(com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy, F_comparator), "Ljava/util/Comparator;", 0 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy, 0, "()V", 1 },
	{ "sort", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy_sort_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy_sort_com_badlogic_gdx_utils_Array, "(Lcom/badlogic/gdx/utils/Array;)V", 1 },
	{ "pack", (intptr_t) M_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, VTABLE_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy_pack_com_badlogic_gdx_graphics_g2d_PixmapPacker_java_lang_String_com_badlogic_gdx_graphics_g2d_PixmapPacker$Bounds_R_com_badlogic_gdx_graphics_g2d_PixmapPacker$Page, "(Lcom/badlogic/gdx/graphics/g2d/PixmapPacker;Ljava/lang/String;Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Bounds;)Lcom/badlogic/gdx/graphics/g2d/PixmapPacker$Page;", 1 },
};

Class class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy{
		.nativeName = (intptr_t) "com/badlogic/gdx/graphics/g2d/PixmapPacker$SkylineStrategy",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_badlogic_gdx_graphics_g2d_PixmapPacker,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 1,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy = registerClass(&class_com_badlogic_gdx_graphics_g2d_PixmapPacker$SkylineStrategy);

}

