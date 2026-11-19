#ifndef HEADER_nro_IActionListener
#define HEADER_nro_IActionListener

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_IActionListener {
	java_lang_Object parent;
} nro_IActionListener;

extern Class class_nro_IActionListener;


#define INDEX_nro_IActionListener_perform_int_java_lang_Object 0
typedef void (*func_nro_IActionListener_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);

void mark_nro_IActionListener(jobject object, jint mark, jint depth);
void clinit_nro_IActionListener(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
