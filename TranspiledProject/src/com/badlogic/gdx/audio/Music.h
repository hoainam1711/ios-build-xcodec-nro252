#ifndef HEADER_com_badlogic_gdx_audio_Music
#define HEADER_com_badlogic_gdx_audio_Music

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_audio_Music {
	java_lang_Object parent;
} com_badlogic_gdx_audio_Music;

extern Class class_com_badlogic_gdx_audio_Music;


#define INDEX_com_badlogic_gdx_audio_Music_play 0
typedef void (*func_com_badlogic_gdx_audio_Music_play)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Music_pause 1
typedef void (*func_com_badlogic_gdx_audio_Music_pause)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Music_stop 2
typedef void (*func_com_badlogic_gdx_audio_Music_stop)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Music_isPlaying_R_boolean 3
typedef jbool (*func_com_badlogic_gdx_audio_Music_isPlaying_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Music_setLooping_boolean 4
typedef void (*func_com_badlogic_gdx_audio_Music_setLooping_boolean)(jcontext ctx, jobject self, jbool param0);
#define INDEX_com_badlogic_gdx_audio_Music_isLooping_R_boolean 5
typedef jbool (*func_com_badlogic_gdx_audio_Music_isLooping_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Music_setVolume_float 6
typedef void (*func_com_badlogic_gdx_audio_Music_setVolume_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_com_badlogic_gdx_audio_Music_getVolume_R_float 7
typedef jfloat (*func_com_badlogic_gdx_audio_Music_getVolume_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Music_setPan_float_float 8
typedef void (*func_com_badlogic_gdx_audio_Music_setPan_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define INDEX_com_badlogic_gdx_audio_Music_setPosition_float 9
typedef void (*func_com_badlogic_gdx_audio_Music_setPosition_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_com_badlogic_gdx_audio_Music_getPosition_R_float 10
typedef jfloat (*func_com_badlogic_gdx_audio_Music_getPosition_R_float)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Music_dispose 11
typedef void (*func_com_badlogic_gdx_audio_Music_dispose)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Music_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener 12
typedef void (*func_com_badlogic_gdx_audio_Music_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener)(jcontext ctx, jobject self, jobject param0);

void mark_com_badlogic_gdx_audio_Music(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_audio_Music(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
