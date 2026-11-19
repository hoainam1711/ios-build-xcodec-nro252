#ifndef HEADER_nro_ItemObject
#define HEADER_nro_ItemObject

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ItemObject {
	java_lang_Object parent;
	jint F_dy;
	jint F_where;
	jint F_idImg;
} nro_ItemObject;

extern Class class_nro_ItemObject;


#define VTABLE_nro_ItemObject_hashCode_R_int 0
typedef jint (*func_nro_ItemObject_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemObject_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ItemObject_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ItemObject_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ItemObject_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemObject_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ItemObject_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemObject_toString_R_java_lang_String 4
typedef jobject (*func_nro_ItemObject_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemObject_finalize 5
typedef void (*func_nro_ItemObject_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemObject_notify 6
typedef void (*func_nro_ItemObject_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemObject_notifyAll 7
typedef void (*func_nro_ItemObject_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemObject_wait 8
typedef void (*func_nro_ItemObject_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemObject_wait_long 9
typedef void (*func_nro_ItemObject_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ItemObject_wait_long_int 10
typedef void (*func_nro_ItemObject_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_ItemObject(jobject object, jint mark, jint depth);
void clinit_nro_ItemObject(jcontext ctx);
void init_nro_ItemObject(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
