#ifndef HEADER_com_nro_GameMain$IWebPlatformInfo
#define HEADER_com_nro_GameMain$IWebPlatformInfo

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_nro_GameMain$IWebPlatformInfo {
	java_lang_Object parent;
} com_nro_GameMain$IWebPlatformInfo;

extern Class class_com_nro_GameMain$IWebPlatformInfo;


#define INDEX_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean 0
typedef jbool (*func_com_nro_GameMain$IWebPlatformInfo_isMobile_R_boolean)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IWebPlatformInfo_getDevicePixelRatio_R_float 1
typedef jfloat (*func_com_nro_GameMain$IWebPlatformInfo_getDevicePixelRatio_R_float)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IWebPlatformInfo_getScreenWidth_R_int 2
typedef jint (*func_com_nro_GameMain$IWebPlatformInfo_getScreenWidth_R_int)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IWebPlatformInfo_getScreenHeight_R_int 3
typedef jint (*func_com_nro_GameMain$IWebPlatformInfo_getScreenHeight_R_int)(jcontext ctx, jobject self);
#define INDEX_com_nro_GameMain$IWebPlatformInfo_getTargetZoomLevel_R_int 4
typedef jint (*func_com_nro_GameMain$IWebPlatformInfo_getTargetZoomLevel_R_int)(jcontext ctx, jobject self);

void mark_com_nro_GameMain$IWebPlatformInfo(jobject object, jint mark, jint depth);
void clinit_com_nro_GameMain$IWebPlatformInfo(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
