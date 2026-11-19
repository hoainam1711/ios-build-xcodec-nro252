#ifndef HEADER_com_badlogic_gdx_utils_Clipboard
#define HEADER_com_badlogic_gdx_utils_Clipboard

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_Clipboard {
	java_lang_Object parent;
} com_badlogic_gdx_utils_Clipboard;

extern Class class_com_badlogic_gdx_utils_Clipboard;


#define INDEX_com_badlogic_gdx_utils_Clipboard_hasContents_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_utils_Clipboard_hasContents_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String 1
typedef jobject (*func_com_badlogic_gdx_utils_Clipboard_getContents_R_java_lang_String)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_utils_Clipboard_setContents_java_lang_String 2
typedef void (*func_com_badlogic_gdx_utils_Clipboard_setContents_java_lang_String)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_utils_Clipboard(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_Clipboard(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
