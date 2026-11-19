#ifndef HEADER_nro_Menu
#define HEADER_nro_Menu

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Menu {
	java_lang_Object parent;
	jbool F_showMenu;
	jref F_menuItems;
	jint F_menuSelectedItem;
	jint F_menuX;
	jint F_menuY;
	jint F_menuW;
	jint F_menuH;
	jref F_left;
	jref F_right;
	jref F_center;
	jbool F_disableClose;
	jint F_tDelay;
	jint F_w;
	jint F_pa;
	jint F_pointerDownFirstX;
	jref F_pointerDownLastX;
	jbool F_pointerIsDowning;
	jbool F_isDownWhenRunning;
	jint F_waitToPerform;
	jint F_cmRun;
	jbool F_touch;
	jbool F_close;
	jint F_cmvx;
	jint F_cmdx;
	jbool F_isClose;
	jref F_isNotClose;
} nro_Menu;

extern Class class_nro_Menu;

extern jobject SF_nro_Menu_menuTemY;
extern jint SF_nro_Menu_cmtoX;
extern jint SF_nro_Menu_cmx;
extern jint SF_nro_Menu_cmxLim;
extern jint SF_nro_Menu_xc;
extern jobject SF_nro_Menu_imgMenu1;
extern jobject SF_nro_Menu_imgMenu2;

#define VTABLE_nro_Menu_hashCode_R_int 0
typedef jint (*func_nro_Menu_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Menu_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Menu_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Menu_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Menu_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_toString_R_java_lang_String 4
typedef jobject (*func_nro_Menu_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_finalize 5
typedef void (*func_nro_Menu_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_notify 6
typedef void (*func_nro_Menu_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_notifyAll 7
typedef void (*func_nro_Menu_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_wait 8
typedef void (*func_nro_Menu_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_wait_long 9
typedef void (*func_nro_Menu_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Menu_wait_long_int 10
typedef void (*func_nro_Menu_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Menu_startWithoutCloseButton_nro_MyVector_int 11
typedef void (*func_nro_Menu_startWithoutCloseButton_nro_MyVector_int)(jcontext ctx, jobject self, jobject param0, jint param1);
#define VTABLE_nro_Menu_startAt_nro_MyVector_int_int 12
typedef void (*func_nro_Menu_startAt_nro_MyVector_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
#define VTABLE_nro_Menu_startAt_nro_MyVector 13
typedef void (*func_nro_Menu_startAt_nro_MyVector)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Menu_isScrolling_R_boolean 14
typedef jbool (*func_nro_Menu_isScrolling_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_updateMenuKey 15
typedef void (*func_nro_Menu_updateMenuKey)(jcontext ctx, jobject self);
#define VTABLE_nro_Menu_paintMenu_lib_mGraphics 16
typedef void (*func_nro_Menu_paintMenu_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Menu_updateMenu 17
typedef void (*func_nro_Menu_updateMenu)(jcontext ctx, jobject self);

void mark_nro_Menu(jobject object, jint mark, jint depth);
void clinit_nro_Menu(jcontext ctx);
void init_nro_Menu(jcontext ctx, jobject self);
void M_nro_Menu_startWithoutCloseButton_nro_MyVector_int(jcontext ctx, jobject self, jobject param0, jint param1);
void M_nro_Menu_startAt_nro_MyVector_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void M_nro_Menu_startAt_nro_MyVector(jcontext ctx, jobject self, jobject param0);
jbool M_nro_Menu_isScrolling_R_boolean(jcontext ctx, jobject self);
void M_nro_Menu_updateMenuKey(jcontext ctx, jobject self);
void M_nro_Menu_paintMenu_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Menu_updateMenu(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
