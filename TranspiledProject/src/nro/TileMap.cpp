#include "nro/TileMap.h"
#include "nro/GameScr.h"
#include "java/lang/StringBuilder.h"
#include "java/util/Vector.h"
#include "main/GameCanvas.h"
#include "java/io/InputStream.h"
#include "javax/microedition/lcdui/Image.h"
#include "java/lang/String.h"
#include "lib/image/MyStream.h"
#include "java/io/IOException.h"
#include "java/io/FilterInputStream.h"
#include "com/nro/GameMain.h"
#include "java/lang/Throwable.h"
#include "nro/TileMap.h"
#include "lib/mSystem.h"
#include "nro/BgItem.h"
#include "java/lang/Exception.h"
#include "lib/mGraphics.h"
#include "nro/InfoPhuBan.h"
#include "java/lang/AutoCloseable.h"
#include "java/io/DataInputStream.h"
#include "java/lang/Object.h"
#include "nro/MyVector.h"
#include "nro/BackgroudEffect.h"
#include "nro/Res.h"
#include "main/GameMidlet.h"
#include "nro/Char.h"
#include "java/lang/System.h"

extern "C" {

jint SF_nro_TileMap_tmw;
jint SF_nro_TileMap_tmh;
jint SF_nro_TileMap_pxw;
jint SF_nro_TileMap_pxh;
jint SF_nro_TileMap_tileID;
jint SF_nro_TileMap_lastTileID;
jobject SF_nro_TileMap_maps;
jobject SF_nro_TileMap_types;
jobject SF_nro_TileMap_imgTile;
jobject SF_nro_TileMap_imgTileSmall;
jobject SF_nro_TileMap_imgMiniMap;
jobject SF_nro_TileMap_imgWaterfall;
jobject SF_nro_TileMap_imgWaterlowN;
jobject SF_nro_TileMap_imgWaterlowN2;
jbyte SF_nro_TileMap_size;
jint SF_nro_TileMap_O;
jint SF_nro_TileMap_P;
jint SF_nro_TileMap_Q;
jint SF_nro_TileMap_R;
jbool SF_nro_TileMap_isMapDouble;
jobject SF_nro_TileMap_mapName;
jint SF_nro_TileMap_mapID;
jint SF_nro_TileMap_lastBgID;
jint SF_nro_TileMap_zoneID;
jint SF_nro_TileMap_bgID;
jint SF_nro_TileMap_bgType;
jint SF_nro_TileMap_lastType;
jbyte SF_nro_TileMap_planetID;
jbyte SF_nro_TileMap_lastPlanetId;
jobject SF_nro_TileMap_vGo;
jobject SF_nro_TileMap_vItemBg;
jobject SF_nro_TileMap_vCurrItem;
jobject SF_nro_TileMap_mapNames;
jobject SF_nro_TileMap_bong;
jobject SF_nro_TileMap_offlineId;
jobject SF_nro_TileMap_tileType;
jobject SF_nro_TileMap_tileIndex;
jobject SF_nro_TileMap_imgLight;
jint SF_nro_TileMap_sizeMiniMap;
jint SF_nro_TileMap_gssx;
jint SF_nro_TileMap_gssxe;
jint SF_nro_TileMap_gssy;
jint SF_nro_TileMap_gssye;
jint SF_nro_TileMap_countx;
jint SF_nro_TileMap_county;

void mark_nro_TileMap(jobject object, jint mark, jint depth) {
	if (!object) {
		if (SF_nro_TileMap_maps)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_maps)->clazz)->markFunction)((jobject) SF_nro_TileMap_maps, mark, depth + 1);
		if (SF_nro_TileMap_types)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_types)->clazz)->markFunction)((jobject) SF_nro_TileMap_types, mark, depth + 1);
		if (SF_nro_TileMap_imgTile)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_imgTile)->clazz)->markFunction)((jobject) SF_nro_TileMap_imgTile, mark, depth + 1);
		if (SF_nro_TileMap_imgTileSmall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_imgTileSmall)->clazz)->markFunction)((jobject) SF_nro_TileMap_imgTileSmall, mark, depth + 1);
		if (SF_nro_TileMap_imgMiniMap)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_imgMiniMap)->clazz)->markFunction)((jobject) SF_nro_TileMap_imgMiniMap, mark, depth + 1);
		if (SF_nro_TileMap_imgWaterfall)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_imgWaterfall)->clazz)->markFunction)((jobject) SF_nro_TileMap_imgWaterfall, mark, depth + 1);
		if (SF_nro_TileMap_imgWaterlowN)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_imgWaterlowN)->clazz)->markFunction)((jobject) SF_nro_TileMap_imgWaterlowN, mark, depth + 1);
		if (SF_nro_TileMap_imgWaterlowN2)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_imgWaterlowN2)->clazz)->markFunction)((jobject) SF_nro_TileMap_imgWaterlowN2, mark, depth + 1);
		if (SF_nro_TileMap_mapName)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_mapName)->clazz)->markFunction)((jobject) SF_nro_TileMap_mapName, mark, depth + 1);
		if (SF_nro_TileMap_vGo)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_vGo)->clazz)->markFunction)((jobject) SF_nro_TileMap_vGo, mark, depth + 1);
		if (SF_nro_TileMap_vItemBg)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_vItemBg)->clazz)->markFunction)((jobject) SF_nro_TileMap_vItemBg, mark, depth + 1);
		if (SF_nro_TileMap_vCurrItem)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_vCurrItem)->clazz)->markFunction)((jobject) SF_nro_TileMap_vCurrItem, mark, depth + 1);
		if (SF_nro_TileMap_mapNames)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_mapNames)->clazz)->markFunction)((jobject) SF_nro_TileMap_mapNames, mark, depth + 1);
		if (SF_nro_TileMap_bong)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_bong)->clazz)->markFunction)((jobject) SF_nro_TileMap_bong, mark, depth + 1);
		if (SF_nro_TileMap_offlineId)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_offlineId)->clazz)->markFunction)((jobject) SF_nro_TileMap_offlineId, mark, depth + 1);
		if (SF_nro_TileMap_tileType)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_tileType)->clazz)->markFunction)((jobject) SF_nro_TileMap_tileType, mark, depth + 1);
		if (SF_nro_TileMap_tileIndex)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_tileIndex)->clazz)->markFunction)((jobject) SF_nro_TileMap_tileIndex, mark, depth + 1);
		if (SF_nro_TileMap_imgLight)
			((gc_mark_ptr) ((jclass) ((jobject) SF_nro_TileMap_imgLight)->clazz)->markFunction)((jobject) SF_nro_TileMap_imgLight, mark, depth + 1);
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
	auto self = (nro_TileMap *) object;
}

