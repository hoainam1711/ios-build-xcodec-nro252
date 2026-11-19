#ifndef HEADER_nro_InfoMe
#define HEADER_nro_InfoMe

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_InfoMe {
	java_lang_Object parent;
	jref F_charId;
	jref F_info;
	jint F_dir;
	jint F_f;
	jint F_tF;
	jint F_cmtoY;
	jint F_cmy;
	jint F_cmdy;
	jint F_cmvy;
	jint F_cmyLim;
	jint F_cmx;
	jint F_cmtoX;
	jint F_cmdx;
	jbool F_isDone;
	jbool F_isUpdate;
	jint F_timeDelay;
	jint F_playerID;
	jref F_cmdChat;
} nro_InfoMe;

extern Class class_nro_InfoMe;


#define VTABLE_nro_InfoMe_hashCode_R_int 0
typedef jint (*func_nro_InfoMe_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_InfoMe_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_InfoMe_clone_R_java_lang_Object 2
typedef jobject (*func_nro_InfoMe_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_InfoMe_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_toString_R_java_lang_String 4
typedef jobject (*func_nro_InfoMe_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_finalize 5
typedef void (*func_nro_InfoMe_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_notify 6
typedef void (*func_nro_InfoMe_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_notifyAll 7
typedef void (*func_nro_InfoMe_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_wait 8
typedef void (*func_nro_InfoMe_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_wait_long 9
typedef void (*func_nro_InfoMe_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_InfoMe_wait_long_int 10
typedef void (*func_nro_InfoMe_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_InfoMe_paint_lib_mGraphics 11
typedef void (*func_nro_InfoMe_paint_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_InfoMe_update 12
typedef void (*func_nro_InfoMe_update)(jcontext ctx, jobject self);
#define VTABLE_nro_InfoMe_addInfoWithChar_java_lang_String_nro_Char_boolean 13
typedef void (*func_nro_InfoMe_addInfoWithChar_java_lang_String_nro_Char_boolean)(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
#define VTABLE_nro_InfoMe_addInfo_java_lang_String_int 14
typedef void (*func_nro_InfoMe_addInfo_java_lang_String_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_nro_InfoMe(jobject object, jint mark, jint depth);
void clinit_nro_InfoMe(jcontext ctx);
void init_nro_InfoMe(jcontext ctx, jobject self);
void M_nro_InfoMe_paint_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_InfoMe_update(jcontext ctx, jobject self);
void M_nro_InfoMe_addInfoWithChar_java_lang_String_nro_Char_boolean(jcontext ctx, jobject self, jobject param0, jobject param1, jbool param2);
void M_nro_InfoMe_addInfo_java_lang_String_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
