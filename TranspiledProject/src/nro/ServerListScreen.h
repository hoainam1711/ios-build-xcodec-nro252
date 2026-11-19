#ifndef HEADER_nro_ServerListScreen
#define HEADER_nro_ServerListScreen

#include "Clearwing.h"
#include "nro/mScreen.h"
#include "nro/IActionListener.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_ServerListScreen {
	nro_mScreen parent;
	jref F_cmd;
	jref F_cmdCallHotline;
	jint F_nCmdPlay;
	jint F_lastW;
	jint F_lastH;
} nro_ServerListScreen;

extern Class class_nro_ServerListScreen;

extern jobject SF_nro_ServerListScreen_nameServer;
extern jobject SF_nro_ServerListScreen_address;
extern jbyte SF_nro_ServerListScreen_serverPriority;
extern jobject SF_nro_ServerListScreen_port;
extern jint SF_nro_ServerListScreen_selected;
extern jbool SF_nro_ServerListScreen_isWait;
extern jobject SF_nro_ServerListScreen_language;
extern jobject SF_nro_ServerListScreen_typeClass;
extern jobject SF_nro_ServerListScreen_listChar;
extern jbool SF_nro_ServerListScreen_isHaveChar;
extern jobject SF_nro_ServerListScreen_typeSv;
extern jobject SF_nro_ServerListScreen_isNew;
extern jobject SF_nro_ServerListScreen_ACTIVE_IP;
extern jint SF_nro_ServerListScreen_ACTIVE_PORT;
extern jbool SF_nro_ServerListScreen_IS_LOCAL;
extern jobject SF_nro_ServerListScreen_GATEWAY_HOST;
extern jint SF_nro_ServerListScreen_GATEWAY_PORT;
extern jobject SF_nro_ServerListScreen_GATEWAY_HTTP_PATH;
extern jbool SF_nro_ServerListScreen_GATEWAY_SSL;
extern jobject SF_nro_ServerListScreen_IP_VPS;
extern jobject SF_nro_ServerListScreen_IP_LOCAL;
extern jobject SF_nro_ServerListScreen_smartPhoneVN;
extern jobject SF_nro_ServerListScreen_javaVN;
extern jobject SF_nro_ServerListScreen_smartPhoneIn;
extern jobject SF_nro_ServerListScreen_javaIn;
extern jobject SF_nro_ServerListScreen_smartPhoneE;
extern jobject SF_nro_ServerListScreen_javaE;
extern jobject SF_nro_ServerListScreen_linkDefault;
extern jbool SF_nro_ServerListScreen_isHaveChar1;
extern jobject SF_nro_ServerListScreen_l;
extern jbool SF_nro_ServerListScreen_waitToLogin;
extern jint SF_nro_ServerListScreen_lY;
extern jlong SF_nro_ServerListScreen_count_reConnect;
extern jobject SF_nro_ServerListScreen_RMS_NRlink;
extern jint SF_nro_ServerListScreen_ipSelect;
extern jbool SF_nro_ServerListScreen_bigOk;
extern jint SF_nro_ServerListScreen_flagServer;
extern jint SF_nro_ServerListScreen_percent;
extern jint SF_nro_ServerListScreen_countDieConnect;
extern jbool SF_nro_ServerListScreen_isGetData;
extern jobject SF_nro_ServerListScreen_cmdUpdateServer;
extern jobject SF_nro_ServerListScreen_cmdDeleteRMS;
extern jint SF_nro_ServerListScreen_testConnect;
extern jbool SF_nro_ServerListScreen_loadScreen;
extern jbool SF_nro_ServerListScreen_isAutoConect;
extern jobject SF_nro_ServerListScreen_RMS_svselect;
extern jobject SF_nro_ServerListScreen_RMS_NR_Extralink;

