#include "nro/ShowBoss_KilledBossBanner.h"
#include "java/lang/Math.h"
#include "lib/mFont.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "lib/mGraphics.h"
#include "nro/ShowBoss_KilledBossBanner.h"
#include "nro/ShowBoss.h"

extern "C" {

jlong SF_nro_ShowBoss$KilledBossBanner_SHOW_DURATION;

void mark_nro_ShowBoss$KilledBossBanner(jobject object, jint mark, jint depth) {
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
	auto self = (nro_ShowBoss$KilledBossBanner *) object;
	if (self->F_nameBoss)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nameBoss)->clazz)->markFunction)((jobject) self->F_nameBoss, mark, depth + 1);
	if (self->F_playerKill)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_playerKill)->clazz)->markFunction)((jobject) self->F_playerKill, mark, depth + 1);
}

void clinit_nro_ShowBoss$KilledBossBanner(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_nro_ShowBoss$KilledBossBanner_SHOW_DURATION = jlong(15000ll);
}

void init_nro_ShowBoss$KilledBossBanner(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss$KilledBossBanner:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ShowBoss$KilledBossBanner(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(78);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(82);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_currentX = (-350);
	LINE_NUMBER(83);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_targetX = (8);
	LINE_NUMBER(84);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_isShowing = (jint(1));
	LINE_NUMBER(85);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_isDone = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_ShowBoss$KilledBossBanner_update_long(jcontext ctx, jobject self, jlong param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss$KilledBossBanner:update", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].l = param0;
	{
	LINE_NUMBER(90);
	frame[3].l = ((frame[1].l) - ((jlong)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_startShowTime));
	LINE_NUMBER(91);
	if ((longCompare((frame[3].l), (jlong(15000ll)))) >= 0) goto label_2;
	}
	{
	LINE_NUMBER(92);
	if (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_currentX) >= ((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_targetX)) goto label_4;
	}
	{
	LINE_NUMBER(93);
	jint temp0 = (jint)SM_java_lang_Math_max_int_int_R_int(ctx, (jint(2)), (((((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_targetX) - ((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_currentX)) / (jint(3))) + (jint(3))));
	frame[5].i = temp0;
	LINE_NUMBER(94);
	sp[0].o = frame[0].o;
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK(sp[0].o))->F_currentX = (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK(sp[0].o))->F_currentX) + (frame[5].i));
	LINE_NUMBER(95);
	if (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_currentX) <= ((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_targetX)) goto label_8;
	}
	{
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_currentX = ((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_targetX);
	}
label_8:;
	LINE_NUMBER(96);
	goto label_4;
label_2:;
	{
	LINE_NUMBER(98);
	sp[0].o = frame[0].o;
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK(sp[0].o))->F_currentX = (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK(sp[0].o))->F_currentX) - (12));
	LINE_NUMBER(99);
	if (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_currentX) >= (-400)) goto label_4;
	}
	{
	LINE_NUMBER(100);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_isShowing = (jint(0));
	LINE_NUMBER(101);
	((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_isDone = (jint(1));
	}
label_4:;
	LINE_NUMBER(104);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[16];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ShowBoss$KilledBossBanner:paint", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(107);
	if (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_isShowing) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(108);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"["_j))));
	sp[1].o = (jobject)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_nameBoss;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"] \u0111\u00e3 b\u1ecb ["_j))));
	sp[1].o = (jobject)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_playerKill;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"] h\u1ea1 g\u1ee5c"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(109);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_yellowSmall;
	if (sp[0].o == nullptr) goto label_3;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_yellowSmall;
	goto label_4;
