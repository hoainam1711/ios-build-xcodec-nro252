#ifndef HEADER_nro_ClanImage
#define HEADER_nro_ClanImage

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ClanImage {
	java_lang_Object parent;
	jint F_ID;
	jref F_name;
	jref F_idImage;
	jint F_xu;
	jint F_luong;
} nro_ClanImage;

extern Class class_nro_ClanImage;

extern jobject SF_nro_ClanImage_vClanImage;
extern jobject SF_nro_ClanImage_idImages;

#define VTABLE_nro_ClanImage_hashCode_R_int 0
typedef jint (*func_nro_ClanImage_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanImage_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ClanImage_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ClanImage_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ClanImage_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanImage_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ClanImage_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanImage_toString_R_java_lang_String 4
typedef jobject (*func_nro_ClanImage_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanImage_finalize 5
typedef void (*func_nro_ClanImage_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanImage_notify 6
typedef void (*func_nro_ClanImage_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanImage_notifyAll 7
typedef void (*func_nro_ClanImage_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanImage_wait 8
typedef void (*func_nro_ClanImage_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ClanImage_wait_long 9
typedef void (*func_nro_ClanImage_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ClanImage_wait_long_int 10
typedef void (*func_nro_ClanImage_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_ClanImage(jobject object, jint mark, jint depth);
void clinit_nro_ClanImage(jcontext ctx);
void init_nro_ClanImage(jcontext ctx, jobject self);
void SM_nro_ClanImage_addClanImage_nro_ClanImage(jcontext ctx, jobject param0);
jobject SM_nro_ClanImage_getClanImage_short_R_nro_ClanImage(jcontext ctx, jshort param0);
jbool SM_nro_ClanImage_isExistClanImage_int_R_boolean(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
