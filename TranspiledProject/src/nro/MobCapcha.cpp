#include "nro/MobCapcha.h"
#include "nro/GameScr.h"
#include "lib/mFont.h"
#include "lib/mGraphics.h"
#include "nro/EffecMn.h"
#include "main/GameCanvas.h"
#include "nro/MobCapcha.h"
#include "nro/Effect.h"
#include "java/lang/Object.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "nro/Mob.h"
#include "nro/PopUp.h"
#include "nro/Char.h"
#include "lib/mSystem.h"

extern "C" {

jobject SF_nro_MobCapcha_imgMob;
jint SF_nro_MobCapcha_cmtoY;
jint SF_nro_MobCapcha_cmy;
jint SF_nro_MobCapcha_cmdy;
jint SF_nro_MobCapcha_cmvy;
jint SF_nro_MobCapcha_cmyLim;
jint SF_nro_MobCapcha_cmtoX;
jint SF_nro_MobCapcha_cmx;
jint SF_nro_MobCapcha_cmdx;
jbool SF_nro_MobCapcha_explode;
jint SF_nro_MobCapcha_delay;
jint SF_nro_MobCapcha_tF;
jint SF_nro_MobCapcha_f;
jint SF_nro_MobCapcha_dir;
jbool SF_nro_MobCapcha_isAttack;

void mark_nro_MobCapcha(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_MobCapcha_imgMob)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_MobCapcha_imgMob)->clazz)->markFunction)((jobject) SF_nro_MobCapcha_imgMob, mark, depth + 1);
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
	auto self = (nro_MobCapcha *) object;
}

void init_nro_MobCapcha(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MobCapcha:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MobCapcha(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(10);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_MobCapcha_paint_lib_mGraphics_int_int(jcontext ctx, jobject param0, jint param1, jint param2) {
	jtype frame[15];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MobCapcha:paint", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MobCapcha(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(28);
	if ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_isAttack) != 0) goto label_1;
	}
	{
	LINE_NUMBER(29);
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (jint(3))) != 0) goto label_3;
	}
	{
	LINE_NUMBER(30);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(31);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmyLim = (((frame[1].i) - (20)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	}
label_5:;
	{
	LINE_NUMBER(34);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	if (((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cdir) != (jint(-1))) goto label_3;
	}
	{
	LINE_NUMBER(35);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmyLim = (((frame[1].i) + (20)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	}
label_3:;
	{
	LINE_NUMBER(39);
	sp[0].o = (jobject)SM_nro_Char_myCharz_R_nro_Char(ctx);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmtoY = ((((jint)((nro_Char *) NULL_CHECK(sp[0].o))->F_cy) - (40)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	goto label_8;
	}
label_1:;
	{
	LINE_NUMBER(41);
	jint temp0 = (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_delay) + (jint(1));
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_delay = temp0;
	if (temp0 != (jint(5))) goto label_9;
	}
	{
	LINE_NUMBER(42);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_isAttack = (jint(0));
	LINE_NUMBER(43);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_delay = (jint(0));
	}
label_9:;
	{
	LINE_NUMBER(46);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmyLim = ((frame[1].i) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(47);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmtoY = ((frame[2].i) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	}
label_8:;
	{
	LINE_NUMBER(50);
	if ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoX) <= ((frame[1].i) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx))) goto label_13;
	}
	{
	LINE_NUMBER(51);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_dir = (jint(-1));
	goto label_15;
	}
label_13:;
	{
	LINE_NUMBER(53);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_dir = (jint(1));
	}
label_15:;
	{
	LINE_NUMBER(56);
	sp[0].o = frame[0].o;
	clinit_nro_GameScr(ctx);
	sp[1].o = (jobject)SF_nro_GameScr_imgCapcha;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, sp[1].o, (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoX), ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmy) - (40)), (jint(3)));
	LINE_NUMBER(57);
	SM_nro_PopUp_paintPopUp_lib_mGraphics_int_int_int_int_int_boolean(ctx, (frame[0].o), ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoX) - (25)), ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmy) - (70)), (50), (20), (jint(16777215)), (jint(0)));
	LINE_NUMBER(58);
	frame[3].i = ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmy) - (65));
	LINE_NUMBER(59);
	clinit_lib_mFont(ctx);
	sp[0].o = (jobject)SF_lib_mFont_tahoma_7b_dark;
	sp[1].o = frame[0].o;
	sp[2].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	sp[2].o = (jobject)((nro_GameScr *) NULL_CHECK(sp[2].o))->F_keyInput;
	((func_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mFont_drawString_lib_mGraphics_java_lang_String_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].o, (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoX), (frame[3].i), (jint(2)));
	LINE_NUMBER(60);
	if ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_explode) == 0) goto label_20;
	}
	{
	LINE_NUMBER(61);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_explode = (jint(0));
	LINE_NUMBER(62);
	clinit_nro_Effect(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_Effect);
	init_nro_Effect_int_int_int_int_int_int(ctx, sp[0].o, (18), ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoX) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)), ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmy) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy)), (jint(2)), (10), (jint(-1)));
	SM_nro_EffecMn_addEff_nro_Effect(ctx, sp[0].o);
	LINE_NUMBER(63);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	((nro_GameScr *) NULL_CHECK(sp[0].o))->F_mobCapcha = (jref) (jobject(nullptr));
	LINE_NUMBER(64);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmyLim = (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx));
	LINE_NUMBER(65);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmtoY = (-(clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmy));
	}
