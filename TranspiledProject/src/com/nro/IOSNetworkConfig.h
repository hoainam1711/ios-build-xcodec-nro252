#ifndef HEADER_com_nro_IOSNetworkConfig
#define HEADER_com_nro_IOSNetworkConfig

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_IOSNetworkConfig {
	java_lang_Object parent;
} com_nro_IOSNetworkConfig;

extern Class class_com_nro_IOSNetworkConfig;


#define VTABLE_com_nro_IOSNetworkConfig_hashCode_R_int 0
typedef jint (*func_com_nro_IOSNetworkConfig_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_nro_IOSNetworkConfig_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_nro_IOSNetworkConfig_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_nro_IOSNetworkConfig_clone_R_java_lang_Object 2
typedef jobject (*func_com_nro_IOSNetworkConfig_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_nro_IOSNetworkConfig_getClass_R_java_lang_Class 3
typedef jobject (*func_com_nro_IOSNetworkConfig_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_nro_IOSNetworkConfig_toString_R_java_lang_String 4
typedef jobject (*func_com_nro_IOSNetworkConfig_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_nro_IOSNetworkConfig_finalize 5
typedef void (*func_com_nro_IOSNetworkConfig_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_nro_IOSNetworkConfig_notify 6
typedef void (*func_com_nro_IOSNetworkConfig_notify)(jcontext ctx, jobject self);
#define VTABLE_com_nro_IOSNetworkConfig_notifyAll 7
typedef void (*func_com_nro_IOSNetworkConfig_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_nro_IOSNetworkConfig_wait 8
typedef void (*func_com_nro_IOSNetworkConfig_wait)(jcontext ctx, jobject self);
#define VTABLE_com_nro_IOSNetworkConfig_wait_long 9
typedef void (*func_com_nro_IOSNetworkConfig_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_nro_IOSNetworkConfig_wait_long_int 10
typedef void (*func_com_nro_IOSNetworkConfig_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_com_nro_IOSNetworkConfig(jobject object, jint mark, jint depth);
void clinit_com_nro_IOSNetworkConfig(jcontext ctx);
void init_com_nro_IOSNetworkConfig(jcontext ctx, jobject self);
void SM_com_nro_IOSNetworkConfig_load_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
