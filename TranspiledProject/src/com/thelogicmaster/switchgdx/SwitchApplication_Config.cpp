#include "com/thelogicmaster/switchgdx/SwitchApplication_Config.h"
#include "java/lang/Object.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication_Config.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication.h"

extern "C" {


void mark_com_thelogicmaster_switchgdx_SwitchApplication$Config(jobject object, jint mark, jint depth) {
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
	auto self = (com_thelogicmaster_switchgdx_SwitchApplication$Config *) object;
	if (self->F_appType)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_appType)->clazz)->markFunction)((jobject) self->F_appType, mark, depth + 1);
}

void clinit_com_thelogicmaster_switchgdx_SwitchApplication$Config(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_thelogicmaster_switchgdx_SwitchApplication$Config(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:<init>", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication$Config(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(343);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(339);
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_vsync = (jint(1));
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK(sp[0].o))->F_appType = (jref) sp[1].o;
	LINE_NUMBER(344);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchApplication$Config_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:<init>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication$Config(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(346);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(339);
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_vsync = (jint(1));
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK(sp[0].o))->F_appType = (jref) sp[1].o;
	LINE_NUMBER(347);
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_vsync = (frame[1].i);
	LINE_NUMBER(348);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_thelogicmaster_switchgdx_SwitchApplication$Config_boolean_com_badlogic_gdx_Application$ApplicationType(jcontext ctx, jobject self, jbool param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication$Config(ctx);
	frame[0].o = self;
	frame[1].i = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(350);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(339);
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_vsync = (jint(1));
	LINE_NUMBER(341);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[1].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_Desktop;
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK(sp[0].o))->F_appType = (jref) sp[1].o;
	LINE_NUMBER(351);
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_vsync = (frame[1].i);
	LINE_NUMBER(352);
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_appType = (jref) (frame[2].o);
	LINE_NUMBER(353);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_com_thelogicmaster_switchgdx_SwitchApplication$Config_getVsync_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:getVsync", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(356);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_vsync);
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication$Config_setVsync_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:setVsync", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(360);
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_vsync = (frame[1].i);
	LINE_NUMBER(361);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_thelogicmaster_switchgdx_SwitchApplication$Config_getAppType_R_com_badlogic_gdx_Application$ApplicationType(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:getAppType", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(364);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_appType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_thelogicmaster_switchgdx_SwitchApplication$Config_setAppType_com_badlogic_gdx_Application$ApplicationType(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:setAppType", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(368);
	((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_appType = (jref) (frame[1].o);
	LINE_NUMBER(369);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_com_thelogicmaster_switchgdx_SwitchApplication$Config_access$000_com_thelogicmaster_switchgdx_SwitchApplication$Config_R_com_badlogic_gdx_Application$ApplicationType(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:access$000", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication$Config(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(337);
	sp[0].o = (jobject)((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_appType;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool SM_com_thelogicmaster_switchgdx_SwitchApplication$Config_access$100_com_thelogicmaster_switchgdx_SwitchApplication$Config_R_boolean(jcontext ctx, jobject param0) {
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/thelogicmaster/switchgdx/SwitchApplication$Config:access$100", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_thelogicmaster_switchgdx_SwitchApplication$Config(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(337);
	popStackFrame(ctx);
	return ((jint)((com_thelogicmaster_switchgdx_SwitchApplication$Config *) NULL_CHECK((frame[0].o)))->F_vsync);
	}

	popStackFrame(ctx);
}

void *vtable_com_thelogicmaster_switchgdx_SwitchApplication$Config[] {
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
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication$Config_getVsync_R_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication$Config_setVsync_boolean,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication$Config_getAppType_R_com_badlogic_gdx_Application$ApplicationType,
	(void *) M_com_thelogicmaster_switchgdx_SwitchApplication$Config_setAppType_com_badlogic_gdx_Application$ApplicationType,
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
	{ "getVsync", "()Z" },
	{ "setVsync", "(Z)V" },
	{ "getAppType", "()Lcom/badlogic/gdx/Application$ApplicationType;" },
	{ "setAppType", "(Lcom/badlogic/gdx/Application$ApplicationType;)V" },
};

static FieldMetadata fields[] {
	{ "vsync", &class_boolean, offsetof(com_thelogicmaster_switchgdx_SwitchApplication$Config, F_vsync), "Z", 2 },
	{ "appType", &class_com_badlogic_gdx_Application$ApplicationType, offsetof(com_thelogicmaster_switchgdx_SwitchApplication$Config, F_appType), "Lcom/badlogic/gdx/Application$ApplicationType;", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchApplication$Config, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchApplication$Config_boolean, 0, "(Z)V", 1 },
	{ "<init>", (intptr_t) init_com_thelogicmaster_switchgdx_SwitchApplication$Config_boolean_com_badlogic_gdx_Application$ApplicationType, 0, "(ZLcom/badlogic/gdx/Application$ApplicationType;)V", 1 },
	{ "getVsync", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication$Config_getVsync_R_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication$Config_getVsync_R_boolean, "()Z", 1 },
	{ "setVsync", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication$Config_setVsync_boolean, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication$Config_setVsync_boolean, "(Z)V", 1 },
	{ "getAppType", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication$Config_getAppType_R_com_badlogic_gdx_Application$ApplicationType, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication$Config_getAppType_R_com_badlogic_gdx_Application$ApplicationType, "()Lcom/badlogic/gdx/Application$ApplicationType;", 1 },
	{ "setAppType", (intptr_t) M_com_thelogicmaster_switchgdx_SwitchApplication$Config_setAppType_com_badlogic_gdx_Application$ApplicationType, VTABLE_com_thelogicmaster_switchgdx_SwitchApplication$Config_setAppType_com_badlogic_gdx_Application$ApplicationType, "(Lcom/badlogic/gdx/Application$ApplicationType;)V", 1 },
	{ "access$000", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchApplication$Config_access$000_com_thelogicmaster_switchgdx_SwitchApplication$Config_R_com_badlogic_gdx_Application$ApplicationType, 0, "(Lcom/thelogicmaster/switchgdx/SwitchApplication$Config;)Lcom/badlogic/gdx/Application$ApplicationType;", 4104 },
	{ "access$100", (intptr_t) SM_com_thelogicmaster_switchgdx_SwitchApplication$Config_access$100_com_thelogicmaster_switchgdx_SwitchApplication$Config_R_boolean, 0, "(Lcom/thelogicmaster/switchgdx/SwitchApplication$Config;)Z", 4104 },
};

Class class_com_thelogicmaster_switchgdx_SwitchApplication$Config{
		.nativeName = (intptr_t) "com/thelogicmaster/switchgdx/SwitchApplication$Config",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_thelogicmaster_switchgdx_SwitchApplication$Config),
		.classVtable = (intptr_t) vtable_com_thelogicmaster_switchgdx_SwitchApplication$Config,
		.staticInitializer = (intptr_t) clinit_com_thelogicmaster_switchgdx_SwitchApplication$Config,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_thelogicmaster_switchgdx_SwitchApplication$Config,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_com_thelogicmaster_switchgdx_SwitchApplication,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 2,
		.nativeFields = (intptr_t) fields,
		.methodCount = 9,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_thelogicmaster_switchgdx_SwitchApplication$Config = registerClass(&class_com_thelogicmaster_switchgdx_SwitchApplication$Config);

}

