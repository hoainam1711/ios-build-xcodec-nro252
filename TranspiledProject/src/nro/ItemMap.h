#ifndef HEADER_nro_ItemMap
#define HEADER_nro_ItemMap

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IMapObject.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ItemMap {
	java_lang_Object parent;
	jint F_x;
	jint F_y;
	jint F_xEnd;
	jint F_yEnd;
	jint F_f;
	jint F_vx;
	jint F_playerId;
	jint F_itemMapID;
	jref F_template;
	jbool F_isPlayerMobDrop;
	jbool F_isBossDrop;
	jint F_countAutoPick;
	jbyte F_status;
	jint F_rO;
	jint F_xO;
	jint F_yO;
	jint F_angle;
	jint F_iAngle;
	jint F_iDot;
	jref F_xArg;
	jref F_yArg;
	jref F_xDot;
	jref F_yDot;
	jint F_count;
	jint F_countAura;
} nro_ItemMap;

extern Class class_nro_ItemMap;

extern jobject SF_nro_ItemMap_imageFlare;
extern jobject SF_nro_ItemMap_imageAuraItem1;
extern jobject SF_nro_ItemMap_imageAuraItem2;
extern jobject SF_nro_ItemMap_imageAuraItem3;

#define VTABLE_nro_ItemMap_hashCode_R_int 0
typedef jint (*func_nro_ItemMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ItemMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ItemMap_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ItemMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ItemMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_toString_R_java_lang_String 4
typedef jobject (*func_nro_ItemMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_finalize 5
typedef void (*func_nro_ItemMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_notify 6
typedef void (*func_nro_ItemMap_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_notifyAll 7
typedef void (*func_nro_ItemMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_wait 8
typedef void (*func_nro_ItemMap_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_wait_long 9
typedef void (*func_nro_ItemMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ItemMap_wait_long_int 10
typedef void (*func_nro_ItemMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ItemMap_getX_R_int 11
typedef jint (*func_nro_ItemMap_getX_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_getY_R_int 12
typedef jint (*func_nro_ItemMap_getY_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_getW_R_int 13
typedef jint (*func_nro_ItemMap_getW_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_getH_R_int 14
typedef jint (*func_nro_ItemMap_getH_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_stopMoving 15
typedef void (*func_nro_ItemMap_stopMoving)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_isInvisible_R_boolean 16
typedef jbool (*func_nro_ItemMap_isInvisible_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_SetNum_int_int 17
typedef void (*func_nro_ItemMap_SetNum_int_int)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_nro_ItemMap_updateAuraItemEff 18
typedef void (*func_nro_ItemMap_updateAuraItemEff)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_paint_lib_mGraphics 19
typedef void (*func_nro_ItemMap_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ItemMap_isAuraItem_R_boolean 20
typedef jbool (*func_nro_ItemMap_isAuraItem_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_nro_ItemMap_setDotPosition 21
typedef void (*func_nro_ItemMap_setDotPosition)(jcontext ctx, jobject self);

void mark_nro_ItemMap(jobject object, jint mark, jint depth);
void clinit_nro_ItemMap(jcontext ctx);
void init_nro_ItemMap_short_short_int_int_int_int(jcontext ctx, jobject self, jshort param0, jshort param1, jint param2, jint param3, jint param4, jint param5);
void init_nro_ItemMap_int_short_short_int_int_short(jcontext ctx, jobject self, jint param0, jshort param1, jshort param2, jint param3, jint param4, jshort param5);
void M_nro_ItemMap_SetNum_int_int(jcontext ctx, jobject self, jint param0, jint param1);
void M_nro_ItemMap_updateAuraItemEff(jcontext ctx, jobject self);
void M_nro_ItemMap_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
jbool M_nro_ItemMap_isAuraItem_R_boolean(jcontext ctx, jobject self);
void M_nro_ItemMap_setDotPosition(jcontext ctx, jobject self);
jint M_nro_ItemMap_getX_R_int(jcontext ctx, jobject self);
jint M_nro_ItemMap_getY_R_int(jcontext ctx, jobject self);
jint M_nro_ItemMap_getH_R_int(jcontext ctx, jobject self);
jint M_nro_ItemMap_getW_R_int(jcontext ctx, jobject self);
void M_nro_ItemMap_stopMoving(jcontext ctx, jobject self);
jbool M_nro_ItemMap_isInvisible_R_boolean(jcontext ctx, jobject self);

#ifdef __cplusplus
}
#endif

#endif
