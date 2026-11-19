#ifndef HEADER_nro_BgItem
#define HEADER_nro_BgItem

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_BgItem {
	java_lang_Object parent;
	jint F_id;
	jint F_trans;
	jshort F_idImage;
	jint F_x;
	jint F_y;
	jint F_dx;
	jint F_dy;
	jbyte F_layer;
	jref F_tileX;
	jref F_tileY;
	jint F_transX;
	jint F_transY;
} nro_BgItem;

extern Class class_nro_BgItem;

extern jobject SF_nro_BgItem_imgNew;
extern jobject SF_nro_BgItem_vKeysNew;
extern jobject SF_nro_BgItem_vKeysLast;
extern jobject SF_nro_BgItem_newSmallVersion;
extern jobject SF_nro_BgItem_idNotBlend;

#define VTABLE_nro_BgItem_hashCode_R_int 0
typedef jint (*func_nro_BgItem_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_BgItem_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BgItem_clone_R_java_lang_Object 2
typedef jobject (*func_nro_BgItem_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_BgItem_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_toString_R_java_lang_String 4
typedef jobject (*func_nro_BgItem_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_finalize 5
typedef void (*func_nro_BgItem_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_notify 6
typedef void (*func_nro_BgItem_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_notifyAll 7
typedef void (*func_nro_BgItem_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_wait 8
typedef void (*func_nro_BgItem_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_wait_long 9
typedef void (*func_nro_BgItem_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_BgItem_wait_long_int 10
typedef void (*func_nro_BgItem_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_BgItem_isNotBlend_R_boolean 11
typedef jbool (*func_nro_BgItem_isNotBlend_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_BgItem_paint_lib_mGraphics 12
typedef void (*func_nro_BgItem_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);

void mark_nro_BgItem(jobject object, jint mark, jint depth);
void clinit_nro_BgItem(jcontext ctx);
void init_nro_BgItem(jcontext ctx, jobject self);
void SM_nro_BgItem_clearHashTable(jcontext ctx);
void SM_nro_BgItem_putBgImage_java_lang_String_javax_microedition_lcdui_Image(jcontext ctx, jobject param0, jobject param1);
void SM_nro_BgItem_removeBgImage_java_lang_String(jcontext ctx, jobject param0);
jbool SM_nro_BgItem_isExistKeyLast_java_lang_String_R_boolean(jcontext ctx, jobject param0);
jbool M_nro_BgItem_isNotBlend_R_boolean(jcontext ctx, jobject self);
void M_nro_BgItem_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
