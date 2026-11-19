#include "nro/ClientDiagLogger.h"
#include "java/lang/Integer.h"
#include "java/text/DateFormat.h"
#include "java/lang/StringBuilder.h"
#include "java/lang/Runtime.h"
#include "nro/ClientDiagLogger_LogEntry.h"
#include "java/util/ArrayList.h"
#include "java/util/Date.h"
#include "java/io/PrintStream.h"
#include "nro/ClientDiagLogger.h"
#include "java/util/Collection.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "java/text/SimpleDateFormat.h"
#include "java/util/TimeZone.h"
#include "main/GameMidlet.h"
#include "java/util/concurrent/atomic/AtomicLong.h"
#include "java/lang/Class.h"
#include "java/lang/Throwable.h"
#include "java/util/List.h"
#include "java/lang/System.h"
#include "java/util/Locale.h"
#include "java/lang/StackTraceElement.h"
#include "java/lang/Thread.h"

extern "C" {

jint SF_nro_ClientDiagLogger_MAX_BUFFER_ENTRIES;
jobject SF_nro_ClientDiagLogger_REQUEST_COUNTER;
jobject SF_nro_ClientDiagLogger_RECENT_ENTRIES;
volatile jobject SF_nro_ClientDiagLogger_cachedDeviceId;
volatile jobject SF_nro_ClientDiagLogger_cachedOsVersion;
volatile jobject SF_nro_ClientDiagLogger_lastActiveRequestId;

void mark_nro_ClientDiagLogger(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_ClientDiagLogger_REQUEST_COUNTER)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClientDiagLogger_REQUEST_COUNTER)->clazz)->markFunction)((jobject) SF_nro_ClientDiagLogger_REQUEST_COUNTER, mark, depth + 1);
		if (SF_nro_ClientDiagLogger_RECENT_ENTRIES)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClientDiagLogger_RECENT_ENTRIES)->clazz)->markFunction)((jobject) SF_nro_ClientDiagLogger_RECENT_ENTRIES, mark, depth + 1);
		if (SF_nro_ClientDiagLogger_cachedDeviceId)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClientDiagLogger_cachedDeviceId)->clazz)->markFunction)((jobject) SF_nro_ClientDiagLogger_cachedDeviceId, mark, depth + 1);
		if (SF_nro_ClientDiagLogger_cachedOsVersion)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClientDiagLogger_cachedOsVersion)->clazz)->markFunction)((jobject) SF_nro_ClientDiagLogger_cachedOsVersion, mark, depth + 1);
		if (SF_nro_ClientDiagLogger_lastActiveRequestId)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_ClientDiagLogger_lastActiveRequestId)->clazz)->markFunction)((jobject) SF_nro_ClientDiagLogger_lastActiveRequestId, mark, depth + 1);
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
	auto self = (nro_ClientDiagLogger *) object;
}

void init_nro_ClientDiagLogger(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(81);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(82);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_nextRequestId_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:nextRequestId", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(85);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_REQUEST_COUNTER;
	jlong temp0 = (jlong)((func_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_util_concurrent_atomic_AtomicLong_incrementAndGet_R_long])(ctx, sp[0].o);
	frame[1].l = temp0;
	LINE_NUMBER(86);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp += 1;
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[0].o));
	if (temp0 == 0) goto label_3;
	}
label_2:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"REQ"_j));
	goto label_4;
label_3:;
	INST_ALOAD(0);
