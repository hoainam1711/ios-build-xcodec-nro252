#include "com/badlogic/gdx/utils/Logger.h"
#include "java/lang/Exception.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/Application.h"
#include "com/badlogic/gdx/Gdx.h"
#include "com/badlogic/gdx/utils/Logger.h"
#include "java/lang/Throwable.h"

extern "C" {

jint SF_com_badlogic_gdx_utils_Logger_NONE;
jint SF_com_badlogic_gdx_utils_Logger_ERROR;
jint SF_com_badlogic_gdx_utils_Logger_INFO;
jint SF_com_badlogic_gdx_utils_Logger_DEBUG;

void mark_com_badlogic_gdx_utils_Logger(jobject object, jint mark, jint depth) {
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
	auto self = (com_badlogic_gdx_utils_Logger *) object;
	if (self->F_tag)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_tag)->clazz)->markFunction)((jobject) self->F_tag, mark, depth + 1);
}

void clinit_com_badlogic_gdx_utils_Logger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_com_badlogic_gdx_utils_Logger_NONE = jint(0);
	SF_com_badlogic_gdx_utils_Logger_ERROR = jint(1);
	SF_com_badlogic_gdx_utils_Logger_INFO = jint(2);
	SF_com_badlogic_gdx_utils_Logger_DEBUG = jint(3);
}