label_20:;
	{
	LINE_NUMBER(68);
	sp[0].o = frame[0].o;
	clinit_nro_MobCapcha(ctx);
	sp[1].o = (jobject)SF_nro_MobCapcha_imgMob;
	jint temp0 = jint(0);
	jint temp1 = (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_f) * (40);
	jint temp2 = 40;
	jint temp3 = 40;
	sp[2].i = temp0;
	sp[3].i = temp1;
	sp[4].i = temp2;
	sp[5].i = temp3;
	sp += 6;
	if ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_dir) != (jint(1))) goto label_26;
	}
	INST_ICONST(0);
	goto label_27;
label_26:;
	INST_ICONST(2);
label_27:;
	{
	clinit_nro_MobCapcha(ctx);
	jint temp0 = (jint)SF_nro_MobCapcha_cmtoX;
	jint temp1 = (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmy) + (jint(3));
	sp[0].i = temp0;
	sp[1].i = temp1;
	sp += 2;
	if (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (10)) <= (jint(5))) goto label_28;
	}
	INST_ICONST(1);
	goto label_29;
label_28:;
	INST_ICONST(0);
label_29:;
	{
	sp -= 10;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, sp[2].i, sp[3].i, sp[4].i, sp[5].i, sp[6].i, sp[7].i, (sp[8].i + sp[9].i), (jint(3)));
	LINE_NUMBER(69);
	if ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmy) == (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoY)) goto label_31;
	}
	{
	LINE_NUMBER(70);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmvy = (((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoY) - (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmy)) << (jint(2)));
	LINE_NUMBER(71);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmdy = ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmdy) + (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmvy));
	LINE_NUMBER(72);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmy = ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmy) + ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmdy) >> (jint(4))));
	LINE_NUMBER(73);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmdy = ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmdy) & (15));
	}
label_31:;
	{
	LINE_NUMBER(76);
	if ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoX) == (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmyLim)) goto label_36;
	}
	{
	LINE_NUMBER(77);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmdx = (((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmyLim) - (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoX)) << (jint(2)));
	LINE_NUMBER(78);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmx = ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmx) + (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmdx));
	LINE_NUMBER(79);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmtoX = ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmtoX) + ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmx) >> (jint(4))));
	LINE_NUMBER(80);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_cmx = ((clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_cmx) & (15));
	}
label_36:;
	{
	LINE_NUMBER(83);
	jint temp0 = (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_tF) + (jint(1));
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_tF = temp0;
	if (temp0 != (jint(5))) goto label_41;
	}
	{
	LINE_NUMBER(84);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_tF = (jint(0));
	LINE_NUMBER(85);
	jint temp0 = (clinit_nro_MobCapcha(ctx), (jint)SF_nro_MobCapcha_f) + (jint(1));
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_f = temp0;
	if (temp0 <= (jint(2))) goto label_41;
	}
	{
	LINE_NUMBER(86);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_f = (jint(0));
	}
label_41:;
	LINE_NUMBER(90);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_MobCapcha(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/MobCapcha:<clinit>", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_MobCapcha(ctx);
	{
	LINE_NUMBER(11);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dmobCapcha.png"_j))));
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_imgMob = sp[0].o;
	LINE_NUMBER(21);
	clinit_nro_MobCapcha(ctx);
	SF_nro_MobCapcha_delay = (jint(0));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_MobCapcha[] {
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
};

static FieldMetadata fields[] {
	{ "imgMob", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_MobCapcha_imgMob, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "cmtoY", &class_int, (intptr_t) &SF_nro_MobCapcha_cmtoY, "I", 10 },
	{ "cmy", &class_int, (intptr_t) &SF_nro_MobCapcha_cmy, "I", 10 },
	{ "cmdy", &class_int, (intptr_t) &SF_nro_MobCapcha_cmdy, "I", 10 },
	{ "cmvy", &class_int, (intptr_t) &SF_nro_MobCapcha_cmvy, "I", 10 },
	{ "cmyLim", &class_int, (intptr_t) &SF_nro_MobCapcha_cmyLim, "I", 10 },
	{ "cmtoX", &class_int, (intptr_t) &SF_nro_MobCapcha_cmtoX, "I", 10 },
	{ "cmx", &class_int, (intptr_t) &SF_nro_MobCapcha_cmx, "I", 10 },
	{ "cmdx", &class_int, (intptr_t) &SF_nro_MobCapcha_cmdx, "I", 10 },
	{ "explode", &class_boolean, (intptr_t) &SF_nro_MobCapcha_explode, "Z", 9 },
	{ "delay", &class_int, (intptr_t) &SF_nro_MobCapcha_delay, "I", 10 },
	{ "tF", &class_int, (intptr_t) &SF_nro_MobCapcha_tF, "I", 10 },
	{ "f", &class_int, (intptr_t) &SF_nro_MobCapcha_f, "I", 10 },
	{ "dir", &class_int, (intptr_t) &SF_nro_MobCapcha_dir, "I", 10 },
	{ "isAttack", &class_boolean, (intptr_t) &SF_nro_MobCapcha_isAttack, "Z", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_MobCapcha, 0, "()V", 1 },
	{ "paint", (intptr_t) SM_nro_MobCapcha_paint_lib_mGraphics_int_int, 0, "(Llib/mGraphics;II)V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_MobCapcha, 0, "()V", 8 },
};

Class class_nro_MobCapcha{
		.nativeName = (intptr_t) "nro/MobCapcha",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_MobCapcha),
		.classVtable = (intptr_t) vtable_nro_MobCapcha,
		.staticInitializer = (intptr_t) clinit_nro_MobCapcha,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_MobCapcha,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 15,
		.nativeFields = (intptr_t) fields,
		.methodCount = 3,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_MobCapcha = registerClass(&class_nro_MobCapcha);

}

