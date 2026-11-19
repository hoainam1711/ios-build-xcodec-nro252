#ifndef HEADER_com_badlogic_gdx_Input$KeyboardHeightObserver
#define HEADER_com_badlogic_gdx_Input$KeyboardHeightObserver

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Input$KeyboardHeightObserver {
	java_lang_Object parent;
} com_badlogic_gdx_Input$KeyboardHeightObserver;

extern Class class_com_badlogic_gdx_Input$KeyboardHeightObserver;


#define INDEX_com_badlogic_gdx_Input$KeyboardHeightObserver_onKeyboardHeightChanged_int 0
typedef void (*func_com_badlogic_gdx_Input$KeyboardHeightObserver_onKeyboardHeightChanged_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input$KeyboardHeightObserver_onKeyboardShow_int 1
typedef void (*func_com_badlogic_gdx_Input$KeyboardHeightObserver_onKeyboardShow_int)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_Input$KeyboardHeightObserver_onKeyboardHide 2
typedef void (*func_com_badlogic_gdx_Input$KeyboardHeightObserver_onKeyboardHide)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Input$KeyboardHeightObserver(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Input$KeyboardHeightObserver(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
