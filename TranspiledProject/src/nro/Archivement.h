#ifndef HEADER_nro_Archivement
#define HEADER_nro_Archivement

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Archivement {
	java_lang_Object parent;
	jref F_info1;
	jref F_info2;
	jint F_money;
	jbool F_isFinish;
	jbool F_isRecieve;
} nro_Archivement;

extern Class class_nro_Archivement;


#define VTABLE_nro_Archivement_hashCode_R_int 0
typedef jint (*func_nro_Archivement_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Archivement_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Archivement_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Archivement_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Archivement_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Archivement_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Archivement_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Archivement_toString_R_java_lang_String 4
typedef jobject (*func_nro_Archivement_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Archivement_finalize 5
typedef void (*func_nro_Archivement_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Archivement_notify 6
typedef void (*func_nro_Archivement_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Archivement_notifyAll 7
typedef void (*func_nro_Archivement_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Archivement_wait 8
typedef void (*func_nro_Archivement_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Archivement_wait_long 9
typedef void (*func_nro_Archivement_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Archivement_wait_long_int 10
typedef void (*func_nro_Archivement_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Archivement(jobject object, jint mark, jint depth);
void clinit_nro_Archivement(jcontext ctx);
void init_nro_Archivement(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
