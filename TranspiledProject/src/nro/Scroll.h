#ifndef HEADER_nro_Scroll
#define HEADER_nro_Scroll

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Scroll {
	java_lang_Object parent;
	jint F_cmtoX;
	jint F_cmtoY;
	jint F_cmx;
	jint F_cmy;
	jint F_cmvx;
	jint F_cmvy;
	jint F_cmdx;
	jint F_cmdy;
	jint F_xPos;
	jint F_yPos;
	jint F_width;
	jint F_height;
	jint F_cmxLim;
	jint F_cmyLim;
	jint F_pointerDownTime;
	jint F_pointerDownFirstX;
	jref F_pointerDownLastX;
	jbool F_pointerIsDowning;
	jbool F_isDownWhenRunning;
	jint F_cmRun;
	jint F_selectedItem;
	jint F_ITEM_SIZE;
	jint F_w;
	jbool F_styleUPDOWN;
} nro_Scroll;

extern Class class_nro_Scroll;


#define VTABLE_nro_Scroll_hashCode_R_int 0
typedef jint (*func_nro_Scroll_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Scroll_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Scroll_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Scroll_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Scroll_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_toString_R_java_lang_String 4
typedef jobject (*func_nro_Scroll_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_finalize 5
typedef void (*func_nro_Scroll_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_notify 6
typedef void (*func_nro_Scroll_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_notifyAll 7
typedef void (*func_nro_Scroll_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_wait 8
typedef void (*func_nro_Scroll_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_wait_long 9
typedef void (*func_nro_Scroll_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Scroll_wait_long_int 10
typedef void (*func_nro_Scroll_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Scroll_updateKey_R_nro_ScrollResult 11
typedef jobject (*func_nro_Scroll_updateKey_R_nro_ScrollResult)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_updatecm 12
typedef void (*func_nro_Scroll_updatecm)(jcontext ctx, jobject self);
#define VTABLE_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int 13
typedef void (*func_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6, jint param7);
#define VTABLE_nro_Scroll_a_int 14
typedef void (*func_nro_Scroll_a_int)(jcontext ctx, jobject self, jint param0);

void mark_nro_Scroll(jobject object, jint mark, jint depth);
void clinit_nro_Scroll(jcontext ctx);
void init_nro_Scroll(jcontext ctx, jobject self);
jobject M_nro_Scroll_updateKey_R_nro_ScrollResult(jcontext ctx, jobject self);
void M_nro_Scroll_updatecm(jcontext ctx, jobject self);
void M_nro_Scroll_setStyle_int_int_int_int_int_int_boolean_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jbool param6, jint param7);
void M_nro_Scroll_a_int(jcontext ctx, jobject self, jint param0);

#ifdef __cplusplus
}
#endif

#endif