label_4:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"-"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_long_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].l));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(87);
	clinit_nro_ClientDiagLogger(ctx);
	SF_nro_ClientDiagLogger_lastActiveRequestId = (frame[3].o);
	LINE_NUMBER(88);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:getLastActiveRequestId", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	{
	LINE_NUMBER(92);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_lastActiveRequestId;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_getDeviceId_R_java_lang_String(jcontext ctx) {
	jtype frame[11];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:getDeviceId", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	{
	LINE_NUMBER(96);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_cachedDeviceId;
	frame[0].o = sp[0].o;
	LINE_NUMBER(97);
	if ((frame[0].o) == nullptr) goto label_11;
	}
	{
	LINE_NUMBER(98);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_11:;
	{
	LINE_NUMBER(100);
	sp[0].o = ((jobject) &class_nro_ClientDiagLogger);
	frame[1].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(101);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_cachedDeviceId;
	if (sp[0].o == nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	{
	LINE_NUMBER(102);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_cachedDeviceId;
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(104);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp[1].o = (jobject)SM_java_lang_String_valueOf_java_lang_Object_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"os.arch"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"unknown"_j));
	LINE_NUMBER(105);
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"user.language"_j));
	sp[2].o = ((jobject) createStringLiteral(ctx, u8"vi"_j));
	LINE_NUMBER(106);
	sp[1].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, sp[1].o, sp[2].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"|"_j))));
	LINE_NUMBER(107);
	sp[1].o = (jobject)SM_java_lang_Runtime_getRuntime_R_java_lang_Runtime(ctx);
	jint temp0 = (jint)((func_java_lang_Runtime_availableProcessors_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Runtime_availableProcessors_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(108);
	jint temp1 = (jint)((func_java_lang_String_hashCode_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_String_hashCode_R_int])(ctx, (frame[2].o));
	frame[3].i = temp1;
	LINE_NUMBER(109);
	clinit_java_util_Locale(ctx);
	sp[0].o = (jobject)SF_java_util_Locale_US;
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"DEV-%08X"_j));
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	jint temp2 = jint(0);
	sp[3].o = (jobject)SM_java_lang_Integer_valueOf_int_R_java_lang_Integer(ctx, (frame[3].i));
	ARRAY_ACCESS(jobject, sp[2].o, temp2) = sp[3].o;
	sp[0].o = (jobject)SM_java_lang_String_format_java_util_Locale_java_lang_String_Array1_java_lang_Object_R_java_lang_String(ctx, sp[0].o, sp[1].o, sp[2].o);
	clinit_nro_ClientDiagLogger(ctx);
	SF_nro_ClientDiagLogger_cachedDeviceId = sp[0].o;
	LINE_NUMBER(110);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_cachedDeviceId;
	monitorExit(ctx, (frame[1].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_8: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(111);
	frame[4].o = sp[0].o;
	monitorExit(ctx, (frame[1].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(4);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_getAppVersion_R_java_lang_String(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:getAppVersion", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	{
	LINE_NUMBER(115);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_VERSION;
	if (sp[0].o == nullptr) goto label_1;
	}
	clinit_main_GameMidlet(ctx);
	(sp++)->o = SF_main_GameMidlet_VERSION;
	goto label_2;
label_1:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"2.5.2"_j));
label_2:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_getOsVersion_R_java_lang_String(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:getOsVersion", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	{
	LINE_NUMBER(119);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_cachedOsVersion;
	frame[0].o = sp[0].o;
	LINE_NUMBER(120);
	if ((frame[0].o) == nullptr) goto label_2;
	}
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (frame[0].o);
	}
label_2:;
	{
	LINE_NUMBER(123);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.name"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(124);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.version"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(125);
	sp[0].o = (jobject)SM_java_lang_System_getProperty_java_lang_String_java_lang_String_R_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"os.arch"_j))), (((jobject) createStringLiteral(ctx, u8"unknown"_j))));
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(126);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[1].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	clinit_nro_ClientDiagLogger(ctx);
	SF_nro_ClientDiagLogger_cachedOsVersion = sp[0].o;
	LINE_NUMBER(127);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_cachedOsVersion;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:logEvent", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_resolveCallerLocation_R_java_lang_String(ctx);
	frame[7].o = sp[0].o;
	LINE_NUMBER(139);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_record_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (frame[3].i), (frame[4].o), (frame[5].o), (frame[7].o), (frame[6].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_logLogoutTrigger_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:logLogoutTrigger", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_resolveCallerChain_int_R_java_lang_String(ctx, (6));
	frame[5].o = sp[0].o;
	LINE_NUMBER(149);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"LOGOUT_REDIRECT"_j));
	clinit_nro_ClientDiagLogger(ctx);
	sp[1].o = (jobject)SF_nro_ClientDiagLogger_lastActiveRequestId;
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_record_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, (frame[0].o), (frame[1].i), (frame[2].o), (frame[3].o), (frame[5].o), (frame[4].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_logException_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Throwable_R_nro_ClientDiagLogger$LogEntry(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4) {
	jtype frame[16];
	auto stack = &frame[8];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:logException", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].o = param3;
	frame[4].o = param4;
	{
	LINE_NUMBER(166);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_resolveCallerLocation_R_java_lang_String(ctx);
	frame[5].o = sp[0].o;
	LINE_NUMBER(167);
	if ((frame[4].o) != nullptr) goto label_2;
	}
	{
	LINE_NUMBER(168);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"null"_j));
	sp += 1;
	goto label_4;
	}
