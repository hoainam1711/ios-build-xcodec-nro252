#ifndef HEADER_nro_AutoTrainMenu$AutoItem
#define HEADER_nro_AutoTrainMenu$AutoItem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_AutoTrainMenu$AutoItem {
	java_lang_Object parent;
	jref F_name;
	jint F_templateId;
	jint F_iconId;
	jint F_buffIconId;
	jbool F_enabled;
	jlong F_lastUseTime;
} nro_AutoTrainMenu$AutoItem;

extern Class class_nro_AutoTrainMenu$AutoItem;


#define VTABLE_nro_AutoTrainMenu$AutoItem_hashCode_R_int 0
typedef jint (*func_nro_AutoTrainMenu$AutoItem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu$AutoItem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_AutoTrainMenu$AutoItem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_AutoTrainMenu$AutoItem_clone_R_java_lang_Object 2
typedef jobject (*func_nro_AutoTrainMenu$AutoItem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu$AutoItem_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_AutoTrainMenu$AutoItem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu$AutoItem_toString_R_java_lang_String 4
typedef jobject (*func_nro_AutoTrainMenu$AutoItem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu$AutoItem_finalize 5
typedef void (*func_nro_AutoTrainMenu$AutoItem_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu$AutoItem_notify 6
typedef void (*func_nro_AutoTrainMenu$AutoItem_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu$AutoItem_notifyAll 7
typedef void (*func_nro_AutoTrainMenu$AutoItem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu$AutoItem_wait 8
typedef void (*func_nro_AutoTrainMenu$AutoItem_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_AutoTrainMenu$AutoItem_wait_long 9
typedef void (*func_nro_AutoTrainMenu$AutoItem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_AutoTrainMenu$AutoItem_wait_long_int 10
typedef void (*func_nro_AutoTrainMenu$AutoItem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_AutoTrainMenu$AutoItem(jobject object, jint mark, jint depth);
void clinit_nro_AutoTrainMenu$AutoItem(jcontext ctx);
void init_nro_AutoTrainMenu$AutoItem_java_lang_String_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