void init_nro_TileMap(jcontext ctx, jobject self) {
	NULL_CHECK(self);
	jtype frame[2];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:<init>", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].o = self;
	{
	LINE_NUMBER(14);
	init_java_lang_Object(ctx, (frame[0].o));
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_isVoDaiMap_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:isVoDaiMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(72);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (51)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (103)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (112)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (113)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (129)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (130)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_isTrainingMap_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:isTrainingMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(76);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (39)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (40)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (41)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_mapPhuBang_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:mapPhuBang", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(80);
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_phuban_Info;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	clinit_nro_TileMap(ctx);
	jint temp0 = (jint)SF_nro_TileMap_mapID;
	clinit_nro_GameScr(ctx);
	sp[0].o = (jobject)SF_nro_GameScr_phuban_Info;
	if (temp0 != ((jint)((nro_InfoPhuBan *) NULL_CHECK(sp[0].o))->F_idmapPaint)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jobject SM_nro_TileMap_getBIById_int_R_nro_BgItem(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:getBIById", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(84);
	frame[1].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[1].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vItemBg;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_2;
	}
	{
	LINE_NUMBER(86);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vItemBg;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[1].i));
	sp[0].o = checkCast(ctx, &class_nro_BgItem, sp[0].o);
	frame[2].o = sp[0].o;
	if (((jint)((nro_BgItem *) NULL_CHECK(sp[0].o))->F_id) != (frame[0].i)) goto label_5;
	}
	{
	LINE_NUMBER(87);
	popStackFrame(ctx);
	return (frame[2].o);
	}
label_5:;
	{
	LINE_NUMBER(84);
	INST_IINC(1, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(91);
	popStackFrame(ctx);
	return (jobject(nullptr));
	}

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_isOfflineMap_R_boolean(jcontext ctx) {
	jtype frame[4];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:isOfflineMap", 4 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(95);
	frame[0].i = (jint(0));
	}
label_1:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_offlineId;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_2;
	}
	{
	LINE_NUMBER(96);
	clinit_nro_TileMap(ctx);
	jint temp0 = (jint)SF_nro_TileMap_mapID;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_offlineId;
	if (temp0 != ((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[0].i)))) goto label_4;
	}
	{
	LINE_NUMBER(97);
	popStackFrame(ctx);
	return (jint(1));
	}
label_4:;
	{
	LINE_NUMBER(95);
	INST_IINC(0, 1);
	goto label_1;
	}
label_2:;
	{
	LINE_NUMBER(101);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_b_int_R_boolean(jcontext ctx, jint param0) {
	jtype frame[5];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:b", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(105);
	if ((frame[0].i) == (156)) goto label_1;
	}
	{
	if ((frame[0].i) == (330)) goto label_1;
	}
	{
	if ((frame[0].i) == (345)) goto label_1;
	}
	{
	if ((frame[0].i) == (334)) goto label_1;
	}
	{
	LINE_NUMBER(106);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (54)) goto label_3;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (55)) goto label_3;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (56)) goto label_3;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (57)) goto label_3;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (58)) goto label_3;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (59)) goto label_3;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (103)) goto label_3;
	}
	{
	LINE_NUMBER(107);
	frame[1].i = (jint(0));
	LINE_NUMBER(109);
	frame[2].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vCurrItem;
	jint temp1 = (jint)((func_nro_MyVector_size_R_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_size_R_int])(ctx, sp[0].o);
	if (temp0 >= temp1) goto label_7;
	}
	{
	LINE_NUMBER(110);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_vCurrItem;
	sp[0].o = (jobject)((func_nro_MyVector_elementAt_int_R_java_lang_Object) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_nro_MyVector_elementAt_int_R_java_lang_Object])(ctx, sp[0].o, (frame[2].i));
	if (((jint)((nro_BgItem *) NULL_CHECK((checkCast(ctx, &class_nro_BgItem, sp[0].o))))->F_id) != (frame[0].i)) goto label_9;
	}
	LINE_NUMBER(111);
	INST_IINC(1, 1);
label_9:;
	{
	LINE_NUMBER(109);
	INST_IINC(2, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(115);
	if ((frame[1].i) <= (jint(2))) goto label_11;
	}
	{
	LINE_NUMBER(116);
	popStackFrame(ctx);
	return (jint(1));
	}
label_11:;
	{
	LINE_NUMBER(118);
	popStackFrame(ctx);
	return (jint(0));
	}
label_3:;
	{
	LINE_NUMBER(121);
	popStackFrame(ctx);
	return (jint(0));
	}
label_1:;
	{
	LINE_NUMBER(124);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_TileMap_loadTileImage(jcontext ctx) {
	jtype frame[1];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:loadTileImage", 1 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(129);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTileSmall;
	if (sp[0].o != nullptr) goto label_1;
	}
	{
	LINE_NUMBER(130);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/tWater/wtf.png"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgTileSmall = sp[0].o;
	}
label_1:;
	{
	LINE_NUMBER(133);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgMiniMap;
	if (sp[0].o != nullptr) goto label_3;
	}
	{
	LINE_NUMBER(134);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/tWater/twtf.png"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgMiniMap = sp[0].o;
	}
label_3:;
	{
	LINE_NUMBER(137);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgWaterfall;
	if (sp[0].o != nullptr) goto label_5;
	}
	{
	LINE_NUMBER(138);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/tWater/wts.png"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgWaterfall = sp[0].o;
	}
label_5:;
	{
	LINE_NUMBER(141);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgWaterlowN;
	if (sp[0].o != nullptr) goto label_7;
	}
	{
	LINE_NUMBER(142);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/tWater/wtsN.png"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgWaterlowN = sp[0].o;
	}
label_7:;
	{
	LINE_NUMBER(145);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgWaterlowN2;
	if (sp[0].o != nullptr) goto label_9;
	}
	{
	LINE_NUMBER(146);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/tWater/wtsN2.png"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgWaterlowN2 = sp[0].o;
	}
label_9:;
	{
	LINE_NUMBER(149);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(150);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_TileMap_loadMap_int(jcontext ctx, jint param0) {
	jtype frame[13];
	auto stack = &frame[9];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:loadMap", 13 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(153);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_pxh = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmh) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size));
	LINE_NUMBER(154);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_pxw = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size));
	LINE_NUMBER(155);
	INST_IINC(0, -1);
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(158);
	frame[1].i = (jint(0));
	}
label_7:;
	{
	if ((frame[1].i) >= ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmh))) goto label_1;
	}
	{
	LINE_NUMBER(159);
	frame[2].i = (jint(0));
	}
label_9:;
	{
	jint temp0 = frame[2].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_tileType;
	if (temp0 >= (((jarray) nullCheck(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)))))->length)) goto label_10;
	}
	{
	LINE_NUMBER(160);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_tileIndex;
	frame[3].o = ((jobject)ARRAY_ACCESS(jobject, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))), (frame[2].i)));
	LINE_NUMBER(161);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_tileType;
	frame[4].i = ((jint)ARRAY_ACCESS(jint, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))), (frame[2].i)));
	LINE_NUMBER(162);
	frame[5].o = (frame[3].o);
	LINE_NUMBER(163);
	frame[6].i = (frame[1].i);
	LINE_NUMBER(165);
	frame[7].i = (jint(0));
	}