label_2:;
	{
	LINE_NUMBER(169);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	sp[1].o = (jobject)((func_java_lang_Throwable_getMessage_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Throwable_getMessage_R_java_lang_String])(ctx, (frame[4].o));
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp += 1;
	}
label_4:;
	{
	sp -= 1;
	frame[6].o = sp[0].o;
	LINE_NUMBER(170);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8" | ex="_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[7].o = sp[0].o;
	LINE_NUMBER(171);
	sp[0].o = ((jobject) createStringLiteral(ctx, u8"EXCEPTION"_j));
	LINE_NUMBER(173);
	sp += 1;
	if ((frame[1].o) == nullptr) goto label_8;
	}
	INST_ALOAD(1);
	goto label_9;
label_8:;
	clinit_nro_ClientDiagLogger(ctx);
	(sp++)->o = SF_nro_ClientDiagLogger_lastActiveRequestId;
label_9:;
	{
	sp[0].o = frame[0].o;
	jint temp0 = 500;
	LINE_NUMBER(176);
	sp[1].i = temp0;
	sp += 2;
	if ((frame[2].o) == nullptr) goto label_11;
	}
	INST_ALOAD(2);
	goto label_12;
label_11:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"ERR_EXCEPTION"_j));
label_12:;
	{
	sp -= 5;
	sp[5].o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
	sp[6].o = frame[5].o;
	sp[7].o = frame[7].o;
	LINE_NUMBER(171);
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_record_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].i, sp[4].o, sp[5].o, sp[6].o, sp[7].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_record_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6, jobject param7) {
	jtype frame[31];
	auto stack = &frame[15];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:record", 31 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	frame[2].o = param2;
	frame[3].i = param3;
	frame[4].o = param4;
	frame[5].o = param5;
	frame[6].o = param6;
	frame[7].o = param7;
	{
	LINE_NUMBER(191);
	jlong temp0 = (jlong)SM_java_lang_System_currentTimeMillis_R_long(ctx);
	frame[8].l = temp0;
	LINE_NUMBER(192);
	clinit_java_text_SimpleDateFormat(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_text_SimpleDateFormat);
	sp[1].o = ((jobject) createStringLiteral(ctx, u8"yyyy-MM-dd'T'HH:mm:ss.SSS'Z'"_j));
	clinit_java_util_Locale(ctx);
	sp[2].o = (jobject)SF_java_util_Locale_US;
	init_java_text_SimpleDateFormat_java_lang_String_java_util_Locale(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[10].o = sp[0].o;
	LINE_NUMBER(193);
	sp[0].o = frame[10].o;
	sp[1].o = (jobject)SM_java_util_TimeZone_getTimeZone_java_lang_String_R_java_util_TimeZone(ctx, (((jobject) createStringLiteral(ctx, u8"UTC"_j))));
	((func_java_text_SimpleDateFormat_setTimeZone_java_util_TimeZone) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_setTimeZone_java_util_TimeZone])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(194);
	sp[0].o = frame[10].o;
	clinit_java_util_Date(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_util_Date);
	init_java_util_Date_long(ctx, sp[1].o, (frame[8].l));
	sp[0].o = (jobject)((func_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_text_SimpleDateFormat_format_java_util_Date_R_java_lang_String])(ctx, sp[0].o, sp[1].o);
	frame[11].o = sp[0].o;
	LINE_NUMBER(196);
	clinit_nro_ClientDiagLogger$LogEntry(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_ClientDiagLogger$LogEntry);
	jlong temp1 = frame[8].l;
	sp[1].o = frame[11].o;
	LINE_NUMBER(199);
	sp[2].o = (jobject)SM_nro_ClientDiagLogger_getDeviceId_R_java_lang_String(ctx);
	LINE_NUMBER(200);
	sp[3].o = (jobject)SM_nro_ClientDiagLogger_getAppVersion_R_java_lang_String(ctx);
	LINE_NUMBER(201);
	sp[4].o = (jobject)SM_nro_ClientDiagLogger_getOsVersion_R_java_lang_String(ctx);
	LINE_NUMBER(202);
	jobject temp2 = sp[1].o;
	sp[1].o = sp[0].o;
	jobject temp3 = sp[2].o;
	sp[2].l = temp1;
	jobject temp4 = sp[3].o;
	sp[3].o = temp2;
	jobject temp5 = sp[4].o;
	sp[4].o = temp3;
	sp[5].o = temp4;
	sp[6].o = temp5;
	sp += 7;
	if ((frame[1].o) == nullptr) goto label_15;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_isEmpty_R_boolean) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_String_isEmpty_R_boolean])(ctx, (frame[1].o));
	if (temp0 != 0) goto label_15;
	}
	INST_ALOAD(1);
	goto label_16;
