#ifndef HEADER_nro_TabClanIcon
#define HEADER_nro_TabClanIcon

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_TabClanIcon {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_w;
	jint F_h;
	jref F_left;
	jref F_right;
	jint F_WIDTH;
	jint F_nItem;
	jint F_disStart;
	jint F_cmtoX;
	jint F_cmx;
	jint F_i;
	jint F_j;
	jbool F_isShow;
	jbool F_isGetName;
	jref F_text;
	jref F_vItems;
	jint F_msgID;
	jint F_select;
} nro_TabClanIcon;

extern Class class_nro_TabClanIcon;

extern jobject SF_nro_TabClanIcon_scrMain;

#define VTABLE_nro_TabClanIcon_hashCode_R_int 0
typedef jint (*func_nro_TabClanIcon_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_TabClanIcon_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_TabClanIcon_clone_R_java_lang_Object 2
typedef jobject (*func_nro_TabClanIcon_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_TabClanIcon_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_toString_R_java_lang_String 4
typedef jobject (*func_nro_TabClanIcon_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_finalize 5
typedef void (*func_nro_TabClanIcon_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_notify 6
typedef void (*func_nro_TabClanIcon_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_notifyAll 7
typedef void (*func_nro_TabClanIcon_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_wait 8
typedef void (*func_nro_TabClanIcon_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_wait_long 9
typedef void (*func_nro_TabClanIcon_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_TabClanIcon_wait_long_int 10
typedef void (*func_nro_TabClanIcon_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_TabClanIcon_perform_int_java_lang_Object 11
typedef void (*func_nro_TabClanIcon_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_TabClanIcon_show_boolean 12
typedef void (*func_nro_TabClanIcon_show_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_TabClanIcon_hide 13
typedef void (*func_nro_TabClanIcon_hide)(jcontext ctx, jobject self);
#define VTABLE_nro_TabClanIcon_paint_lib_mGraphics 14
typedef void (*func_nro_TabClanIcon_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_TabClanIcon(jobject object, jint mark, jint depth);
void clinit_nro_TabClanIcon(jcontext ctx);
void M_nro_TabClanIcon_show_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_TabClanIcon_hide(jcontext ctx, jobject self);
void init_nro_TabClanIcon(jcontext ctx, jobject self);
void M_nro_TabClanIcon_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_TabClanIcon_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);

#ifdef __cplusplus
}
#endif

#endif