label_16:;
	{
	if ((frame[7].i) >= (((jarray) nullCheck(ctx, (frame[5].o)))->length)) goto label_17;
	}
	{
	LINE_NUMBER(166);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_maps;
	if (((jint)ARRAY_ACCESS(jint, sp[0].o, (frame[6].i))) != ((jint)ARRAY_ACCESS(jint, (frame[5].o), (frame[7].i)))) goto label_19;
	}
	{
	LINE_NUMBER(167);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_types;
	frame[8].o = sp[0].o;
	LINE_NUMBER(168);
	sp[0].o = frame[8].o;
	jint temp0 = frame[6].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | (frame[4].i));
	LINE_NUMBER(169);
	goto label_17;
	}
label_19:;
	{
	LINE_NUMBER(165);
	INST_IINC(7, 1);
	goto label_16;
	}
label_17:;
	{
	LINE_NUMBER(159);
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(158);
	INST_IINC(1, 1);
	goto label_7;
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(181);
	goto label_23;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(175);
	frame[1].o = sp[0].o;
	LINE_NUMBER(176);
	SM_nro_Res_outz_java_lang_String(ctx, (((jobject) createStringLiteral(ctx, u8"Error Load Map"_j))));
	LINE_NUMBER(177);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[1].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[1].o));
	LINE_NUMBER(178);
	if ((clinit_com_nro_GameMain(ctx), (jint)SF_com_nro_GameMain_isWeb) != 0) goto label_23;
	}
	{
	LINE_NUMBER(179);
	clinit_main_GameMidlet(ctx);
	sp[0].o = (jobject)SF_main_GameMidlet_instance;
	((func_main_GameMidlet_exit) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_main_GameMidlet_exit])(ctx, sp[0].o);
	}
label_23:;
	LINE_NUMBER(182);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_isInAirMap_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:isInAirMap", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(185);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (45)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (46)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (48)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_isMapDouble_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:isMapDouble", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(189);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_isMapDouble) != 0) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (45)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (46)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (48)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (51)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (52)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (103)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (112)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (113)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (115)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (117)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (118)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (119)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (120)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (121)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (125)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (129)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) != (130)) goto label_2;
	}
label_1:;
	INST_ICONST(1);
	goto label_3;
label_2:;
	INST_ICONST(0);
label_3:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3) {
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:paintTile", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(194);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if (sp[0].o != nullptr) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(195);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(198);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) == (jint(1))) { popExceptionFrames(frameRef, 1); goto label_7; }
	}
	{
	LINE_NUMBER(199);
	sp[0].o = frame[0].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_imgTile;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))), ((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), ((frame[3].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(200);
	popStackFrame(ctx);
	INST_RETURN();
label_7:;
label_9: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(203);
	sp[0].o = frame[0].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_imgTile;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(0)), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size), (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size), (jint(0)), ((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), ((frame[3].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (jint(0)));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(205);
	goto label_11;
label_2:;
	LINE_NUMBER(204);
	INST_ASTORE(4);
label_11:;
	LINE_NUMBER(207);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int_int(jcontext ctx, jobject param0, jint param1, jint param2, jint param3, jint param4) {
	jtype frame[16];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:paintTile", 16 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].o = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	frame[3].i = param3;
	frame[4].i = param4;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(211);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if (sp[0].o == nullptr) goto label_1;
	}
	{
	LINE_NUMBER(212);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if ((((jarray) nullCheck(ctx, sp[0].o))->length) != (jint(1))) goto label_5;
	}
	{
	LINE_NUMBER(213);
	sp[0].o = frame[0].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_imgTile;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (jint(0)))), (jint(0)), ((frame[1].i) * (24)), (24), (24), (jint(0)), (frame[2].i), (frame[3].i), (jint(0)));
	goto label_1;
	}
label_5:;
	{
	LINE_NUMBER(215);
	sp[0].o = frame[0].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_imgTile;
	((func_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawImage_javax_microedition_lcdui_Image_int_int_int])(ctx, sp[0].o, ((jobject)ARRAY_ACCESS(jobject, sp[1].o, (frame[1].i))), (frame[2].i), (frame[3].i), (jint(0)));
	}
label_1:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(219);
	goto label_7;
label_2:;
	LINE_NUMBER(218);
	INST_ASTORE(5);
label_7:;
	LINE_NUMBER(220);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_TileMap_paintTilemap_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[14];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:paintTilemap", 14 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].o = param0;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(224);
	if ((clinit_nro_Char(ctx), (jint)SF_nro_Char_isLoadingMap) == 0) { popExceptionFrames(frameRef, 1); goto label_4; }
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(225);
	popStackFrame(ctx);
	INST_RETURN();
label_4:;
label_6: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(228);
	sp[0].o = (jobject)SM_nro_GameScr_gI_R_nro_GameScr(ctx);
	LINE_NUMBER(229);
	SM_nro_GameScr_paintBgItem_lib_mGraphics_int(ctx, (frame[0].o), (jint(1)));
	LINE_NUMBER(234);
	frame[1].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssx);
	}
label_9:;
	{
	if ((frame[1].i) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssxe)) goto label_10;
	}
	{
	LINE_NUMBER(235);
	frame[2].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssy);
	}
label_12:;
	{
	if ((frame[2].i) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssye)) goto label_13;
	}
	{
	LINE_NUMBER(236);
	if ((frame[1].i) == 0) goto label_15;
	}
	{
	if ((frame[1].i) == ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) - (jint(1)))) goto label_15;
	}
	{
	LINE_NUMBER(237);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_maps;
	frame[3].i = (((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw)) + (frame[1].i)))) - (jint(1)));
	LINE_NUMBER(238);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	if ((temp0 & (256)) == (256)) goto label_15;
	}
	{
	LINE_NUMBER(239);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	if ((temp0 & (32)) != (32)) goto label_19;
	}
	{
	LINE_NUMBER(240);
	sp[0].o = frame[0].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_imgTileSmall;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((24) * (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (8)) >> (jint(1)))), (24), (24), (jint(0)), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), ((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (jint(0)));
	goto label_15;
	}
label_19:;
	{
	LINE_NUMBER(241);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	if ((temp0 & (128)) != (128)) goto label_21;
	}
	{
	LINE_NUMBER(242);
	sp[0].o = frame[0].o;
	clinit_nro_TileMap(ctx);
	sp[1].o = (jobject)SF_nro_TileMap_imgMiniMap;
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, sp[0].o, sp[1].o, (jint(0)), ((24) * (((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (8)) >> (jint(1)))), (24), (24), (jint(0)), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), ((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (jint(0)));
	goto label_15;
	}
label_21:;
	{
	LINE_NUMBER(243);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID) != (13)) goto label_23;
	}
	{
	if ((frame[3].i) != (jint(-1))) goto label_15;
	}
label_23:;
	{
	LINE_NUMBER(244);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID) != (jint(2))) goto label_24;
	}
	{
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	if ((temp0 & (512)) != (512)) goto label_24;
	}
	{
	if ((frame[3].i) == (jint(-1))) goto label_24;
	}
	{
	LINE_NUMBER(245);
	SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), ((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (24));
	LINE_NUMBER(246);
	SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) + (jint(1))), (24));
	}
label_24:;
	{
	LINE_NUMBER(249);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	if ((temp0 & (16)) != (16)) goto label_27;
	}
	{
	LINE_NUMBER(250);
	jint temp0 = ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_O = temp0;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_P = (temp0 - (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW2));
	LINE_NUMBER(251);
	jint temp3 = (((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size) - (jint(2))) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_P)) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_R = temp3;
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_Q = (temp3 + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gW2));
	LINE_NUMBER(252);
	SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_Q) + (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx)), ((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (24));
	goto label_15;
	}
