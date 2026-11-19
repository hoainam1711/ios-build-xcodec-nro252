#ifndef HEADER_com_badlogic_gdx_audio_Sound
#define HEADER_com_badlogic_gdx_audio_Sound

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_audio_Sound {
	java_lang_Object parent;
} com_badlogic_gdx_audio_Sound;

extern Class class_com_badlogic_gdx_audio_Sound;


#define INDEX_com_badlogic_gdx_audio_Sound_play_R_long 0
typedef jlong (*func_com_badlogic_gdx_audio_Sound_play_R_long)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Sound_play_float_R_long 1
typedef jlong (*func_com_badlogic_gdx_audio_Sound_play_float_R_long)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_com_badlogic_gdx_audio_Sound_play_float_float_float_R_long 2
typedef jlong (*func_com_badlogic_gdx_audio_Sound_play_float_float_float_R_long)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define INDEX_com_badlogic_gdx_audio_Sound_loop_R_long 3
typedef jlong (*func_com_badlogic_gdx_audio_Sound_loop_R_long)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Sound_loop_float_R_long 4
typedef jlong (*func_com_badlogic_gdx_audio_Sound_loop_float_R_long)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_com_badlogic_gdx_audio_Sound_loop_float_float_float_R_long 5
typedef jlong (*func_com_badlogic_gdx_audio_Sound_loop_float_float_float_R_long)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define INDEX_com_badlogic_gdx_audio_Sound_stop 6
typedef void (*func_com_badlogic_gdx_audio_Sound_stop)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Sound_pause 7
typedef void (*func_com_badlogic_gdx_audio_Sound_pause)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Sound_resume 8
typedef void (*func_com_badlogic_gdx_audio_Sound_resume)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Sound_dispose 9
typedef void (*func_com_badlogic_gdx_audio_Sound_dispose)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_Sound_stop_long 10
typedef void (*func_com_badlogic_gdx_audio_Sound_stop_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_com_badlogic_gdx_audio_Sound_pause_long 11
typedef void (*func_com_badlogic_gdx_audio_Sound_pause_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_com_badlogic_gdx_audio_Sound_resume_long 12
typedef void (*func_com_badlogic_gdx_audio_Sound_resume_long)(jcontext ctx, jobject self, jlong param0);
#define INDEX_com_badlogic_gdx_audio_Sound_setLooping_long_boolean 13
typedef void (*func_com_badlogic_gdx_audio_Sound_setLooping_long_boolean)(jcontext ctx, jobject self, jlong param0, jbool param1);
#define INDEX_com_badlogic_gdx_audio_Sound_setPitch_long_float 14
typedef void (*func_com_badlogic_gdx_audio_Sound_setPitch_long_float)(jcontext ctx, jobject self, jlong param0, jfloat param1);
#define INDEX_com_badlogic_gdx_audio_Sound_setVolume_long_float 15
typedef void (*func_com_badlogic_gdx_audio_Sound_setVolume_long_float)(jcontext ctx, jobject self, jlong param0, jfloat param1);
#define INDEX_com_badlogic_gdx_audio_Sound_setPan_long_float_float 16
typedef void (*func_com_badlogic_gdx_audio_Sound_setPan_long_float_float)(jcontext ctx, jobject self, jlong param0, jfloat param1, jfloat param2);

void mark_com_badlogic_gdx_audio_Sound(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_audio_Sound(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
