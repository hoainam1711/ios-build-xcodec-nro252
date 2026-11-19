#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "java/lang/StringBuilder.h"
#include "com/badlogic/gdx/utils/Json.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entries.h"
#include "com/badlogic/gdx/utils/GdxRuntimeException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/List_ListStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ImageButton_ImageButtonStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ImageTextButton_ImageTextButtonStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TiledDrawable.h"
#include "java/lang/reflect/Constructor.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasRegion.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Slider_SliderStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/NinePatchDrawable.h"
#include "com/badlogic/gdx/utils/reflect/Method.h"
#include "com/badlogic/gdx/scenes/scene2d/Actor.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ProgressBar_ProgressBarStyle.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas.h"
#include "com/badlogic/gdx/graphics/Color.h"
#include "java/lang/reflect/Method.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin.h"
#include "com/badlogic/gdx/graphics/g2d/NinePatch.h"
#include "com/badlogic/gdx/graphics/g2d/BitmapFont.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SplitPane_SplitPaneStyle.h"
#include "java/lang/Throwable.h"
#include "java/lang/Exception.h"
#include "java/lang/reflect/Field.h"
#include "java/util/Iterator.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Button_ButtonStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/SpriteDrawable.h"
#include "java/lang/Object.h"
#include "com/badlogic/gdx/graphics/g2d/TextureAtlas_AtlasSprite.h"
#include "com/badlogic/gdx/graphics/Texture.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Tree_TreeStyle.h"
#include "com/badlogic/gdx/graphics/g2d/Sprite.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/ScrollPane_ScrollPaneStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/SelectBox_SelectBoxStyle.h"
#include "com/badlogic/gdx/utils/ObjectMap_Entry.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_TintedDrawable.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/TextureRegionDrawable.h"
#include "com/badlogic/gdx/utils/Json_Serializer.h"
#include "java/lang/String.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/CheckBox_CheckBoxStyle.h"
#include "com/badlogic/gdx/files/FileHandle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Label_LabelStyle.h"
#include "com/badlogic/gdx/utils/SerializationException.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextTooltip_TextTooltipStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Window_WindowStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/BaseDrawable.h"
#include "com/badlogic/gdx/utils/ObjectMap_Values.h"
#include "com/badlogic/gdx/utils/reflect/ClassReflection.h"
#include "java/lang/annotation/Annotation.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextField_TextFieldStyle.h"
#include "com/badlogic/gdx/scenes/scene2d/utils/Drawable.h"
#include "java/lang/IllegalArgumentException.h"
#include "com/badlogic/gdx/utils/IdentityMap.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Touchpad_TouchpadStyle.h"
#include "com/badlogic/gdx/utils/ObjectMap.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Styleable.h"
#include "java/lang/CharSequence.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_1.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_2.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_3.h"
#include "com/badlogic/gdx/utils/Array.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_4.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/Skin_5.h"
#include "com/badlogic/gdx/utils/Disposable.h"
#include "java/lang/Class.h"
#include "com/badlogic/gdx/graphics/g2d/TextureRegion.h"
#include "java/lang/Deprecated.h"
#include "com/badlogic/gdx/scenes/scene2d/ui/TextButton_TextButtonStyle.h"

extern "C" {

jobject SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;

void mark_com_badlogic_gdx_scenes_scene2d_ui_Skin(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses)
			((gc_mark_ptr) ((jclass) ((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses)->clazz)->markFunction)((jobject) SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses, mark, depth + 1);
		return;
	}
	if (depth > GC_DEPTH_ALWAYS && (object->gcMark < GC_MARK_START || object->gcMark == mark))
		return;
	if (depth > MAX_GC_MARK_DEPTH) {
		markDeepObject(object);
		return;
	}
	if (object->gcMark >= GC_MARK_START)
		object->gcMark = mark;
	auto self = (com_badlogic_gdx_scenes_scene2d_ui_Skin *) object;
	if (self->F_resources)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_resources)->clazz)->markFunction)((jobject) self->F_resources, mark, depth + 1);
	if (self->F_atlas)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_atlas)->clazz)->markFunction)((jobject) self->F_atlas, mark, depth + 1);
	if (self->F_jsonClassTags)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_jsonClassTags)->clazz)->markFunction)((jobject) self->F_jsonClassTags, mark, depth + 1);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:<init>", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(71);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IdentityMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IdentityMap);
	init_com_badlogic_gdx_utils_IdentityMap(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_resources = (jref) sp[1].o;
	LINE_NUMBER(62);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;
	init_com_badlogic_gdx_utils_ObjectMap_int(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_jsonClassTags = (jref) sp[1].o;
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;
	frame[1].o = sp[0].o;
	frame[2].i = (((jarray) nullCheck(ctx, (frame[1].o)))->length);
	frame[3].i = (jint(0));
	}
label_5:;
	{
	if ((frame[3].i) >= (frame[2].i)) goto label_6;
	}
	{
	frame[4].o = ((jobject)ARRAY_ACCESS(jobject, (frame[1].o), (frame[3].i)));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_jsonClassTags;
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[4].o));
	LINE_NUMBER(66);
	INST_IINC(3, 1);
	goto label_5;
	}
label_6:;
	LINE_NUMBER(72);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(77);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IdentityMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IdentityMap);
	init_com_badlogic_gdx_utils_IdentityMap(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_resources = (jref) sp[1].o;
	LINE_NUMBER(62);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;
	init_com_badlogic_gdx_utils_ObjectMap_int(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_jsonClassTags = (jref) sp[1].o;
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_jsonClassTags;
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(66);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(78);
	sp[0].o = frame[1].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_nameWithoutExtension_R_java_lang_String])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".atlas"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_sibling_java_lang_String_R_com_badlogic_gdx_files_FileHandle])(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(79);
	jint temp0 = (jint)((func_com_badlogic_gdx_files_FileHandle_exists_R_boolean) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_files_FileHandle_exists_R_boolean])(ctx, (frame[2].o));
	if (temp0 == 0) goto label_10;
	}
	{
	LINE_NUMBER(80);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas_com_badlogic_gdx_files_FileHandle(ctx, sp[1].o, (frame[2].o));
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_atlas = (jref) sp[1].o;
	LINE_NUMBER(81);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_atlas;
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas])(ctx, sp[0].o, sp[1].o);
	}
label_10:;
	{
	LINE_NUMBER(84);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(85);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:<init>", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(89);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IdentityMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IdentityMap);
	init_com_badlogic_gdx_utils_IdentityMap(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_resources = (jref) sp[1].o;
	LINE_NUMBER(62);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;
	init_com_badlogic_gdx_utils_ObjectMap_int(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_jsonClassTags = (jref) sp[1].o;
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;
	frame[3].o = sp[0].o;
	frame[4].i = (((jarray) nullCheck(ctx, (frame[3].o)))->length);
	frame[5].i = (jint(0));
	}
label_5:;
	{
	if ((frame[5].i) >= (frame[4].i)) goto label_6;
	}
	{
	frame[6].o = ((jobject)ARRAY_ACCESS(jobject, (frame[3].o), (frame[5].i)));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_jsonClassTags;
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[6].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[6].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[6].o));
	LINE_NUMBER(66);
	INST_IINC(5, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(90);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_atlas = (jref) (frame[2].o);
	LINE_NUMBER(91);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(92);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(93);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void init_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(97);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(60);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_IdentityMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_IdentityMap);
	init_com_badlogic_gdx_utils_IdentityMap(ctx, sp[1].o);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_resources = (jref) sp[1].o;
	LINE_NUMBER(62);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale = (jfloat(1));
	LINE_NUMBER(64);
	sp[0].o = frame[0].o;
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[1].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[2].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;
	init_com_badlogic_gdx_utils_ObjectMap_int(ctx, sp[1].o, (((jarray) nullCheck(ctx, sp[2].o))->length));
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK(sp[0].o))->F_jsonClassTags = (jref) sp[1].o;
	LINE_NUMBER(66);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	sp[0].o = (jobject)SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses;
	frame[2].o = sp[0].o;
	frame[3].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	frame[4].i = (jint(0));
	}
