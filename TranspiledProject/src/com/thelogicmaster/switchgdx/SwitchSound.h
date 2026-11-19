#ifndef HEADER_com_thelogicmaster_switchgdx_SwitchSound
#define HEADER_com_thelogicmaster_switchgdx_SwitchSound

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/audio/Sound.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_thelogicmaster_switchgdx_SwitchSound {
	java_lang_Object parent;
	jlong F_handle;
	jref F_instanceMap;
	jbool F_disposed;
	jint F_id;
	jref F_soundPool;
	jref F_listeners;
	jref F_wavData;
} com_thelogicmaster_switchgdx_SwitchSound;

extern Class class_com_thelogicmaster_switchgdx_SwitchSound;


#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_hashCode_R_int 0
typedef jint (*func_com_thelogicmaster_switchgdx_SwitchSound_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchSound_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_clone_R_java_lang_Object 2
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchSound_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_getClass_R_java_lang_Class 3
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchSound_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_toString_R_java_lang_String 4
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchSound_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_finalize 5
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_notify 6
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_notify)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_notifyAll 7
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_wait 8
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_wait)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_wait_long 9
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_wait_long_int 10
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_dispose 11
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_R_long 12
typedef jlong (*func_com_thelogicmaster_switchgdx_SwitchSound_play_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long 13
typedef jlong (*func_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long 14
typedef jlong (*func_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_loop_R_long 15
typedef jlong (*func_com_thelogicmaster_switchgdx_SwitchSound_loop_R_long)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long 16
typedef jlong (*func_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long 17
typedef jlong (*func_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_stop 18
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_stop)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_pause 19
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_pause)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_resume 20
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_resume)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_stop_long 21
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_stop_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_pause_long 22
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_pause_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_resume_long 23
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_resume_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setLooping_long_boolean 24
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_setLooping_long_boolean)(jcontext ctx, jobject self, jlong param0, jbool param1);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setPitch_long_float 25
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_setPitch_long_float)(jcontext ctx, jobject self, jlong param0, jfloat param1);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setVolume_long_float 26
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_setVolume_long_float)(jcontext ctx, jobject self, jlong param0, jfloat param1);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setPan_long_float_float 27
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_setPan_long_float_float)(jcontext ctx, jobject self, jlong param0, jfloat param1, jfloat param2);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean 28
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int 29
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_addListener_com_thelogicmaster_switchgdx_SwitchSound$Listener 30
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_addListener_com_thelogicmaster_switchgdx_SwitchSound$Listener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_removeListener_com_thelogicmaster_switchgdx_SwitchSound$Listener 31
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_removeListener_com_thelogicmaster_switchgdx_SwitchSound$Listener)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long 32
typedef jlong (*func_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_create_java_lang_String 33
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_create_java_lang_String)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_create_Array1_byte 34
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_create_Array1_byte)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_dispose0 35
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_dispose0)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_play0_boolean_R_int 36
typedef jint (*func_com_thelogicmaster_switchgdx_SwitchSound_play0_boolean_R_int)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound_setLooping0_int_boolean 37
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound_setLooping0_int_boolean)(jcontext ctx, jobject self, jint param0, jbool param1);

void mark_com_thelogicmaster_switchgdx_SwitchSound(jobject object, jint mark, jint depth);
void clinit_com_thelogicmaster_switchgdx_SwitchSound(jcontext ctx);
void init_com_thelogicmaster_switchgdx_SwitchSound_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0);
void init_com_thelogicmaster_switchgdx_SwitchSound_Array1_byte(jcontext ctx, jobject self, jobject param0);
jbool M_com_thelogicmaster_switchgdx_SwitchSound_update_R_boolean(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchSound_onSoundFinished_int(jcontext ctx, jobject self, jint param0);
void M_com_thelogicmaster_switchgdx_SwitchSound_addListener_com_thelogicmaster_switchgdx_SwitchSound$Listener(jcontext ctx, jobject self, jobject param0);
void M_com_thelogicmaster_switchgdx_SwitchSound_removeListener_com_thelogicmaster_switchgdx_SwitchSound$Listener(jcontext ctx, jobject self, jobject param0);
jlong M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_boolean_R_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jbool param3);
jlong M_com_thelogicmaster_switchgdx_SwitchSound_play_R_long(jcontext ctx, jobject self);
jlong M_com_thelogicmaster_switchgdx_SwitchSound_play_float_R_long(jcontext ctx, jobject self, jfloat param0);
jlong M_com_thelogicmaster_switchgdx_SwitchSound_play_float_float_float_R_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
jlong M_com_thelogicmaster_switchgdx_SwitchSound_loop_R_long(jcontext ctx, jobject self);
jlong M_com_thelogicmaster_switchgdx_SwitchSound_loop_float_R_long(jcontext ctx, jobject self, jfloat param0);
jlong M_com_thelogicmaster_switchgdx_SwitchSound_loop_float_float_float_R_long(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2);
void M_com_thelogicmaster_switchgdx_SwitchSound_stop(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchSound_pause(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchSound_resume(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchSound_dispose(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchSound_stop_long(jcontext ctx, jobject self, jlong param0);
void M_com_thelogicmaster_switchgdx_SwitchSound_pause_long(jcontext ctx, jobject self, jlong param0);
void M_com_thelogicmaster_switchgdx_SwitchSound_resume_long(jcontext ctx, jobject self, jlong param0);
void M_com_thelogicmaster_switchgdx_SwitchSound_setLooping_long_boolean(jcontext ctx, jobject self, jlong param0, jbool param1);
void M_com_thelogicmaster_switchgdx_SwitchSound_setPitch_long_float(jcontext ctx, jobject self, jlong param0, jfloat param1);
void M_com_thelogicmaster_switchgdx_SwitchSound_setVolume_long_float(jcontext ctx, jobject self, jlong param0, jfloat param1);
void M_com_thelogicmaster_switchgdx_SwitchSound_setPan_long_float_float(jcontext ctx, jobject self, jlong param0, jfloat param1, jfloat param2);
void M_com_thelogicmaster_switchgdx_SwitchSound_create_java_lang_String(jcontext ctx, jobject self, jobject param0);
void M_com_thelogicmaster_switchgdx_SwitchSound_create_Array1_byte(jcontext ctx, jobject self, jobject param0);
void M_com_thelogicmaster_switchgdx_SwitchSound_dispose0(jcontext ctx, jobject self);
jint M_com_thelogicmaster_switchgdx_SwitchSound_play0_boolean_R_int(jcontext ctx, jobject self, jbool param0);
void M_com_thelogicmaster_switchgdx_SwitchSound_setLooping0_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
void SM_com_thelogicmaster_switchgdx_SwitchSound_stop0_int(jcontext ctx, jint param0);
void SM_com_thelogicmaster_switchgdx_SwitchSound_pause0_int(jcontext ctx, jint param0);
void SM_com_thelogicmaster_switchgdx_SwitchSound_resume0_int(jcontext ctx, jint param0);
void SM_com_thelogicmaster_switchgdx_SwitchSound_setPitch0_int_float(jcontext ctx, jint param0, jfloat param1);
void SM_com_thelogicmaster_switchgdx_SwitchSound_setVolume0_int_float(jcontext ctx, jint param0, jfloat param1);
void SM_com_thelogicmaster_switchgdx_SwitchSound_setPan0_int_float(jcontext ctx, jint param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