label_27:;
	{
	LINE_NUMBER(253);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	if ((temp0 & (512)) != (512)) goto label_31;
	}
	{
	LINE_NUMBER(254);
	if ((frame[3].i) == (jint(-1))) goto label_15;
	}
	{
	LINE_NUMBER(255);
	SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), ((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (24));
	LINE_NUMBER(256);
	SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int_int(ctx, (frame[0].o), (frame[3].i), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) + (jint(1))), (24));
	goto label_15;
	}
label_31:;
	{
	LINE_NUMBER(258);
	if ((frame[3].i) == (jint(-1))) goto label_15;
	}
	{
	LINE_NUMBER(259);
	SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int(ctx, (frame[0].o), (frame[3].i), (frame[1].i), (frame[2].i));
	}
label_15:;
	{
	LINE_NUMBER(235);
	INST_IINC(2, 1);
	goto label_12;
	}
label_13:;
	{
	LINE_NUMBER(234);
	INST_IINC(1, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(267);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) >= (24)) goto label_36;
	}
	{
	LINE_NUMBER(268);
	frame[1].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssy);
	}
label_38:;
	{
	if ((frame[1].i) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssye)) goto label_36;
	}
	{
	LINE_NUMBER(269);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_maps;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw)) + (jint(1))))) - (jint(1));
	frame[2].i = temp0;
	if (temp0 == (jint(-1))) goto label_41;
	}
	{
	LINE_NUMBER(270);
	SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int(ctx, (frame[0].o), (frame[2].i), (jint(0)), (frame[1].i));
	}
label_41:;
	{
	LINE_NUMBER(268);
	INST_IINC(1, 1);
	goto label_38;
	}
label_36:;
	{
	LINE_NUMBER(275);
	if ((clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmx) <= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_cmxLim)) { popExceptionFrames(frameRef, 1); goto label_43; }
	}
	{
	LINE_NUMBER(276);
	frame[1].i = ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) - (jint(2)));
	LINE_NUMBER(278);
	frame[2].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssy);
	}
label_46:;
	{
	if ((frame[2].i) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssye)) goto label_5;
	}
	{
	LINE_NUMBER(279);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_maps;
	jint temp0 = ((jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw)) + (frame[1].i)))) - (jint(1));
	frame[3].i = temp0;
	if (temp0 == (jint(-1))) goto label_49;
	}
	{
	LINE_NUMBER(280);
	SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int(ctx, (frame[0].o), (frame[3].i), ((frame[1].i) + (jint(1))), (frame[2].i));
	}
label_49:;
	{
	LINE_NUMBER(278);
	INST_IINC(2, 1);
	goto label_46;
	}
label_5:;
	popExceptionFrame(frameRef);
	LINE_NUMBER(284);
	popStackFrame(ctx);
	INST_RETURN();
label_43:;
	LINE_NUMBER(287);
	goto label_51;
label_2:;
	LINE_NUMBER(286);
	INST_ASTORE(1);
label_51:;
	LINE_NUMBER(289);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_i_R_boolean(jcontext ctx) {
	jtype frame[2];
	auto stack = &frame[0];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:i", 2 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(292);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (54)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (55)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (56)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (57)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (138)) goto label_1;
	}
	{
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_mapID) == (167)) goto label_1;
	}
	INST_ICONST(1);
	goto label_2;
label_1:;
	INST_ICONST(0);
label_2:;
	popStackFrame(ctx);
	INST_IRETURN();

	popStackFrame(ctx);
}

void SM_nro_TileMap_paintOutTilemap_lib_mGraphics(jcontext ctx, jobject param0) {
	jtype frame[15];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:paintOutTilemap", 15 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].o = param0;
	{
	LINE_NUMBER(296);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_lowGraphic) != 0) goto label_5;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(298);
	frame[1].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssx);
	}
label_6:;
	{
	if ((frame[1].i) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssxe)) goto label_7;
	}
	{
	LINE_NUMBER(299);
	frame[2].i = (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssy);
	}
label_9:;
	{
	if ((frame[2].i) >= (clinit_nro_GameScr(ctx), (jint)SF_nro_GameScr_gssye)) goto label_10;
	}
	{
	LINE_NUMBER(300);
	jint temp0 = (jint)SM_nro_TileMap_tileTypeAt_int_int_R_int(ctx, (frame[1].i), (frame[2].i));
	if ((temp0 & (64)) != (64)) goto label_12;
	}
	{
	LINE_NUMBER(302);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID) != (jint(5))) goto label_14;
	}
	{
	LINE_NUMBER(303);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgWaterlowN;
	frame[3].o = sp[0].o;
	goto label_17;
	}
label_14:;
	{
	LINE_NUMBER(304);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID) != (8)) goto label_18;
	}
	{
	LINE_NUMBER(305);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgWaterlowN2;
	frame[3].o = sp[0].o;
	goto label_17;
	}
label_18:;
	{
	LINE_NUMBER(307);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgWaterfall;
	frame[3].o = sp[0].o;
	}
label_17:;
	{
	LINE_NUMBER(310);
	jint temp0 = (jint)SM_nro_TileMap_i_R_boolean(ctx);
	if (temp0 != 0) goto label_21;
	}
	{
	LINE_NUMBER(311);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[3].o), (jint(0)), (jint(0)), (24), (24), (jint(0)), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) - (jint(1))), (jint(0)));
	LINE_NUMBER(312);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[3].o), (jint(0)), (jint(0)), (24), (24), (jint(0)), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) - (jint(3))), (jint(0)));
	}
label_21:;
	{
	LINE_NUMBER(315);
	((func_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int) ((void **) nullCheck(ctx, (frame[0].o))->vtable)[VTABLE_lib_mGraphics_drawRegion_javax_microedition_lcdui_Image_int_int_int_int_int_int_int_int])(ctx, (frame[0].o), (frame[3].o), (jint(0)), ((((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_gameTick) % (8)) >> (jint(2))) * (24)), (24), (24), (jint(0)), ((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)), (((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) - (12)), (jint(0)));
	LINE_NUMBER(316);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_county) != 0) goto label_12;
	}
	sp->i = (jint)SM_nro_TileMap_i_R_boolean(ctx);
	sp++;
	if ((--sp)->i == 0) goto label_12;
	{
	LINE_NUMBER(317);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_county = (((frame[2].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) - (12));
	LINE_NUMBER(318);
	frame[4].i = (jint(16777215));
	LINE_NUMBER(319);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(2))) goto label_28;
	}
	{
	LINE_NUMBER(320);
	frame[4].i = (jint(10871287));
	goto label_30;
	}
label_28:;
	{
	LINE_NUMBER(321);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (jint(4))) goto label_31;
	}
	{
	LINE_NUMBER(322);
	frame[4].i = (jint(8111470));
	goto label_30;
	}
