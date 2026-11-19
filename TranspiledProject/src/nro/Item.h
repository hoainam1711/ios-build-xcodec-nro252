#ifndef HEADER_nro_Item
#define HEADER_nro_Item

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Item {
	java_lang_Object parent;
	jref F_itemOption;
	jref F_template;
	jref F_options;
	jint F_itemId;
	jint F_playerId;
	jbool F_isSelect;
	jint F_indexUI;
	jint F_quantity;
	jint F_quantilyToBuy;
	jlong F_powerRequire;
	jbool F_isLock;
	jint F_sys;
	jint F_upgrade;
	jint F_buyCoin;
	jint F_buyCoinLock;
	jint F_buyGold;
	jint F_buyGoldLock;
	jint F_saleCoinLock;
	jint F_buySpec;
	jint F_buyRuby;
	jshort F_iconSpec;
	jbyte F_buyType;
	jint F_typeUI;
	jbool F_isExpires;
	jbool F_isBuySpec;
	jref F_info;
	jint F_compare;
	jbyte F_isMe;
	jbool F_newItem;
	jint F_headTemp;
	jint F_bodyTemp;
	jint F_legTemp;
	jint F_bagTemp;
	jref F_nameNguoiKyGui;
} nro_Item;

extern Class class_nro_Item;


#define VTABLE_nro_Item_hashCode_R_int 0
typedef jint (*func_nro_Item_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Item_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Item_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Item_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Item_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_toString_R_java_lang_String 4
typedef jobject (*func_nro_Item_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_finalize 5
typedef void (*func_nro_Item_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_notify 6
typedef void (*func_nro_Item_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_notifyAll 7
typedef void (*func_nro_Item_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_wait 8
typedef void (*func_nro_Item_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_wait_long 9
typedef void (*func_nro_Item_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Item_wait_long_int 10
typedef void (*func_nro_Item_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Item_getCompare 11
typedef void (*func_nro_Item_getCompare)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_isHaveOption_int_R_boolean 12
typedef jbool (*func_nro_Item_isHaveOption_int_R_boolean)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_Item_isTypeBody_R_boolean 13
typedef jbool (*func_nro_Item_isTypeBody_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_Item_setPartTemp_int_int_int_int 14
typedef void (*func_nro_Item_setPartTemp_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

void mark_nro_Item(jobject object, jint mark, jint depth);
void clinit_nro_Item(jcontext ctx);
void init_nro_Item(jcontext ctx, jobject self);
void M_nro_Item_getCompare(jcontext ctx, jobject self);
jbool M_nro_Item_isHaveOption_int_R_boolean(jcontext ctx, jobject self, jint param0);
jbool M_nro_Item_isTypeBody_R_boolean(jcontext ctx, jobject self);
void M_nro_Item_setPartTemp_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);

#ifdef __cplusplus
}
#endif

#endif
