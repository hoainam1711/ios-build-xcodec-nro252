#ifndef HEADER_nro_DartInfo
#define HEADER_nro_DartInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_DartInfo {
	java_lang_Object parent;
	jref F_head;
	jref F_headBorder;
	jref F_tail;
	jref F_tailBorder;
	jref F_xd1;
	jref F_xd2;
	jshort F_id;
	jshort F_xdPercent;
	jint F_va;
} nro_DartInfo;

extern Class class_nro_DartInfo;


#define VTABLE_nro_DartInfo_hashCode_R_int 0
typedef jint (*func_nro_DartInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_DartInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_DartInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_DartInfo_clone_R_java_lang_Object 2
typedef jobject (*func_nro_DartInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_DartInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_DartInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_DartInfo_toString_R_java_lang_String 4
typedef jobject (*func_nro_DartInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_DartInfo_finalize 5
typedef void (*func_nro_DartInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_DartInfo_notify 6
typedef void (*func_nro_DartInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_DartInfo_notifyAll 7
typedef void (*func_nro_DartInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_DartInfo_wait 8
typedef void (*func_nro_DartInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_DartInfo_wait_long 9
typedef void (*func_nro_DartInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_DartInfo_wait_long_int 10
typedef void (*func_nro_DartInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_DartInfo(jobject object, jint mark, jint depth);
void clinit_nro_DartInfo(jcontext ctx);
void init_nro_DartInfo(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