void init_com_badlogic_gdx_utils_Logger_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Logger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(36);
	init_com_badlogic_gdx_utils_Logger_java_lang_String_int(ctx, (frame[0].o), (frame[1].o), (jint(1)));
	LINE_NUMBER(37);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_utils_Logger_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:<init>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_utils_Logger(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(39);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(40);
	((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_tag = (jref) (frame[1].o);
	LINE_NUMBER(41);
	((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level = (frame[2].i);
	LINE_NUMBER(42);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Logger_debug_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:debug", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(45);
	if (((jint)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level) < (jint(3))) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_tag;
	((func_com_badlogic_gdx_Application_debug_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_debug_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(46);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Logger_debug_java_lang_String_java_lang_Exception(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:debug", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(49);
	if (((jint)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level) < (jint(3))) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_tag;
	((func_com_badlogic_gdx_Application_debug_java_lang_String_java_lang_String_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_debug_java_lang_String_java_lang_String_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(50);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Logger_info_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:info", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(53);
	if (((jint)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level) < (jint(2))) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_tag;
	((func_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(54);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Logger_info_java_lang_String_java_lang_Exception(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:info", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(57);
	if (((jint)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level) < (jint(2))) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_tag;
	((func_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_log_java_lang_String_java_lang_String_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(58);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Logger_error_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:error", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(61);
	if (((jint)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level) < (jint(1))) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_tag;
	((func_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o));
	}
label_1:;
	LINE_NUMBER(62);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:error", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(65);
	if (((jint)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level) < (jint(1))) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_Gdx(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_Gdx_app;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_tag;
	((func_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String_java_lang_Throwable) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_Application, INDEX_com_badlogic_gdx_Application_error_java_lang_String_java_lang_String_java_lang_Throwable, sp[0].o))(ctx, sp[0].o, sp[1].o, (frame[1].o), (frame[2].o));
	}
label_1:;
	LINE_NUMBER(66);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_utils_Logger_setLevel_int(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:setLevel", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(72);
	((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level = (frame[1].i);
	LINE_NUMBER(73);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint M_com_badlogic_gdx_utils_Logger_getLevel_R_int(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/utils/Logger:getLevel", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(76);
	popStackFrame(ctx);
	return ((jint)((com_badlogic_gdx_utils_Logger *) NULL_CHECK((frame[0].o)))->F_level);
	}

	popStackFrame(ctx);
}

void *vtable_com_badlogic_gdx_utils_Logger[] {
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
	(void *) M_com_badlogic_gdx_utils_Logger_debug_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Logger_debug_java_lang_String_java_lang_Exception,
	(void *) M_com_badlogic_gdx_utils_Logger_info_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Logger_info_java_lang_String_java_lang_Exception,
	(void *) M_com_badlogic_gdx_utils_Logger_error_java_lang_String,
	(void *) M_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable,
	(void *) M_com_badlogic_gdx_utils_Logger_setLevel_int,
	(void *) M_com_badlogic_gdx_utils_Logger_getLevel_R_int,
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
	{ "debug", "(Ljava/lang/String;)V" },
	{ "debug", "(Ljava/lang/String;Ljava/lang/Exception;)V" },
	{ "info", "(Ljava/lang/String;)V" },
	{ "info", "(Ljava/lang/String;Ljava/lang/Exception;)V" },
	{ "error", "(Ljava/lang/String;)V" },
	{ "error", "(Ljava/lang/String;Ljava/lang/Throwable;)V" },
	{ "setLevel", "(I)V" },
	{ "getLevel", "()I" },
};

static FieldMetadata fields[] {
	{ "NONE", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_Logger_NONE, "I", 25 },
	{ "ERROR", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_Logger_ERROR, "I", 25 },
	{ "INFO", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_Logger_INFO, "I", 25 },
	{ "DEBUG", &class_int, (intptr_t) &SF_com_badlogic_gdx_utils_Logger_DEBUG, "I", 25 },
	{ "tag", &class_java_lang_String, offsetof(com_badlogic_gdx_utils_Logger, F_tag), "Ljava/lang/String;", 18 },
	{ "level", &class_int, offsetof(com_badlogic_gdx_utils_Logger, F_level), "I", 2 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Logger_java_lang_String, 0, "(Ljava/lang/String;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_utils_Logger_java_lang_String_int, 0, "(Ljava/lang/String;I)V", 1 },
	{ "debug", (intptr_t) M_com_badlogic_gdx_utils_Logger_debug_java_lang_String, VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "debug", (intptr_t) M_com_badlogic_gdx_utils_Logger_debug_java_lang_String_java_lang_Exception, VTABLE_com_badlogic_gdx_utils_Logger_debug_java_lang_String_java_lang_Exception, "(Ljava/lang/String;Ljava/lang/Exception;)V", 1 },
	{ "info", (intptr_t) M_com_badlogic_gdx_utils_Logger_info_java_lang_String, VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "info", (intptr_t) M_com_badlogic_gdx_utils_Logger_info_java_lang_String_java_lang_Exception, VTABLE_com_badlogic_gdx_utils_Logger_info_java_lang_String_java_lang_Exception, "(Ljava/lang/String;Ljava/lang/Exception;)V", 1 },
	{ "error", (intptr_t) M_com_badlogic_gdx_utils_Logger_error_java_lang_String, VTABLE_com_badlogic_gdx_utils_Logger_error_java_lang_String, "(Ljava/lang/String;)V", 1 },
	{ "error", (intptr_t) M_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable, VTABLE_com_badlogic_gdx_utils_Logger_error_java_lang_String_java_lang_Throwable, "(Ljava/lang/String;Ljava/lang/Throwable;)V", 1 },
	{ "setLevel", (intptr_t) M_com_badlogic_gdx_utils_Logger_setLevel_int, VTABLE_com_badlogic_gdx_utils_Logger_setLevel_int, "(I)V", 1 },
	{ "getLevel", (intptr_t) M_com_badlogic_gdx_utils_Logger_getLevel_R_int, VTABLE_com_badlogic_gdx_utils_Logger_getLevel_R_int, "()I", 1 },
};

Class class_com_badlogic_gdx_utils_Logger{
		.nativeName = (intptr_t) "com/badlogic/gdx/utils/Logger",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_utils_Logger),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_utils_Logger,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_utils_Logger,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_utils_Logger,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 33,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 10,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 19,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_utils_Logger = registerClass(&class_com_badlogic_gdx_utils_Logger);

}

