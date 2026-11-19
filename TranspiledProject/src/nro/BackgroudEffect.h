#ifndef HEADER_nro_BackgroudEffect
#define HEADER_nro_BackgroudEffect

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_BackgroudEffect {
	java_lang_Object parent;
	jref F_x;
	jref F_y;
	jref F_vx;
	jref F_vy;
	jint F_num;
	jint F_xShip;
	jint F_yShip;
	jint F_way;
	jint F_trans;
	jint F_frameFire;
	jint F_tFire;
	jint F_tStart;
	jint F_speed;
	jbool F_isFly;
	jref F_imgFire2;
	jint F_sum;
	jint F_typeEff;
	jref F_isRainEffect;
	jref F_tick;
	jref F_frame;
	jref F_activeEff;
	jint F_yWater;
	jint F_colorWater;
	jref F_t;
	jref F_dem;
} nro_BackgroudEffect;

extern Class class_nro_BackgroudEffect;

extern jobject SF_nro_BackgroudEffect_vBgEffect;
extern jobject SF_nro_BackgroudEffect_wP;
extern jobject SF_nro_BackgroudEffect_imgSnow;
extern jobject SF_nro_BackgroudEffect_imgHatMua;
extern jobject SF_nro_BackgroudEffect_imgMua1;
extern jobject SF_nro_BackgroudEffect_imgMua2;
extern jobject SF_nro_BackgroudEffect_imgSao;
extern jobject SF_nro_BackgroudEffect_imgLacay;
extern jobject SF_nro_BackgroudEffect_imgShip;
extern jobject SF_nro_BackgroudEffect_imgFire1;
extern jint SF_nro_BackgroudEffect_L;
extern jobject SF_nro_BackgroudEffect_water1;
extern jobject SF_nro_BackgroudEffect_water2;
extern jobject SF_nro_BackgroudEffect_imgChamTron1;
extern jobject SF_nro_BackgroudEffect_imgChamTron2;
extern jshort SF_nro_BackgroudEffect_id_water1;
extern jobject SF_nro_BackgroudEffect_water3;
extern jbool SF_nro_BackgroudEffect_isFog;
extern jbool SF_nro_BackgroudEffect_isPaintFar;
extern jint SF_nro_BackgroudEffect_nCloud;
extern jobject SF_nro_BackgroudEffect_imgCloud1;
extern jobject SF_nro_BackgroudEffect_imgFog;
extern jint SF_nro_BackgroudEffect_cloudw;
extern jint SF_nro_BackgroudEffect_xfog;
extern jint SF_nro_BackgroudEffect_yfog;
extern jint SF_nro_BackgroudEffect_fogw;

#define VTABLE_nro_BackgroudEffect_hashCode_R_int 0
typedef jint (*func_nro_BackgroudEffect_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_BackgroudEffect_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_BackgroudEffect_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_BackgroudEffect_clone_R_java_lang_Object 2
typedef jobject (*func_nro_BackgroudEffect_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_BackgroudEffect_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_BackgroudEffect_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_BackgroudEffect_toString_R_java_lang_String 4
typedef jobject (*func_nro_BackgroudEffect_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_BackgroudEffect_finalize 5
typedef void (*func_nro_BackgroudEffect_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_BackgroudEffect_notify 6
typedef void (*func_nro_BackgroudEffect_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_BackgroudEffect_notifyAll 7
typedef void (*func_nro_BackgroudEffect_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_BackgroudEffect_wait 8
typedef void (*func_nro_BackgroudEffect_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_BackgroudEffect_wait_long 9
typedef void (*func_nro_BackgroudEffect_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_BackgroudEffect_wait_long_int 10
typedef void (*func_nro_BackgroudEffect_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_BackgroudEffect_e 11
typedef void (*func_nro_BackgroudEffect_e)(jcontext ctx, jobject self);

void mark_nro_BackgroudEffect(jobject object, jint mark, jint depth);
void clinit_nro_BackgroudEffect(jcontext ctx);
void SM_nro_BackgroudEffect_loadWaterImages(jcontext ctx);
void SM_nro_BackgroudEffect_clearImage(jcontext ctx);
jbool SM_nro_BackgroudEffect_isHaveRain_R_boolean(jcontext ctx);
void init_nro_BackgroudEffect_int(jcontext ctx, jobject self, jint param0);
void SM_nro_BackgroudEffect_d(jcontext ctx);
void SM_nro_BackgroudEffect_paintBack_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_BackgroudEffect_paintFog_lib_mGraphics(jcontext ctx, jobject param0);
void M_nro_BackgroudEffect_e(jcontext ctx, jobject self);
void SM_nro_BackgroudEffect_addEffect_int(jcontext ctx, jint param0);
void SM_nro_BackgroudEffect_a_int_int(jcontext ctx, jint param0, jint param1);
void SM_nro_BackgroudEffect_paintWater_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_BackgroudEffect_paintBehindTile_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_BackgroudEffect_paintFrontAll_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_BackgroudEffect_paintFar_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_BackgroudEffect_paintBackAll_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_BackgroudEffect_updateEff(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
