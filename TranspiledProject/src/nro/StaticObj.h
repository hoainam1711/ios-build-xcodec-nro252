#ifndef HEADER_nro_StaticObj
#define HEADER_nro_StaticObj

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_StaticObj {
	java_lang_Object parent;
} nro_StaticObj;

extern Class class_nro_StaticObj;

extern jint SF_nro_StaticObj_TOP_CENTER;
extern jint SF_nro_StaticObj_TOP_RIGHT;
extern jint SF_nro_StaticObj_TOP_LEFT;
extern jint SF_nro_StaticObj_BOTTOM_HCENTER;
extern jint SF_nro_StaticObj_BOTTOM_LEFT;
extern jint SF_nro_StaticObj_VCENTER_HCENTER;
extern jobject SF_nro_StaticObj_SKYCOLOR;

#define VTABLE_nro_StaticObj_hashCode_R_int 0
typedef jint (*func_nro_StaticObj_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_StaticObj_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_StaticObj_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_StaticObj_clone_R_java_lang_Object 2
typedef jobject (*func_nro_StaticObj_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_StaticObj_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_StaticObj_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_StaticObj_toString_R_java_lang_String 4
typedef jobject (*func_nro_StaticObj_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_StaticObj_finalize 5
typedef void (*func_nro_StaticObj_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_StaticObj_notify 6
typedef void (*func_nro_StaticObj_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_StaticObj_notifyAll 7
typedef void (*func_nro_StaticObj_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_StaticObj_wait 8
typedef void (*func_nro_StaticObj_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_StaticObj_wait_long 9
typedef void (*func_nro_StaticObj_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_StaticObj_wait_long_int 10
typedef void (*func_nro_StaticObj_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_StaticObj(jobject object, jint mark, jint depth);
void clinit_nro_StaticObj(jcontext ctx);
void init_nro_StaticObj(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
