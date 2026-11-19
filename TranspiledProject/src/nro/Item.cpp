#include "nro/Item.h"
#include "nro/ItemOptionTemplate.h"
#include "java/lang/Object.h"
#include "java/lang/String.h"
#include "nro/MyVector.h"
#include "nro/ItemOption.h"
#include "main/GameCanvas.h"
#include "nro/ItemTemplate.h"
#include "nro/Panel.h"
#include "nro/Item.h"

extern "C" {


void mark_nro_Item(jobject object, jint mark, jint depth) {
	if (!object) {
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
	auto self = (nro_Item *) object;
	if (self->F_itemOption)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_itemOption)->clazz)->markFunction)((jobject) self->F_itemOption, mark, depth + 1);
	if (self->F_template)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_template)->clazz)->markFunction)((jobject) self->F_template, mark, depth + 1);
	if (self->F_options)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_options)->clazz)->markFunction)((jobject) self->F_options, mark, depth + 1);
	if (self->F_info)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_info)->clazz)->markFunction)((jobject) self->F_info, mark, depth + 1);
	if (self->F_nameNguoiKyGui)
		((gc_mark_ptr) ((jclass) ((jobject) self->F_nameNguoiKyGui)->clazz)->markFunction)((jobject) self->F_nameNguoiKyGui, mark, depth + 1);
}

void clinit_nro_Item(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
}

void init_nro_Item(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[10];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Item:<init>", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_Item(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(41);
	init_java_lang_Object(ctx, (frame[0].o));
	LINE_NUMBER(26);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_iconSpec = (jint(-1));
	LINE_NUMBER(27);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_buyType = (jint(-1));
	LINE_NUMBER(30);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_isBuySpec = (jint(0));
	LINE_NUMBER(31);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_info = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(35);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_headTemp = (jint(-1));
	LINE_NUMBER(36);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_bodyTemp = (jint(-1));
	LINE_NUMBER(37);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_legTemp = (jint(-1));
	LINE_NUMBER(38);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_bagTemp = (jint(-1));
	LINE_NUMBER(39);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_nameNguoiKyGui = (jref) (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(42);
	sp[0].o = (jobject) createArray(ctx, &class_int, (18));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(600841));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(600841));
	ARRAY_ACCESS(jint, sp[0].o, (6)) = (jint(667658));
	ARRAY_ACCESS(jint, sp[0].o, (7)) = (jint(667658));
	ARRAY_ACCESS(jint, sp[0].o, (8)) = (jint(3346944));
	ARRAY_ACCESS(jint, sp[0].o, (9)) = (jint(3346688));
	ARRAY_ACCESS(jint, sp[0].o, (10)) = (jint(4199680));
	ARRAY_ACCESS(jint, sp[0].o, (11)) = (jint(5052928));
	ARRAY_ACCESS(jint, sp[0].o, (12)) = (jint(3276851));
	ARRAY_ACCESS(jint, sp[0].o, (13)) = (jint(3932211));
	ARRAY_ACCESS(jint, sp[0].o, (14)) = (jint(4587571));
	ARRAY_ACCESS(jint, sp[0].o, (15)) = (jint(5046280));
	ARRAY_ACCESS(jint, sp[0].o, (16)) = (jint(6684682));
	ARRAY_ACCESS(jint, sp[0].o, (17)) = (jint(3359744));
	frame[1].o = sp[0].o;
	LINE_NUMBER(43);
	sp[0].o = (jobject)createArray(ctx, getArrayClass(&class_int, 1), (jint(5)));
	jint temp0 = jint(0);
	sp[1].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (18687);
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (16869);
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (15052);
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (13235);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (11161);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (9344);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	jint temp1 = jint(1);
	sp[1].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(45824));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(39168));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(32768));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (26112);
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (19712);
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (13056);
	ARRAY_ACCESS(jobject, sp[0].o, temp1) = sp[1].o;
	jint temp2 = jint(2);
	sp[1].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(16744192));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(15037184));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(13395456));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(11753728));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(10046464));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(8404992));
	ARRAY_ACCESS(jobject, sp[0].o, temp2) = sp[1].o;
	jint temp3 = jint(3);
	sp[1].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(13500671));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(12058853));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(10682572));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(9371827));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(7995545));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(6684800));
	ARRAY_ACCESS(jobject, sp[0].o, temp3) = sp[1].o;
	jint temp4 = jint(4);
	sp[1].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[1].o, (jint(0))) = (jint(16711705));
	ARRAY_ACCESS(jint, sp[1].o, (jint(1))) = (jint(15007767));
	ARRAY_ACCESS(jint, sp[1].o, (jint(2))) = (jint(13369364));
	ARRAY_ACCESS(jint, sp[1].o, (jint(3))) = (jint(11730962));
	ARRAY_ACCESS(jint, sp[1].o, (jint(4))) = (jint(10027023));
	ARRAY_ACCESS(jint, sp[1].o, (jint(5))) = (jint(8388621));
	ARRAY_ACCESS(jobject, sp[0].o, temp4) = sp[1].o;
	frame[2].o = sp[0].o;
	LINE_NUMBER(44);
	sp[0].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(2));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (jint(1));
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (jint(1));
	frame[1].o = sp[0].o;
	LINE_NUMBER(45);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void M_nro_Item_getCompare(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Item:getCompare", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(48);
	sp[0].o = frame[0].o;
	clinit_main_GameCanvas(ctx);
	sp[1].o = (jobject)SF_main_GameCanvas_panel;
	jint temp0 = (jint)((func_nro_Panel_getCompare_nro_Item_R_int) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_nro_Panel_getCompare_nro_Item_R_int])(ctx, sp[1].o, (frame[0].o));
	((nro_Item *) NULL_CHECK(sp[0].o))->F_compare = temp0;
	LINE_NUMBER(49);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool M_nro_Item_isHaveOption_int_R_boolean(jcontext ctx, jobject self, jint param0) {
	NULL_CHECK(self);
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Item:isHaveOption", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	{
	LINE_NUMBER(52);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_itemOption;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(54);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_itemOption;
	sp[0].o = (jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[1].i));
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_5;
	}
	{
	sp[0].o = (jobject)((nro_ItemOption *) NULL_CHECK((frame[2].o)))->F_optionTemplate;
	if (((jint)((nro_ItemOptionTemplate *) NULL_CHECK(sp[0].o))->F_id) != (87)) goto label_5;
	}
	{
	LINE_NUMBER(55);
	popStackFrame(ctx);
	return (jint(1));
	}
