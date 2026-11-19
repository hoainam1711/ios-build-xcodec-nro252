#ifndef HEADER_com_badlogic_gdx_utils_async_AsyncTask
#define HEADER_com_badlogic_gdx_utils_async_AsyncTask

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_utils_async_AsyncTask {
	java_lang_Object parent;
} com_badlogic_gdx_utils_async_AsyncTask;

extern Class class_com_badlogic_gdx_utils_async_AsyncTask;


#define INDEX_com_badlogic_gdx_utils_async_AsyncTask_call_R_java_lang_Object 0
typedef jobject (*func_com_badlogic_gdx_utils_async_AsyncTask_call_R_java_lang_Object)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_utils_async_AsyncTask(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_utils_async_AsyncTask(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