label_15:;
	clinit_nro_ClientDiagLogger(ctx);
	(sp++)->o = SF_nro_ClientDiagLogger_lastActiveRequestId;
label_16:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(203);
	sp += 1;
	if ((frame[0].o) == nullptr) goto label_18;
	}
	INST_ALOAD(0);
	goto label_19;
label_18:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"UNKNOWN"_j));
label_19:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(204);
	sp += 1;
	if ((frame[2].o) == nullptr) goto label_21;
	}
	INST_ALOAD(2);
	goto label_22;
label_21:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
label_22:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	jint temp0 = frame[3].i;
	LINE_NUMBER(206);
	sp[1].i = temp0;
	sp += 2;
	if ((frame[4].o) == nullptr) goto label_24;
	}
	INST_ALOAD(4);
	goto label_25;
label_24:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
label_25:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(207);
	sp += 1;
	if ((frame[5].o) == nullptr) goto label_27;
	}
	INST_ALOAD(5);
	goto label_28;
label_27:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"NONE"_j));
label_28:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(208);
	sp += 1;
	if ((frame[6].o) == nullptr) goto label_30;
	}
	INST_ALOAD(6);
	goto label_31;
label_30:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"UNKNOWN"_j));
label_31:;
	{
	sp -= 1;
	sp[0].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[0].o);
	LINE_NUMBER(209);
	sp += 1;
	if ((frame[7].o) == nullptr) goto label_33;
	}
	INST_ALOAD(7);
	goto label_34;
label_33:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
label_34:;
	{
	sp -= 15;
	sp[1].o = (jobject)SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(ctx, sp[14].o);
	init_nro_ClientDiagLogger$LogEntry_long_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String(ctx, sp[0].o, sp[2].l, sp[3].o, sp[4].o, sp[5].o, sp[6].o, sp[7].o, sp[8].o, sp[9].o, sp[10].i, sp[11].o, sp[12].o, sp[13].o, sp[1].o);
	frame[12].o = sp[0].o;
	LINE_NUMBER(211);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_RECENT_ENTRIES;
	frame[13].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(212);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_RECENT_ENTRIES;
	jint temp0 = (jint)((func_java_util_List_size_R_int) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_size_R_int, sp[0].o))(ctx, sp[0].o);
	if (temp0 < (256)) goto label_36;
	}
	{
	LINE_NUMBER(213);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_RECENT_ENTRIES;
	sp[0].o = (jobject)((func_java_util_List_remove_int_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_remove_int_R_java_lang_Object, sp[0].o))(ctx, sp[0].o, (jint(0)));
	}
