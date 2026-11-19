#ifndef HEADER_com_badlogic_gdx_audio_AudioRecorder
#define HEADER_com_badlogic_gdx_audio_AudioRecorder

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_audio_AudioRecorder {
	java_lang_Object parent;
} com_badlogic_gdx_audio_AudioRecorder;

extern Class class_com_badlogic_gdx_audio_AudioRecorder;


#define INDEX_com_badlogic_gdx_audio_AudioRecorder_read_Array1_short_int_int 0
typedef void (*func_com_badlogic_gdx_audio_AudioRecorder_read_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define INDEX_com_badlogic_gdx_audio_AudioRecorder_dispose 1
typedef void (*func_com_badlogic_gdx_audio_AudioRecorder_dispose)(jcontext ctx, jobject self);

void mark_com_badlogic_gdx_audio_AudioRecorder(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_audio_AudioRecorder(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
