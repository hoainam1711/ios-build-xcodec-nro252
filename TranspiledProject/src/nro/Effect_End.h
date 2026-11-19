#ifndef HEADER_nro_Effect_End
#define HEADER_nro_Effect_End

#include "Clearwing.h"
#include "java/lang/Object.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct nro_Effect_End {
	java_lang_Object parent;
	jref F_VecEffEnd;
	jref F_fraImgEff;
	jref F_mpaintone_Arrow;
	jref F_mImageArrow;
	jint F_typePaint;
	jint F_typeEffect;
	jint F_typeSub;
	jint F_range;
	jint F_fRemove;
	jint F_fMove;
	jint F_n_frame;
	jint F_x;
	jint F_y;
	jint F_w;
	jint F_h;
	jint F_dir;
	jint F_dir_nguoc;
	jint F_levelPaint;
	jint F_f;
	jint F_frame;
	jint F_fSpeed;
	jint F_vx;
	jint F_vy;
	jint F_x1000;
	jint F_y1000;
	jint F_vx1000;
	jint F_vy1000;
	jint F_dy_throw;
	jint F_vMax;
	jint F_toX;
	jshort F_timeRemove;
	jlong F_time;
	jbool F_isRemove;
	jbool F_isAddSub;
	jref F_charUse;
	jref F_listObj;
	jref F_target;
	jint F_goc_Arc;
	jint F_va;
	jint F_gocT_Arc;
	jint F_P;
	jint F_Q;
	jref F_colorpaint;
	jref F_S;
	jref F_T;
	jref F_U;
	jref F_mXoayArrow;
	jint F_indexColorStar;
	jint F_xline;
	jint F_yline;
	jref F_fra_skill;
} nro_Effect_End;

extern Class class_nro_Effect_End;

extern jobject SF_nro_Effect_End_arrInfoEff;
extern jobject SF_nro_Effect_End_colorStar;

#define VTABLE_nro_Effect_End_hashCode_R_int 0
typedef jint (*func_nro_Effect_End_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_nro_Effect_End_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Effect_End_clone_R_java_lang_Object 2
typedef jobject (*func_nro_Effect_End_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_getClass_R_java_lang_Class 3
typedef jobject (*func_nro_Effect_End_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_toString_R_java_lang_String 4
typedef jobject (*func_nro_Effect_End_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_finalize 5
typedef void (*func_nro_Effect_End_finalize)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_notify 6
typedef void (*func_nro_Effect_End_notify)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_notifyAll 7
typedef void (*func_nro_Effect_End_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_wait 8
typedef void (*func_nro_Effect_End_wait)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_wait_long 9
typedef void (*func_nro_Effect_End_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_nro_Effect_End_wait_long_int 10
typedef void (*func_nro_Effect_End_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_nro_Effect_End_create_Effect 11
typedef void (*func_nro_Effect_End_create_Effect)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_upd_End_Rock 12
typedef void (*func_nro_Effect_End_upd_End_Rock)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_pnt_End_Rock_lib_mGraphics 13
typedef void (*func_nro_Effect_End_pnt_End_Rock_lib_mGraphics)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_nro_Effect_End_set_FireWork 14
typedef void (*func_nro_Effect_End_set_FireWork)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_set_Skill_Destroy 15
typedef void (*func_nro_Effect_End_set_Skill_Destroy)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_a_int_int_int_int 16
typedef void (*func_nro_Effect_End_a_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_nro_Effect_End_set_End_Rock 17
typedef void (*func_nro_Effect_End_set_End_Rock)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_a_boolean 18
typedef void (*func_nro_Effect_End_a_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_nro_Effect_End_get_Img_Skill 19
typedef void (*func_nro_Effect_End_get_Img_Skill)(jcontext ctx, jobject self);
#define VTABLE_nro_Effect_End_a_lib_mGraphics_int 20
typedef void (*func_nro_Effect_End_a_lib_mGraphics_int)(jcontext ctx, jobject self, jobject param0, jint param1);

void mark_nro_Effect_End(jobject object, jint mark, jint depth);
void clinit_nro_Effect_End(jcontext ctx);
jobject SM_nro_Effect_End_getImage_int_R_javax_microedition_lcdui_Image(jcontext ctx, jint param0);
void init_nro_Effect_End_int_int_int_nro_Char_nro_Point_int_short_short(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jobject param3, jobject param4, jint param5, jshort param6, jshort param7);
void init_nro_Effect_End_int_int_int_int_int_int_int_short_Array1_nro_Point(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3, jint param4, jint param5, jint param6, jshort param7, jobject param8);
void M_nro_Effect_End_create_Effect(jcontext ctx, jobject self);
void M_nro_Effect_End_upd_End_Rock(jcontext ctx, jobject self);
void M_nro_Effect_End_pnt_End_Rock_lib_mGraphics(jcontext ctx, jobject self, jobject param0);
void M_nro_Effect_End_set_FireWork(jcontext ctx, jobject self);
void M_nro_Effect_End_set_Skill_Destroy(jcontext ctx, jobject self);
void M_nro_Effect_End_a_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
void M_nro_Effect_End_set_End_Rock(jcontext ctx, jobject self);
void M_nro_Effect_End_a_boolean(jcontext ctx, jobject self, jbool param0);
void M_nro_Effect_End_get_Img_Skill(jcontext ctx, jobject self);
void M_nro_Effect_End_a_lib_mGraphics_int(jcontext ctx, jobject self, jobject param0, jint param1);

#ifdef __cplusplus
}
#endif

#endif