label_31:;
	{
	LINE_NUMBER(323);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (7)) goto label_33;
	}
	{
	LINE_NUMBER(324);
	frame[4].i = (jint(5693125));
	goto label_30;
	}
label_33:;
	{
	LINE_NUMBER(325);
	if ((clinit_main_GameCanvas(ctx), (jint)SF_main_GameCanvas_typeBg) != (19)) goto label_30;
	}
	{
	LINE_NUMBER(326);
	frame[4].i = (jint(16711680));
	}
label_30:;
	{
	LINE_NUMBER(329);
	SM_nro_BackgroudEffect_a_int_int(ctx, (frame[4].i), ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_county) + (15)));
	}
label_12:;
	{
	LINE_NUMBER(299);
	INST_IINC(2, 1);
	goto label_9;
	}
label_10:;
	{
	LINE_NUMBER(298);
	INST_IINC(1, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(335);
	SM_nro_BackgroudEffect_paintWater_lib_mGraphics(ctx, (frame[0].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(337);
	goto label_5;
label_2:;
	LINE_NUMBER(336);
	INST_ASTORE(1);
label_5:;
	LINE_NUMBER(339);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void SM_nro_TileMap_loadMapFromResource_int(jcontext ctx, jint param0) {
	jtype frame[10];
	auto stack = &frame[6];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:loadMapFromResource", 10 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(342);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/mymap/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (frame[0].i));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_image_MyStream_readFile_java_lang_String_R_java_io_InputStream(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(343);
	if ((frame[1].o) != nullptr) goto label_16;
	}
	{
	LINE_NUMBER(344);
	clinit_java_io_IOException(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_IOException);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"Cannot find map file: /mymap/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (frame[0].i));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	init_java_io_IOException_java_lang_String(ctx, sp[0].o, sp[1].o);
	throwException(ctx, sp[0].o);	}
label_16:;
	{
	LINE_NUMBER(347);
	frame[2].o = (jobject(nullptr));
	}
label_7: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	{
	LINE_NUMBER(349);
	clinit_java_io_DataInputStream(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_io_DataInputStream);
	init_java_io_DataInputStream_java_io_InputStream(ctx, sp[0].o, (frame[1].o));
	frame[2].o = sp[0].o;
	LINE_NUMBER(350);
	jint temp0 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[2].o));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tmw = (jchar(temp0));
	LINE_NUMBER(351);
	jint temp1 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[2].o));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_tmh = (jchar(temp1));
	LINE_NUMBER(352);
	jint temp2 = (jint)((func_java_io_DataInputStream_available_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_available_R_int])(ctx, (frame[2].o));
	sp[0].o = (jobject) createArray(ctx, &class_int, temp2);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_maps = sp[0].o;
	LINE_NUMBER(354);
	frame[3].i = (jint(0));
	}
label_22:;
	{
	if ((frame[3].i) >= ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmh))) goto label_23;
	}
	{
	LINE_NUMBER(355);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_maps;
	jint temp0 = frame[3].i;
	jint temp1 = (jint)((func_java_io_DataInputStream_read_R_int) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_read_R_int])(ctx, (frame[2].o));
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (jchar(temp1));
	LINE_NUMBER(354);
	INST_IINC(3, 1);
	goto label_22;
	}
label_23:;
	{
	LINE_NUMBER(358);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_maps;
	sp[0].o = (jobject) createArray(ctx, &class_int, (((jarray) nullCheck(ctx, sp[0].o))->length));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_types = sp[0].o;
	}
	popExceptionFrame(frameRef);
	{
	LINE_NUMBER(360);
	if ((frame[2].o) == nullptr) goto label_26;
	}
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(362);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(365);
	goto label_26;
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(363);
	frame[3].o = sp[0].o;
	LINE_NUMBER(364);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[3].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[3].o));
	LINE_NUMBER(365);
	goto label_26;
	}
label_6:;
label_13: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Throwable))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_6; }
	}
	LINE_NUMBER(360);
	INST_ASTORE(4);
	popExceptionFrame(frameRef);
	INST_ALOAD(2);
	if ((--sp)->o == nullptr) goto label_29;
label_11: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_10; }
	}
	{
	LINE_NUMBER(362);
	((func_java_io_DataInputStream_close) ((void **) nullCheck(ctx, (frame[2].o))->vtable)[VTABLE_java_io_DataInputStream_close])(ctx, (frame[2].o));
	}
	popExceptionFrame(frameRef);
	LINE_NUMBER(365);
	goto label_29;
label_10:;
	{
	sp -= 1;
	LINE_NUMBER(363);
	frame[5].o = sp[0].o;
	LINE_NUMBER(364);
	((func_java_lang_Exception_printStackTrace) ((void **) nullCheck(ctx, (frame[5].o))->vtable)[VTABLE_java_lang_Exception_printStackTrace])(ctx, (frame[5].o));
	}
label_29:;
	{
	LINE_NUMBER(367);
	throwException(ctx, (frame[4].o));	}
label_26:;
	LINE_NUMBER(368);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

jint SM_nro_TileMap_tileTypeAt_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[6];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:tileTypeAt", 6 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(372);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_types;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, (((frame[1].i) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw)) + (frame[0].i)));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(373);
	frame[2].o = sp[0].o;
	LINE_NUMBER(374);
	popStackFrame(ctx);
	return (1000);
	}

	popStackFrame(ctx);
}

jint SM_nro_TileMap_tileTypeAtPixel_int_int_R_int(jcontext ctx, jint param0, jint param1) {
	jtype frame[7];
	auto stack = &frame[3];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:tileTypeAtPixel", 7 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(380);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_types;
	jint temp0 = (jint)ARRAY_ACCESS(jint, sp[0].o, ((((frame[1].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw)) + ((frame[0].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size))));
	sp[0].i = temp0;
	sp += 1;
	}
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(381);
	frame[2].o = sp[0].o;
	LINE_NUMBER(382);
	popStackFrame(ctx);
	return (1000);
	}

	popStackFrame(ctx);
}

jbool SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[8];
	auto stack = &frame[4];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:tileTypeAt", 8 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
label_3: if (setjmp(*pushExceptionFrame(frameRef, &class_java_lang_Exception))) {
		sp = stack; PUSH_OBJECT(clearCurrentException(frameRef)); { popExceptionFrames(frameRef, 1); goto label_2; }
	}
	{
	LINE_NUMBER(388);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_types;
	if ((((jint)ARRAY_ACCESS(jint, sp[0].o, ((((frame[1].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw)) + ((frame[0].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size))))) & (frame[2].i)) != (frame[2].i)) goto label_4;
	}
	INST_ICONST(1);
	goto label_1;
label_4:;
	INST_ICONST(0);
label_1:;
	popExceptionFrame(frameRef);
	popStackFrame(ctx);
	INST_IRETURN();
label_2:;
	{
	sp -= 1;
	LINE_NUMBER(389);
	frame[3].o = sp[0].o;
	LINE_NUMBER(390);
	popStackFrame(ctx);
	return (jint(0));
	}

	popStackFrame(ctx);
}

