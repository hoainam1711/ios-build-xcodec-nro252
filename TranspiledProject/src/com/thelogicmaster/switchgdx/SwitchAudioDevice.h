#ifndef HEADER_com_thelogicmaster_switchgdx_SwitchAudioDevice
#define HEADER_com_thelogicmaster_switchgdx_SwitchAudioDevice

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/audio/AudioDevice.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_thelogicmaster_switchgdx_SwitchAudioDevice {
	java_lang_Object parent;
	jint F_rate;
	jbool F_mono;
	jlong F_handle;
} com_thelogicmaster_switchgdx_SwitchAudioDevice;

extern Class class_com_thelogicmaster_switchgdx_SwitchAudioDevice;


#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_hashCode_R_int 0
typedef jint (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_clone_R_java_lang_Object 2
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_getClass_R_java_lang_Class 3
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_toString_R_java_lang_String 4
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_finalize 5
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_notify 6
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_notify)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_notifyAll 7
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_wait 8
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_wait)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_wait_long 9
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_wait_long_int 10
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose 11
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_isMono_R_boolean 12
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_isMono_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_short_int_int 13
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_short_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_float_int_int 14
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_float_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_getLatency_R_int 15
typedef jint (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_getLatency_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_setVolume_float 16
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_setVolume_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_pause 17
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_pause)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchAudioDevice_resume 18
typedef void (*func_com_thelogicmaster_switchgdx_SwitchAudioDevice_resume)(jcontext ctx, jobject self);

void mark_com_thelogicmaster_switchgdx_SwitchAudioDevice(jobject object, jint mark, jint depth);
void clinit_com_thelogicmaster_switchgdx_SwitchAudioDevice(jcontext ctx);
void init_com_thelogicmaster_switchgdx_SwitchAudioDevice_int_boolean(jcontext ctx, jobject self, jint param0, jbool param1);
jbool M_com_thelogicmaster_switchgdx_SwitchAudioDevice_isMono_R_boolean(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_short_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_writeSamples_Array1_float_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
jint M_com_thelogicmaster_switchgdx_SwitchAudioDevice_getLatency_R_int(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_setVolume_float(jcontext ctx, jobject self, jfloat param0);
void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_pause(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_resume(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose(jcontext ctx, jobject self);
void M_com_thelogicmaster_switchgdx_SwitchAudioDevice_finalize(jcontext ctx, jobject self);
jlong SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_create_int_boolean_R_long(jcontext ctx, jint param0, jbool param1);
void SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_sample_Array1_float_int_int(jcontext ctx, jobject param0, jint param1, jint param2);
void SM_com_thelogicmaster_switchgdx_SwitchAudioDevice_dispose_long(jcontext ctx, jlong param0);

#ifdef __cplusplus
}
#endif

#endif
