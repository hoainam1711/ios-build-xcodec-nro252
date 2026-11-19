#ifndef HEADER_nro_InfoItem
#define HEADER_nro_InfoItem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_InfoItem {
	java_lang_Object parent;
	jref F_s;
	jint F_speed;
	jref F_charInfo;
	jbool F_isChatServer;
	jbool F_isOnline;
	jint F_timeCount;
	jint F_maxTime;
	jlong F_last;
	jlong F_curr;
} nro_InfoItem;

extern Class class_nro_InfoItem;


#define VTABLE_nro_InfoItem_hashCode_R_int 0
typedef jint (*func_nro_InfoItem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoItem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_InfoItem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_InfoItem_clone_R_java_lang_Object 2
typedef jobject (*func_nro_InfoItem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoItem_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_InfoItem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoItem_toString_R_java_lang_String 4
typedef jobject (*func_nro_InfoItem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoItem_finalize 5
typedef void (*func_nro_InfoItem_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoItem_notify 6
typedef void (*func_nro_InfoItem_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoItem_notifyAll 7
typedef void (*func_nro_InfoItem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoItem_wait 8
typedef void (*func_nro_InfoItem_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoItem_wait_long 9
typedef void (*func_nro_InfoItem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_InfoItem_wait_long_int 10
typedef void (*func_nro_InfoItem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_InfoItem(jobject object, jint mark, jint depth);
void clinit_nro_InfoItem(jcontext ctx);
void init_nro_InfoItem_java_lang_String(jcontext ctx, jobject self, jobject param0);
void init_nro_InfoItem(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