label_36:;
	{
	LINE_NUMBER(215);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_RECENT_ENTRIES;
	jint temp0 = (jint)((func_java_util_List_add_java_lang_Object_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_add_java_lang_Object_R_boolean, sp[0].o))(ctx, sp[0].o, (frame[12].o));
	LINE_NUMBER(216);
	monitorExit(ctx, (frame[13].o));
	}
	popExceptionFrame(frameRef);
	goto label_39;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[14].o = sp[0].o;
	monitorExit(ctx, (frame[13].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(14);
	INST_ATHROW();
	label_39:;
	{
	LINE_NUMBER(217);
	clinit_java_lang_System(ctx);
	sp[0].o = (jobject)SF_java_lang_System_out;
	sp[1].o = (jobject)((func_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String) ((void **) nullCheck(ctx, (frame[12].o))->vtable)[VTABLE_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String])(ctx, (frame[12].o));
	((func_java_io_PrintStream_println_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_io_PrintStream_println_java_lang_String])(ctx, sp[0].o, sp[1].o);
	LINE_NUMBER(218);
	popStackFrame(ctx);
	return (frame[12].o);
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_getRecentLogs_R_java_util_List(jcontext ctx) {
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:getRecentLogs", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	{
	LINE_NUMBER(222);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_RECENT_ENTRIES;
	frame[0].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(223);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	clinit_nro_ClientDiagLogger(ctx);
	sp[1].o = (jobject)SF_nro_ClientDiagLogger_RECENT_ENTRIES;
	init_java_util_ArrayList_java_util_Collection(ctx, sp[0].o, sp[1].o);
	monitorExit(ctx, (frame[0].o));
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	LINE_NUMBER(224);
	frame[1].o = sp[0].o;
	monitorExit(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(1);
	INST_ATHROW();
	
	popStackFrame(ctx);
}

void SM_nro_ClientDiagLogger_clearRecentLogs(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:clearRecentLogs", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	{
	LINE_NUMBER(228);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_RECENT_ENTRIES;
	frame[0].o = sp[0].o;
	monitorEnter(ctx, sp[0].o);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(229);
	clinit_nro_ClientDiagLogger(ctx);
	sp[0].o = (jobject)SF_nro_ClientDiagLogger_RECENT_ENTRIES;
	((func_java_util_List_clear) resolveInterfaceMethod(ctx, &class_java_util_List, INDEX_java_util_List_clear, sp[0].o))(ctx, sp[0].o);
	LINE_NUMBER(230);
	monitorExit(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	goto label_8;
label_2:;
label_5: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	sp -= 1;
	frame[1].o = sp[0].o;
	monitorExit(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	INST_ALOAD(1);
	INST_ATHROW();
	label_8:;
	LINE_NUMBER(231);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_resolveCallerLocation_R_java_lang_String(jcontext ctx) {
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:resolveCallerLocation", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	{
	LINE_NUMBER(234);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement])(ctx, sp[0].o);
	frame[0].o = sp[0].o;
	LINE_NUMBER(235);
	frame[1].i = (jint(1));
	}
label_2:;
	{
	if ((frame[1].i) >= (((jarray) nullCheck(ctx, (frame[0].o)))->length)) goto label_3;
	}
	{
	LINE_NUMBER(236);
	frame[2].o = ((jobject)ARRAY_ACCESS(jobject, (frame[0].o), (frame[1].i)));
	LINE_NUMBER(237);
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StackTraceElement_getClassName_R_java_lang_String])(ctx, (frame[2].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(238);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (((jobject) &class_nro_ClientDiagLogger)))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (((jobject) &class_nro_ClientDiagLogger)));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_7;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[3].o), (((jobject) createStringLiteral(ctx, u8"java.lang.Thread"_j))));
	if (temp0 != 0) goto label_7;
	}
	{
	LINE_NUMBER(239);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_StackTraceElement_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StackTraceElement_getClassName_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"."_j))));
	sp[1].o = (jobject)((func_java_lang_StackTraceElement_getMethodName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StackTraceElement_getMethodName_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"("_j))));
	sp[1].o = (jobject)((func_java_lang_StackTraceElement_getFileName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StackTraceElement_getFileName_R_java_lang_String])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8":"_j))));
	jint temp0 = (jint)((func_java_lang_StackTraceElement_getLineNumber_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StackTraceElement_getLineNumber_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(235);
	INST_IINC(1, 1);
	goto label_2;
	}
label_3:;
	{
	LINE_NUMBER(242);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8"UNKNOWN"_j)));
	}

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_resolveCallerChain_int_R_java_lang_String(jcontext ctx, jint param0) {
	jtype frame[9];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:resolveCallerChain", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)SM_java_lang_Thread_currentThread_R_java_lang_Thread(ctx);
	sp[0].o = (jobject)((func_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_Thread_getStackTrace_R_Array1_java_lang_StackTraceElement])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(247);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(248);
	frame[3].i = (jint(0));
	LINE_NUMBER(249);
	frame[4].i = (jint(1));
	}
