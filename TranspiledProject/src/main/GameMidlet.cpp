#include "main/GameMidlet.h"
#include "java/lang/Exception.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "nro/InfoDlg.h"
#include "main/GameCanvas.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Gdx.h"
#include "java/lang/Object.h"
#include "lib/network/Session_ME2.h"
#include "java/lang/String.h"
#include "nro/Res.h"
#include "com/badlogic/gdx/Net.h"
#include "main/GameMidlet.h"
#include "nro/Controller.h"
#include "nro/SplashScr.h"
#include "nro/mScreen.h"
#include "nro/MotherCanvas.h"
#include "nro/IMessageHandler.h"
#include "com/nro/GameMain.h"
#include "java/lang/Throwable.h"

extern "C" {

jobject SF_main_GameMidlet_IP;
jint SF_main_GameMidlet_PORT;
jobject SF_main_GameMidlet_IP2;
jint SF_main_GameMidlet_PORT2;
jint SF_main_GameMidlet_LANGUAGE;
jobject SF_main_GameMidlet_VERSION;
jint SF_main_GameMidlet_intVERSION;
jobject SF_main_GameMidlet_gameCanvas;
jobject SF_main_GameMidlet_instance;
jbool SF_main_GameMidlet_isConnect2;
jbool SF_main_GameMidlet_isBackWindowsPhone;

void mark_main_GameMidlet(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_main_GameMidlet_IP)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameMidlet_IP)->clazz)->markFunction)((jobject) SF_main_GameMidlet_IP, mark, depth + 1);
		if (SF_main_GameMidlet_IP2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameMidlet_IP2)->clazz)->markFunction)((jobject) SF_main_GameMidlet_IP2, mark, depth + 1);
		if (SF_main_GameMidlet_VERSION)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameMidlet_VERSION)->clazz)->markFunction)((jobject) SF_main_GameMidlet_VERSION, mark, depth + 1);
		if (SF_main_GameMidlet_gameCanvas)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameMidlet_gameCanvas)->clazz)->markFunction)((jobject) SF_main_GameMidlet_gameCanvas, mark, depth + 1);
		if (SF_main_GameMidlet_instance)
			((gc_mark_ptr) ((jclass) ((jobject) SF_main_GameMidlet_instance)->clazz)->markFunction)((jobject) SF_main_GameMidlet_instance, mark, depth + 1);
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
	auto self = (main_GameMidlet *) object;
}

