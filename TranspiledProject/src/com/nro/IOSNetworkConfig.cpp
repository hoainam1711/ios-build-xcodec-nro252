#include "com/nro/IOSNetworkConfig.h"
#include "nro/ServerListScreen.h"
#include "java/lang/Exception.h"
#include "lib/network/Session_ME.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "java/lang/IllegalArgumentException.h"
#include "java/net/URISyntaxException.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "java/util/Properties.h"
#include "nro/Res.h"
#include "java/net/URI.h"
#include "java/io/IOException.h"
#include "java/io/Reader.h"
#include "java/lang/Throwable.h"

extern "C" {


void mark_com_nro_IOSNetworkConfig(jobject object, jint mark, jint depth) {
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
	auto self = (com_nro_IOSNetworkConfig *) object;
}

void clinit_com_nro_IOSNetworkConfig(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_com_nro_IOSNetworkConfig(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/IOSNetworkConfig:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_nro_IOSNetworkConfig(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(16);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(17);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_com_nro_IOSNetworkConfig_load_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0) {
	jtype frame[10];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/nro/IOSNetworkConfig:load", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);
	volatile bool bypasses[1]{};

	clinit_com_nro_IOSNetworkConfig(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(20);
	clinit_nro_ServerListScreen(ctx);
	SF_nro_ServerListScreen_IS_LOCAL = (jint(0));
	LINE_NUMBER(21);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[0].o));
	if (temp0 != 0) goto label_25;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_25:;
	{
	LINE_NUMBER(23);
	clinit_java_util_Properties(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_Properties);
	init_java_util_Properties(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_14: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_13; }
	}
label_15: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_GdxRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
label_16: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_13; }
	}
label_17: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); goto label_13; }
	}
	{
	LINE_NUMBER(24);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_reader_java_lang_String_R_java_io_Reader])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"UTF-8"_j))));
	frame[2].o = sp[0].o;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 5); bypasses[0] = true; goto label_19; } // goto label_2
	}
	{
	LINE_NUMBER(25);
	((func_java_util_Properties_load_java_io_Reader) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Properties_load_java_io_Reader])(ctx, (frame[1].o), (frame[2].o));
	LINE_NUMBER(26);
	sp[0].o = (jobject)((func_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_util_Properties_getProperty_java_lang_String_java_lang_String_R_java_lang_String])(ctx, (frame[1].o), (((jobject) createStringLiteral(ctx, u8"nro-gateway-url"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(27);
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[3].o));
	if (temp0 == 0) { popExceptionFrames(frameRef, 5); goto label_4; }
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(38);
	if ((frame[2].o) == nullptr) goto label_12;
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
label_12:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(27);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_19: if (setjmp(*pushExceptionFrame(frameRef, &class_java_io_IOException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_13; }
	}
	if (bypasses[0]) { goto label_20; }
label_20: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_GdxRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 2); goto label_13; }
	}
	if (bypasses[0]) { goto label_21; }
label_21: if (setjmp(*pushExceptionFrame(frameRef, &class_java_net_URISyntaxException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 3); goto label_13; }
	}
	if (bypasses[0]) { goto label_22; }
label_22: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_IllegalArgumentException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 4); goto label_13; }
	}
	if (bypasses[0]) { bypasses[0] = false; goto label_2; }
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(29);
	clinit_java_net_URI(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_net_URI);
	init_java_net_URI_java_lang_String(ctx, sp[0].o, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(30);
	sp[0].o = (jobject)((func_java_net_URI_getScheme_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_net_URI_getScheme_R_java_lang_String])(ctx, (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(31);
	jint temp0 = (jint)((func_java_net_URI_getPort_R_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_net_URI_getPort_R_int])(ctx, (frame[4].o));
	frame[6].i = temp0;
	LINE_NUMBER(32);
	jint temp1 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"wss"_j))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"wss"_j))), (frame[5].o));
	if (temp1 != 0) goto label_31;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (((jobject) createStringLiteral(ctx, u8"ws"_j))))->vtable)[VTABLE_java_lang_String_equalsIgnoreCase_java_lang_String_R_boolean])(ctx, (((jobject) createStringLiteral(ctx, u8"ws"_j))), (frame[5].o));
	if (temp0 == 0) goto label_32;
	}