label_5:;
	{
	if ((frame[4].i) >= (frame[3].i)) goto label_6;
	}
	{
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[4].i)));
	LINE_NUMBER(67);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_jsonClassTags;
	sp[1].o = (jobject)((func_java_lang_Class_getSimpleName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Class_getSimpleName_R_java_lang_String])(ctx, (frame[5].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (frame[5].o));
	LINE_NUMBER(66);
	INST_IINC(4, 1);
	goto label_5;
	}
label_6:;
	{
	LINE_NUMBER(98);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_atlas = (jref) (frame[1].o);
	LINE_NUMBER(99);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas])(ctx, (frame[0].o), (frame[1].o));
	LINE_NUMBER(100);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:load", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_SerializationException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(105);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonLoader_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_Json) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonLoader_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_Json])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_fromJson_java_lang_Class_com_badlogic_gdx_files_FileHandle_R_java_lang_Object])(ctx, sp[0].o, (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Skin)), (frame[1].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(108);
	goto label_4;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(106);
	frame[2].o = sp[0].o;
	LINE_NUMBER(107);
	clinit_com_badlogic_gdx_utils_SerializationException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_SerializationException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Error reading file: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_SerializationException_java_lang_String_java_lang_Throwable(ctx, sp[0].o, sp[1].o, (frame[2].o));
	throwException(ctx, sp[0].o);	}
label_4:;
	LINE_NUMBER(109);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[11];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:addRegions", 11 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(113);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas_getRegions_R_com_badlogic_gdx_utils_Array) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_getRegions_R_com_badlogic_gdx_utils_Array])(ctx, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(114);
	frame[3].i = (jint(0));
	frame[4].i = ((jint)((com_badlogic_gdx_utils_Array *) NULL_CHECK((frame[2].o)))->F_size);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(115);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_get_int_R_java_lang_Object])(ctx, (frame[2].o), (frame[3].i));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, sp[0].o));
	LINE_NUMBER(116);
	sp[0].o = (jobject)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_name;
	frame[6].o = sp[0].o;
	LINE_NUMBER(117);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_index) == (jint(-1))) goto label_8;
	}
	{
	LINE_NUMBER(118);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[6].o));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[5].o)))->F_index));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[6].o = sp[0].o;
	}
label_8:;
	{
	LINE_NUMBER(120);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, (frame[0].o), (frame[6].o), (frame[5].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureRegion)));
	LINE_NUMBER(114);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	LINE_NUMBER(122);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:add", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(125);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	sp[2].o = frame[2].o;
	sp[3].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, sp[0].o, sp[1].o, sp[2].o, sp[3].o);
	LINE_NUMBER(126);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1, jobject param2) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:add", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	frame[3].o = param2;
	{
	LINE_NUMBER(129);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(130);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"resource cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(131);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(132);
	if ((frame[4].o) != nullptr) goto label_4;
	}
	{
	LINE_NUMBER(133);
	clinit_com_badlogic_gdx_utils_ObjectMap(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_ObjectMap);
	sp[1].o = sp[0].o;
	sp += 2;
	if ((frame[3].o) == (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureRegion))) goto label_6;
	}
	{
	if ((frame[3].o) == (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable))) goto label_6;
	}
	{
	if ((frame[3].o) != (((jobject) &class_com_badlogic_gdx_graphics_g2d_Sprite))) goto label_7;
	}
label_6:;
	INST_SIPUSH(256);
	goto label_8;
label_7:;
	INST_BIPUSH(64);
label_8:;
	{
	sp -= 3;
	init_com_badlogic_gdx_utils_ObjectMap_int(ctx, sp[0].o, sp[2].i);
	frame[4].o = sp[0].o;
	LINE_NUMBER(134);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[3].o), (frame[4].o));
	}
label_4:;
	{
	LINE_NUMBER(136);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_put_java_lang_Object_java_lang_Object_R_java_lang_Object])(ctx, (frame[4].o), (frame[1].o), (frame[2].o));
	LINE_NUMBER(137);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_remove_java_lang_String_java_lang_Class(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:remove", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(140);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(141);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(142);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_remove_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	LINE_NUMBER(143);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:get", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(148);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (((jobject) createStringLiteral(ctx, u8"default"_j))), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:get", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(154);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(155);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"type cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(157);
	if ((frame[2].o) != (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable))) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(158);
	if ((frame[2].o) != (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureRegion))) goto label_4;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(159);
	if ((frame[2].o) != (((jobject) &class_com_badlogic_gdx_graphics_g2d_NinePatch))) goto label_5;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(160);
	if ((frame[2].o) != (((jobject) &class_com_badlogic_gdx_graphics_g2d_Sprite))) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite])(ctx, (frame[0].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(162);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(163);
	if ((frame[3].o) != nullptr) goto label_8;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" registered with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_8:;
	{
	LINE_NUMBER(164);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(165);
	if ((frame[4].o) != nullptr) goto label_10;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No "_j))));
	sp[2].o = (jobject)((func_java_lang_Class_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_lang_Class_getName_R_java_lang_String])(ctx, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" registered with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_10:;
	{
	LINE_NUMBER(166);
	popStackFrame(ctx);
	return (frame[4].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:optional", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(172);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"name cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(173);
	if ((frame[2].o) != nullptr) goto label_2;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"type cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_2:;
	{
	LINE_NUMBER(174);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(175);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_4:;
	{
	LINE_NUMBER(176);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_get_java_lang_Object_R_java_lang_Object])(ctx, (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jbool M_com_badlogic_gdx_scenes_scene2d_ui_Skin_has_java_lang_String_java_lang_Class_R_boolean(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:has", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(180);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[2].o));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(181);
	if ((frame[3].o) != nullptr) goto label_2;
	}
	INST_ICONST(0);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	LINE_NUMBER(182);
	jint temp0 = (jint)((func_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_containsKey_java_lang_Object_R_boolean])(ctx, (frame[3].o), (frame[1].o));
	popStackFrame(ctx);
	return temp0;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getAll_java_lang_Class_R_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getAll", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(187);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, (frame[1].o));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getColor_java_lang_String_R_com_badlogic_gdx_graphics_Color(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getColor", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(191);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_Color)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_Color, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getFont", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(195);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_BitmapFont)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_BitmapFont, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getRegion", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(201);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureRegion)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[0].o));
	LINE_NUMBER(202);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(204);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_Texture)));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_Texture, sp[0].o));
	LINE_NUMBER(205);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No TextureRegion or Texture registered with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(206);
	clinit_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion);
	init_com_badlogic_gdx_graphics_g2d_TextureRegion_com_badlogic_gdx_graphics_Texture(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(207);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureRegion)));
	LINE_NUMBER(208);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegions_java_lang_String_R_com_badlogic_gdx_utils_Array(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[8];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getRegions", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(213);
	frame[2].o = (jobject(nullptr));
	LINE_NUMBER(214);
	frame[3].i = (jint(0));
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureRegion)));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[0].o));
	LINE_NUMBER(216);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(217);
	clinit_com_badlogic_gdx_utils_Array(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_Array);
	init_com_badlogic_gdx_utils_Array(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	}
