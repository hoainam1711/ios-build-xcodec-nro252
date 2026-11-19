#ifndef HEADER_com_badlogic_gdx_audio_Music$OnCompletionListener
#define HEADER_com_badlogic_gdx_audio_Music$OnCompletionListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_audio_Music$OnCompletionListener {
	java_lang_Object parent;
} com_badlogic_gdx_audio_Music$OnCompletionListener;

extern Class class_com_badlogic_gdx_audio_Music$OnCompletionListener;


#define INDEX_com_badlogic_gdx_audio_Music$OnCompletionListener_onCompletion_com_badlogic_gdx_audio_Music 0
typedef void (*func_com_badlogic_gdx_audio_Music$OnCompletionListener_onCompletion_com_badlogic_gdx_audio_Music)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_audio_Music$OnCompletionListener(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_audio_Music$OnCompletionListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