label_4:;
	{
	if ((frame[4].i) >= (((jarray) nullCheck(ctx, (frame[1].o)))->length)) goto label_5;
	}
	{
	if ((frame[3].i) >= (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(250);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[4].i)));
	LINE_NUMBER(251);
	sp[0].o = (jobject)((func_java_lang_StackTraceElement_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StackTraceElement_getClassName_R_java_lang_String])(ctx, (frame[5].o));
	frame[6].o = sp[0].o;
	LINE_NUMBER(252);
	sp[0].o = frame[6].o;
	sp[1].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (((jobject) &class_nro_ClientDiagLogger)))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (((jobject) &class_nro_ClientDiagLogger)));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, sp[1].o);
	if (temp0 != 0) goto label_9;
	}
	{
	jint temp0 = (jint)((func_java_lang_String_startsWith_java_lang_String_R_boolean) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_String_startsWith_java_lang_String_R_boolean])(ctx, (frame[6].o), (((jobject) createStringLiteral(ctx, u8"java.lang.Thread"_j))));
	if (temp0 != 0) goto label_9;
	}
	{
	LINE_NUMBER(253);
	if ((frame[3].i) <= 0) goto label_11;
	}
	{
	LINE_NUMBER(254);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, (frame[2].o), (((jobject) createStringLiteral(ctx, u8" <- "_j))));
	}
label_11:;
	{
	LINE_NUMBER(256);
	sp[0].o = frame[2].o;
	sp[1].o = (jobject)((func_java_lang_StackTraceElement_getClassName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_StackTraceElement_getClassName_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	jint temp0 = 46;
	LINE_NUMBER(257);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp0);
	sp[1].o = frame[5].o;
	LINE_NUMBER(258);
	sp[1].o = (jobject)((func_java_lang_StackTraceElement_getMethodName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StackTraceElement_getMethodName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	jint temp1 = 40;
	LINE_NUMBER(259);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp1);
	sp[1].o = frame[5].o;
	LINE_NUMBER(260);
	sp[1].o = (jobject)((func_java_lang_StackTraceElement_getFileName_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StackTraceElement_getFileName_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	jint temp2 = 58;
	LINE_NUMBER(261);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp2);
	sp[1].o = frame[5].o;
	LINE_NUMBER(262);
	jint temp3 = (jint)((func_java_lang_StackTraceElement_getLineNumber_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StackTraceElement_getLineNumber_R_int])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, temp3);
	jint temp4 = 41;
	LINE_NUMBER(263);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_char_R_java_lang_StringBuilder])(ctx, sp[0].o, temp4);
	LINE_NUMBER(264);
	INST_IINC(3, 1);
	}
label_9:;
	{
	LINE_NUMBER(249);
	INST_IINC(4, 1);
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(267);
	jint temp0 = (jint)((func_java_lang_StringBuilder_length_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_length_R_int])(ctx, (frame[2].o));
	if (temp0 <= 0) goto label_21;
	}
	{
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, (frame[2].o));
	sp += 1;
	goto label_22;
	}
label_21:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"UNKNOWN"_j));
label_22:;
	popStackFrame(ctx);
	INST_ARETURN();

	popStackFrame(ctx);
}

