#ifndef HEADER_com_nro_GameMain$IWebInputBridge
#define HEADER_com_nro_GameMain$IWebInputBridge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_GameMain$IWebInputBridge {
	java_lang_Object parent;
} com_nro_GameMain$IWebInputBridge;

extern Class class_com_nro_GameMain$IWebInputBridge;


#define INDEX_com_nro_GameMain$IWebInputBridge_openPrompt_java_lang_String_java_lang_String_int_int_com_badlogic_gdx_Input$TextInputListener 0
typedef void (*func_com_nro_GameMain$IWebInputBridge_openPrompt_java_lang_String_java_lang_String_int_int_com_badlogic_gdx_Input$TextInputListener)(jcontext ctx, jobject self, jobject param0, jobject param1, jint param2, jint param3, jobject param4);
#define INDEX_com_nro_GameMain$IWebInputBridge_closePrompt 1
typedef void (*func_com_nro_GameMain$IWebInputBridge_closePrompt)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IWebInputBridge_isOpen_R_boolean 2
typedef jbool (*func_com_nro_GameMain$IWebInputBridge_isOpen_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IWebInputBridge_pollLiveText_R_java_lang_String 3
typedef jobject (*func_com_nro_GameMain$IWebInputBridge_pollLiveText_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IWebInputBridge_pollSubmittedText_R_java_lang_String 4
typedef jobject (*func_com_nro_GameMain$IWebInputBridge_pollSubmittedText_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IWebInputBridge_pollCancelled_R_boolean 5
typedef jbool (*func_com_nro_GameMain$IWebInputBridge_pollCancelled_R_boolean)(jcontext ctx, jobject self);

void mark_com_nro_GameMain$IWebInputBridge(jobject object, jint mark, jint depth);
void clinit_com_nro_GameMain$IWebInputBridge(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
