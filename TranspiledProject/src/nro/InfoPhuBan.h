#ifndef HEADER_nro_InfoPhuBan
#define HEADER_nro_InfoPhuBan

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_InfoPhuBan {
	java_lang_Object parent;
	jint F_type_PB;
	jint F_maxPoint;
	jint F_pointTeam1;
	jint F_pointTeam2;
	jint F_color_1;
	jint F_color_2;
	jint F_maxLife;
	jint F_lifeTeam1;
	jint F_lifeTeam2;
	jref F_nameTeam1;
	jref F_nameTeam2;
	jshort F_idmapPaint;
	jshort F_timeSecond;
	jlong F_timeStart;
} nro_InfoPhuBan;

extern Class class_nro_InfoPhuBan;


#define VTABLE_nro_InfoPhuBan_hashCode_R_int 0
typedef jint (*func_nro_InfoPhuBan_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoPhuBan_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_InfoPhuBan_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_InfoPhuBan_clone_R_java_lang_Object 2
typedef jobject (*func_nro_InfoPhuBan_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoPhuBan_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_InfoPhuBan_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoPhuBan_toString_R_java_lang_String 4
typedef jobject (*func_nro_InfoPhuBan_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoPhuBan_finalize 5
typedef void (*func_nro_InfoPhuBan_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoPhuBan_notify 6
typedef void (*func_nro_InfoPhuBan_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoPhuBan_notifyAll 7
typedef void (*func_nro_InfoPhuBan_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoPhuBan_wait 8
typedef void (*func_nro_InfoPhuBan_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoPhuBan_wait_long 9
typedef void (*func_nro_InfoPhuBan_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_InfoPhuBan_wait_long_int 10
typedef void (*func_nro_InfoPhuBan_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_InfoPhuBan_updateTime_int_int_int 11
typedef void (*func_nro_InfoPhuBan_updateTime_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2);

void mark_nro_InfoPhuBan(jobject object, jint mark, jint depth);
void clinit_nro_InfoPhuBan(jcontext ctx);
void init_nro_InfoPhuBan_int_short_java_lang_String_java_lang_String_int_short(jcontext ctx, jobject self, jint param0, jshort param1, jobject param2, jobject param3, jint param4, jshort param5);
void M_nro_InfoPhuBan_updateTime_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