void init_main_GameMidlet(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameMidlet:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameMidlet(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(22);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(23);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_instance = (frame[0].o);
	LINE_NUMBER(24);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_main_GameMidlet_destroyApp_boolean(jcontext ctx, jobject self, jbool param0) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameMidlet:destroyApp", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameMidlet_pauseApp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameMidlet:pauseApp", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(30);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameMidlet_notifyDestroyed(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[1];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameMidlet:notifyDestroyed", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	LINE_NUMBER(34);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameMidlet_startApp(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameMidlet:startApp", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(37);
	if ((clinit_main_GameMidlet(ctx), (jint)SF_main_GameMidlet_isConnect2) != 0) goto label_1;
	}
	{
	LINE_NUMBER(38);
	SM_nro_SplashScr_loadImg(ctx);
	LINE_NUMBER(39);
	SM_nro_SplashScr_loadSplashScr(ctx);
	LINE_NUMBER(40);
	clinit_main_GameCanvas(ctx);
	sp[0].o = gcAlloc(ctx, &class_main_GameCanvas);
	init_main_GameCanvas(ctx, sp[0].o);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_gameCanvas = sp[0].o;
	frame[1].o = sp[0].o;
	LINE_NUMBER(42);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	sp[1].o = (jobject)SM_nro_Controller_gI_R_nro_Controller(ctx);
	((func_lib_network_Session_ME_setHandler_nro_IMessageHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_setHandler_nro_IMessageHandler])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(43);
	sp[0].o = (jobject)SM_lib_network_Session_ME_GI2_R_lib_network_Session_ME(ctx);
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_isMainSession = (jint(1));
	LINE_NUMBER(44);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	sp[1].o = (jobject)SM_nro_Controller_gI_R_nro_Controller(ctx);
	((func_lib_network_Session_ME_setHandler_nro_IMessageHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME_setHandler_nro_IMessageHandler])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(45);
	sp[0].o = (jobject)SM_lib_network_Session_ME_gI_R_lib_network_Session_ME(ctx);
	((lib_network_Session_ME *) NULL_CHECK(sp[0].o))->F_isMainSession = (jint(0));
	LINE_NUMBER(46);
	sp[0].o = (jobject)SM_lib_network_Session_ME2_gI_R_lib_network_Session_ME2(ctx);
	sp[1].o = (jobject)SM_nro_Controller_gI_R_nro_Controller(ctx);
	((func_lib_network_Session_ME2_setHandler_nro_IMessageHandler) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_network_Session_ME2_setHandler_nro_IMessageHandler])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(47);
	sp[0].o = (jobject)SM_lib_network_Session_ME2_gI_R_lib_network_Session_ME2(ctx);
	((lib_network_Session_ME2 *) NULL_CHECK(sp[0].o))->F_isMainSession = (jint(0));
	LINE_NUMBER(48);
	clinit_nro_SplashScr(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_SplashScr);
	init_nro_SplashScr(ctx, sp[0].o);
	clinit_main_GameCanvas(ctx);
	SF_main_GameCanvas_currentScreen = sp[0].o;
	LINE_NUMBER(50);
	SM_main_GameCanvas_loadBG_int(ctx, (jint(1)));
	LINE_NUMBER(52);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_isConnect2 = (jint(1));
	}
label_1:;
	LINE_NUMBER(55);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameMidlet_platformRequest_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameMidlet:platformRequest", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(59);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_net;
	jint temp0 = (jint)((func_com_badlogic_gdx_Net_openURI_java_lang_String_R_boolean) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Net, INDEX_com_badlogic_gdx_Net_openURI_java_lang_String_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(62);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(60);
	frame[2].o = sp[0].o;
	LINE_NUMBER(61);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"Failed to open URL: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_4:;
	LINE_NUMBER(63);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_main_GameMidlet_exit(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameMidlet:exit", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(66);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) == 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(68);
	SM_main_GameCanvas_endDlg(ctx);
	LINE_NUMBER(69);
	SM_nro_InfoDlg_hide(ctx);
	LINE_NUMBER(70);
	SM_main_GameCanvas_doResetToLoginScr(ctx);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(72);
	goto label_8;
label_2:;
	LINE_NUMBER(71);
	INST_ASTORE(1);
label_8:;
	LINE_NUMBER(73);
	popStackFrame(ctx);
	INST_RETURN();
label_5:;
	{
	LINE_NUMBER(75);
	clinit_nro_MotherCanvas(ctx);
	SF_nro_MotherCanvas_started = (jint(0));
	LINE_NUMBER(76);
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	((func_com_badlogic_gdx_Application_exit) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_exit, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(77);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void clinit_main_GameMidlet(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "main/GameMidlet:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_main_GameMidlet(ctx);
	{
	LINE_NUMBER(10);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_IP = (((jobject) createStringLiteral(ctx, u8"127.0.0.1"_j)));
	LINE_NUMBER(11);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_PORT = (14445);
	LINE_NUMBER(14);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_LANGUAGE = (250);
	LINE_NUMBER(15);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_VERSION = (((jobject) createStringLiteral(ctx, u8"2.5.2"_j)));
	LINE_NUMBER(16);
	clinit_main_GameMidlet(ctx);
	SF_main_GameMidlet_intVERSION = (250);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_main_GameMidlet[] {
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
	(void *) M_main_GameMidlet_destroyApp_boolean,
	(void *) M_main_GameMidlet_pauseApp,
	(void *) M_main_GameMidlet_notifyDestroyed,
	(void *) M_main_GameMidlet_startApp,
	(void *) M_main_GameMidlet_platformRequest_java_lang_String,
	(void *) M_main_GameMidlet_exit,
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
	{ "destroyApp", "(Z)V" },
	{ "pauseApp", "()V" },
	{ "notifyDestroyed", "()V" },
	{ "startApp", "()V" },
	{ "platformRequest", "(Ljava/lang/String;)V" },
	{ "exit", "()V" },
};

static FieldMetadata fields[] {
	{ "IP", &class_java_lang_String, (intptr_t) &SF_main_GameMidlet_IP, "Ljava/lang/String;", 9 },
	{ "PORT", &class_int, (intptr_t) &SF_main_GameMidlet_PORT, "I", 9 },
	{ "IP2", &class_java_lang_String, (intptr_t) &SF_main_GameMidlet_IP2, "Ljava/lang/String;", 9 },
	{ "PORT2", &class_int, (intptr_t) &SF_main_GameMidlet_PORT2, "I", 9 },
	{ "LANGUAGE", &class_int, (intptr_t) &SF_main_GameMidlet_LANGUAGE, "I", 9 },
	{ "VERSION", &class_java_lang_String, (intptr_t) &SF_main_GameMidlet_VERSION, "Ljava/lang/String;", 9 },
	{ "intVERSION", &class_int, (intptr_t) &SF_main_GameMidlet_intVERSION, "I", 9 },
	{ "gameCanvas", &class_main_GameCanvas, (intptr_t) &SF_main_GameMidlet_gameCanvas, "Lmain/GameCanvas;", 9 },
	{ "instance", &class_main_GameMidlet, (intptr_t) &SF_main_GameMidlet_instance, "Lmain/GameMidlet;", 9 },
	{ "isConnect2", &class_boolean, (intptr_t) &SF_main_GameMidlet_isConnect2, "Z", 8 },
	{ "isBackWindowsPhone", &class_boolean, (intptr_t) &SF_main_GameMidlet_isBackWindowsPhone, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_main_GameMidlet, 0, "()V", 1 },
	{ "destroyApp", (intptr_t) M_main_GameMidlet_destroyApp_boolean, VTABLE_main_GameMidlet_destroyApp_boolean, "(Z)V", 4 },
	{ "pauseApp", (intptr_t) M_main_GameMidlet_pauseApp, VTABLE_main_GameMidlet_pauseApp, "()V", 4 },
	{ "notifyDestroyed", (intptr_t) M_main_GameMidlet_notifyDestroyed, VTABLE_main_GameMidlet_notifyDestroyed, "()V", 1 },
	{ "startApp", (intptr_t) M_main_GameMidlet_startApp, VTABLE_main_GameMidlet_startApp, "()V", 1 },
	{ "platformRequest", (intptr_t) M_main_GameMidlet_platformRequest_java_lang_String, VTABLE_main_GameMidlet_platformRequest_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "exit", (intptr_t) M_main_GameMidlet_exit, VTABLE_main_GameMidlet_exit, "()V", 17 },
	{ "<clinit>", (intptr_t) clinit_main_GameMidlet, 0, "()V", 8 },
};

Class class_main_GameMidlet{
		.nativeName = (intptr_t) "main/GameMidlet",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(main_GameMidlet),
		.classVtable = (intptr_t) vtable_main_GameMidlet,
		.staticInitializer = (intptr_t) clinit_main_GameMidlet,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_main_GameMidlet,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 11,
		.nativeFields = (intptr_t) fields,
		.methodCount = 8,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 17,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_main_GameMidlet = registerClass(&class_main_GameMidlet);

}