#define VTABLE_nro_ServerListScreen_hashCode_R_int 0
typedef jint (*func_nro_ServerListScreen_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_ServerListScreen_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ServerListScreen_clone_R_java_lang_Object 2
typedef jobject (*func_nro_ServerListScreen_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_ServerListScreen_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_toString_R_java_lang_String 4
typedef jobject (*func_nro_ServerListScreen_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_finalize 5
typedef void (*func_nro_ServerListScreen_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_notify 6
typedef void (*func_nro_ServerListScreen_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_notifyAll 7
typedef void (*func_nro_ServerListScreen_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_wait 8
typedef void (*func_nro_ServerListScreen_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_wait_long 9
typedef void (*func_nro_ServerListScreen_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_ServerListScreen_wait_long_int 10
typedef void (*func_nro_ServerListScreen_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_ServerListScreen_switchToMe 11
typedef void (*func_nro_ServerListScreen_switchToMe)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_keyPress_int 12
typedef void (*func_nro_ServerListScreen_keyPress_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_nro_ServerListScreen_update 13
typedef void (*func_nro_ServerListScreen_update)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_updateKey 14
typedef void (*func_nro_ServerListScreen_updateKey)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_paint_lib_mGraphics 15
typedef void (*func_nro_ServerListScreen_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_ServerListScreen_perform_int_java_lang_Object 16
typedef void (*func_nro_ServerListScreen_perform_int_java_lang_Object)(jcontext ctx, jobject self, jint param0, jobject param1);
#define VTABLE_nro_ServerListScreen_initCommand 17
typedef void (*func_nro_ServerListScreen_initCommand)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_updatePosition 18
typedef void (*func_nro_ServerListScreen_updatePosition)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_processInput 19
typedef void (*func_nro_ServerListScreen_processInput)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_switchToMe2 20
typedef void (*func_nro_ServerListScreen_switchToMe2)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_show2 21
typedef void (*func_nro_ServerListScreen_show2)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_selectServer 22
typedef void (*func_nro_ServerListScreen_selectServer)(jcontext ctx, jobject self);
#define VTABLE_nro_ServerListScreen_init 23
typedef void (*func_nro_ServerListScreen_init)(jcontext ctx, jobject self);

void mark_nro_ServerListScreen(jobject object, jint mark, jint depth);
void clinit_nro_ServerListScreen(jcontext ctx);
void init_nro_ServerListScreen(jcontext ctx, jobject self);
void SM_nro_ServerListScreen_createDeleteRMS(jcontext ctx);
void M_nro_ServerListScreen_initCommand(jcontext ctx, jobject self);
void SM_nro_ServerListScreen_doUpdateServer(jcontext ctx);
void SM_nro_ServerListScreen_getServerList_java_lang_String(jcontext ctx, jobject param0);
void M_nro_ServerListScreen_updatePosition(jcontext ctx, jobject self);
void M_nro_ServerListScreen_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_ServerListScreen_update(jcontext ctx, jobject self);
void M_nro_ServerListScreen_processInput(jcontext ctx, jobject self);
void SM_nro_ServerListScreen_paintDeleteData_lib_mGraphics(jcontext ctx, jobject param0);
void SM_nro_ServerListScreen_CheckBack_ServerListScreen(jcontext ctx);
void M_nro_ServerListScreen_updateKey(jcontext ctx, jobject self);
void SM_nro_ServerListScreen_saveIP(jcontext ctx);
void SM_nro_ServerListScreen_loadIP(jcontext ctx);
void M_nro_ServerListScreen_switchToMe(jcontext ctx, jobject self);
void M_nro_ServerListScreen_switchToMe2(jcontext ctx, jobject self);
void M_nro_ServerListScreen_show2(jcontext ctx, jobject self);
void M_nro_ServerListScreen_selectServer(jcontext ctx, jobject self);
void M_nro_ServerListScreen_perform_int_java_lang_Object(jcontext ctx, jobject self, jint param0, jobject param1);
void M_nro_ServerListScreen_init(jcontext ctx, jobject self);
void SM_nro_ServerListScreen_ConnectIP(jcontext ctx);
void SM_nro_ServerListScreen_SetIpSelect_int_boolean(jcontext ctx, jint param0, jbool param1);
void SM_nro_ServerListScreen_Login_New(jcontext ctx);
void SM_nro_ServerListScreen_saveRMS_ExtraLink(jcontext ctx);

#ifdef __cplusplus
}
#endif

#endif
