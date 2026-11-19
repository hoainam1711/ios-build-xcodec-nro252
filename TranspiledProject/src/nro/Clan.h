#ifndef HEADER_nro_Clan
#define HEADER_nro_Clan

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Clan {
	java_lang_Object parent;
	jint F_ID;
	jint F_imgID;
	jref F_name;
	jref F_slogan;
	jint F_date;
	jref F_powerPoint;
	jint F_currMember;
	jint F_maxMember;
	jint F_leaderID;
	jref F_leaderName;
	jint F_level;
	jint F_clanPoint;
} nro_Clan;

extern Class class_nro_Clan;


#define VTABLE_nro_Clan_hashCode_R_int 0
typedef jint (*func_nro_Clan_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Clan_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Clan_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Clan_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Clan_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Clan_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Clan_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Clan_toString_R_java_lang_String 4
typedef jobject (*func_nro_Clan_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Clan_finalize 5
typedef void (*func_nro_Clan_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Clan_notify 6
typedef void (*func_nro_Clan_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Clan_notifyAll 7
typedef void (*func_nro_Clan_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Clan_wait 8
typedef void (*func_nro_Clan_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Clan_wait_long 9
typedef void (*func_nro_Clan_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Clan_wait_long_int 10
typedef void (*func_nro_Clan_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_Clan(jobject object, jint mark, jint depth);
void clinit_nro_Clan(jcontext ctx);
void init_nro_Clan(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
