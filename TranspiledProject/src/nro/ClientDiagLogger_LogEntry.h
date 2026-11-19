#ifndef HEADER_nro_ClientDiagLogger$LogEntry
#define HEADER_nro_ClientDiagLogger$LogEntry

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ClientDiagLogger$LogEntry {
	java_lang_Object parent;
	jlong F_timestampMs;
	jref F_timestampIso;
	jref F_deviceId;
	jref F_appVersion;
	jref F_osVersion;
	jref F_requestId;
	jref F_event;
	jref F_endpoint;
	jint F_statusCode;
	jref F_errorCode;
	jref F_loginRedirectReason;
	jref F_callerLocation;
	jref F_detail;
} nro_ClientDiagLogger$LogEntry;

extern Class class_nro_ClientDiagLogger$LogEntry;


#define VTABLE_nro_ClientDiagLogger$LogEntry_hashCode_R_int 0
typedef jint (*func_nro_ClientDiagLogger$LogEntry_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger$LogEntry_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ClientDiagLogger$LogEntry_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ClientDiagLogger$LogEntry_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ClientDiagLogger$LogEntry_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger$LogEntry_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ClientDiagLogger$LogEntry_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger$LogEntry_toString_R_java_lang_String 4
typedef jobject (*func_nro_ClientDiagLogger$LogEntry_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger$LogEntry_finalize 5
typedef void (*func_nro_ClientDiagLogger$LogEntry_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger$LogEntry_notify 6
typedef void (*func_nro_ClientDiagLogger$LogEntry_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger$LogEntry_notifyAll 7
typedef void (*func_nro_ClientDiagLogger$LogEntry_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger$LogEntry_wait 8
typedef void (*func_nro_ClientDiagLogger$LogEntry_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ClientDiagLogger$LogEntry_wait_long 9
typedef void (*func_nro_ClientDiagLogger$LogEntry_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ClientDiagLogger$LogEntry_wait_long_int 10
typedef void (*func_nro_ClientDiagLogger$LogEntry_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String 11
typedef jobject (*func_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String)(jcontext ctx, jobject self);

void mark_nro_ClientDiagLogger$LogEntry(jobject object, jint mark, jint depth);
void clinit_nro_ClientDiagLogger$LogEntry(jcontext ctx);
void init_nro_ClientDiagLogger$LogEntry_long_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_java_lang_String_int_java_lang_String_java_lang_String_java_lang_String_java_lang_String(jcontext ctx, jobject self, jlong param0, jobject param1, jobject param2, jobject param3, jobject param4, jobject param5, jobject param6, jobject param7, jint param8, jobject param9, jobject param10, jobject param11, jobject param12);
jobject M_nro_ClientDiagLogger$LogEntry_formatLine_R_java_lang_String(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