label_3:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7_yellow;
label_4:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	LINE_NUMBER(110);
	jint temp0 = (jint)((func_lib_mFont_getWidth_java_lang_String_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mFont_getWidth_java_lang_String_R_int])(ctx, (frame[4].o), (frame[3].o));
	frame[5].i = temp0;
	LINE_NUMBER(112);
	frame[6].i = ((frame[5].i) + (10));
	LINE_NUMBER(113);
	frame[7].i = (15);
	LINE_NUMBER(116);
	((func_lib_mGraphics_setColor_int_float) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_setColor_int_float])(ctx, (frame[1].o), (jint(1393979)), (jfloat(0.55f)));
	LINE_NUMBER(117);
	((func_lib_mGraphics_fillRoundRect_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_lib_mGraphics_fillRoundRect_int_int_int_int_int_int])(ctx, (frame[1].o), ((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_currentX), ((frame[2].i) - (jint(2))), (frame[6].i), (frame[7].i), (jint(3)), (jint(3)));
	LINE_NUMBER(119);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_darkSmall;
	if (sp[0].o == nullptr) goto label_11;
	}
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7b_darkSmall;
	goto label_12;
label_11:;
	clinit_lib_mFont(ctx);
	(sp++)->o = SF_lib_mFont_tahoma_7_grey;
label_12:;
	{
	sp -= 1;
	frame[8].o = sp[0].o;
	LINE_NUMBER(120);
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int_lib_mFont])(ctx, (frame[4].o), (frame[1].o), (frame[3].o), (((jint)((nro_ShowBoss$KilledBossBanner *) NULL_CHECK((frame[0].o)))->F_currentX) + (jint(5))), (frame[2].i), (jint(0)), (frame[8].o));
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ShowBoss$KilledBossBanner[] {
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
	(void *) M_nro_ShowBoss$KilledBossBanner_update_long,
	(void *) M_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int,
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
	{ "update", "(J)V" },
	{ "paint", "(Llib/mGraphics;I)V" },
};

static FieldMetadata fields[] {
	{ "nameBoss", &class_java_lang_String, offsetof(nro_ShowBoss$KilledBossBanner, F_nameBoss), "Ljava/lang/String;", 1 },
	{ "playerKill", &class_java_lang_String, offsetof(nro_ShowBoss$KilledBossBanner, F_playerKill), "Ljava/lang/String;", 1 },
	{ "startShowTime", &class_long, offsetof(nro_ShowBoss$KilledBossBanner, F_startShowTime), "J", 1 },
	{ "currentX", &class_int, offsetof(nro_ShowBoss$KilledBossBanner, F_currentX), "I", 1 },
	{ "targetX", &class_int, offsetof(nro_ShowBoss$KilledBossBanner, F_targetX), "I", 1 },
	{ "isShowing", &class_boolean, offsetof(nro_ShowBoss$KilledBossBanner, F_isShowing), "Z", 1 },
	{ "isDone", &class_boolean, offsetof(nro_ShowBoss$KilledBossBanner, F_isDone), "Z", 1 },
	{ "SHOW_DURATION", &class_long, (intptr_t) &SF_nro_ShowBoss$KilledBossBanner_SHOW_DURATION, "J", 25 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ShowBoss$KilledBossBanner, 0, "()V", 1 },
	{ "update", (intptr_t) M_nro_ShowBoss$KilledBossBanner_update_long, VTABLE_nro_ShowBoss$KilledBossBanner_update_long, "(J)V", 1 },
	{ "paint", (intptr_t) M_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int, VTABLE_nro_ShowBoss$KilledBossBanner_paint_lib_mGraphics_int, "(Llib/mGraphics;I)V", 1 },
};

Class class_nro_ShowBoss$KilledBossBanner{
		.nativeName = (intptr_t) "nro/ShowBoss$KilledBossBanner",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ShowBoss$KilledBossBanner),
		.classVtable = (intptr_t) vtable_nro_ShowBoss$KilledBossBanner,
		.staticInitializer = (intptr_t) clinit_nro_ShowBoss$KilledBossBanner,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ShowBoss$KilledBossBanner,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_nro_ShowBoss,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 8,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 13,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ShowBoss$KilledBossBanner = registerClass(&class_nro_ShowBoss$KilledBossBanner);

}

