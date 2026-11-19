#ifndef HEADER_nro_TileMap
#define HEADER_nro_TileMap

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_TileMap {
	java_lang_Object parent;
} nro_TileMap;

extern Class class_nro_TileMap;

extern jint SF_nro_TileMap_tmw;
extern jint SF_nro_TileMap_tmh;
extern jint SF_nro_TileMap_pxw;
extern jint SF_nro_TileMap_pxh;
extern jint SF_nro_TileMap_tileID;
extern jint SF_nro_TileMap_lastTileID;
extern jobject SF_nro_TileMap_maps;
extern jobject SF_nro_TileMap_types;
extern jobject SF_nro_TileMap_imgTile;
extern jobject SF_nro_TileMap_imgTileSmall;
extern jobject SF_nro_TileMap_imgMiniMap;
extern jobject SF_nro_TileMap_imgWaterfall;
extern jobject SF_nro_TileMap_imgWaterlowN;
extern jobject SF_nro_TileMap_imgWaterlowN2;
extern jbyte SF_nro_TileMap_size;
extern jint SF_nro_TileMap_O;
extern jint SF_nro_TileMap_P;
extern jint SF_nro_TileMap_Q;
extern jint SF_nro_TileMap_R;
extern jbool SF_nro_TileMap_isMapDouble;
extern jobject SF_nro_TileMap_mapName;
extern jint SF_nro_TileMap_mapID;
extern jint SF_nro_TileMap_lastBgID;
extern jint SF_nro_TileMap_zoneID;
extern jint SF_nro_TileMap_bgID;
extern jint SF_nro_TileMap_bgType;
extern jint SF_nro_TileMap_lastType;
extern jbyte SF_nro_TileMap_planetID;
extern jbyte SF_nro_TileMap_lastPlanetId;
extern jobject SF_nro_TileMap_vGo;
extern jobject SF_nro_TileMap_vItemBg;
extern jobject SF_nro_TileMap_vCurrItem;
extern jobject SF_nro_TileMap_mapNames;
extern jobject SF_nro_TileMap_bong;
extern jobject SF_nro_TileMap_offlineId;
extern jobject SF_nro_TileMap_tileType;
extern jobject SF_nro_TileMap_tileIndex;
extern jobject SF_nro_TileMap_imgLight;
extern jint SF_nro_TileMap_sizeMiniMap;
extern jint SF_nro_TileMap_gssx;
extern jint SF_nro_TileMap_gssxe;
extern jint SF_nro_TileMap_gssy;
extern jint SF_nro_TileMap_gssye;
extern jint SF_nro_TileMap_countx;
extern jint SF_nro_TileMap_county;

#define VTABLE_nro_TileMap_hashCode_R_int 0
typedef jint (*func_nro_TileMap_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_TileMap_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_TileMap_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_TileMap_clone_R_java_lang_Object 2
typedef jobject (*func_nro_TileMap_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_TileMap_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_TileMap_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_TileMap_toString_R_java_lang_String 4
typedef jobject (*func_nro_TileMap_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_TileMap_finalize 5
typedef void (*func_nro_TileMap_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_TileMap_notify 6
typedef void (*func_nro_TileMap_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_TileMap_notifyAll 7
typedef void (*func_nro_TileMap_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_TileMap_wait 8
typedef void (*func_nro_TileMap_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_TileMap_wait_long 9
typedef void (*func_nro_TileMap_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_TileMap_wait_long_int 10
typedef void (*func_nro_TileMap_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);

void mark_nro_TileMap(jobject object, jint mark, jint depth);
void clinit_nro_TileMap(jcontext ctx);
void init_nro_TileMap(jcontext ctx, jobject self);
jbool SM_nro_TileMap_isVoDaiMap_R_boolean(jcontext ctx);
jbool SM_nro_TileMap_isTrainingMap_R_boolean(jcontext ctx);
jbool SM_nro_TileMap_mapPhuBang_R_boolean(jcontext ctx);
jobject SM_nro_TileMap_getBIById_int_R_nro_BgItem(jcontext ctx, jint param0);
jbool SM_nro_TileMap_isOfflineMap_R_boolean(jcontext ctx);
jbool SM_nro_TileMap_b_int_R_boolean(jcontext ctx, jint param0);
void SM_nro_TileMap_loadTileImage(jcontext ctx);
void SM_nro_TileMap_loadMap_int(jcontext ctx, jint param0);
jbool SM_nro_TileMap_isInAirMap_R_boolean(jcontext ctx);
jbool SM_nro_TileMap_isMapDouble_R_boolean(jcontext ctx);
void SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3);
void SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4);
void SM_nro_TileMap_paintTilemap_lib_mGraphics(jcontext ctx, jobject param0);
jbool SM_nro_TileMap_i_R_boolean(jcontext ctx);
void SM_nro_TileMap_paintOutTilemap_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_TileMap_loadMapFromResource_int(jcontext ctx, jint param0);
jint SM_nro_TileMap_tileTypeAt_int_int_R_int(jcontext ctx, jint param0, jint param1);
jint SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(jcontext ctx, jint param0, jint param1);
jbool SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2);
void SM_nro_TileMap__setTileTypeAtPixel_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
void SM_nro_TileMap_setTileTypeAtPixel_int_int_int(jcontext ctx, jint param0, jint param1, jint param2);
jint SM_nro_TileMap_tileYofPixel_int_R_int(jcontext ctx, jint param0);
jint SM_nro_TileMap_tileXofPixel_int_R_int(jcontext ctx, jint param0);
void SM_nro_TileMap_loadMainTile(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
