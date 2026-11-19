#ifndef HEADER_nro_Info
#define HEADER_nro_Info

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Info {
	java_lang_Object parent;
	jref F_infoWaitToShow;
	jref F_info;
	jint F_sayWidth;
	jint F_sayRun;
	jref F_says;
	jint F_cx;
	jint F_cy;
	jbool F_outSide;
	jint F_time;
	jint F_timeW;
	jint F_type;
	jint F_X;
	jint F_Y;
	jint F_W;
	jint F_H;
} nro_Info;

extern Class class_nro_Info;

extern jobject SF_nro_Info_gocnhon;

#define VTABLE_nro_Info_hashCode_R_int 0
typedef jint (*func_nro_Info_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Info_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Info_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Info_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Info_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_toString_R_java_lang_String 4
typedef jobject (*func_nro_Info_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_finalize 5
typedef void (*func_nro_Info_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_notify 6
typedef void (*func_nro_Info_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_notifyAll 7
typedef void (*func_nro_Info_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_wait 8
typedef void (*func_nro_Info_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_wait_long 9
typedef void (*func_nro_Info_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Info_wait_long_int 10
typedef void (*func_nro_Info_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Info_perform_int_java_lang_Object 11
typedef void (*func_nro_Info_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_Info_hide 12
typedef void (*func_nro_Info_hide)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_paint_lib_mGraphics_int_int_int 13
typedef void (*func_nro_Info_paint_lib_mGraphics_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Info_update 14
typedef void (*func_nro_Info_update)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_getInfo 15
typedef void (*func_nro_Info_getInfo)(jcontext ctx, jobject self);
#define VTABLE_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean 16
typedef void (*func_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean)(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3);

void mark_nro_Info(jobject object, jint mark, jint depth);
void clinit_nro_Info(jcontext ctx);
void init_nro_Info(jcontext ctx, jobject self);
void M_nro_Info_hide(jcontext ctx, jobject self);
void M_nro_Info_paint_lib_mGraphics_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3);
void M_nro_Info_update(jcontext ctx, jobject self);
void M_nro_Info_getInfo(jcontext ctx, jobject self);
void M_nro_Info_addInfo_java_lang_String_int_nro_Char_boolean(jcontext ctx, jobject self, jobject param0, jint param1, jobject param2, jbool param3);
void M_nro_Info_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