label_6:;
	{
	LINE_NUMBER(218);
	if ((frame[4].o) == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(219);
	((func_com_badlogic_gdx_utils_Array_add_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Array_add_java_lang_Object])(ctx, (frame[2].o), (frame[4].o));
	LINE_NUMBER(220);
	sp[0].o = frame[0].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"_"_j))));
	jint temp0 = frame[3].i;
	INST_IINC(3, 1);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, temp0);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, (((jobject) &class_com_badlogic_gdx_graphics_g2d_TextureRegion)));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureRegion, sp[0].o));
	goto label_6;
	}
label_4:;
	{
	LINE_NUMBER(223);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getTiledDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getTiledDrawable", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(229);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, sp[0].o));
	LINE_NUMBER(230);
	if ((frame[2].o) == nullptr) goto label_2;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	LINE_NUMBER(232);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable);
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(233);
	((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setName_java_lang_String) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setName_java_lang_String])(ctx, (frame[2].o), (frame[1].o));
	LINE_NUMBER(234);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale), (jfloat(1)), -1)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(235);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_scale_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_scale_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[2].o));
	LINE_NUMBER(236);
	((func_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setScale_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_setScale_float])(ctx, (frame[2].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale));
	}
label_5:;
	{
	LINE_NUMBER(238);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable)));
	LINE_NUMBER(239);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getPatch", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(246);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_NinePatch)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch, sp[0].o));
	LINE_NUMBER(247);
	if ((frame[2].o) == nullptr) goto label_0;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_GdxRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(250);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(251);
	if ((isInstance(ctx, (frame[3].o), &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(252);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, (frame[3].o))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, (frame[3].o))), (((jobject) createStringLiteral(ctx, u8"split"_j))));
	frame[4].o = sp[0].o;
	LINE_NUMBER(253);
	if ((frame[4].o) == nullptr) goto label_7;
	}
	{
	LINE_NUMBER(254);
	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch);
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion_int_int_int_int(ctx, sp[0].o, (frame[3].o), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(0)))), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(1)))), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(2)))), ((jint)ARRAY_ACCESS(jint, (frame[4].o), (jint(3)))));
	frame[2].o = sp[0].o;
	LINE_NUMBER(255);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, (frame[3].o))))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, (frame[3].o))), (((jobject) createStringLiteral(ctx, u8"pad"_j))));
	frame[5].o = sp[0].o;
	LINE_NUMBER(256);
	if ((frame[5].o) == nullptr) goto label_7;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_setPadding_float_float_float_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_setPadding_float_float_float_float])(ctx, (frame[2].o), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(0)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(1)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(2)))))), (jfloat(((jint)ARRAY_ACCESS(jint, (frame[5].o), (jint(3)))))));
	}
label_7:;
	{
	LINE_NUMBER(259);
	if ((frame[2].o) != nullptr) goto label_13;
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_NinePatch(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch);
	init_com_badlogic_gdx_graphics_g2d_NinePatch_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	}
label_13:;
	{
	LINE_NUMBER(260);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale), (jfloat(1)), -1)) == 0) goto label_14;
	}
	{
	((func_com_badlogic_gdx_graphics_g2d_NinePatch_scale_float_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_NinePatch_scale_float_float])(ctx, (frame[2].o), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale), ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale));
	}
label_14:;
	{
	LINE_NUMBER(261);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_NinePatch)));
	LINE_NUMBER(262);
	sp[0].o = frame[2].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(263);
	frame[3].o = sp[0].o;
	LINE_NUMBER(264);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No NinePatch, TextureRegion, or Texture registered with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getSprite", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(272);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_Sprite)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	LINE_NUMBER(273);
	if ((frame[2].o) == nullptr) goto label_0;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_GdxRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(276);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(277);
	if ((isInstance(ctx, (frame[3].o), &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(278);
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, (frame[3].o)));
	LINE_NUMBER(279);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_rotate) != 0) goto label_10;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_packedWidth) != ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_originalWidth)) goto label_10;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_packedHeight) == ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_originalHeight)) goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(280);
	clinit_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite);
	init_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasSprite_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion(ctx, sp[0].o, (frame[4].o));
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(282);
	if ((frame[2].o) != nullptr) goto label_11;
	}
	{
	clinit_com_badlogic_gdx_graphics_g2d_Sprite(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite);
	init_com_badlogic_gdx_graphics_g2d_Sprite_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	}
label_11:;
	{
	LINE_NUMBER(283);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale), (jfloat(1)), -1)) == 0) goto label_12;
	}
	{
	sp[0].o = frame[2].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getWidth_R_float])(ctx, (frame[2].o));
	jfloat temp1 = temp0 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale);
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_getHeight_R_float])(ctx, (frame[2].o));
	((func_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_Sprite_setSize_float_float])(ctx, sp[0].o, temp1, (temp2 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale)));
	}
label_12:;
	{
	LINE_NUMBER(284);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_Sprite)));
	LINE_NUMBER(285);
	sp[0].o = frame[2].o;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_ARETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(286);
	frame[3].o = sp[0].o;
	LINE_NUMBER(287);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No NinePatch, TextureRegion, or Texture registered with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getDrawable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(294);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable)));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, sp[0].o));
	LINE_NUMBER(295);
	if ((frame[2].o) == nullptr) goto label_0;
	}
	INST_ALOAD(2);
	popStackFrame(ctx);
	INST_ARETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_com_badlogic_gdx_utils_GdxRuntimeException))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(299);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion])(ctx, (frame[0].o), (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(300);
	if ((isInstance(ctx, (frame[3].o), &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion)) == 0) goto label_7;
	}
	{
	LINE_NUMBER(301);
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion, (frame[3].o)));
	LINE_NUMBER(302);
	sp[0].o = (jobject)((func_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion_findValue_java_lang_String_R_Array1_int])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"split"_j))));
	if (sp[0].o == nullptr) goto label_10;
	}
	{
	LINE_NUMBER(303);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable);
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_graphics_g2d_NinePatch(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	goto label_7;
	}
