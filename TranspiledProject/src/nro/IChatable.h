#ifndef HEADER_nro_IChatable
#define HEADER_nro_IChatable

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_IChatable {
	java_lang_Object parent;
} nro_IChatable;

extern Class class_nro_IChatable;


#define INDEX_nro_IChatable_onChatFromMe_java_lang_String_java_lang_String 0
typedef void (*func_nro_IChatable_onChatFromMe_java_lang_String_java_lang_String)(jcontext ctx, jobject self, jobject param0, jobject param1);
#define INDEX_nro_IChatable_onCancelChat 1
typedef void (*func_nro_IChatable_onCancelChat)(jcontext ctx, jobject self);

void mark_nro_IChatable(jobject object, jint mark, jint depth);
void clinit_nro_IChatable(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
