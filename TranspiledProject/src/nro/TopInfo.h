#ifndef HEADER_nro_TopInfo
#define HEADER_nro_TopInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_TopInfo {
	java_lang_Object parent;
	jint F_headID;
	jint F_headICON;
	jshort F_body;
	jshort F_leg;
	jref F_name;
	jref F_info;
	jint F_pId;
	jint F_rank;
	jref F_info2;
} nro_TopInfo;

extern Class class_nro_TopInfo;


#define VTABLE_nro_TopInfo_hashCode_R_int 0
typedef jint (*func_nro_TopInfo_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_TopInfo_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_TopInfo_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_TopInfo_clone_R_java_lang_Object 2
typedef jobject (*func_nro_TopInfo_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_TopInfo_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_TopInfo_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_TopInfo_toString_R_java_lang_String 4
typedef jobject (*func_nro_TopInfo_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_TopInfo_finalize 5
typedef void (*func_nro_TopInfo_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_TopInfo_notify 6
typedef void (*func_nro_TopInfo_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_TopInfo_notifyAll 7
typedef void (*func_nro_TopInfo_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_TopInfo_wait 8
typedef void (*func_nro_TopInfo_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_TopInfo_wait_long 9
typedef void (*func_nro_TopInfo_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_TopInfo_wait_long_int 10
typedef void (*func_nro_TopInfo_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_TopInfo(jobject object, jint mark, jint depth);
void clinit_nro_TopInfo(jcontext ctx);
void init_nro_TopInfo(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
