#ifndef HEADER_nro_Controller
#define HEADER_nro_Controller

#include "Clearwing.h"
#include "java/lang/Object.h"
#include "nro/IMessageHandler.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Controller {
	java_lang_Object parent;
	jref F_messWait;
	jfloat F_demCount;
} nro_Controller;

extern Class class_nro_Controller;

extern jobject SF_nro_Controller_instance;
extern jbool SF_nro_Controller_isMain;
extern jbool SF_nro_Controller_isStopReadMessage;
extern jbool SF_nro_Controller_isDisconnected;
extern jobject SF_nro_Controller_frameHT_NEWBOSS;

#define VTABLE_nro_Controller_hashCode_R_int 0
typedef jint (*func_nro_Controller_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Controller_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Controller_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Controller_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller_toString_R_java_lang_String 4
typedef jobject (*func_nro_Controller_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller_finalize 5
typedef void (*func_nro_Controller_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller_notify 6
typedef void (*func_nro_Controller_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller_notifyAll 7
typedef void (*func_nro_Controller_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller_wait 8
typedef void (*func_nro_Controller_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Controller_wait_long 9
typedef void (*func_nro_Controller_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Controller_wait_long_int 10
typedef void (*func_nro_Controller_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Controller_onMessage_nro_Message 11
typedef void (*func_nro_Controller_onMessage_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_onConnectionFail_boolean 12
typedef void (*func_nro_Controller_onConnectionFail_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Controller_onDisconnected_boolean 13
typedef void (*func_nro_Controller_onDisconnected_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Controller_onConnectOK_boolean 14
typedef void (*func_nro_Controller_onConnectOK_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Controller_requestItemPlayer_nro_Message 15
typedef void (*func_nro_Controller_requestItemPlayer_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_phuban_Info_nro_Message 16
typedef void (*func_nro_Controller_phuban_Info_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_messageNotMap_nro_Message 17
typedef void (*func_nro_Controller_messageNotMap_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_messageSubCommand_nro_Message 18
typedef void (*func_nro_Controller_messageSubCommand_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_readGetImgByName_nro_Message 19
typedef void (*func_nro_Controller_readGetImgByName_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_loadItemNew_java_io_DataInputStream_boolean 20
typedef void (*func_nro_Controller_loadItemNew_java_io_DataInputStream_boolean)(jcontext ctx, jobject self, jobject param0, jbool param1);
#define VTABLE_nro_Controller_j_nro_Message 21
typedef void (*func_nro_Controller_j_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_read_cmdExtra_nro_Message 22
typedef void (*func_nro_Controller_read_cmdExtra_nro_Message)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Controller_read_cmdExtraBig_nro_Message 23
typedef void (*func_nro_Controller_read_cmdExtraBig_nro_Message)(jcontext ctx, jobject self, jobject param0);

void mark_nro_Controller(jobject object, jint mark, jint depth);
void clinit_nro_Controller(jcontext ctx);
void init_nro_Controller(jcontext ctx, jobject self);
jobject SM_nro_Controller_gI_R_nro_Controller(jcontext ctx);
void M_nro_Controller_onConnectOK_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_Controller_onConnectionFail_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_Controller_onDisconnected_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_Controller_requestItemPlayer_nro_Message(jcontext ctx, jobject self, jobject param0);
void M_nro_Controller_onMessage_nro_Message(jcontext ctx, jobject self, jobject param0);
void SM_nro_Controller_readLogin_nro_Message(jcontext ctx, jobject param0);
void SM_nro_Controller_createSkill_java_io_DataInputStream(jcontext ctx, jobject param0);
void SM_nro_Controller_createMap_java_io_DataInputStream(jcontext ctx, jobject param0);
void SM_nro_Controller_createData_java_io_DataInputStream_boolean(jcontext ctx, jobject param0, jbool param1);
jobject SM_nro_Controller_createImage_Array1_byte_R_javax_microedition_lcdui_Image(jcontext ctx, jobject param0);
void SM_nro_Controller_readClanMsg_nro_Message_int(jcontext ctx, jobject param0, jint param1);
void SM_nro_Controller_loadCurrMap_byte(jcontext ctx, jbyte param0);
void M_nro_Controller_phuban_Info_nro_Message(jcontext ctx, jobject self, jobject param0);
void M_nro_Controller_messageNotMap_nro_Message(jcontext ctx, jobject self, jobject param0);
void SM_nro_Controller_messageNotLogin_nro_Message(jcontext ctx, jobject param0);
void M_nro_Controller_messageSubCommand_nro_Message(jcontext ctx, jobject self, jobject param0);
void SM_nro_Controller_useSkill_nro_Skill(jcontext ctx, jobject param0);
jbool SM_nro_Controller_readCharInfo_nro_Char_nro_Message_R_boolean(jcontext ctx, jobject param0, jobject param1);
void M_nro_Controller_readGetImgByName_nro_Message(jcontext ctx, jobject self, jobject param0);
void M_nro_Controller_loadItemNew_java_io_DataInputStream_boolean(jcontext ctx, jobject self, jobject param0, jbool param1);
void SM_nro_Controller_readFrameBoss_nro_Message_int(jcontext ctx, jobject param0, jint param1);
jobject SM_nro_Controller_readArrHead_java_io_DataInputStream_R_Array2_int(jcontext ctx, jobject param0);
void M_nro_Controller_j_nro_Message(jcontext ctx, jobject self, jobject param0);
void M_nro_Controller_read_cmdExtra_nro_Message(jcontext ctx, jobject self, jobject param0);
void SM_nro_Controller_read_UpdateSkill_nro_Message(jcontext ctx, jobject param0);
void SM_nro_Controller_readExtra_byte_nro_Message(jcontext ctx, jbyte param0, jobject param1);
jobject SM_nro_Controller_readItemOption_nro_Message_R_nro_ItemOption(jcontext ctx, jobject param0);
void M_nro_Controller_read_cmdExtraBig_nro_Message(jcontext ctx, jobject self, jobject param0);

#ifdef __cplusplus
}
#endif

#endif
