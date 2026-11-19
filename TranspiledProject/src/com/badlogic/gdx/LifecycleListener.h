#ifndef HEADER_com_badlogic_gdx_LifecycleListener
#define HEADER_com_badlogic_gdx_LifecycleListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_LifecycleListener {
	java_lang_Object parent;
} com_badlogic_gdx_LifecycleListener;

extern Class class_com_badlogic_gdx_LifecycleListener;


#define INDEX_com_badlogic_gdx_LifecycleListener_pause 0
typedef void (*func_com_badlogic_gdx_LifecycleListener_pause)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_LifecycleListener_resume 1
typedef void (*func_com_badlogic_gdx_LifecycleListener_resume)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_LifecycleListener_dispose 2
typedef void (*func_com_badlogic_gdx_LifecycleListener_dispose)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_LifecycleListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_LifecycleListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
