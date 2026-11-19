#ifndef HEADER_com_badlogic_gdx_graphics_Cursor
#define HEADER_com_badlogic_gdx_graphics_Cursor

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_Cursor {
	java_lang_Object parent;
} com_badlogic_gdx_graphics_Cursor;

extern Class class_com_badlogic_gdx_graphics_Cursor;



void mark_com_badlogic_gdx_graphics_Cursor(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_Cursor(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
