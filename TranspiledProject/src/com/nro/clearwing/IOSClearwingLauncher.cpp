#include "com/nro/clearwing/IOSClearwingLauncher.h"
#include "lib/network/Session_ME_IWebSocketBridgeFactory.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME.h"
#include "java/lang/String.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication_Config.h"
#include "com/badlogic/gdx/Application_ApplicationType.h"
#include "com/nro/clearwing/IOSClearwingLauncher_invoke_lib_network_Session_ME_IWebSocketBridgeFactory_0.h"
#include "com/nro/GameMain.h"
#include "com/badlogic/gdx/ApplicationListener.h"
#include "com/thelogicmaster/switchgdx/SwitchApplication.h"

extern "C" {


void mark_com_nro_clearwing_IOSClearwingLauncher(jobject object, jint mark, jint depth) {
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
	auto self = (com_nro_clearwing_IOSClearwingLauncher *) object;
}

void clinit_com_nro_clearwing_IOSClearwingLauncher(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_nro_clearwing_IOSClearwingLauncher(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSClearwingLauncher:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSClearwingLauncher(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(9);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(10);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_clearwing_IOSClearwingLauncher_main_Array1_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[8];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/clearwing/IOSClearwingLauncher:main", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_clearwing_IOSClearwingLauncher(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(13);
	{ /* InvokeDynamic */
		clinit_com_nro_clearwing_IOSClearwingLauncher_invoke_lib_network_Session_ME$IWebSocketBridgeFactory_0(ctx);
		auto proxy = (com_nro_clearwing_IOSClearwingLauncher_invoke_lib_network_Session_ME$IWebSocketBridgeFactory_0 *) gcAlloc(ctx, &class_com_nro_clearwing_IOSClearwingLauncher_invoke_lib_network_Session_ME$IWebSocketBridgeFactory_0);
		sp[0].o = (jobject) proxy;
	}
	SM_lib_network_Session_ME_setWebSocketBridgeFactory_lib_network_Session_ME$IWebSocketBridgeFactory(ctx, sp[0].o);
	LINE_NUMBER(14);
	clinit_com_thelogicmaster_switchgdx_SwitchApplication(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchApplication);
	clinit_com_nro_GameMain(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_nro_GameMain);
	init_com_nro_GameMain(ctx, sp[1].o);
	clinit_com_thelogicmaster_switchgdx_SwitchApplication$Config(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_thelogicmaster_switchgdx_SwitchApplication$Config);
	jint temp0 = jint(1);
	clinit_com_badlogic_gdx_Application$ApplicationType(ctx);
	sp[3].o = (jobject)SF_com_badlogic_gdx_Application$ApplicationType_iOS;
	init_com_thelogicmaster_switchgdx_SwitchApplication$Config_boolean_com_badlogic_gdx_Application$ApplicationType(ctx, sp[2].o, temp0, sp[3].o);
	init_com_thelogicmaster_switchgdx_SwitchApplication_com_badlogic_gdx_ApplicationListener_com_thelogicmaster_switchgdx_SwitchApplication$Config(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(15);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_com_nro_clearwing_IOSClearwingLauncher[] {
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
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_nro_clearwing_IOSClearwingLauncher, 0, "()V", 2 },
	{ "main", (intptr_t) SM_com_nro_clearwing_IOSClearwingLauncher_main_Array1_java_lang_String, 0, "([Ljava/lang/String;)V", 9 },
};

Class class_com_nro_clearwing_IOSClearwingLauncher{
		.nativeName = (intptr_t) "com/nro/clearwing/IOSClearwingLauncher",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_nro_clearwing_IOSClearwingLauncher),
		.classVtable = (intptr_t) vtable_com_nro_clearwing_IOSClearwingLauncher,
		.staticInitializer = (intptr_t) clinit_com_nro_clearwing_IOSClearwingLauncher,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_nro_clearwing_IOSClearwingLauncher,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 0,
		.nativeFields = (intptr_t) nullptr,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_nro_clearwing_IOSClearwingLauncher = registerClass(&class_com_nro_clearwing_IOSClearwingLauncher);

}