label_31:;
	{
	sp[0].o = frame[4].o;
	LINE_NUMBER(33);
	sp[0].o = (jobject)((func_java_net_URI_getHost_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_getHost_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o == nullptr) goto label_32;
	}
	{
	sp[0].o = (jobject)((func_java_net_URI_getRawUserInfo_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_net_URI_getRawUserInfo_R_java_lang_String])(ctx, (frame[4].o));
	if (sp[0].o != nullptr) goto label_32;
	}
	{
	sp[0].o = frame[4].o;
	LINE_NUMBER(34);
	sp[0].o = (jobject)((func_java_net_URI_getRawFragment_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_net_URI_getRawFragment_R_java_lang_String])(ctx, sp[0].o);
	if (sp[0].o != nullptr) goto label_32;
	}
	INST_ILOAD(6);
	if ((--sp)->i == 0) goto label_32;
	{
	if ((frame[6].i) <= (jint(65535))) goto label_35;
	}
label_32:;
	{
	LINE_NUMBER(35);
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"A valid ws:// or wss:// gateway is required"_j))));
	throwException(ctx, sp[0].o);	}
label_35:;
	{
	LINE_NUMBER(37);
	SM_lib_network_Session_ME_setGatewayUrl_java_lang_String(ctx, (frame[3].o));
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(38);
	if ((frame[2].o) == nullptr) goto label_18;
	}
	{
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_Reader_close])(ctx, (frame[2].o));
	goto label_18;
	}
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(24);
	frame[3].o = sp[0].o;
	if ((frame[2].o) == nullptr) goto label_36;
	}
label_10: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_9; }
	}
	INST_ALOAD(2);
	POP_N(1); // Pop method args
	((func_java_io_Reader_close) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_Reader_close])(ctx, sp[0].o);
	popExceptionFrame(frameRef);
	goto label_36;
label_9:;
	{
	sp -= 1;
	frame[4].o = sp[0].o;
	((func_java_lang_Throwable_addSuppressed_java_lang_Throwable) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Throwable_addSuppressed_java_lang_Throwable])(ctx, (frame[3].o), (frame[4].o));
	}
label_36:;
	INST_ALOAD(3);
	INST_ATHROW();
	label_18:;
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	popExceptionFrame(frameRef);
	LINE_NUMBER(40);
	goto label_37;
label_13:;
	{
	sp -= 1;
	LINE_NUMBER(38);
	frame[2].o = sp[0].o;
	LINE_NUMBER(39);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[iOS Clearwing] Invalid gateway in boot.config: "_j))));
	sp[1].o = (jobject)((func_java_lang_Exception_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Exception_getMessage_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	SM_nro_Res_err_java_lang_String(ctx, sp[0].o);
	}
label_37:;
	LINE_NUMBER(41);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void *vtable_com_nro_IOSNetworkConfig[] {
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
	{ "<init>", (intptr_t) init_com_nro_IOSNetworkConfig, 0, "()V", 2 },
	{ "load", (intptr_t) SM_com_nro_IOSNetworkConfig_load_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 8 },
};

Class class_com_nro_IOSNetworkConfig{
		.nativeName = (intptr_t) "com/nro/IOSNetworkConfig",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_nro_IOSNetworkConfig),
		.classVtable = (intptr_t) vtable_com_nro_IOSNetworkConfig,
		.staticInitializer = (intptr_t) clinit_com_nro_IOSNetworkConfig,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_nro_IOSNetworkConfig,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 48,
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
static bool registered_com_nro_IOSNetworkConfig = registerClass(&class_com_nro_IOSNetworkConfig);

}

