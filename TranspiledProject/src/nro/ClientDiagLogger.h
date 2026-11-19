#ifndef HEADER_nro_ClientDiagLogger
#define HEADER_nro_ClientDiagLogger

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ClientDiagLogger {
	java_lang_Object parent;
} nro_ClientDiagLogger;

extern Class class_nro_ClientDiagLogger;

extern jint SF_nro_ClientDiagLogger_MAX_BUFFER_ENTRIES;
extern jobject SF_nro_ClientDiagLogger_REQUEST_COUNTER;
extern jobject SF_nro_ClientDiagLogger_RECENT_ENTRIES;
extern volatile jobject SF_nro_ClientDiagLogger_cachedDeviceId;
extern volatile jobject SF_nro_ClientDiagLogger_cachedOsVersion;
extern volatile jobject SF_nro_ClientDiagLogger_lastActiveRequestId;

#define VTABLE_nro_ClientDiagLogger_hashCode_R_int 0
typedef jint (*func_nro_ClientDiagLogger_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ClientDiagLogger_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ClientDiagLogger_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ClientDiagLogger_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ClientDiagLogger_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger_toString_R_java_lang_String 4
typedef jobject (*func_nro_ClientDiagLogger_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger_finalize 5
typedef void (*func_nro_ClientDiagLogger_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger_notify 6
typedef void (*func_nro_ClientDiagLogger_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger_notifyAll 7
typedef void (*func_nro_ClientDiagLogger_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger_wait 8
typedef void (*func_nro_ClientDiagLogger_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger_wait_long 9
typedef void (*func_nro_ClientDiagLogger_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ClientDiagLogger_wait_long_int 10
typedef void (*func_nro_ClientDiagLogger_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_ClientDiagLogger(jobject object, jint mark, jint depth);
void clinit_nro_ClientDiagLogger(jcontext ctx);
void init_nro_ClientDiagLogger(jcontext ctx, jobject self);
jobject SM_nro_ClientDiagLogger_nextRequestId_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);
jobject SM_nro_ClientDiagLogger_getLastActiveRequestId_R_java_lang_String(jcontext ctx);
jobject SM_nro_ClientDiagLogger_getDeviceId_R_java_lang_String(jcontext ctx);
jobject SM_nro_ClientDiagLogger_getAppVersion_R_java_lang_String(jcontext ctx);
jobject SM_nro_ClientDiagLogger_getOsVersion_R_java_lang_String(jcontext ctx);
jobject SM_nro_ClientDiagLogger_logEvent_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6);
jobject SM_nro_ClientDiagLogger_logLogoutTrigger_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(jcontext ctx, jobject param0, jint param1, jobject param2, jobject param3, jobject param4);
jobject SM_nro_ClientDiagLogger_logException_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_Throwable_R_nro_ClientDiagLogger$LogEntry(jcontext ctx, jobject param0, jobject param1, jobject param2, jobject param3, jobject param4);
jobject SM_nro_ClientDiagLogger_record_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String_R_nro_ClientDiagLogger$LogEntry(jcontext ctx, jobject param0, jobject param1, jobject param2, jint param3, jobject param4, jobject param5, jobject param6, jobject param7);
jobject SM_nro_ClientDiagLogger_getRecentLogs_R_java_util_List(jcontext ctx);
void SM_nro_ClientDiagLogger_clearRecentLogs(jcontext ctx);
jobject SM_nro_ClientDiagLogger_resolveCallerLocation_R_java_lang_String(jcontext ctx);
jobject SM_nro_ClientDiagLogger_resolveCallerChain_int_R_java_lang_String(jcontext ctx, jint param0);
jobject SM_nro_ClientDiagLogger_sanitizeValue_java_lang_String_R_java_lang_String(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
