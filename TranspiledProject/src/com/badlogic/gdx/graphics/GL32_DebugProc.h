#ifndef HEADER_com_badlogic_gdx_graphics_GL32$DebugProc
#define HEADER_com_badlogic_gdx_graphics_GL32$DebugProc

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_GL32$DebugProc {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_GL32$DebugProc;

extern Class class_com_badlogic_gdx_graphics_GL32$DebugProc;


#define INDEX_com_badlogic_gdx_graphics_GL32$DebugProc_onMessage_int_int_int_int_java_lang_String 0
typedef void (*func_com_badlogic_gdx_graphics_GL32$DebugProc_onMessage_int_int_int_int_java_lang_String)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jobject param4);

void mark_com_badlogic_gdx_graphics_GL32$DebugProc(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_GL32$DebugProc(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
