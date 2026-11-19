#ifndef HEADER_com_thelogicmaster_switchgdx_SwitchSound$Listener
#define HEADER_com_thelogicmaster_switchgdx_SwitchSound$Listener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_thelogicmaster_switchgdx_SwitchSound$Listener {
	java_lang_Object parent;
} com_thelogicmaster_switchgdx_SwitchSound$Listener;

extern Class class_com_thelogicmaster_switchgdx_SwitchSound$Listener;


#define INDEX_com_thelogicmaster_switchgdx_SwitchSound$Listener_soundFinished_int 0
typedef void (*func_com_thelogicmaster_switchgdx_SwitchSound$Listener_soundFinished_int)(jcontext ctx, jobject self, jint param0);

void mark_com_thelogicmaster_switchgdx_SwitchSound$Listener(jobject object, jint mark, jint depth);
void clinit_com_thelogicmaster_switchgdx_SwitchSound$Listener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