void SM_nro_TileMap__setTileTypeAtPixel_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:_setTileTypeAtPixel", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(395);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_types;
	frame[3].o = sp[0].o;
	LINE_NUMBER(396);
	frame[4].i = ((((frame[1].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw)) + ((frame[0].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)));
	LINE_NUMBER(397);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) | (512));
	LINE_NUMBER(398);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void SM_nro_TileMap_setTileTypeAtPixel_int_int_int(jcontext ctx, jint param0, jint param1, jint param2) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:setTileTypeAtPixel", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	frame[1].i = param1;
	frame[2].i = param2;
	{
	LINE_NUMBER(401);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_types;
	frame[3].o = sp[0].o;
	LINE_NUMBER(402);
	frame[4].i = ((((frame[1].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tmw)) + ((frame[0].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)));
	LINE_NUMBER(403);
	sp[0].o = frame[3].o;
	jint temp0 = frame[4].i;
	ARRAY_ACCESS(jint, sp[0].o, temp0) = (((jint)ARRAY_ACCESS(jint, sp[0].o, temp0)) & (-513));
	LINE_NUMBER(404);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

jint SM_nro_TileMap_tileYofPixel_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:tileYofPixel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(407);
	popStackFrame(ctx);
	return (((frame[0].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size));
	}

	popStackFrame(ctx);
}

jint SM_nro_TileMap_tileXofPixel_int_R_int(jcontext ctx, jint param0) {
	jtype frame[3];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:tileXofPixel", 3 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	frame[0].i = param0;
	{
	LINE_NUMBER(411);
	popStackFrame(ctx);
	return (((frame[0].i) / (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size)) * (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_size));
	}

	popStackFrame(ctx);
}

void SM_nro_TileMap_loadMainTile(jcontext ctx) {
	jtype frame[9];
	auto stack = &frame[5];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:loadMainTile", 9 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(415);
	SM_java_lang_System_gc(ctx);
	LINE_NUMBER(416);
	if ((clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_lastTileID) != (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID)) goto label_2;
	}
	clinit_nro_TileMap(ctx);
	(sp++)->o = SF_nro_TileMap_imgTile;
	if ((--sp)->o != nullptr) goto label_3;
label_2:;
	{
	LINE_NUMBER(417);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if (sp[0].o == nullptr) goto label_4;
	}
	{
	LINE_NUMBER(418);
	frame[0].i = (jint(0));
	}
label_6:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_7;
	}
	{
	LINE_NUMBER(419);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	SM_javax_microedition_lcdui_Image_disposeSafe_javax_microedition_lcdui_Image(ctx, ((jobject)ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i))));
	LINE_NUMBER(420);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (jobject(nullptr));
	LINE_NUMBER(418);
	INST_IINC(0, 1);
	goto label_6;
	}
label_7:;
	{
	LINE_NUMBER(422);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgTile = (jobject(nullptr));
	}
label_4:;
	{
	LINE_NUMBER(425);
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(5))) goto label_11;
	}
	{
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (jint(3))) goto label_11;
	}
	{
	if ((clinit_lib_mSystem(ctx), (jint)SF_lib_mSystem_clientTypec) == (8)) goto label_11;
	}
	{
	LINE_NUMBER(426);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/t/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"$1.png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(427);
	if ((frame[1].o) == nullptr) goto label_14;
	}
	{
	LINE_NUMBER(428);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (100));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgTile = sp[0].o;
	LINE_NUMBER(429);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[1].o);
	LINE_NUMBER(431);
	frame[0].i = (jint(1));
	}
label_18:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_19;
	}
	{
	LINE_NUMBER(432);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/t/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"$"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((frame[0].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	LINE_NUMBER(433);
	if ((frame[2].o) != nullptr) goto label_22;
	}
	LINE_NUMBER(434);
	goto label_19;
label_22:;
	{
	LINE_NUMBER(436);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (frame[2].o);
	LINE_NUMBER(431);
	INST_IINC(0, 1);
	goto label_18;
	}
label_14:;
	{
	LINE_NUMBER(440);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/t/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImageRMS_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[2].o = sp[0].o;
	if (sp[0].o == nullptr) goto label_26;
	}
	{
	LINE_NUMBER(441);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (jint(1)));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgTile = sp[0].o;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[2].o);
	goto label_19;
	}
label_26:;
	{
	LINE_NUMBER(443);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/t/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/1.png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[3].o = sp[0].o;
	LINE_NUMBER(444);
	if ((frame[3].o) == nullptr) goto label_19;
	}
	{
	LINE_NUMBER(445);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (100));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgTile = sp[0].o;
	LINE_NUMBER(446);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	ARRAY_ACCESS(jobject, sp[0].o, (jint(0))) = (frame[3].o);
	LINE_NUMBER(447);
	frame[0].i = (jint(1));
	}
label_32:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_19;
	}
	{
	LINE_NUMBER(448);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/t/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((frame[0].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[4].o = sp[0].o;
	LINE_NUMBER(449);
	if ((frame[4].o) != nullptr) goto label_35;
	}
	LINE_NUMBER(450);
	goto label_19;
label_35:;
	{
	LINE_NUMBER(452);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (frame[4].o);
	LINE_NUMBER(447);
	INST_IINC(0, 1);
	goto label_32;
	}
label_19:;
	LINE_NUMBER(457);
	goto label_38;
label_11:;
	{
	if ((clinit_lib_mGraphics(ctx), (jint)SF_lib_mGraphics_zoomLevel) != (jint(1))) goto label_39;
	}
	{
	LINE_NUMBER(458);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (jint(1)));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgTile = sp[0].o;
	jint temp0 = jint(0);
	clinit_java_lang_StringBuilder(ctx);
	sp[1].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[1].o);
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8"/t/"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[1].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[1].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[1].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[1].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[1].o);
	sp[1].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[1].o);
	ARRAY_ACCESS(jobject, sp[0].o, temp0) = sp[1].o;
	goto label_38;
	}
label_39:;
	{
	LINE_NUMBER(460);
	sp[0].o = (jobject)createArray(ctx, &class_javax_microedition_lcdui_Image, (100));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgTile = sp[0].o;
	LINE_NUMBER(462);
	frame[0].i = (jint(0));
	}
label_42:;
	{
	jint temp0 = frame[0].i;
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if (temp0 >= (((jarray) nullCheck(ctx, sp[0].o))->length)) goto label_38;
	}
	{
	LINE_NUMBER(463);
	clinit_java_lang_StringBuilder(ctx);
	sp[0].o = gcAlloc(ctx, &class_java_lang_StringBuilder);
	init_java_lang_StringBuilder(ctx, sp[0].o);
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/t/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"/"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_int_R_java_lang_StringBuilder])(ctx, sp[0].o, ((frame[0].i) + (jint(1))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_append_java_lang_String_R_java_lang_StringBuilder])(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8".png"_j))));
	sp[0].o = (jobject)((func_java_lang_StringBuilder_toString_R_java_lang_String) ((void **) nullCheck(ctx, sp[0].o)->vtable)[VTABLE_java_lang_StringBuilder_toString_R_java_lang_String])(ctx, sp[0].o);
	sp[0].o = (jobject)SM_lib_mSystem_createImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, sp[0].o);
	frame[1].o = sp[0].o;
	LINE_NUMBER(464);
	if ((frame[1].o) != nullptr) goto label_45;
	}
	LINE_NUMBER(465);
	goto label_38;
