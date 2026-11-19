#ifndef HEADER_nro_Info_RadaScr
#define HEADER_nro_Info_RadaScr

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Info_RadaScr {
	java_lang_Object parent;
	jbyte F_rank;
	jbyte F_amount;
	jbyte F_max_amount;
	jbyte F_typeMonster;
	jint F_id;
	jint F_no;
	jint F_idIcon;
	jref F_name;
	jref F_info;
	jbyte F_level;
	jbyte F_isUse;
	jref F_charInfo;
	jref F_mobInfo;
	jref F_itemOption;
	jref F_f;
	jint F_count;
	jlong F_timeRequest;
	jref F_cp;
	jref F_eff;
} nro_Info_RadaScr;

extern Class class_nro_Info_RadaScr;


#define VTABLE_nro_Info_RadaScr_hashCode_R_int 0
typedef jint (*func_nro_Info_RadaScr_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Info_RadaScr_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Info_RadaScr_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Info_RadaScr_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Info_RadaScr_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_toString_R_java_lang_String 4
typedef jobject (*func_nro_Info_RadaScr_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_finalize 5
typedef void (*func_nro_Info_RadaScr_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_notify 6
typedef void (*func_nro_Info_RadaScr_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_notifyAll 7
typedef void (*func_nro_Info_RadaScr_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_wait 8
typedef void (*func_nro_Info_RadaScr_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_wait_long 9
typedef void (*func_nro_Info_RadaScr_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Info_RadaScr_wait_long_int 10
typedef void (*func_nro_Info_RadaScr_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Info_RadaScr_SetAmount_byte_byte 11
typedef void (*func_nro_Info_RadaScr_SetAmount_byte_byte)(jcontext ctx, jobject self, jbyte param0, jbyte param1);
#define VTABLE_nro_Info_RadaScr_SetLevel_byte 12
typedef void (*func_nro_Info_RadaScr_SetLevel_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Info_RadaScr_SetUse_byte 13
typedef void (*func_nro_Info_RadaScr_SetUse_byte)(jcontext ctx, jobject self, jbyte param0);
#define VTABLE_nro_Info_RadaScr_addItemDetail 14
typedef void (*func_nro_Info_RadaScr_addItemDetail)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int 15
typedef void (*func_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

void mark_nro_Info_RadaScr(jobject object, jint mark, jint depth);
void clinit_nro_Info_RadaScr(jcontext ctx);
void init_nro_Info_RadaScr(jcontext ctx, jobject self);
void M_nro_Info_RadaScr_SetAmount_byte_byte(jcontext ctx, jobject self, jbyte param0, jbyte param1);
void M_nro_Info_RadaScr_SetLevel_byte(jcontext ctx, jobject self, jbyte param0);
void M_nro_Info_RadaScr_SetUse_byte(jcontext ctx, jobject self, jbyte param0);
jobject SM_nro_Info_RadaScr_GetInfo_nro_MyVector_int_R_nro_Info_RadaScr(jcontext ctx, jobject param0, jint param1);
void M_nro_Info_RadaScr_addItemDetail(jcontext ctx, jobject self);
void M_nro_Info_RadaScr_paintInfo_lib_mGraphics_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);

#ifdef __cplusplus
}
#endif

#endif
