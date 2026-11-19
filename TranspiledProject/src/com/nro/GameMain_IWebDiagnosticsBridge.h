#ifndef HEADER_com_nro_GameMain$IWebDiagnosticsBridge
#define HEADER_com_nro_GameMain$IWebDiagnosticsBridge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_GameMain$IWebDiagnosticsBridge {
	java_lang_Object parent;
} com_nro_GameMain$IWebDiagnosticsBridge;

extern Class class_com_nro_GameMain$IWebDiagnosticsBridge;


#define INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportMetrics_int_int_int_int_int_int_int_int_int_java_lang_String_int_boolean 0
typedef void (*func_com_nro_GameMain$IWebDiagnosticsBridge_reportMetrics_int_int_int_int_int_int_int_int_int_java_lang_String_int_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jint param7, jint param8, jobject param9, jint param10, jbool param11);
#define INDEX_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String 1
typedef void (*func_com_nro_GameMain$IWebDiagnosticsBridge_reportEvent_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);

void mark_com_nro_GameMain$IWebDiagnosticsBridge(jobject object, jint mark, jint depth);
void clinit_com_nro_GameMain$IWebDiagnosticsBridge(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
