#ifndef HEADER_com_nro_GameMain$IWebFpsBridge
#define HEADER_com_nro_GameMain$IWebFpsBridge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_GameMain$IWebFpsBridge {
	java_lang_Object parent;
} com_nro_GameMain$IWebFpsBridge;

extern Class class_com_nro_GameMain$IWebFpsBridge;


#define INDEX_com_nro_GameMain$IWebFpsBridge_setFpsConfig_int_boolean_boolean 0
typedef void (*func_com_nro_GameMain$IWebFpsBridge_setFpsConfig_int_boolean_boolean)(jcontext ctx, jobject self, jint param0, jbool param1, jbool param2);

void mark_com_nro_GameMain$IWebFpsBridge(jobject object, jint mark, jint depth);
void clinit_com_nro_GameMain$IWebFpsBridge(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
