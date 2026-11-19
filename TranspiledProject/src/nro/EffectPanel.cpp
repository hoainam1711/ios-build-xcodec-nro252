#include "nro/EffectPanel.h"
#include "nro/GameScr.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "lib/mGraphics.h"
#include "nro/EffectPanel.h"
#include "nro/ItemObject.h"
#include "nro/Effect2.h"
#include "nro/SmallImage.h"
#include "nro/EffectCharPaint.h"

extern "C" {


void mark_nro_EffectPanel(jobject object, jint mark, jint depth) {
	if (!object) {
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	mark_nro_Effect2(object, mark, depth);
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (nro_EffectPanel *) object;
	if (self->F_eff)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_eff)->clazz)->markFunction)((jobject) self->F_eff, mark, depth + 1);
}

void clinit_nro_EffectPanel(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	clinit_nro_Effect2(ctx);
}

void init_nro_EffectPanel(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectPanel:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectPanel(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(5);
	init_nro_Effect2(ctx, (frame[0].o));
	LINE_NUMBER(10);
	((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_loopCount = (jint(0));
	LINE_NUMBER(11);
	((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_endTime = (jlong(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_EffectPanel_addServerEffect_int_int_int_int(jcontext ctx, jint param0, jint param1, jint param2, jint param3) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectPanel:addServerEffect", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_EffectPanel(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	{
	LINE_NUMBER(15);
	clinit_nro_EffectPanel(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_EffectPanel);
	init_nro_EffectPanel(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_efs;
	((nro_EffectPanel *) NULL_CHECK(sp[0].o))->F_eff = (jref) ((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((frame[0].i) - (jint(1)))));
	LINE_NUMBER(16);
	((nro_EffectPanel *) NULL_CHECK((frame[4].o)))->F_dx0 = (frame[1].i);
	LINE_NUMBER(17);
	((nro_EffectPanel *) NULL_CHECK((frame[4].o)))->F_dy0 = (frame[2].i);
	LINE_NUMBER(18);
	((nro_EffectPanel *) NULL_CHECK((frame[4].o)))->F_loopCount = (jint(2));
	LINE_NUMBER(19);
	clinit_nro_EffectPanel(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect3;
	((func_nro_MyVector_addElement_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_addElement_java_lang_Object])(ctx, sp[0].o, (frame[4].o));
	LINE_NUMBER(20);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_EffectPanel_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectPanel:paint", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(23);
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) != (jint(1))) goto label_1;
	}
	{
	LINE_NUMBER(24);
	clinit_nro_GameScr(ctx);
	SF_nro_GameScr_countEff = ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_countEff) + (jint(1)));
	}
label_1:;
	{
	LINE_NUMBER(27);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_countEff) >= (8)) goto label_3;
	}
	{
	LINE_NUMBER(28);
	jint temp0 = (jint)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_dx0;
	sp[0].o = (jobject)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	frame[2].i = (temp0 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_dy));
	LINE_NUMBER(29);
	jint temp1 = (jint)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_dy0;
	sp[0].o = (jobject)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	frame[3].i = (temp1 + ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[0].o, ((jint)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_where));
	LINE_NUMBER(30);
	sp[0].o = frame[1].o;
	sp[1].o = (jobject)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[1].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[1].o))->F_arrEfInfo;
	SM_nro_SmallImage_drawSmallImage_lib_mGraphics_int_int_int_int_int(ctx, sp[0].o, ((jint)((nro_ItemObject *) NULL_CHECK(((jobject)ARRAY_ACCESS(jobject, sp[1].o, ((jint)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_i0)))))->F_idImg), (frame[2].i), (frame[3].i), (jint(0)), (jint(3)));
	}
label_3:;
	LINE_NUMBER(33);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_EffectPanel_update(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/EffectPanel:update", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(47);
	sp[0].o = frame[0].o;
	((nro_EffectPanel *) NULL_CHECK(sp[0].o))->F_i0 = (((jint)((nro_EffectPanel *) NULL_CHECK(sp[0].o))->F_i0) + (jint(1)));
	LINE_NUMBER(48);
	jint temp0 = (jint)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_i0;
	sp[0].o = (jobject)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_eff;
	sp[0].o = (jobject)((nro_EffectCharPaint *) NULL_CHECK(sp[0].o))->F_arrEfInfo;
	if (temp0 < (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(49);
	sp[0].o = frame[0].o;
	((nro_EffectPanel *) NULL_CHECK(sp[0].o))->F_loopCount = (jshort((((jint)((nro_EffectPanel *) NULL_CHECK(sp[0].o))->F_loopCount) - (jint(1)))));
	LINE_NUMBER(50);
	if (((jint)((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_loopCount) > 0) goto label_5;
	}
	{
	LINE_NUMBER(51);
	clinit_nro_EffectPanel(ctx);
	sp[0].o = (jobject)SF_nro_Effect2_vEffect3;
	jint temp0 = (jint)((func_nro_MyVector_removeElement_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_removeElement_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[0].o));
	LINE_NUMBER(52);
	popStackFrame(ctx);
	return;
	}
label_5:;
	{
	LINE_NUMBER(55);
	((nro_EffectPanel *) NULL_CHECK((frame[0].o)))->F_i0 = (jint(0));
	}
label_2:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_EffectPanel[] {
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
	(void *) M_nro_EffectPanel_update,
	(void *) M_nro_EffectPanel_paint_lib_mGraphics,
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
	{ "update", "()V" },
	{ "paint", "(Llib/mGraphics;)V" },
};

static FieldMetadata fields[] {
	{ "eff", &class_nro_EffectCharPaint, offsetof(nro_EffectPanel, F_eff), "Lnro/EffectCharPaint;", 2 },
	{ "i0", &class_int, offsetof(nro_EffectPanel, F_i0), "I", 2 },
	{ "dx0", &class_int, offsetof(nro_EffectPanel, F_dx0), "I", 2 },
	{ "dy0", &class_int, offsetof(nro_EffectPanel, F_dy0), "I", 2 },
	{ "loopCount", &class_short, offsetof(nro_EffectPanel, F_loopCount), "S", 2 },
	{ "endTime", &class_long, offsetof(nro_EffectPanel, F_endTime), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_EffectPanel, 0, "()V", 1 },
	{ "addServerEffect", (intptr_t) SM_nro_EffectPanel_addServerEffect_int_int_int_int, 0, "(IIII)V", 9 },
	{ "paint", (intptr_t) M_nro_EffectPanel_paint_lib_mGraphics, VTABLE_nro_EffectPanel_paint_lib_mGraphics, "(Llib/mGraphics;)V", 17 },
	{ "update", (intptr_t) M_nro_EffectPanel_update, VTABLE_nro_EffectPanel_update, "()V", 17 },
};

Class class_nro_EffectPanel{
		.nativeName = (intptr_t) "nro/EffectPanel",
		.parentClass = (intptr_t) &class_nro_Effect2,
		.size = sizeof(nro_EffectPanel),
		.classVtable = (intptr_t) vtable_nro_EffectPanel,
		.staticInitializer = (intptr_t) clinit_nro_EffectPanel,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_EffectPanel,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 4,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_EffectPanel = registerClass(&class_nro_EffectPanel);

}

