#ifndef HEADER_nro_PlayerData
#define HEADER_nro_PlayerData

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_PlayerData {
	java_lang_Object parent;
	jint F_playerID;
	jref F_name;
	jshort F_head;
	jshort F_body;
	jshort F_leg;
	jlong F_powpoint;
} nro_PlayerData;

extern Class class_nro_PlayerData;


#define VTABLE_nro_PlayerData_hashCode_R_int 0
typedef jint (*func_nro_PlayerData_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerData_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_PlayerData_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_PlayerData_clone_R_java_lang_Object 2
typedef jobject (*func_nro_PlayerData_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerData_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_PlayerData_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerData_toString_R_java_lang_String 4
typedef jobject (*func_nro_PlayerData_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerData_finalize 5
typedef void (*func_nro_PlayerData_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerData_notify 6
typedef void (*func_nro_PlayerData_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerData_notifyAll 7
typedef void (*func_nro_PlayerData_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerData_wait 8
typedef void (*func_nro_PlayerData_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_PlayerData_wait_long 9
typedef void (*func_nro_PlayerData_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_PlayerData_wait_long_int 10
typedef void (*func_nro_PlayerData_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_PlayerData(jobject object, jint mark, jint depth);
void clinit_nro_PlayerData(jcontext ctx);
void init_nro_PlayerData_int_java_lang_String_short_short_short_long(jcontext ctx, jobject self, jint param0, jobject param1, jshort param2, jshort param3, jshort param4, jlong param5);

#ifdef __cplusplus
}
#endif

#endif
