#include "nro/ClientDiagLogger_LogEntry.h"
#include "nro/ClientDiagLogger.h"
#include "java/lang/Object.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/String.h"
#include "nro/ClientDiagLogger_LogEntry.h"

extern "C" {


void mark_nro_ClientDiagLogger$LogEntry(jobject object, jint mark, jint depth) {
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
	auto self = (nro_ClientDiagLogger$LogEntry *) object;
	if (self->F_timestampIso)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_timestampIso)->clazz)->markFunction)((jobject) self->F_timestampIso, mark, depth + 1);
	if (self->F_deviceId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_deviceId)->clazz)->markFunction)((jobject) self->F_deviceId, mark, depth + 1);
	if (self->F_appVersion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_appVersion)->clazz)->markFunction)((jobject) self->F_appVersion, mark, depth + 1);
	if (self->F_osVersion)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_osVersion)->clazz)->markFunction)((jobject) self->F_osVersion, mark, depth + 1);
	if (self->F_requestId)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_requestId)->clazz)->markFunction)((jobject) self->F_requestId, mark, depth + 1);
	if (self->F_event)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_event)->clazz)->markFunction)((jobject) self->F_event, mark, depth + 1);
	if (self->F_endpoint)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_endpoint)->clazz)->markFunction)((jobject) self->F_endpoint, mark, depth + 1);
	if (self->F_errorCode)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_errorCode)->clazz)->markFunction)((jobject) self->F_errorCode, mark, depth + 1);
	if (self->F_loginRedirectReason)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_loginRedirectReason)->clazz)->markFunction)((jobject) self->F_loginRedirectReason, mark, depth + 1);
	if (self->F_callerLocation)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_callerLocation)->clazz)->markFunction)((jobject) self->F_callerLocation, mark, depth + 1);
	if (self->F_detail)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_detail)->clazz)->markFunction)((jobject) self->F_detail, mark, depth + 1);
}

void clinit_nro_ClientDiagLogger$LogEntry(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_ClientDiagLogger$LogEntry_long_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jlong param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jint param8, jobject param9, jobject param10, jobject param11, jobject param12) {
	NULL_CHECK(self);
	jtype frame[18];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger$LogEntry:<init>", 18 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger$LogEntry(ctx);
	frame[0].o = self;
	frame[1].l = param0;
	frame[3].o = param1;
	frame[4].o = param2;
	frame[5].o = param3;
	frame[6].o = param4;
	frame[7].o = param5;
	frame[8].o = param6;
	frame[9].o = param7;
	frame[10].i = param8;
	frame[11].o = param9;
	frame[12].o = param10;
	frame[13].o = param11;
	frame[14].o = param12;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(42);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_timestampMs = (frame[1].l);
	LINE_NUMBER(43);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_timestampIso = (jref) (frame[3].o);
	LINE_NUMBER(44);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_deviceId = (jref) (frame[4].o);
	LINE_NUMBER(45);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_appVersion = (jref) (frame[5].o);
	LINE_NUMBER(46);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_osVersion = (jref) (frame[6].o);
	LINE_NUMBER(47);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_requestId = (jref) (frame[7].o);
	LINE_NUMBER(48);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_event = (jref) (frame[8].o);
	LINE_NUMBER(49);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_endpoint = (jref) (frame[9].o);
	LINE_NUMBER(50);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_statusCode = (frame[10].i);
	LINE_NUMBER(51);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_errorCode = (jref) (frame[11].o);
	LINE_NUMBER(52);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_loginRedirectReason = (jref) (frame[12].o);
	LINE_NUMBER(53);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_callerLocation = (jref) (frame[13].o);
	LINE_NUMBER(54);
	((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_detail = (jref) (frame[14].o);
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger$LogEntry:formatLine", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(58);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"[CLIENT-DIAG] ts="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_timestampIso;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | tsMs="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jlong)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_timestampMs));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | deviceId="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_deviceId;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | appVer="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_appVersion;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | osVer="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_osVersion;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | reqId="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_requestId;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | event="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_event;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | endpoint="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_endpoint;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | status="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_statusCode));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | errCode="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_errorCode;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | loginRedirectReason="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_loginRedirectReason;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | caller="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_callerLocation;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | detail="_j))));
	sp[1].o = (jobject)((nro_ClientDiagLogger$LogEntry *) NULL_CHECK((frame[0].o)))->F_detail;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ClientDiagLogger$LogEntry[] {
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
	(void *) M_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String,
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
	{ "formatLine", "()Ljava/lang/String;" },
};

static FieldMetadata fields[] {
	{ "timestampMs", &class_long, offsetof(nro_ClientDiagLogger$LogEntry, F_timestampMs), "J", 17 },
	{ "timestampIso", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_timestampIso), "Ljava/lang/String;", 17 },
	{ "deviceId", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_deviceId), "Ljava/lang/String;", 17 },
	{ "appVersion", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_appVersion), "Ljava/lang/String;", 17 },
	{ "osVersion", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_osVersion), "Ljava/lang/String;", 17 },
	{ "requestId", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_requestId), "Ljava/lang/String;", 17 },
	{ "event", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_event), "Ljava/lang/String;", 17 },
	{ "endpoint", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_endpoint), "Ljava/lang/String;", 17 },
	{ "statusCode", &class_int, offsetof(nro_ClientDiagLogger$LogEntry, F_statusCode), "I", 17 },
	{ "errorCode", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_errorCode), "Ljava/lang/String;", 17 },
	{ "loginRedirectReason", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_loginRedirectReason), "Ljava/lang/String;", 17 },
	{ "callerLocation", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_callerLocation), "Ljava/lang/String;", 17 },
	{ "detail", &class_java_lang_String, offsetof(nro_ClientDiagLogger$LogEntry, F_detail), "Ljava/lang/String;", 17 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ClientDiagLogger$LogEntry_long_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String, 0, "(JLjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V", 0 },
	{ "formatLine", (intptr_t) M_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String, VTABLE_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String, "()Ljava/lang/String;", 1 },
};

Class class_nro_ClientDiagLogger$LogEntry{
		.nativeName = (intptr_t) "nro/ClientDiagLogger$LogEntry",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ClientDiagLogger$LogEntry),
		.classVtable = (intptr_t) vtable_nro_ClientDiagLogger$LogEntry,
		.staticInitializer = (intptr_t) clinit_nro_ClientDiagLogger$LogEntry,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ClientDiagLogger$LogEntry,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) &class_nro_ClientDiagLogger,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 13,
		.nativeFields = (intptr_t) fields,
		.methodCount = 2,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 12,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ClientDiagLogger$LogEntry = registerClass(&class_nro_ClientDiagLogger$LogEntry);

}

