#ifndef HEADER_com_badlogic_gdx_input_TextInputWrapper
#define HEADER_com_badlogic_gdx_input_TextInputWrapper

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_input_TextInputWrapper {
	java_lang_Object parent;
} com_badlogic_gdx_input_TextInputWrapper;

extern Class class_com_badlogic_gdx_input_TextInputWrapper;


#define INDEX_com_badlogic_gdx_input_TextInputWrapper_getText_R_java_lang_String 0
typedef jobject (*func_com_badlogic_gdx_input_TextInputWrapper_getText_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_input_TextInputWrapper_getSelectionStart_R_int 1
typedef jint (*func_com_badlogic_gdx_input_TextInputWrapper_getSelectionStart_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_input_TextInputWrapper_getSelectionEnd_R_int 2
typedef jint (*func_com_badlogic_gdx_input_TextInputWrapper_getSelectionEnd_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_input_TextInputWrapper_writeResults_java_lang_String_int_int 3
typedef void (*func_com_badlogic_gdx_input_TextInputWrapper_writeResults_java_lang_String_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_com_badlogic_gdx_input_TextInputWrapper(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_input_TextInputWrapper(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
