#ifndef HEADER_nro_ISession
#define HEADER_nro_ISession

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ISession {
	java_lang_Object parent;
} nro_ISession;

extern Class class_nro_ISession;


#define INDEX_nro_ISession_sendMessage_nro_Message 0
typedef void (*func_nro_ISession_sendMessage_nro_Message)(jcontext ctx, jobject self, jobject param0);

void mark_nro_ISession(jobject object, jint mark, jint depth);
void clinit_nro_ISession(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
