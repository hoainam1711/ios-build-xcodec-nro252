#ifndef HEADER_com_nro_GameMain$IDesktopInputBridge
#define HEADER_com_nro_GameMain$IDesktopInputBridge

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_GameMain$IDesktopInputBridge {
	java_lang_Object parent;
} com_nro_GameMain$IDesktopInputBridge;

extern Class class_com_nro_GameMain$IDesktopInputBridge;


#define INDEX_com_nro_GameMain$IDesktopInputBridge_getClipboardText_R_java_lang_String 0
typedef jobject (*func_com_nro_GameMain$IDesktopInputBridge_getClipboardText_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IDesktopInputBridge_setClipboardText_java_lang_String 1
typedef void (*func_com_nro_GameMain$IDesktopInputBridge_setClipboardText_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_nro_GameMain$IDesktopInputBridge_setTextInputActive_boolean 2
typedef void (*func_com_nro_GameMain$IDesktopInputBridge_setTextInputActive_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_com_nro_GameMain$IDesktopInputBridge(jobject object, jint mark, jint depth);
void clinit_com_nro_GameMain$IDesktopInputBridge(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