label_45:;
	{
	LINE_NUMBER(467);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	ARRAY_ACCESS(jobject, sp[0].o, (frame[0].i)) = (frame[1].o);
	LINE_NUMBER(462);
	INST_IINC(0, 1);
	goto label_42;
	}
label_38:;
	{
	LINE_NUMBER(471);
	clinit_nro_TileMap(ctx);
	sp[0].o = (jobject)SF_nro_TileMap_imgTile;
	if (sp[0].o == nullptr) goto label_3;
	}
	{
	LINE_NUMBER(472);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastTileID = (clinit_nro_TileMap(ctx), (jint)SF_nro_TileMap_tileID);
	}
label_3:;
	LINE_NUMBER(476);
	popStackFrame(ctx);
	INST_RETURN();

	popStackFrame(ctx);
}

void clinit_nro_TileMap(jcontext ctx) {
	static bool initialized;
	if (initialized) return;
	initialized = true;
	jtype frame[5];
	auto stack = &frame[1];
	jtype *sp = stack;
	FrameInfo frameInfo { "nro/TileMap:<clinit>", 5 };
	auto frameRef = pushStackFrame(ctx, &frameInfo, frame, nullptr);

	clinit_nro_TileMap(ctx);
	{
	LINE_NUMBER(20);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastTileID = (jint(-1));
	LINE_NUMBER(29);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_size = (24);
	LINE_NUMBER(34);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_isMapDouble = (jint(0));
	LINE_NUMBER(35);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_mapName = (((jobject) createStringLiteral(ctx, u8""_j)));
	LINE_NUMBER(37);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastBgID = (jint(-1));
	LINE_NUMBER(41);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastType = (jint(-1));
	LINE_NUMBER(43);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_lastPlanetId = (jint(-1));
	LINE_NUMBER(44);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vGO"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_vGo = sp[0].o;
	LINE_NUMBER(45);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vItemBg"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_vItemBg = sp[0].o;
	LINE_NUMBER(46);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vCurrItem"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_vCurrItem = sp[0].o;
	LINE_NUMBER(48);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/mainImage/myTexture2dbong.png"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_bong = sp[0].o;
	LINE_NUMBER(62);
	clinit_nro_MyVector(ctx);
	sp[0].o = gcAlloc(ctx, &class_nro_MyVector);
	init_nro_MyVector_java_lang_String(ctx, sp[0].o, (((jobject) createStringLiteral(ctx, u8"vObject"_j))));
	LINE_NUMBER(63);
	sp[0].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (21);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (22);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (23);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (39);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (40);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (41);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_offlineId = sp[0].o;
	LINE_NUMBER(64);
	sp[0].o = (jobject) createArray(ctx, &class_int, (6));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (21);
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (22);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (23);
	ARRAY_ACCESS(jint, sp[0].o, (jint(3))) = (24);
	ARRAY_ACCESS(jint, sp[0].o, (jint(4))) = (25);
	ARRAY_ACCESS(jint, sp[0].o, (jint(5))) = (26);
	frame[0].o = sp[0].o;
	LINE_NUMBER(65);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(3)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(0));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (7);
	ARRAY_ACCESS(jint, sp[0].o, (jint(2))) = (14);
	frame[0].o = sp[0].o;
	LINE_NUMBER(66);
	sp[0].o = (jobject)SM_lib_mSystem_loadImage_java_lang_String_R_javax_microedition_lcdui_Image(ctx, (((jobject) createStringLiteral(ctx, u8"/bg/light.png"_j))));
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_imgLight = sp[0].o;
	LINE_NUMBER(67);
	sp[0].o = (jobject) createArray(ctx, &class_int, (jint(2)));
	ARRAY_ACCESS(jint, sp[0].o, (jint(0))) = (jint(5257738));
	ARRAY_ACCESS(jint, sp[0].o, (jint(1))) = (jint(8807192));
	frame[0].o = sp[0].o;
	LINE_NUMBER(68);
	clinit_nro_TileMap(ctx);
	SF_nro_TileMap_county = (jint(0));
	LINE_NUMBER(69);
	popStackFrame(ctx);
	return;
	}

	popStackFrame(ctx);
}

void *vtable_nro_TileMap[] {
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
	{ "tmw", &class_int, (intptr_t) &SF_nro_TileMap_tmw, "I", 9 },
	{ "tmh", &class_int, (intptr_t) &SF_nro_TileMap_tmh, "I", 9 },
	{ "pxw", &class_int, (intptr_t) &SF_nro_TileMap_pxw, "I", 9 },
	{ "pxh", &class_int, (intptr_t) &SF_nro_TileMap_pxh, "I", 9 },
	{ "tileID", &class_int, (intptr_t) &SF_nro_TileMap_tileID, "I", 9 },
	{ "lastTileID", &class_int, (intptr_t) &SF_nro_TileMap_lastTileID, "I", 9 },
	{ "maps", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_TileMap_maps, "[I", 9 },
	{ "types", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_TileMap_types, "[I", 9 },
	{ "imgTile", getArrayClass(&class_javax_microedition_lcdui_Image, 1), (intptr_t) &SF_nro_TileMap_imgTile, "[Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgTileSmall", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TileMap_imgTileSmall, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgMiniMap", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TileMap_imgMiniMap, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgWaterfall", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TileMap_imgWaterfall, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "imgWaterlowN", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TileMap_imgWaterlowN, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "imgWaterlowN2", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TileMap_imgWaterlowN2, "Ljavax/microedition/lcdui/Image;", 10 },
	{ "size", &class_byte, (intptr_t) &SF_nro_TileMap_size, "B", 9 },
	{ "O", &class_int, (intptr_t) &SF_nro_TileMap_O, "I", 10 },
	{ "P", &class_int, (intptr_t) &SF_nro_TileMap_P, "I", 10 },
	{ "Q", &class_int, (intptr_t) &SF_nro_TileMap_Q, "I", 10 },
	{ "R", &class_int, (intptr_t) &SF_nro_TileMap_R, "I", 10 },
	{ "isMapDouble", &class_boolean, (intptr_t) &SF_nro_TileMap_isMapDouble, "Z", 9 },
	{ "mapName", &class_java_lang_String, (intptr_t) &SF_nro_TileMap_mapName, "Ljava/lang/String;", 9 },
	{ "mapID", &class_int, (intptr_t) &SF_nro_TileMap_mapID, "I", 9 },
	{ "lastBgID", &class_int, (intptr_t) &SF_nro_TileMap_lastBgID, "I", 9 },
	{ "zoneID", &class_int, (intptr_t) &SF_nro_TileMap_zoneID, "I", 9 },
	{ "bgID", &class_int, (intptr_t) &SF_nro_TileMap_bgID, "I", 9 },
	{ "bgType", &class_int, (intptr_t) &SF_nro_TileMap_bgType, "I", 9 },
	{ "lastType", &class_int, (intptr_t) &SF_nro_TileMap_lastType, "I", 9 },
	{ "planetID", &class_byte, (intptr_t) &SF_nro_TileMap_planetID, "B", 9 },
	{ "lastPlanetId", &class_byte, (intptr_t) &SF_nro_TileMap_lastPlanetId, "B", 9 },
	{ "vGo", &class_nro_MyVector, (intptr_t) &SF_nro_TileMap_vGo, "Lnro/MyVector;", 9 },
	{ "vItemBg", &class_nro_MyVector, (intptr_t) &SF_nro_TileMap_vItemBg, "Lnro/MyVector;", 9 },
	{ "vCurrItem", &class_nro_MyVector, (intptr_t) &SF_nro_TileMap_vCurrItem, "Lnro/MyVector;", 9 },
	{ "mapNames", getArrayClass(&class_java_lang_String, 1), (intptr_t) &SF_nro_TileMap_mapNames, "[Ljava/lang/String;", 9 },
	{ "bong", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TileMap_bong, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "offlineId", getArrayClass(&class_int, 1), (intptr_t) &SF_nro_TileMap_offlineId, "[I", 10 },
	{ "tileType", getArrayClass(&class_int, 2), (intptr_t) &SF_nro_TileMap_tileType, "[[I", 9 },
	{ "tileIndex", getArrayClass(&class_int, 3), (intptr_t) &SF_nro_TileMap_tileIndex, "[[[I", 9 },
	{ "imgLight", &class_javax_microedition_lcdui_Image, (intptr_t) &SF_nro_TileMap_imgLight, "Ljavax/microedition/lcdui/Image;", 9 },
	{ "sizeMiniMap", &class_int, (intptr_t) &SF_nro_TileMap_sizeMiniMap, "I", 9 },
	{ "gssx", &class_int, (intptr_t) &SF_nro_TileMap_gssx, "I", 9 },
	{ "gssxe", &class_int, (intptr_t) &SF_nro_TileMap_gssxe, "I", 9 },
	{ "gssy", &class_int, (intptr_t) &SF_nro_TileMap_gssy, "I", 9 },
	{ "gssye", &class_int, (intptr_t) &SF_nro_TileMap_gssye, "I", 9 },
	{ "countx", &class_int, (intptr_t) &SF_nro_TileMap_countx, "I", 9 },
	{ "county", &class_int, (intptr_t) &SF_nro_TileMap_county, "I", 9 },
};

