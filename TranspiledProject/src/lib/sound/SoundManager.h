#ifndef HEADER_lib_sound_SoundManager
#define HEADER_lib_sound_SoundManager

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/utils/Disposable.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct lib_sound_SoundManager {
	java_lang_Object parent;
	jref F_musicMap;
	jref F_soundMap;
	jref F_soundIds;
	jref F_musLoopIds;
	jint F_musicCount;
} lib_sound_SoundManager;

extern Class class_lib_sound_SoundManager;


#define VTABLE_lib_sound_SoundManager_hashCode_R_int 0
typedef jint (*func_lib_sound_SoundManager_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_lib_sound_SoundManager_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_lib_sound_SoundManager_clone_R_java_lang_Object 2
typedef jobject (*func_lib_sound_SoundManager_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_getClass_R_java_lang_Class 3
typedef jobject (*func_lib_sound_SoundManager_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_toString_R_java_lang_String 4
typedef jobject (*func_lib_sound_SoundManager_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_finalize 5
typedef void (*func_lib_sound_SoundManager_finalize)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_notify 6
typedef void (*func_lib_sound_SoundManager_notify)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_notifyAll 7
typedef void (*func_lib_sound_SoundManager_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_wait 8
typedef void (*func_lib_sound_SoundManager_wait)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_wait_long 9
typedef void (*func_lib_sound_SoundManager_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_lib_sound_SoundManager_wait_long_int 10
typedef void (*func_lib_sound_SoundManager_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_lib_sound_SoundManager_dispose 11
typedef void (*func_lib_sound_SoundManager_dispose)(jcontext ctx, jobject self);
#define VTABLE_lib_sound_SoundManager_loadAll_Array1_int_Array1_int 12
typedef void (*func_lib_sound_SoundManager_loadAll_Array1_int_Array1_int)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define VTABLE_lib_sound_SoundManager_loadMusic_int_int 13
typedef void (*func_lib_sound_SoundManager_loadMusic_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_lib_sound_SoundManager_loadSound_int_int 14
typedef void (*func_lib_sound_SoundManager_loadSound_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_lib_sound_SoundManager_play_int_float 15
typedef void (*func_lib_sound_SoundManager_play_int_float)(jcontext ctx, jobject self, jint param0, jfloat param1);
#define VTABLE_lib_sound_SoundManager_playMus_int_float_boolean 16
typedef void (*func_lib_sound_SoundManager_playMus_int_float_boolean)(jcontext ctx, jobject self, jint param0, jfloat param1, jbool param2);
#define VTABLE_lib_sound_SoundManager_stop_int 17
typedef void (*func_lib_sound_SoundManager_stop_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_sound_SoundManager_stopMus_int 18
typedef void (*func_lib_sound_SoundManager_stopMus_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_lib_sound_SoundManager_stopAll 19
typedef void (*func_lib_sound_SoundManager_stopAll)(jcontext ctx, jobject self);

void mark_lib_sound_SoundManager(jobject object, jint mark, jint depth);
void clinit_lib_sound_SoundManager(jcontext ctx);
void init_lib_sound_SoundManager(jcontext ctx, jobject self);
void M_lib_sound_SoundManager_loadAll_Array1_int_Array1_int(jcontext ctx, jobject self, jobject param0, jobject param1);
void M_lib_sound_SoundManager_loadMusic_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_lib_sound_SoundManager_loadSound_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_lib_sound_SoundManager_play_int_float(jcontext ctx, jobject self, jint param0, jfloat param1);
void M_lib_sound_SoundManager_playMus_int_float_boolean(jcontext ctx, jobject self, jint param0, jfloat param1, jbool param2);
void M_lib_sound_SoundManager_stop_int(jcontext ctx, jobject self, jint param0);
void M_lib_sound_SoundManager_stopMus_int(jcontext ctx, jobject self, jint param0);
void M_lib_sound_SoundManager_stopAll(jcontext ctx, jobject self);
void M_lib_sound_SoundManager_dispose(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
