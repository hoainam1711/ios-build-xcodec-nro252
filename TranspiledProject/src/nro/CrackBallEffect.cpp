#include "nro/CrackBallEffect.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "nro/CrackBallEffect.h"
#include "nro/CrackBallScr.h"
#include "main/GameCanvas.h"
#include "nro/mScreen.h"
#include "java/lang/Runnable.h"
#include "java/lang/Thread.h"

extern "C" {


void mark_nro_CrackBallEffect(jobject object, jint mark, jint depth) {
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
	auto self = (nro_CrackBallEffect *) object;
	if (self->F_c)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_c)->clazz)->markFunction)((jobject) self->F_c, mark, depth + 1);
}

void clinit_nro_CrackBallEffect(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_CrackBallEffect_nro_CrackBallScr(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallEffect:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_CrackBallEffect(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(11);
	((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_c = (jref) (frame[1].o);
	LINE_NUMBER(12);
	((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_a = (jint(0));
	LINE_NUMBER(13);
	((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_b = (jint(0));
	LINE_NUMBER(14);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_CrackBallEffect_run(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/CrackBallEffect:run", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	frame[0].o = self;
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(19);
	if ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_isAutoCrackBall) == 0) { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(20);
	clinit_main_GameCanvas(ctx);
	sp[0].o = (jobject)SF_main_GameCanvas_currentScreen;
	clinit_nro_CrackBallScr(ctx);
	sp[1].o = (jobject)SF_nro_CrackBallScr_a;
	if (sp[0].o == sp[1].o) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(21);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_c;
	((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_indexSkillSelect = (jint(2));
	}
label_12:;
	{
	LINE_NUMBER(26);
	if (((jint)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_a) >= (7)) goto label_13;
	}
	{
	sp[0].o = (jobject)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_c;
	if (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_step) == (jint(5))) goto label_13;
	}
	{
	LINE_NUMBER(27);
	sp[0].o = (jobject)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_c;
	SM_nro_CrackBallScr_a_nro_CrackBallScr_int(ctx, sp[0].o, ((jint)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_a));
	LINE_NUMBER(28);
	sp[0].o = frame[0].o;
	((nro_CrackBallEffect *) NULL_CHECK(sp[0].o))->F_a = (((jint)((nro_CrackBallEffect *) NULL_CHECK(sp[0].o))->F_a) + (jint(1)));
	LINE_NUMBER(29);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(300ll)));
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(32);
	if (((jint)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_a) != (7)) { popExceptionFrames(frameRef, 1); bypasses[0] = true; goto label_9; } // goto label_17
	}
	{
	LINE_NUMBER(33);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(800ll)));
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_nro_CrackBallScr_gI_R_nro_CrackBallScr(ctx);
	SM_nro_CrackBallScr_useSkillCrackBall_nro_CrackBallScr(ctx, sp[0].o);
	LINE_NUMBER(35);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(4000ll)));
	LINE_NUMBER(36);
	if ((clinit_nro_CrackBallScr(ctx), (jint)SF_nro_CrackBallScr_isCallStop) == 0) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(37);
	sp[0].o = (jobject)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_c;
	((func_nro_CrackBallScr_stopAutoCrackBall) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_CrackBallScr_stopAutoCrackBall])(ctx, sp[0].o);
	LINE_NUMBER(38);
	SM_java_lang_Thread_yield(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(39);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_17; }
	{
	LINE_NUMBER(42);
	sp[0].o = (jobject)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_c;
	if (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_step) != (jint(5))) goto label_24;
	}
	{
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_nro_CrackBallScr_gI_R_nro_CrackBallScr(ctx);
	SM_nro_CrackBallScr_useSkillCrackBall_nro_CrackBallScr(ctx, sp[0].o);
	LINE_NUMBER(44);
	((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_a = (jint(0));
	}
label_24:;
	{
	LINE_NUMBER(47);
	SM_java_lang_Thread_sleep_long(ctx, (jlong(1000ll)));
	}
label_17:;
	{
	LINE_NUMBER(50);
	sp[0].o = (jobject)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_c;
	if (((jint)((nro_CrackBallScr *) NULL_CHECK(sp[0].o))->F_step) != (jint(5))) goto label_8;
	}
	{
	if (((jint)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_a) != 0) goto label_8;
	}
	{
	if (((jint)((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_b) != 0) goto label_8;
	}
	{
	LINE_NUMBER(51);
	((nro_CrackBallEffect *) NULL_CHECK((frame[0].o)))->F_b = (jint(1));
	LINE_NUMBER(52);
	sp[0].o = (jobject)SM_nro_CrackBallScr_gI_R_nro_CrackBallScr(ctx);
	SM_nro_CrackBallScr_useSkillCrackBall_nro_CrackBallScr(ctx, sp[0].o);
	}
label_8:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(54);
	goto label_0;
label_10:;
	LINE_NUMBER(57);
	goto label_29;
label_2:;
	LINE_NUMBER(56);
	INST_ASTORE(1);
label_29:;
	LINE_NUMBER(59);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_nro_CrackBallEffect[] {
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
	(void *) M_nro_CrackBallEffect_run,
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
	{ "run", "()V" },
};

static jclass interfaces[] { &class_java_lang_Runnable, };

static FieldMetadata fields[] {
	{ "a", &class_int, offsetof(nro_CrackBallEffect, F_a), "I", 2 },
	{ "b", &class_boolean, offsetof(nro_CrackBallEffect, F_b), "Z", 2 },
	{ "c", &class_nro_CrackBallScr, offsetof(nro_CrackBallEffect, F_c), "Lnro/CrackBallScr;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_CrackBallEffect_nro_CrackBallScr, 0, "(Lnro/CrackBallScr;)V", 0 },
	{ "run", (intptr_t) M_nro_CrackBallEffect_run, VTABLE_nro_CrackBallEffect_run, "()V", 17 },
};

Class class_nro_CrackBallEffect{
		.nativeName = (intptr_t) "nro/CrackBallEffect",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_CrackBallEffect),
		.classVtable = (intptr_t) vtable_nro_CrackBallEffect,
		.staticInitializer = (intptr_t) clinit_nro_CrackBallEffect,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_CrackBallEffect,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_CrackBallEffect = registerClass(&class_nro_CrackBallEffect);

}

