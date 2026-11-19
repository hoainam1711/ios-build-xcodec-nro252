#include "com/thelogicmaster/switchgdx/SwitchAudioDevice.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/audio/AudioDevice.h"
#include "com/thelogicmaster/switchgdx/SwitchAudioDevice.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchAudioDevice(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchAudioDevice *) object;
}

void clinit_com_thelogicmaster_switchgdx_SwitchAudioDevice(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchAudioDevice_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:<init>", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchAudioDevice(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(11);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(12);
	((com_thelogicmaster_switchgdx_SwitchAudioDevice *) NULL_CHECK((frame[0].o)))->F_rate = (frame[1].i);
	LINE_NUMBER(13);
	((com_thelogicmaster_switchgdx_SwitchAudioDevice *) NULL_CHECK((frame[0].o)))->F_mono = (frame[2].i);
	LINE_NUMBER(14);
	sp[0].o = frame[0].o;
	jlong temp0 = (jlong)SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_create_int_boolean_R_long(ctx, (frame[1].i), (frame[2].i));
	((com_thelogicmaster_switchgdx_SwitchAudioDevice *) NULL_CHECK(sp[0].o))->F_handle = temp0;
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchAudioDevice_isMono_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:isMono", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(19);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchAudioDevice *) NULL_CHECK((frame[0].o)))->F_mono);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:writeSamples", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject) createArray(ctx, &class_float, (frame[3].i));
	frame[4].o = sp[0].o;
	LINE_NUMBER(25);
	frame[5].i = (jint(0));
	}
label_2:;
	{
	if ((frame[5].i) >= (frame[3].i)) goto label_3;
	}
	{
	LINE_NUMBER(26);
	ARRAY_ACCESS(jfloat, (frame[4].o), (frame[5].i)) = ((jfloat(((jint)ARRAY_ACCESS(jshort, (frame[1].o), ((frame[2].i) + (frame[5].i)))))) / (jfloat(32767.0f)));
	LINE_NUMBER(25);
	INST_IINC(5, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(27);
	SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_sample_Array1_float_int_int(ctx, (frame[4].o), (jint(0)), (frame[3].i));
	LINE_NUMBER(28);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:writeSamples", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	{
	LINE_NUMBER(32);
	SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_sample_Array1_float_int_int(ctx, (frame[1].o), (frame[2].i), (frame[3].i));
	LINE_NUMBER(33);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_thelogicmaster_switchgdx_SwitchAudioDevice_getLatency_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:getLatency", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_setVolume_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:setVolume", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	LINE_NUMBER(42);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_pause(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:pause", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_resume(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:resume", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:dispose", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(54);
	if ((longCompare(((jlong)((com_thelogicmaster_switchgdx_SwitchAudioDevice *) NULL_CHECK((frame[0].o)))->F_handle), (jlong(0)))) != 0) goto label_1;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_1:;
	{
	LINE_NUMBER(55);
	SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose_long(ctx, ((jlong)((com_thelogicmaster_switchgdx_SwitchAudioDevice *) NULL_CHECK((frame[0].o)))->F_handle));
	LINE_NUMBER(56);
	((com_thelogicmaster_switchgdx_SwitchAudioDevice *) NULL_CHECK((frame[0].o)))->F_handle = (jlong(0));
	LINE_NUMBER(57);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_finalize(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchAudioDevice:finalize", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(61);
	((func_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose])(ctx, (frame[0].o));
	LINE_NUMBER(62);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchAudioDevice[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_isMono_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_short_int_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_float_int_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_getLatency_R_int,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_setVolume_float,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_pause,
	(void *) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_resume,
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
	{ "dispose", "()V" },
	{ "isMono", "()Z" },
	{ "writeSamples", "([SII)V" },
	{ "writeSamples", "([FII)V" },
	{ "getLatency", "()I" },
	{ "setVolume", "(F)V" },
	{ "pause", "()V" },
	{ "resume", "()V" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_audio_AudioDevice, };

static FieldMetadata fields[] {
	{ "rate", &class_int, offsetof(com_thelogicmaster_switchgdx_SwitchAudioDevice, F_rate), "I", 18 },
	{ "mono", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchAudioDevice, F_mono), "Z", 18 },
	{ "handle", &class_long, offsetof(com_thelogicmaster_switchgdx_SwitchAudioDevice, F_handle), "J", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchAudioDevice_int_boolean, 0, "(IZ)V", 1 },
	{ "isMono", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_isMono_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_isMono_R_boolean, "()Z", 1 },
	{ "writeSamples", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_short_int_int, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_short_int_int, "([SII)V", 1 },
	{ "writeSamples", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_float_int_int, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_float_int_int, "([FII)V", 1 },
	{ "getLatency", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_getLatency_R_int, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_getLatency_R_int, "()I", 1 },
	{ "setVolume", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_setVolume_float, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_setVolume_float, "(F)V", 1 },
	{ "pause", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_pause, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_pause, "()V", 1 },
	{ "resume", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_resume, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_resume, "()V", 1 },
	{ "dispose", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose, "()V", 1 },
	{ "finalize", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchAudioDevice_finalize, VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_finalize, "()V", 4 },
	{ "create", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_create_int_boolean_R_long, 0, "(IZ)J", 266 },
	{ "sample", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_sample_Array1_float_int_int, 0, "([FII)V", 266 },
	{ "dispose", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose_long, 0, "(J)V", 266 },
};

Class class_com_thelogicmaster_switchgdx_SwitchAudioDevice{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchAudioDevice",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchAudioDevice),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchAudioDevice,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchAudioDevice,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchAudioDevice,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 3,
		.nativeFields = (intptr_t) fields,
		.methodCount = 13,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchAudioDevice = registerClass(&class_com_thelogicmaster_switchgdx_SwitchAudioDevice);

}

