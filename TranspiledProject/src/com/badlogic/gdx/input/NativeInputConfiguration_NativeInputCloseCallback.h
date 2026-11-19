#ifndef HEADER_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback
#define HEADER_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback {
	java_lang_Object parent;
} com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback;

extern Class class_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback;


#define INDEX_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_onClose_boolean_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback_onClose_boolean_R_boolean)(jcontext ctx, jobject self, jbool param0);

void mark_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_input_NativeInputConfiguration$NativeInputCloseCallback(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