label_10:;
	{
	LINE_NUMBER(304);
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_rotate) != 0) goto label_12;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_packedWidth) != ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_originalWidth)) goto label_12;
	}
	{
	if (((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_packedHeight) == ((jint)((com_badlogic_gdx_graphics_g2d_TextureAtlas$AtlasRegion *) NULL_CHECK((frame[4].o)))->F_originalHeight)) goto label_7;
	}
label_12:;
	{
	LINE_NUMBER(305);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable);
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite])(ctx, (frame[0].o), (frame[1].o));
	init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[0].o, sp[1].o);
	frame[2].o = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(307);
	if ((frame[2].o) != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(308);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_graphics_g2d_TextureRegion(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(309);
	if ((floatCompare(((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale), (jfloat(1)), -1)) == 0) goto label_1;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_scale_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_scale_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[2].o));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(312);
	goto label_15;
label_2:;
	LINE_NUMBER(311);
	INST_ASTORE(3);
label_15:;
	{
	LINE_NUMBER(315);
	if ((frame[2].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(316);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_NinePatch)));
	frame[3].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_NinePatch, sp[0].o));
	LINE_NUMBER(317);
	if ((frame[3].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(318);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_graphics_g2d_NinePatch(ctx, sp[0].o, (frame[3].o));
	frame[2].o = sp[0].o;
	goto label_16;
	}
label_19:;
	{
	LINE_NUMBER(320);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, (frame[0].o), (frame[1].o), (((jobject) &class_com_badlogic_gdx_graphics_g2d_Sprite)));
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_graphics_g2d_Sprite, sp[0].o));
	LINE_NUMBER(321);
	if ((frame[4].o) == nullptr) goto label_22;
	}
	{
	LINE_NUMBER(322);
	clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_graphics_g2d_Sprite(ctx, sp[0].o, (frame[4].o));
	frame[2].o = sp[0].o;
	goto label_16;
	}
label_22:;
	{
	LINE_NUMBER(324);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"No Drawable, NinePatch, TextureRegion, Texture, or Sprite registered with name: "_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(329);
	if ((isInstance(ctx, (frame[2].o), &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable)) == 0) goto label_24;
	}
	{
	((func_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, (frame[2].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, (frame[2].o))), (frame[1].o));
	}
label_24:;
	{
	LINE_NUMBER(331);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class])(ctx, (frame[0].o), (frame[1].o), (frame[2].o), (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable)));
	LINE_NUMBER(332);
	popStackFrame(ctx);
	return (frame[2].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_find_java_lang_Object_R_java_lang_String(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:find", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(338);
	if ((frame[1].o) != nullptr) goto label_1;
	}
	{
	clinit_java_lang_IllegalArgumentException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_IllegalArgumentException);
	init_java_lang_IllegalArgumentException_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"style cannot be null."_j))));
	throwException(ctx, sp[0].o);	}
label_1:;
	{
	LINE_NUMBER(339);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[1].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_get_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o);
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(340);
	if ((frame[2].o) != nullptr) goto label_3;
	}
	INST_ACONST_NULL();
	popStackFrame(ctx);
	INST_ARETURN();
label_3:;
	{
	LINE_NUMBER(341);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_findKey_java_lang_Object_boolean_R_java_lang_Object])(ctx, (frame[2].o), (frame[1].o), (jint(1)));
	popStackFrame(ctx);
	return (checkCast(ctx, &class_java_lang_String, sp[0].o));
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:newDrawable", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(346);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:newDrawable", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(351);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[1].o));
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[2].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:newDrawable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(356);
	sp[0].o = frame[0].o;
	sp[1].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (frame[0].o), (frame[1].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o, (frame[2].o));
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:newDrawable", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(361);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable)) == 0) goto label_1;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(362);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable)) == 0) goto label_2;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_2:;
	{
	LINE_NUMBER(363);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable)) == 0) goto label_3;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(364);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable)) == 0) goto label_4;
	}
	{
	clinit_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable);
	init_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable(ctx, sp[0].o, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable, (frame[1].o))));
	popStackFrame(ctx);
	return sp[0].o;
	}
label_4:;
	{
	LINE_NUMBER(365);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to copy, unknown drawable type: "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jfloat param1, jfloat param2, jfloat param3, jfloat param4) {
	NULL_CHECK(self);
	jtype frame[14];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:newDrawable", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].f = param1;
	frame[3].f = param2;
	frame[4].f = param3;
	frame[5].f = param4;
	{
	LINE_NUMBER(370);
	sp[0].o = frame[0].o;
	sp[1].o = frame[1].o;
	clinit_com_badlogic_gdx_graphics_Color(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_graphics_Color);
	init_com_badlogic_gdx_graphics_Color_float_float_float_float(ctx, sp[2].o, (frame[2].f), (frame[3].f), (frame[4].f), (frame[5].f));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, sp[0].o, sp[1].o, sp[2].o);
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0, jobject param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:newDrawable", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].o = param1;
	{
	LINE_NUMBER(376);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable)) == 0) goto label_1;
	}
	{
	LINE_NUMBER(377);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable, (frame[1].o))), (frame[2].o));
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_1:;
	{
	LINE_NUMBER(378);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable)) == 0) goto label_5;
	}
	{
	LINE_NUMBER(379);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable, (frame[1].o))), (frame[2].o));
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_5:;
	{
	LINE_NUMBER(380);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable)) == 0) goto label_8;
	}
	{
	LINE_NUMBER(381);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable_tint_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable, (frame[1].o))), (frame[2].o));
	frame[3].o = sp[0].o;
	goto label_4;
	}
label_8:;
	{
	LINE_NUMBER(383);
	clinit_com_badlogic_gdx_utils_GdxRuntimeException(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_utils_GdxRuntimeException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Unable to copy, unknown drawable type: "_j))));
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_com_badlogic_gdx_utils_GdxRuntimeException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_4:;
	{
	LINE_NUMBER(385);
	if ((isInstance(ctx, (frame[3].o), &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable)) == 0) goto label_11;
	}
	{
	LINE_NUMBER(386);
	frame[4].o = (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, (frame[3].o)));
	LINE_NUMBER(387);
	if ((isInstance(ctx, (frame[1].o), &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable)) == 0) goto label_14;
	}
	{
	LINE_NUMBER(388);
	sp[0].o = frame[4].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[2].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String) ((void **) nullCheck(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, (frame[1].o))))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_getName_R_java_lang_String])(ctx, (checkCast(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable, (frame[1].o))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, sp[2].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	goto label_11;
	}
label_14:;
	{
	LINE_NUMBER(390);
	sp[0].o = frame[4].o;
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8" ("_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_Object_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[2].o));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8")"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	((func_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_utils_BaseDrawable_setName_java_lang_String])(ctx, sp[0].o, sp[1].o);
	}