jobject SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:sanitizeValue", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(271);
	if ((frame[0].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(272);
	popStackFrame(ctx);
	return (((jobject) createStringLiteral(ctx, u8""_j)));
	}
label_1:;
	{
	LINE_NUMBER(274);
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, (frame[0].o), (10), (32));
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (13), (32));
	sp[0].o = (jobject)((func_java_lang_String_replace_char_char_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_replace_char_char_R_java_lang_String])(ctx, sp[0].o, (124), (47));
	sp[0].o = (jobject)((func_java_lang_String_trim_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_trim_R_java_lang_String])(ctx, sp[0].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void clinit_nro_ClientDiagLogger(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	SF_nro_ClientDiagLogger_MAX_BUFFER_ENTRIES = jint(256);
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/ClientDiagLogger:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_ClientDiagLogger(ctx);
	{
	LINE_NUMBER(75);
	clinit_java_util_concurrent_atomic_AtomicLong(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_concurrent_atomic_AtomicLong);
	init_java_util_concurrent_atomic_AtomicLong_long(ctx, sp[0].o, (jlong(0)));
	clinit_nro_ClientDiagLogger(ctx);
	SF_nro_ClientDiagLogger_REQUEST_COUNTER = sp[0].o;
	LINE_NUMBER(76);
	clinit_java_util_ArrayList(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_util_ArrayList);
	init_java_util_ArrayList_int(ctx, sp[0].o, (256));
	clinit_nro_ClientDiagLogger(ctx);
	SF_nro_ClientDiagLogger_RECENT_ENTRIES = sp[0].o;
	LINE_NUMBER(79);
	clinit_nro_ClientDiagLogger(ctx);
	SF_nro_ClientDiagLogger_lastActiveRequestId = (((jobject) createStringLiteral(ctx, u8"NONE"_j)));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_ClientDiagLogger[] {
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

static jclass innerClasses[] {
	&class_nro_ClientDiagLogger$LogEntry,
};

static FieldMetadata fields[] {
	{ "MAX_BUFFER_ENTRIES", &class_int, (intptr_t) &SF_nro_ClientDiagLogger_MAX_BUFFER_ENTRIES, "I", 26 },
	{ "REQUEST_COUNTER", &class_java_util_concurrent_atomic_AtomicLong, (intptr_t) &SF_nro_ClientDiagLogger_REQUEST_COUNTER, "Ljava/util/concurrent/atomic/AtomicLong;", 26 },
	{ "RECENT_ENTRIES", &class_java_util_List, (intptr_t) &SF_nro_ClientDiagLogger_RECENT_ENTRIES, "Ljava/util/List;", 26 },
	{ "cachedDeviceId", &class_java_lang_String, (intptr_t) &SF_nro_ClientDiagLogger_cachedDeviceId, "Ljava/lang/String;", 74 },
	{ "cachedOsVersion", &class_java_lang_String, (intptr_t) &SF_nro_ClientDiagLogger_cachedOsVersion, "Ljava/lang/String;", 74 },
	{ "lastActiveRequestId", &class_java_lang_String, (intptr_t) &SF_nro_ClientDiagLogger_lastActiveRequestId, "Ljava/lang/String;", 74 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_ClientDiagLogger, 0, "()V", 2 },
	{ "nextRequestId", (intptr_t) SM_nro_ClientDiagLogger_nextRequestId_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 9 },
	{ "getLastActiveRequestId", (intptr_t) SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "getDeviceId", (intptr_t) SM_nro_ClientDiagLogger_getDeviceId_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "getAppVersion", (intptr_t) SM_nro_ClientDiagLogger_getAppVersion_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "getOsVersion", (intptr_t) SM_nro_ClientDiagLogger_getOsVersion_R_java_lang_String, 0, "()Ljava/lang/String;", 9 },
	{ "logEvent", (intptr_t) SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lnro/ClientDiagLogger$LogEntry;", 9 },
	{ "logLogoutTrigger", (intptr_t) SM_nro_ClientDiagLogger_logLogoutTrigger_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry, 0, "(Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lnro/ClientDiagLogger$LogEntry;", 9 },
	{ "logException", (intptr_t) SM_nro_ClientDiagLogger_logException_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Throwable_R_nro_ClientDiagLogger$LogEntry, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/Throwable;)Lnro/ClientDiagLogger$LogEntry;", 9 },
	{ "record", (intptr_t) SM_nro_ClientDiagLogger_record_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry, 0, "(Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;ILjava/lang/String;Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)Lnro/ClientDiagLogger$LogEntry;", 10 },
	{ "getRecentLogs", (intptr_t) SM_nro_ClientDiagLogger_getRecentLogs_R_java_util_List, 0, "()Ljava/util/List;", 9 },
	{ "clearRecentLogs", (intptr_t) SM_nro_ClientDiagLogger_clearRecentLogs, 0, "()V", 9 },
	{ "resolveCallerLocation", (intptr_t) SM_nro_ClientDiagLogger_resolveCallerLocation_R_java_lang_String, 0, "()Ljava/lang/String;", 10 },
	{ "resolveCallerChain", (intptr_t) SM_nro_ClientDiagLogger_resolveCallerChain_int_R_java_lang_String, 0, "(I)Ljava/lang/String;", 10 },
	{ "sanitizeValue", (intptr_t) SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String, 0, "(Ljava/lang/String;)Ljava/lang/String;", 10 },
	{ "<clinit>", (intptr_t) clinit_nro_ClientDiagLogger, 0, "()V", 8 },
};

Class class_nro_ClientDiagLogger{
		.nativeName = (intptr_t) "nro/ClientDiagLogger",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_ClientDiagLogger),
		.classVtable = (intptr_t) vtable_nro_ClientDiagLogger,
		.staticInitializer = (intptr_t) clinit_nro_ClientDiagLogger,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_ClientDiagLogger,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 6,
		.nativeFields = (intptr_t) fields,
		.methodCount = 16,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_ClientDiagLogger = registerClass(&class_nro_ClientDiagLogger);

}

