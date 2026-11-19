#ifndef HEADER_nro_ClanObject
#define HEADER_nro_ClanObject

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ClanObject {
	java_lang_Object parent;
	jint F_clanID;
	jint F_code;
} nro_ClanObject;

extern Class class_nro_ClanObject;


#define VTABLE_nro_ClanObject_hashCode_R_int 0
typedef jint (*func_nro_ClanObject_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanObject_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ClanObject_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ClanObject_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ClanObject_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanObject_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ClanObject_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanObject_toString_R_java_lang_String 4
typedef jobject (*func_nro_ClanObject_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanObject_finalize 5
typedef void (*func_nro_ClanObject_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanObject_notify 6
typedef void (*func_nro_ClanObject_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanObject_notifyAll 7
typedef void (*func_nro_ClanObject_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanObject_wait 8
typedef void (*func_nro_ClanObject_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanObject_wait_long 9
typedef void (*func_nro_ClanObject_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ClanObject_wait_long_int 10
typedef void (*func_nro_ClanObject_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_ClanObject(jobject object, jint mark, jint depth);
void clinit_nro_ClanObject(jcontext ctx);
void init_nro_ClanObject(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