label_11:;
	{
	LINE_NUMBER(393);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_scale_com_badlogic_gdx_scenes_scene2d_utils_Drawable(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:scale", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(400);
	sp[0].o = frame[1].o;
	jfloat temp0 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getLeftWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setLeftWidth_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setLeftWidth_float, sp[0].o))(ctx, sp[0].o, (temp0 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale)));
	LINE_NUMBER(401);
	sp[0].o = frame[1].o;
	jfloat temp1 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getRightWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setRightWidth_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setRightWidth_float, sp[0].o))(ctx, sp[0].o, (temp1 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale)));
	LINE_NUMBER(402);
	sp[0].o = frame[1].o;
	jfloat temp2 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getBottomHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setBottomHeight_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setBottomHeight_float, sp[0].o))(ctx, sp[0].o, (temp2 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale)));
	LINE_NUMBER(403);
	sp[0].o = frame[1].o;
	jfloat temp3 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getTopHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setTopHeight_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setTopHeight_float, sp[0].o))(ctx, sp[0].o, (temp3 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale)));
	LINE_NUMBER(404);
	sp[0].o = frame[1].o;
	jfloat temp4 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinWidth_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinWidth_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinWidth_float, sp[0].o))(ctx, sp[0].o, (temp4 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale)));
	LINE_NUMBER(405);
	sp[0].o = frame[1].o;
	jfloat temp5 = (jfloat)((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_getMinHeight_R_float, (frame[1].o)))(ctx, (frame[1].o));
	((func_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinHeight_float) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_utils_Drawable, INDEX_com_badlogic_gdx_scenes_scene2d_utils_Drawable_setMinHeight_float, sp[0].o))(ctx, sp[0].o, (temp5 * ((jfloat)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale)));
	LINE_NUMBER(406);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setScale_float(jcontext ctx, jobject self, jfloat param0) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[2];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:setScale", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].f = param0;
	{
	LINE_NUMBER(415);
	((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_scale = (frame[1].f);
	LINE_NUMBER(416);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setEnabled_com_badlogic_gdx_scenes_scene2d_ui_Styleable_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:setEnabled", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(422);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Styleable_getStyle_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, INDEX_com_badlogic_gdx_scenes_scene2d_ui_Styleable_getStyle_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(424);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_find_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_find_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(425);
	if ((frame[4].o) != nullptr) goto label_3;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_3:;
	{
	LINE_NUMBER(426);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[4].o), (((jobject) createStringLiteral(ctx, u8"-disabled"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	if ((frame[2].i) == 0) goto label_4;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_5;
label_4:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-disabled"_j));
label_5:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(427);
	sp[0].o = frame[0].o;
	sp[1].o = frame[4].o;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[3].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(429);
	((func_com_badlogic_gdx_scenes_scene2d_ui_Styleable_setStyle_java_lang_Object) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Styleable, INDEX_com_badlogic_gdx_scenes_scene2d_ui_Styleable_setStyle_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o), (frame[3].o));
	LINE_NUMBER(430);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setEnabledReflection_com_badlogic_gdx_scenes_scene2d_Actor_boolean(jcontext ctx, jobject self, jobject param0, jbool param1) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[7];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:setEnabledReflection", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	frame[2].i = param1;
	{
	LINE_NUMBER(439);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Skin_findMethod_java_lang_Class_java_lang_String_R_com_badlogic_gdx_utils_reflect_Method(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"getStyle"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(440);
	if ((frame[3].o) != nullptr) goto label_0;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_0:;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(443);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(0)));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(446);
	goto label_10;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(444);
	frame[5].o = sp[0].o;
	LINE_NUMBER(445);
	popStackFrame(ctx);
	return;
	}
label_10:;
	{
	LINE_NUMBER(448);
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_find_java_lang_Object_R_java_lang_String) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_find_java_lang_Object_R_java_lang_String])(ctx, (frame[0].o), (frame[4].o));
	frame[5].o = sp[0].o;
	LINE_NUMBER(449);
	if ((frame[5].o) != nullptr) goto label_13;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_13:;
	{
	LINE_NUMBER(450);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[1].o = (jobject)((func_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_String_replace_java_lang_CharSequence_java_lang_CharSequence_R_java_lang_String])(ctx, (frame[5].o), (((jobject) createStringLiteral(ctx, u8"-disabled"_j))), (((jobject) createStringLiteral(ctx, u8""_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp += 1;
	if ((frame[2].i) == 0) goto label_14;
	}
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8""_j));
	goto label_15;
label_14:;
	(sp++)->o = ((jobject) createStringLiteral(ctx, u8"-disabled"_j));
label_15:;
	{
	sp -= 2;
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, sp[1].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	frame[5].o = sp[0].o;
	LINE_NUMBER(451);
	sp[0].o = frame[0].o;
	sp[1].o = frame[5].o;
	sp[2].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[4].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[4].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(453);
	sp[0].o = (jobject)((func_java_lang_Object_getClass_R_java_lang_Class) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Object_getClass_R_java_lang_Class])(ctx, (frame[1].o));
	sp[0].o = (jobject)SM_com_badlogic_gdx_scenes_scene2d_ui_Skin_findMethod_java_lang_Class_java_lang_String_R_com_badlogic_gdx_utils_reflect_Method(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"setStyle"_j))));
	frame[3].o = sp[0].o;
	LINE_NUMBER(454);
	if ((frame[3].o) != nullptr) goto label_4;
	}
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(456);
	sp[0].o = frame[3].o;
	sp[1].o = frame[1].o;
	sp[2].o = (jobject)createArray(ctx, &class_java_lang_Object, (jint(1)));
	ARRAY_ACCESS(jobject, sp[2].o, (jint(0))) = (frame[4].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_invoke_java_lang_Object_Array1_java_lang_Object_R_java_lang_Object])(ctx, sp[0].o, sp[1].o, sp[2].o);
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(458);
	goto label_19;
label_6:;
	LINE_NUMBER(457);
	INST_ASTORE(6);
label_19:;
	LINE_NUMBER(459);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getAtlas_R_com_badlogic_gdx_graphics_g2d_TextureAtlas(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getAtlas", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(463);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_atlas;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

void M_com_badlogic_gdx_scenes_scene2d_ui_Skin_dispose(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[6];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:dispose", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(468);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_atlas;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_atlas;
	((func_com_badlogic_gdx_graphics_g2d_TextureAtlas_dispose) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_graphics_g2d_TextureAtlas_dispose])(ctx, sp[0].o);
	}
label_1:;
	{
	LINE_NUMBER(469);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_resources;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_IdentityMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_IdentityMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, sp[0].o);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	}
label_2:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[1].o)))(ctx, (frame[1].o));
	if (temp0 == 0) goto label_3;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[1].o)))(ctx, (frame[1].o));
	frame[2].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap, sp[0].o));
	LINE_NUMBER(470);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_values_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, (frame[2].o));
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap$Values_iterator_R_com_badlogic_gdx_utils_ObjectMap$Values])(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	}
label_5:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[3].o)))(ctx, (frame[3].o));
	if (temp0 == 0) goto label_6;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[3].o)))(ctx, (frame[3].o));
	frame[4].o = sp[0].o;
	LINE_NUMBER(471);
	if ((isInstance(ctx, (frame[4].o), &class_com_badlogic_gdx_utils_Disposable)) == 0) goto label_8;
	}
	{
	((func_com_badlogic_gdx_utils_Disposable_dispose) resolveInterfaceMethod(ctx, &class_com_badlogic_gdx_utils_Disposable, INDEX_com_badlogic_gdx_utils_Disposable_dispose, (checkCast(ctx, &class_com_badlogic_gdx_utils_Disposable, (frame[4].o)))))(ctx, (checkCast(ctx, &class_com_badlogic_gdx_utils_Disposable, (frame[4].o))));
	}
label_8:;
	goto label_5;
label_6:;
	LINE_NUMBER(472);
	goto label_2;