label_5:;
	{
	LINE_NUMBER(52);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(59);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool M_nro_Item_isTypeBody_R_boolean(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Item:isTypeBody", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	{
	LINE_NUMBER(63);
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) < 0) goto label_1;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) < (6)) goto label_2;
	}
label_1:;
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) == (32)) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) == (35)) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) == (11)) goto label_2;
	}
	{
	sp[0].o = (jobject)((nro_Item *) NULL_CHECK((frame[0].o)))->F_template;
	if (((jint)((nro_ItemTemplate *) NULL_CHECK(sp[0].o))->F_type) != (23)) goto label_3;
	}
label_2:;
	INST_ICONST(1);
	goto label_4;
label_3:;
	INST_ICONST(0);
label_4:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void M_nro_Item_setPartTemp_int_int_int_int(jcontext ctx, jobject self, jint param0, jint param1, jint param2, jint param3) {
	NULL_CHECK(self);
	jtype frame[7];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/Item:setPartTemp", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	frame[0].o = self;
	frame[1].i = param0;
	frame[2].i = param1;
	frame[3].i = param2;
	frame[4].i = param3;
	{
	LINE_NUMBER(67);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_headTemp = (frame[1].i);
	LINE_NUMBER(68);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_bodyTemp = (frame[2].i);
	LINE_NUMBER(69);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_legTemp = (frame[3].i);
	LINE_NUMBER(70);
	((nro_Item *) NULL_CHECK((frame[0].o)))->F_bagTemp = (frame[4].i);
	LINE_NUMBER(71);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_Item[] {
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
	(void *) M_nro_Item_getCompare,
	(void *) M_nro_Item_isHaveOption_int_R_boolean,
	(void *) M_nro_Item_isTypeBody_R_boolean,
	(void *) M_nro_Item_setPartTemp_int_int_int_int,
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
	{ "getCompare", "()V" },
	{ "isHaveOption", "(I)Z" },
	{ "isTypeBody", "()Z" },
	{ "setPartTemp", "(IIII)V" },
};

static FieldMetadata fields[] {
	{ "itemOption", getArrayClass(&class_nro_ItemOption, 1), offsetof(nro_Item, F_itemOption), "[Lnro/ItemOption;", 1 },
	{ "template", &class_nro_ItemTemplate, offsetof(nro_Item, F_template), "Lnro/ItemTemplate;", 1 },
	{ "options", &class_nro_MyVector, offsetof(nro_Item, F_options), "Lnro/MyVector;", 1 },
	{ "itemId", &class_int, offsetof(nro_Item, F_itemId), "I", 1 },
	{ "playerId", &class_int, offsetof(nro_Item, F_playerId), "I", 1 },
	{ "isSelect", &class_boolean, offsetof(nro_Item, F_isSelect), "Z", 1 },
	{ "indexUI", &class_int, offsetof(nro_Item, F_indexUI), "I", 1 },
	{ "quantity", &class_int, offsetof(nro_Item, F_quantity), "I", 1 },
	{ "quantilyToBuy", &class_int, offsetof(nro_Item, F_quantilyToBuy), "I", 1 },
	{ "powerRequire", &class_long, offsetof(nro_Item, F_powerRequire), "J", 1 },
	{ "isLock", &class_boolean, offsetof(nro_Item, F_isLock), "Z", 1 },
	{ "sys", &class_int, offsetof(nro_Item, F_sys), "I", 1 },
	{ "upgrade", &class_int, offsetof(nro_Item, F_upgrade), "I", 1 },
	{ "buyCoin", &class_int, offsetof(nro_Item, F_buyCoin), "I", 1 },
	{ "buyCoinLock", &class_int, offsetof(nro_Item, F_buyCoinLock), "I", 1 },
	{ "buyGold", &class_int, offsetof(nro_Item, F_buyGold), "I", 1 },
	{ "buyGoldLock", &class_int, offsetof(nro_Item, F_buyGoldLock), "I", 1 },
	{ "saleCoinLock", &class_int, offsetof(nro_Item, F_saleCoinLock), "I", 1 },
	{ "buySpec", &class_int, offsetof(nro_Item, F_buySpec), "I", 1 },
	{ "buyRuby", &class_int, offsetof(nro_Item, F_buyRuby), "I", 1 },
	{ "iconSpec", &class_short, offsetof(nro_Item, F_iconSpec), "S", 1 },
	{ "buyType", &class_byte, offsetof(nro_Item, F_buyType), "B", 1 },
	{ "typeUI", &class_int, offsetof(nro_Item, F_typeUI), "I", 1 },
	{ "isExpires", &class_boolean, offsetof(nro_Item, F_isExpires), "Z", 1 },
	{ "isBuySpec", &class_boolean, offsetof(nro_Item, F_isBuySpec), "Z", 1 },
	{ "info", &class_java_lang_String, offsetof(nro_Item, F_info), "Ljava/lang/String;", 1 },
	{ "compare", &class_int, offsetof(nro_Item, F_compare), "I", 1 },
	{ "isMe", &class_byte, offsetof(nro_Item, F_isMe), "B", 1 },
	{ "newItem", &class_boolean, offsetof(nro_Item, F_newItem), "Z", 1 },
	{ "headTemp", &class_int, offsetof(nro_Item, F_headTemp), "I", 1 },
	{ "bodyTemp", &class_int, offsetof(nro_Item, F_bodyTemp), "I", 1 },
	{ "legTemp", &class_int, offsetof(nro_Item, F_legTemp), "I", 1 },
	{ "bagTemp", &class_int, offsetof(nro_Item, F_bagTemp), "I", 1 },
	{ "nameNguoiKyGui", &class_java_lang_String, offsetof(nro_Item, F_nameNguoiKyGui), "Ljava/lang/String;", 1 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_Item, 0, "()V", 1 },
	{ "getCompare", (intptr_t) M_nro_Item_getCompare, VTABLE_nro_Item_getCompare, "()V", 17 },
	{ "isHaveOption", (intptr_t) M_nro_Item_isHaveOption_int_R_boolean, VTABLE_nro_Item_isHaveOption_int_R_boolean, "(I)Z", 17 },
	{ "isTypeBody", (intptr_t) M_nro_Item_isTypeBody_R_boolean, VTABLE_nro_Item_isTypeBody_R_boolean, "()Z", 17 },
	{ "setPartTemp", (intptr_t) M_nro_Item_setPartTemp_int_int_int_int, VTABLE_nro_Item_setPartTemp_int_int_int_int, "(IIII)V", 17 },
};

Class class_nro_Item{
		.nativeName = (intptr_t) "nro/Item",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_Item),
		.classVtable = (intptr_t) vtable_nro_Item,
		.staticInitializer = (intptr_t) clinit_nro_Item,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_Item,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 34,
		.nativeFields = (intptr_t) fields,
		.methodCount = 5,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 15,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_Item = registerClass(&class_nro_Item);

}

