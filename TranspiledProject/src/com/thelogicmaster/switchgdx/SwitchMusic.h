#ifndef HEADER_com_thelogicmaster_switchgdx_SwitchMusic
#define HEADER_com_thelogicmaster_switchgdx_SwitchMusic

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/audio/Music.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_thelogicmaster_switchgdx_SwitchMusic {
	java_lang_Object parent;
	jlong F_handle;
	jref F_listener;
	jbool F_paused;
	jbool F_playing;
	jbool F_looping;
	jfloat F_volume;
	jfloat F_position;
	jbool F_disposed;
} com_thelogicmaster_switchgdx_SwitchMusic;

extern Class class_com_thelogicmaster_switchgdx_SwitchMusic;


#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_hashCode_R_int 0
typedef jint (*func_com_thelogicmaster_switchgdx_SwitchMusic_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchMusic_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_clone_R_java_lang_Object 2
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchMusic_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_getClass_R_java_lang_Class 3
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchMusic_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_toString_R_java_lang_String 4
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchMusic_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_finalize 5
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_notify 6
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_notify)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_notifyAll 7
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_wait 8
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_wait)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_wait_long 9
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_wait_long_int 10
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_dispose 11
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_play 12
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_play)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_pause 13
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_pause)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_stop 14
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_stop)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean 15
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setLooping_boolean 16
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_setLooping_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_isLooping_R_boolean 17
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchMusic_isLooping_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setVolume_float 18
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_setVolume_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_getVolume_R_float 19
typedef jfloat (*func_com_thelogicmaster_switchgdx_SwitchMusic_getVolume_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setPan_float_float 20
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_setPan_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setPosition_float 21
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_setPosition_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_getPosition_R_float 22
typedef jfloat (*func_com_thelogicmaster_switchgdx_SwitchMusic_getPosition_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener 23
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean 24
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished 25
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_create_java_lang_String 26
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_create_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean 27
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_dispose0 28
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_dispose0)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchMusic_lambda$onMusicFinished$0 29
typedef void (*func_com_thelogicmaster_switchgdx_SwitchMusic_lambda$onMusicFinished$0)(jcontext ctx, jobject self);

void mark_com_thelogicmaster_switchgdx_SwitchMusic(jobject object, jint mark, jint depth);
void clinit_com_thelogicmaster_switchgdx_SwitchMusic(jcontext ctx);
void init_com_thelogicmaster_switchgdx_SwitchMusic_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0);
jbool M_com_thelogicmaster_switchgdx_SwitchMusic_update_float_R_boolean(jcontext ctx, jobject self, jfloat param0);
void M_com_thelogicmaster_switchgdx_SwitchMusic_onMusicFinished(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_play(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_pause(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_stop(jcontext ctx, jobject self);
jbool M_com_thelogicmaster_switchgdx_SwitchMusic_isPlaying_R_boolean(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_setLooping_boolean(jcontext ctx, jobject self, jbool param0);
jbool M_com_thelogicmaster_switchgdx_SwitchMusic_isLooping_R_boolean(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_setVolume_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_com_thelogicmaster_switchgdx_SwitchMusic_getVolume_R_float(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_setPan_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_thelogicmaster_switchgdx_SwitchMusic_setPosition_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_com_thelogicmaster_switchgdx_SwitchMusic_getPosition_R_float(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_dispose(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_setOnCompletionListener_com_badlogic_gdx_audio_Music$OnCompletionListener(jcontext ctx, jobject self, jobject param0);
void M_com_thelogicmaster_switchgdx_SwitchMusic_create_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_thelogicmaster_switchgdx_SwitchMusic_start_boolean(jcontext ctx, jobject self, jbool param0);
void SM_com_thelogicmaster_switchgdx_SwitchMusic_resume(jcontext ctx);
void SM_com_thelogicmaster_switchgdx_SwitchMusic_pause0(jcontext ctx);
void SM_com_thelogicmaster_switchgdx_SwitchMusic_stop0(jcontext ctx);
void SM_com_thelogicmaster_switchgdx_SwitchMusic_setVolume0_float(jcontext ctx, jfloat param0);
void SM_com_thelogicmaster_switchgdx_SwitchMusic_setPosition0_float(jcontext ctx, jfloat param0);
void M_com_thelogicmaster_switchgdx_SwitchMusic_dispose0(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchMusic_lambda$onMusicFinished$0(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