label_3:;
	LINE_NUMBER(473);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonLoader_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_Json(jcontext ctx, jobject self, jobject param0) {
	NULL_CHECK(self);
	jtype frame[13];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getJsonLoader", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].o = param0;
	{
	LINE_NUMBER(476);
	frame[2].o = (frame[0].o);
	LINE_NUMBER(478);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$1(ctx);
	sp[0].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Skin$1);
	init_com_badlogic_gdx_scenes_scene2d_ui_Skin$1_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx, sp[0].o, (frame[0].o));
	frame[3].o = sp[0].o;
	LINE_NUMBER(514);
	((func_com_badlogic_gdx_utils_Json_setTypeName_java_lang_String) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_setTypeName_java_lang_String])(ctx, (frame[3].o), (jobject(nullptr)));
	LINE_NUMBER(515);
	((func_com_badlogic_gdx_utils_Json_setUsePrototypes_boolean) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_com_badlogic_gdx_utils_Json_setUsePrototypes_boolean])(ctx, (frame[3].o), (jint(0)));
	LINE_NUMBER(517);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Skin);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$2(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Skin$2);
	init_com_badlogic_gdx_scenes_scene2d_ui_Skin$2_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx, sp[2].o, (frame[0].o), (frame[2].o));
	((func_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(548);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_g2d_BitmapFont);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$3(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Skin$3);
	init_com_badlogic_gdx_scenes_scene2d_ui_Skin$3_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx, sp[2].o, (frame[0].o), (frame[1].o), (frame[2].o));
	((func_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(590);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_graphics_Color);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$4(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Skin$4);
	init_com_badlogic_gdx_scenes_scene2d_ui_Skin$4_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx, sp[2].o, (frame[0].o));
	((func_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(603);
	sp[0].o = frame[3].o;
	sp[1].o = ((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Skin$TintedDrawable);
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin$5(ctx);
	sp[2].o = gcAlloc(ctx, &class_com_badlogic_gdx_scenes_scene2d_ui_Skin$5);
	init_com_badlogic_gdx_scenes_scene2d_ui_Skin$5_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx, sp[2].o, (frame[0].o));
	((func_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_setSerializer_java_lang_Class_com_badlogic_gdx_utils_Json$Serializer])(ctx, sp[0].o, sp[1].o, sp[2].o);
	LINE_NUMBER(617);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_jsonClassTags;
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_ObjectMap_iterator_R_com_badlogic_gdx_utils_ObjectMap$Entries])(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	}
label_9:;
	{
	jint temp0 = (jint)((func_java_util_Iterator_hasNext_R_boolean) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_hasNext_R_boolean, (frame[4].o)))(ctx, (frame[4].o));
	if (temp0 == 0) goto label_10;
	}
	{
	sp[0].o = (jobject)((func_java_util_Iterator_next_R_java_lang_Object) resolveInterfaceMethod(ctx, &class_java_util_Iterator, INDEX_java_util_Iterator_next_R_java_lang_Object, (frame[4].o)))(ctx, (frame[4].o));
	frame[5].o = (checkCast(ctx, &class_com_badlogic_gdx_utils_ObjectMap$Entry, sp[0].o));
	LINE_NUMBER(618);
	sp[0].o = frame[3].o;
	sp[1].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_key;
	sp[1].o = checkCast(ctx, &class_java_lang_String, sp[1].o);
	sp[2].o = (jobject)((com_badlogic_gdx_utils_ObjectMap$Entry *) NULL_CHECK((frame[5].o)))->F_value;
	((func_com_badlogic_gdx_utils_Json_addClassTag_java_lang_String_java_lang_Class) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_com_badlogic_gdx_utils_Json_addClassTag_java_lang_String_java_lang_Class])(ctx, sp[0].o, sp[1].o, (checkCast(ctx, &class_java_lang_Class, sp[2].o)));
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(620);
	popStackFrame(ctx);
	return (frame[3].o);
	}

	popStackFrame(ctx);
}

jobject M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonClassTags_R_com_badlogic_gdx_utils_ObjectMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:getJsonClassTags", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(627);
	sp[0].o = (jobject)((com_badlogic_gdx_scenes_scene2d_ui_Skin *) NULL_CHECK((frame[0].o)))->F_jsonClassTags;
	popStackFrame(ctx);
	return sp[0].o;
	}

	popStackFrame(ctx);
}

jobject SM_com_badlogic_gdx_scenes_scene2d_ui_Skin_findMethod_java_lang_Class_java_lang_String_R_com_badlogic_gdx_utils_reflect_Method(jcontext ctx, jobject param0, jobject param1) {
	jtype frame[8];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:findMethod", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	frame[0].o = param0;
	frame[1].o = param1;
	{
	LINE_NUMBER(639);
	sp[0].o = (jobject)SM_com_badlogic_gdx_utils_reflect_ClassReflection_getMethods_java_lang_Class_R_Array1_com_badlogic_gdx_utils_reflect_Method(ctx, (frame[0].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(640);
	frame[3].i = (jint(0));
	frame[4].i = (((jarray) nullCheck(ctx, (frame[2].o)))->length);
	}
label_3:;
	{
	if ((frame[3].i) >= (frame[4].i)) goto label_4;
	}
	{
	LINE_NUMBER(641);
	frame[5].o = ((jobject)ARRAY_ACCESS(jobject, (frame[2].o), (frame[3].i)));
	LINE_NUMBER(642);
	sp[0].o = (jobject)((func_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_com_badlogic_gdx_utils_reflect_Method_getName_R_java_lang_String])(ctx, (frame[5].o));
	jint temp0 = (jint)((func_java_lang_String_equals_java_lang_Object_R_boolean) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_String_equals_java_lang_Object_R_boolean])(ctx, sp[0].o, (frame[1].o));
	if (temp0 == 0) goto label_7;
	}
	INST_ALOAD(5);
	popStackFrame(ctx);
	INST_ARETURN();
label_7:;
	{
	LINE_NUMBER(640);
	INST_IINC(3, 1);
	goto label_3;
	}
label_4:;
	{
	LINE_NUMBER(644);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

void clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[4];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "com/badlogic/gdx/scenes/scene2d/ui/Skin:<clinit>", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	{
	LINE_NUMBER(630);
	sp[0].o = (jobject)createArray(ctx, &class_java_lang_Class, (24));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (((jobject) &class_com_badlogic_gdx_graphics_g2d_BitmapFont));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(1))) = (((jobject) &class_com_badlogic_gdx_graphics_Color));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(2))) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Skin$TintedDrawable));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(3))) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_NinePatchDrawable));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(4))) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_SpriteDrawable));
	ARRAY_ACCESS(jobject, sp[0].o, (jint(5))) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_TextureRegionDrawable));
	ARRAY_ACCESS(jobject, sp[0].o, (6)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable));
	ARRAY_ACCESS(jobject, sp[0].o, (7)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Button$ButtonStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (8)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_CheckBox$CheckBoxStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (9)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ImageButton$ImageButtonStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (10)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ImageTextButton$ImageTextButtonStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (11)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Label$LabelStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (12)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_List$ListStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (13)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ProgressBar$ProgressBarStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (14)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_ScrollPane$ScrollPaneStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (15)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_SelectBox$SelectBoxStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (16)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Slider$SliderStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (17)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_SplitPane$SplitPaneStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (18)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextButton$TextButtonStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (19)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextField$TextFieldStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (20)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_TextTooltip$TextTooltipStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (21)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Touchpad$TouchpadStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (22)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Tree$TreeStyle));
	ARRAY_ACCESS(jobject, sp[0].o, (23)) = (((jobject) &class_com_badlogic_gdx_scenes_scene2d_ui_Window$WindowStyle));
	clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin(ctx);
	SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses = sp[0].o;
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