static MethodMetadata methods[] {
	{ "<init>", (intptr_t) init_nro_TileMap, 0, "()V", 1 },
	{ "isVoDaiMap", (intptr_t) SM_nro_TileMap_isVoDaiMap_R_boolean, 0, "()Z", 9 },
	{ "isTrainingMap", (intptr_t) SM_nro_TileMap_isTrainingMap_R_boolean, 0, "()Z", 9 },
	{ "mapPhuBang", (intptr_t) SM_nro_TileMap_mapPhuBang_R_boolean, 0, "()Z", 9 },
	{ "getBIById", (intptr_t) SM_nro_TileMap_getBIById_int_R_nro_BgItem, 0, "(I)Lnro/BgItem;", 9 },
	{ "isOfflineMap", (intptr_t) SM_nro_TileMap_isOfflineMap_R_boolean, 0, "()Z", 9 },
	{ "b", (intptr_t) SM_nro_TileMap_b_int_R_boolean, 0, "(I)Z", 9 },
	{ "loadTileImage", (intptr_t) SM_nro_TileMap_loadTileImage, 0, "()V", 25 },
	{ "loadMap", (intptr_t) SM_nro_TileMap_loadMap_int, 0, "(I)V", 9 },
	{ "isInAirMap", (intptr_t) SM_nro_TileMap_isInAirMap_R_boolean, 0, "()Z", 9 },
	{ "isMapDouble", (intptr_t) SM_nro_TileMap_isMapDouble_R_boolean, 0, "()Z", 9 },
	{ "paintTile", (intptr_t) SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int, 0, "(Llib/mGraphics;III)V", 10 },
	{ "paintTile", (intptr_t) SM_nro_TileMap_paintTile_lib_mGraphics_int_int_int_int, 0, "(Llib/mGraphics;IIII)V", 10 },
	{ "paintTilemap", (intptr_t) SM_nro_TileMap_paintTilemap_lib_mGraphics, 0, "(Llib/mGraphics;)V", 25 },
	{ "i", (intptr_t) SM_nro_TileMap_i_R_boolean, 0, "()Z", 10 },
	{ "paintOutTilemap", (intptr_t) SM_nro_TileMap_paintOutTilemap_lib_mGraphics, 0, "(Llib/mGraphics;)V", 25 },
	{ "loadMapFromResource", (intptr_t) SM_nro_TileMap_loadMapFromResource_int, 0, "(I)V", 9 },
	{ "tileTypeAt", (intptr_t) SM_nro_TileMap_tileTypeAt_int_int_R_int, 0, "(II)I", 25 },
	{ "tileTypeAtPixel", (intptr_t) SM_nro_TileMap_tileTypeAtPixel_int_int_R_int, 0, "(II)I", 25 },
	{ "tileTypeAt", (intptr_t) SM_nro_TileMap_tileTypeAt_int_int_int_R_boolean, 0, "(III)Z", 25 },
	{ "_setTileTypeAtPixel", (intptr_t) SM_nro_TileMap__setTileTypeAtPixel_int_int_int, 0, "(III)V", 25 },
	{ "setTileTypeAtPixel", (intptr_t) SM_nro_TileMap_setTileTypeAtPixel_int_int_int, 0, "(III)V", 25 },
	{ "tileYofPixel", (intptr_t) SM_nro_TileMap_tileYofPixel_int_R_int, 0, "(I)I", 25 },
	{ "tileXofPixel", (intptr_t) SM_nro_TileMap_tileXofPixel_int_R_int, 0, "(I)I", 25 },
	{ "loadMainTile", (intptr_t) SM_nro_TileMap_loadMainTile, 0, "()V", 9 },
	{ "<clinit>", (intptr_t) clinit_nro_TileMap, 0, "()V", 8 },
};

Class class_nro_TileMap{
		.nativeName = (intptr_t) "nro/TileMap",
		.parentClass = (intptr_t) &class_java_lang_Object,
		.size = sizeof(nro_TileMap),
		.classVtable = (intptr_t) vtable_nro_TileMap,
		.staticInitializer = (intptr_t) clinit_nro_TileMap,
		.annotationInitializer = (intptr_t) nullptr,
		.markFunction = (intptr_t) mark_nro_TileMap,
		.primitive = false,
		.arrayDimensions = 0,
		.componentClass = (intptr_t) nullptr,
		.outerClass = (intptr_t) nullptr,
		.innerClassCount = 0,
		.nativeInnerClasses = (intptr_t) nullptr,
		.access = 49,
		.interfaceCount = 0,
		.nativeInterfaces = (intptr_t) nullptr,
		.fieldCount = 45,
		.nativeFields = (intptr_t) fields,
		.methodCount = 26,
		.nativeMethods = (intptr_t) methods,
		.vtableSize = 11,
		.vtableEntries = (intptr_t) vtableEntries,
		.anonymous = false,
		.synthetic = false,
};
static bool registered_nro_TileMap = registerClass(&class_nro_TileMap);

}

