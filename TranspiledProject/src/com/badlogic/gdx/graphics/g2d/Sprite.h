#ifndef HEADER_com_badlogic_gdx_graphics_g2d_Sprite
#define HEADER_com_badlogic_gdx_graphics_g2d_Sprite

#include "Clearwing.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct com_badlogic_gdx_graphics_g2d_Sprite {
	com_badlogic_gdx_graphics_g2d_TextureRegion parent;
	jref F_vertices;
	jref F_color;
	jfloat F_packedColor;
	jfloat F_x;
	jfloat F_y;
	jfloat F_width;
	jfloat F_height;
	jfloat F_originX;
	jfloat F_originY;
	jfloat F_rotation;
	jfloat F_scaleX;
	jfloat F_scaleY;
	jbool F_dirty;
	jref F_bounds;
} com_badlogic_gdx_graphics_g2d_Sprite;

extern Class class_com_badlogic_gdx_graphics_g2d_Sprite;

extern jint SF_com_badlogic_gdx_graphics_g2d_Sprite_VERTEX_SIZE;
extern jint SF_com_badlogic_gdx_graphics_g2d_Sprite_SPRITE_SIZE;

#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_hashCode_R_int 0
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Sprite_hashCode_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_equals_java_lang_Object_R_boolean 1
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_Sprite_equals_java_lang_Object_R_boolean)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_clone_R_java_lang_Object 2
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Sprite_clone_R_java_lang_Object)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getClass_R_java_lang_Class 3
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Sprite_getClass_R_java_lang_Class)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_toString_R_java_lang_String 4
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Sprite_toString_R_java_lang_String)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_finalize 5
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_finalize)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_notify 6
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_notify)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_notifyAll 7
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_notifyAll)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_wait 8
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_wait)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_wait_long 9
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_wait_long)(jcontext ctx, jobject self, jlong param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_wait_long_int 10
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_wait_long_int)(jcontext ctx, jobject self, jlong param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_Texture 11
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_int_int_int_int 12
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_int_int_int_int)(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float 13
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion 14
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int 15
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int)(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getTexture_R_com_badlogic_gdx_graphics_Texture 16
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Sprite_getTexture_R_com_badlogic_gdx_graphics_Texture)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setTexture_com_badlogic_gdx_graphics_Texture 17
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setTexture_com_badlogic_gdx_graphics_Texture)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getU_R_float 18
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getU_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setU_float 19
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setU_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getV_R_float 20
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getV_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setV_float 21
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setV_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getU2_R_float 22
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getU2_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float 23
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getV2_R_float 24
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getV2_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float 25
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getRegionX_R_int 26
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Sprite_getRegionX_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegionX_int 27
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegionX_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getRegionY_R_int 28
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Sprite_getRegionY_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegionY_int 29
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegionY_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getRegionWidth_R_int 30
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Sprite_getRegionWidth_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegionWidth_int 31
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegionWidth_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getRegionHeight_R_int 32
typedef jint (*func_com_badlogic_gdx_graphics_g2d_Sprite_getRegionHeight_R_int)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRegionHeight_int 33
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRegionHeight_int)(jcontext ctx, jobject self, jint param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean 34
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_isFlipX_R_boolean 35
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_Sprite_isFlipX_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_isFlipY_R_boolean 36
typedef jbool (*func_com_badlogic_gdx_graphics_g2d_Sprite_isFlipY_R_boolean)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float 37
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion 38
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Sprite_split_int_int_R_Array2_com_badlogic_gdx_graphics_g2d_TextureRegion)(jcontext ctx, jobject self, jint param0, jint param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite 39
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float 40
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float 41
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float 42
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float 43
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setX_float 44
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setY_float 45
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float 46
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float 47
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float 48
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float 49
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float 50
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float 51
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color 52
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float 53
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float 54
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float 55
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float 56
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setOriginCenter 57
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setOriginCenter)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float 58
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float 59
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float 60
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean 61
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean)(jcontext ctx, jobject self, jbool param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float 62
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float 63
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float)(jcontext ctx, jobject self, jfloat param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_scale_float 64
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_scale_float)(jcontext ctx, jobject self, jfloat param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float 65
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle 66
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch 67
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch)(jcontext ctx, jobject self, jobject param0);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float 68
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float)(jcontext ctx, jobject self, jobject param0, jfloat param1);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float 69
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float 70
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float 71
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float 72
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float 73
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float 74
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float 75
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float 76
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color 77
typedef jobject (*func_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float 78
typedef jfloat (*func_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float)(jcontext ctx, jobject self);
#define VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean 79
typedef void (*func_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean)(jcontext ctx, jobject self, jbool param0, jbool param1);

void mark_com_badlogic_gdx_graphics_g2d_Sprite(jobject object, jint mark, jint depth);
void clinit_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx);
void init_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self);
void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2);
void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_Texture_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0);
void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(jcontext ctx, jobject self, jobject param0, jint param1, jint param2, jint param3, jint param4);
void init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_set_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setBounds_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginBasedPosition_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setX_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setY_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterX_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setCenterY_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setCenter_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_translateX_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_translateY_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_translate_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setAlpha_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setColor_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setPackedColor_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setOrigin_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setOriginCenter(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setRotation_float(jcontext ctx, jobject self, jfloat param0);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getRotation_R_float(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_g2d_Sprite_rotate_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_rotate90_boolean(jcontext ctx, jobject self, jbool param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setScale_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_scale_float(jcontext ctx, jobject self, jfloat param0);
jobject M_com_badlogic_gdx_graphics_g2d_Sprite_getVertices_R_Array1_float(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_g2d_Sprite_getBoundingRectangle_R_com_badlogic_gdx_math_Rectangle(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch(jcontext ctx, jobject self, jobject param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_draw_com_badlogic_gdx_graphics_g2d_Batch_float(jcontext ctx, jobject self, jobject param0, jfloat param1);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getX_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getY_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginX_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getOriginY_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleX_R_float(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getScaleY_R_float(jcontext ctx, jobject self);
jobject M_com_badlogic_gdx_graphics_g2d_Sprite_getColor_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self);
jfloat M_com_badlogic_gdx_graphics_g2d_Sprite_getPackedColor_R_float(jcontext ctx, jobject self);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setRegion_float_float_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1, jfloat param2, jfloat param3);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setU_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setV_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setU2_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setV2_float(jcontext ctx, jobject self, jfloat param0);
void M_com_badlogic_gdx_graphics_g2d_Sprite_setFlip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_flip_boolean_boolean(jcontext ctx, jobject self, jbool param0, jbool param1);
void M_com_badlogic_gdx_graphics_g2d_Sprite_scroll_float_float(jcontext ctx, jobject self, jfloat param0, jfloat param1);

#ifdef __cplusplus
}
#endif

#endif