static void initAnnotations(jcontext ctx) {
	auto &clazz = class_com_badlogic_gdx_scenes_scene2d_ui_Skin;
	auto fields = (java_lang_reflect_Field **) ((jarray) clazz.fields)->data;
	auto methods = (java_lang_reflect_Method **) ((jarray) clazz.methods)->data;
	auto constructors = (java_lang_reflect_Constructor **) ((jarray) clazz.constructors)->data;

	fields[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	fields[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[0])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[1])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[2])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	((java_lang_reflect_Method *) ((java_lang_reflect_Constructor *) constructors[3])->F_method)->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[0]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[1]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[2]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[3]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[4]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[5]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[6]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[7]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[8]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[9]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[10]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[11]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[12]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[13]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[14]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[15]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[16]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[17]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[18]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[19]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[20]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[21]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[22]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[23]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[24]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[25]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[26]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[27]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	{ // Method setEnabledReflection
		auto annotationArray = (jarray) createArray(ctx, &class_java_lang_annotation_Annotation, 1);
		methods[28]->F_annotations = (intptr_t) annotationArray;
		auto annotations = (jobject *) annotationArray->data;
		annotations[0] = gcAlloc(ctx, &class_java_lang_Deprecated);
		((java_lang_Deprecated *)annotations[0])->F_since = (intptr_t) ((jobject) createStringLiteral(ctx, u8""_j));
		((java_lang_Deprecated *)annotations[0])->F_forRemoval = 0;
	}

	methods[29]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[30]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[31]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[32]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[33]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);

	methods[34]->F_annotations = (intptr_t) createArray(ctx, &class_java_lang_annotation_Annotation, 0);
}

void *vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin[] {
	(void *) M_java_lang_Object_hashCode_R_int,
	(void *) M_java_lang_Object_equals_java_lang_Object_R_boolean,
	(void *) M_java_lang_Object_clone_R_java_lang_Object,
	(void *) M_java_lang_Object_getClass_R_java_lang_Class,
	(void *) M_java_lang_Object_toString_R_java_lang_String,
	(void *) M_java_lang_Object_finalize,
	(void *) M_java_lang_Object_notify,
	(void *) M_java_lang_Object_notifyAll,
	(void *) M_java_lang_Object_wait,
	(void *) M_java_lang_Object_wait_long,
	(void *) M_java_lang_Object_wait_long_int,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_dispose,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_remove_java_lang_String_java_lang_Class,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_has_java_lang_String_java_lang_Class_R_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getAll_java_lang_Class_R_com_badlogic_gdx_utils_ObjectMap,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getColor_java_lang_String_R_com_badlogic_gdx_graphics_Color,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegions_java_lang_String_R_com_badlogic_gdx_utils_Array,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getTiledDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_find_java_lang_Object_R_java_lang_String,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_scale_com_badlogic_gdx_scenes_scene2d_utils_Drawable,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setScale_float,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setEnabled_com_badlogic_gdx_scenes_scene2d_ui_Styleable_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setEnabledReflection_com_badlogic_gdx_scenes_scene2d_Actor_boolean,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getAtlas_R_com_badlogic_gdx_graphics_g2d_TextureAtlas,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonLoader_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_Json,
	(void *) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonClassTags_R_com_badlogic_gdx_utils_ObjectMap,
};

