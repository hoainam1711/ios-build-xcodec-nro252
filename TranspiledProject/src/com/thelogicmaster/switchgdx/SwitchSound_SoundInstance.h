#ifndef HEADER_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance
#define HEADER_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_thelogicmaster_switchgdx_SwitchSound$SoundInstance {
	java_lang_Object parent;
	jint F_channel;
	jbool F_looping;
} com_thelogicmaster_switchgdx_SwitchSound$SoundInstance;

extern Class class_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance;


#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_hashCode_R_int 0
typedef jint (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_clone_R_java_lang_Object 2
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_getClass_R_java_lang_Class 3
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_toString_R_java_lang_String 4
typedef jobject (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_finalize 5
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_notify 6
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_notify)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_notifyAll 7
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_wait 8
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_wait)(jcontext ctx, jobject self);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_wait_long 9
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_wait_long_int 10
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(jobject object, jint mark, jint depth);
void clinit_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(jcontext ctx);
void init_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance(jcontext ctx, jobject self);
void init_com_thelogicmaster_switchgdx_SwitchSound$SoundInstance_com_thelogicmaster_switchgdx_SwitchSound$1(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
