#ifndef HEADER_nro_ScrollResult
#define HEADER_nro_ScrollResult

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ScrollResult {
	java_lang_Object parent;
	jbool F_isDowning;
	jint F_selected;
	jbool F_isFinish;
} nro_ScrollResult;

extern Class class_nro_ScrollResult;


#define VTABLE_nro_ScrollResult_hashCode_R_int 0
typedef jint (*func_nro_ScrollResult_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ScrollResult_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ScrollResult_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ScrollResult_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ScrollResult_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ScrollResult_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ScrollResult_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ScrollResult_toString_R_java_lang_String 4
typedef jobject (*func_nro_ScrollResult_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ScrollResult_finalize 5
typedef void (*func_nro_ScrollResult_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ScrollResult_notify 6
typedef void (*func_nro_ScrollResult_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ScrollResult_notifyAll 7
typedef void (*func_nro_ScrollResult_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ScrollResult_wait 8
typedef void (*func_nro_ScrollResult_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ScrollResult_wait_long 9
typedef void (*func_nro_ScrollResult_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ScrollResult_wait_long_int 10
typedef void (*func_nro_ScrollResult_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_ScrollResult(jobject object, jint mark, jint depth);
void clinit_nro_ScrollResult(jcontext ctx);
void init_nro_ScrollResult(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