static VtableEntry vtableEntries[] {
	{ "hashCode", "()I" },
	{ "equals", "(Ljava/lang/Object;)Z" },
	{ "clone", "()Ljava/lang/Object;" },
	{ "getClass", "()Ljava/lang/Class;" },
	{ "toString", "()Ljava/lang/String;" },
	{ "finalize", "()V" },
	{ "notify", "()V" },
	{ "notifyAll", "()V" },
	{ "wait", "()V" },
	{ "wait", "(J)V" },
	{ "wait", "(JI)V" },
	{ "dispose", "()V" },
	{ "load", "(Lcom/badlogic/gdx/files/FileHandle;)V" },
	{ "addRegions", "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)V" },
	{ "add", "(Ljava/lang/String;Ljava/lang/Object;)V" },
	{ "add", "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)V" },
	{ "remove", "(Ljava/lang/String;Ljava/lang/Class;)V" },
	{ "get", "(Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "get", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "optional", "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;" },
	{ "has", "(Ljava/lang/String;Ljava/lang/Class;)Z" },
	{ "getAll", "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/ObjectMap;" },
	{ "getColor", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Color;" },
	{ "getFont", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;" },
	{ "getRegion", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/TextureRegion;" },
	{ "getRegions", "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Array;" },
	{ "getTiledDrawable", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/utils/TiledDrawable;" },
	{ "getPatch", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/NinePatch;" },
	{ "getSprite", "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/Sprite;" },
	{ "getDrawable", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "find", "(Ljava/lang/Object;)Ljava/lang/String;" },
	{ "newDrawable", "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "newDrawable", "(Ljava/lang/String;FFFF)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "newDrawable", "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "newDrawable", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "newDrawable", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;FFFF)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "newDrawable", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;" },
	{ "scale", "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V" },
	{ "setScale", "(F)V" },
	{ "setEnabled", "(Lcom/badlogic/gdx/scenes/scene2d/ui/Styleable;Z)V" },
	{ "setEnabledReflection", "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)V" },
	{ "getAtlas", "()Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;" },
	{ "getJsonLoader", "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/utils/Json;" },
	{ "getJsonClassTags", "()Lcom/badlogic/gdx/utils/ObjectMap;" },
};

static jclass interfaces[] { &class_com_badlogic_gdx_utils_Disposable, };

static jclass innerClasses[] {
	&class_com_badlogic_gdx_scenes_scene2d_ui_Skin$TintedDrawable,
};

static FieldMetadata fields[] {
	{ "resources", &class_com_badlogic_gdx_utils_IdentityMap, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin, F_resources), "Lcom/badlogic/gdx/utils/IdentityMap;", 0 },
	{ "atlas", &class_com_badlogic_gdx_graphics_g2d_TextureAtlas, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin, F_atlas), "Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;", 0 },
	{ "scale", &class_float, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin, F_scale), "F", 0 },
	{ "jsonClassTags", &class_com_badlogic_gdx_utils_ObjectMap, offsetof(com_badlogic_gdx_scenes_scene2d_ui_Skin, F_jsonClassTags), "Lcom/badlogic/gdx/utils/ObjectMap;", 18 },
	{ "defaultTagClasses", getArrayClass(&class_java_lang_Class, 1), (intptr_t) &SF_com_badlogic_gdx_scenes_scene2d_ui_Skin_defaultTagClasses, "[Ljava/lang/Class;", 26 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "()V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_files_FileHandle, 0, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_files_FileHandle_com_badlogic_gdx_graphics_g2d_TextureAtlas, 0, "(Lcom/badlogic/gdx/files/FileHandle;Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)V", 1 },
	{ "<init>", (intptr_t) init_com_badlogic_gdx_scenes_scene2d_ui_Skin_com_badlogic_gdx_graphics_g2d_TextureAtlas, 0, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)V", 1 },
	{ "load", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_load_com_badlogic_gdx_files_FileHandle, "(Lcom/badlogic/gdx/files/FileHandle;)V", 1 },
	{ "addRegions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_addRegions_com_badlogic_gdx_graphics_g2d_TextureAtlas, "(Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Object;)V", 1 },
	{ "add", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_add_java_lang_String_java_lang_Object_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Object;Ljava/lang/Class;)V", 1 },
	{ "remove", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_remove_java_lang_String_java_lang_Class, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_remove_java_lang_String_java_lang_Class, "(Ljava/lang/String;Ljava/lang/Class;)V", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_Class_R_java_lang_Object, "(Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "get", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_get_java_lang_String_java_lang_Class_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "optional", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_optional_java_lang_String_java_lang_Class_R_java_lang_Object, "(Ljava/lang/String;Ljava/lang/Class;)Ljava/lang/Object;", 1 },
	{ "has", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_has_java_lang_String_java_lang_Class_R_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_has_java_lang_String_java_lang_Class_R_boolean, "(Ljava/lang/String;Ljava/lang/Class;)Z", 1 },
	{ "getAll", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getAll_java_lang_Class_R_com_badlogic_gdx_utils_ObjectMap, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getAll_java_lang_Class_R_com_badlogic_gdx_utils_ObjectMap, "(Ljava/lang/Class;)Lcom/badlogic/gdx/utils/ObjectMap;", 1 },
	{ "getColor", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getColor_java_lang_String_R_com_badlogic_gdx_graphics_Color, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getColor_java_lang_String_R_com_badlogic_gdx_graphics_Color, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/Color;", 1 },
	{ "getFont", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getFont_java_lang_String_R_com_badlogic_gdx_graphics_g2d_BitmapFont, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/BitmapFont;", 1 },
	{ "getRegion", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegion_java_lang_String_R_com_badlogic_gdx_graphics_g2d_TextureRegion, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/TextureRegion;", 1 },
	{ "getRegions", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegions_java_lang_String_R_com_badlogic_gdx_utils_Array, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getRegions_java_lang_String_R_com_badlogic_gdx_utils_Array, "(Ljava/lang/String;)Lcom/badlogic/gdx/utils/Array;", 1 },
	{ "getTiledDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getTiledDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getTiledDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_TiledDrawable, "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/utils/TiledDrawable;", 1 },
	{ "getPatch", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getPatch_java_lang_String_R_com_badlogic_gdx_graphics_g2d_NinePatch, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/NinePatch;", 1 },
	{ "getSprite", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getSprite_java_lang_String_R_com_badlogic_gdx_graphics_g2d_Sprite, "(Ljava/lang/String;)Lcom/badlogic/gdx/graphics/g2d/Sprite;", 1 },
	{ "getDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "find", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_find_java_lang_Object_R_java_lang_String, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_find_java_lang_Object_R_java_lang_String, "(Ljava/lang/Object;)Ljava/lang/String;", 1 },
	{ "newDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Ljava/lang/String;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "newDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Ljava/lang/String;FFFF)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "newDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_java_lang_String_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Ljava/lang/String;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "newDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "newDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_float_float_float_float_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;FFFF)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "newDrawable", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_newDrawable_com_badlogic_gdx_scenes_scene2d_utils_Drawable_com_badlogic_gdx_graphics_Color_R_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;Lcom/badlogic/gdx/graphics/Color;)Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;", 1 },
	{ "scale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_scale_com_badlogic_gdx_scenes_scene2d_utils_Drawable, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_scale_com_badlogic_gdx_scenes_scene2d_utils_Drawable, "(Lcom/badlogic/gdx/scenes/scene2d/utils/Drawable;)V", 1 },
	{ "setScale", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setScale_float, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_setScale_float, "(F)V", 1 },
	{ "setEnabled", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setEnabled_com_badlogic_gdx_scenes_scene2d_ui_Styleable_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_setEnabled_com_badlogic_gdx_scenes_scene2d_ui_Styleable_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/ui/Styleable;Z)V", 1 },
	{ "setEnabledReflection", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_setEnabledReflection_com_badlogic_gdx_scenes_scene2d_Actor_boolean, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_setEnabledReflection_com_badlogic_gdx_scenes_scene2d_Actor_boolean, "(Lcom/badlogic/gdx/scenes/scene2d/Actor;Z)V", 131073 },
	{ "getAtlas", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getAtlas_R_com_badlogic_gdx_graphics_g2d_TextureAtlas, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getAtlas_R_com_badlogic_gdx_graphics_g2d_TextureAtlas, "()Lcom/badlogic/gdx/graphics/g2d/TextureAtlas;", 1 },
	{ "dispose", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_dispose, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_dispose, "()V", 1 },
	{ "getJsonLoader", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonLoader_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_Json, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonLoader_com_badlogic_gdx_files_FileHandle_R_com_badlogic_gdx_utils_Json, "(Lcom/badlogic/gdx/files/FileHandle;)Lcom/badlogic/gdx/utils/Json;", 4 },
	{ "getJsonClassTags", (intptr_t) M_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonClassTags_R_com_badlogic_gdx_utils_ObjectMap, VTABLE_com_badlogic_gdx_scenes_scene2d_ui_Skin_getJsonClassTags_R_com_badlogic_gdx_utils_ObjectMap, "()Lcom/badlogic/gdx/utils/ObjectMap;", 1 },
	{ "findMethod", (intptr_t) SM_com_badlogic_gdx_scenes_scene2d_ui_Skin_findMethod_java_lang_Class_java_lang_String_R_com_badlogic_gdx_utils_reflect_Method, 0, "(Ljava/lang/Class;Ljava/lang/String;)Lcom/badlogic/gdx/utils/reflect/Method;", 10 },
	{ "<clinit>", (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin, 0, "()V", 8 },
};

Class class_com_badlogic_gdx_scenes_scene2d_ui_Skin{
		.nativeName = (intptr_t) "com/badlogic/gdx/scenes/scene2d/ui/Skin",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(com_badlogic_gdx_scenes_scene2d_ui_Skin),
		.classVtable = (intptr_t) vtable_com_badlogic_gdx_scenes_scene2d_ui_Skin,
		.staticInitializer = (intptr_t) clinit_com_badlogic_gdx_scenes_scene2d_ui_Skin,
		.annotationInitializer = (intptr_t) initAnnotations,
		.markFunction = (intptr_t) mark_com_badlogic_gdx_scenes_scene2d_ui_Skin,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 1,
		.nativeInnerClasses = (intptr_t) innerClasses,
		.access = 33,
		.interfaceCount = 1,
		.nativeInterfaces = (intptr_t) interfaces,
		.fieldCount = 5,
		.nativeFields = (intptr_t) fields,
		.methodCount = 39,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 44,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_com_badlogic_gdx_scenes_scene2d_ui_Skin = registerClass(&class_com_badlogic_gdx_scenes_scene2d_ui_Skin);

}

