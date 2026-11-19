#ifndef HEADER_com_badlogic_gdx_audio_AudioDevice
#define HEADER_com_badlogic_gdx_audio_AudioDevice

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_audio_AudioDevice {
	java_lang_Object parent;
} com_badlogic_gdx_audio_AudioDevice;

extern Class class_com_badlogic_gdx_audio_AudioDevice;


#define INDEX_com_badlogic_gdx_audio_AudioDevice_isMono_R_boolean 0
typedef jbool (*func_com_badlogic_gdx_audio_AudioDevice_isMono_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_AudioDevice_writeSamples_Array1_short_int_int 1
typedef void (*func_com_badlogic_gdx_audio_AudioDevice_writeSamples_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_com_badlogic_gdx_audio_AudioDevice_writeSamples_Array1_float_int_int 2
typedef void (*func_com_badlogic_gdx_audio_AudioDevice_writeSamples_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_com_badlogic_gdx_audio_AudioDevice_getLatency_R_int 3
typedef jint (*func_com_badlogic_gdx_audio_AudioDevice_getLatency_R_int)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_AudioDevice_dispose 4
typedef void (*func_com_badlogic_gdx_audio_AudioDevice_dispose)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_AudioDevice_setVolume_float 5
typedef void (*func_com_badlogic_gdx_audio_AudioDevice_setVolume_float)(jcontext ctx, jobject self, jfloat param0);
#define INDEX_com_badlogic_gdx_audio_AudioDevice_pause 6
typedef void (*func_com_badlogic_gdx_audio_AudioDevice_pause)(jcontext ctx, jobject self);
#define INDEX_com_badlogic_gdx_audio_AudioDevice_resume 7
typedef void (*func_com_badlogic_gdx_audio_AudioDevice_resume)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_audio_AudioDevice(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_audio_AudioDevice(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
