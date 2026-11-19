#ifndef HEADER_nro_Member
#define HEADER_nro_Member

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Member {
	java_lang_Object parent;
	jint F_ID;
	jshort F_head;
	jshort F_headICON;
	jshort F_leg;
	jshort F_body;
	jref F_name;
	jbyte F_role;
	jref F_powerPoint;
	jint F_donate;
	jint F_receive_donate;
	jint F_curClanPoint;
	jint F_clanPoint;
	jref F_joinTime;
} nro_Member;

extern Class class_nro_Member;


#define VTABLE_nro_Member_hashCode_R_int 0
typedef jint (*func_nro_Member_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Member_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Member_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Member_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Member_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Member_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Member_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Member_toString_R_java_lang_String 4
typedef jobject (*func_nro_Member_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Member_finalize 5
typedef void (*func_nro_Member_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Member_notify 6
typedef void (*func_nro_Member_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Member_notifyAll 7
typedef void (*func_nro_Member_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Member_wait 8
typedef void (*func_nro_Member_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Member_wait_long 9
typedef void (*func_nro_Member_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Member_wait_long_int 10
typedef void (*func_nro_Member_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Member(jobject object, jint mark, jint depth);
void clinit_nro_Member(jcontext ctx);
void init_nro_Member(jcontext ctx, jobject self);
jobject SM_nro_Member_getRole_int_R_java_lang_String(jcontext ctx, jint param0);

#ifdef __cplusplus
}
#endif

#endif
