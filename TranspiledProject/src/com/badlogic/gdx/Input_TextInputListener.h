#ifndef HEADER_com_badlogic_gdx_Input$TextInputListener
#define HEADER_com_badlogic_gdx_Input$TextInputListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_Input$TextInputListener {
	java_lang_Object parent;
} com_badlogic_gdx_Input$TextInputListener;

extern Class class_com_badlogic_gdx_Input$TextInputListener;


#define INDEX_com_badlogic_gdx_Input$TextInputListener_input_java_lang_String 0
typedef void (*func_com_badlogic_gdx_Input$TextInputListener_input_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define INDEX_com_badlogic_gdx_Input$TextInputListener_canceled 1
typedef void (*func_com_badlogic_gdx_Input$TextInputListener_canceled)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_Input$TextInputListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_Input$TextInputListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
