#ifndef HEADER_com_badlogic_gdx_ApplicationListener
#define HEADER_com_badlogic_gdx_ApplicationListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_ApplicationListener {
	java_lang_Object parent;
} com_badlogic_gdx_ApplicationListener;

extern Class class_com_badlogic_gdx_ApplicationListener;


#define INDEX_com_badlogic_gdx_ApplicationListener_create 0
typedef void (*func_com_badlogic_gdx_ApplicationListener_create)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_ApplicationListener_resize_int_int 1
typedef void (*func_com_badlogic_gdx_ApplicationListener_resize_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define INDEX_com_badlogic_gdx_ApplicationListener_render 2
typedef void (*func_com_badlogic_gdx_ApplicationListener_render)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_ApplicationListener_pause 3
typedef void (*func_com_badlogic_gdx_ApplicationListener_pause)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_ApplicationListener_resume 4
typedef void (*func_com_badlogic_gdx_ApplicationListener_resume)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_ApplicationListener_dispose 5
typedef void (*func_com_badlogic_gdx_ApplicationListener_dispose)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_ApplicationListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_ApplicationListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
