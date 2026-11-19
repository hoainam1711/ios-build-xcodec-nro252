#ifndef HEADER_com_badlogic_gdx_InputProcessor
#define HEADER_com_badlogic_gdx_InputProcessor

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_InputProcessor {
	java_lang_Object parent;
} com_badlogic_gdx_InputProcessor;

extern Class class_com_badlogic_gdx_InputProcessor;


#define INDEX_com_badlogic_gdx_InputProcessor_keyDown_int_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_InputProcessor_keyDown_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_InputProcessor_keyUp_int_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_InputProcessor_keyUp_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define INDEX_com_badlogic_gdx_InputProcessor_keyTyped_char_R_boolean 2
typedef jbool (*func_com_badlogic_gdx_InputProcessor_keyTyped_char_R_boolean)(jcontext ctx, jobject self, jchar param0);
#define INDEX_com_badlogic_gdx_InputProcessor_touchDown_int_int_int_int_R_boolean 3
typedef jbool (*func_com_badlogic_gdx_InputProcessor_touchDown_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_com_badlogic_gdx_InputProcessor_touchUp_int_int_int_int_R_boolean 4
typedef jbool (*func_com_badlogic_gdx_InputProcessor_touchUp_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_com_badlogic_gdx_InputProcessor_touchCancelled_int_int_int_int_R_boolean 5
typedef jbool (*func_com_badlogic_gdx_InputProcessor_touchCancelled_int_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define INDEX_com_badlogic_gdx_InputProcessor_touchDragged_int_int_int_R_boolean 6
typedef jbool (*func_com_badlogic_gdx_InputProcessor_touchDragged_int_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);
#define INDEX_com_badlogic_gdx_InputProcessor_mouseMoved_int_int_R_boolean 7
typedef jbool (*func_com_badlogic_gdx_InputProcessor_mouseMoved_int_int_R_boolean)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_com_badlogic_gdx_InputProcessor_scrolled_float_float_R_boolean 8
typedef jbool (*func_com_badlogic_gdx_InputProcessor_scrolled_float_float_R_boolean)(jcontext ctx, jobject self, jfloat param0, jfloat param1);

void mark_com_badlogic_gdx_InputProcessor(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_InputProcessor(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
