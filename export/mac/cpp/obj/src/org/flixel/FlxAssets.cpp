#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_Graphics
#include <flash/display/Graphics.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
namespace org{
namespace flixel{

Void FlxAssets_obj::__construct()
{
	return null();
}

FlxAssets_obj::~FlxAssets_obj() { }

Dynamic FlxAssets_obj::__CreateEmpty() { return  new FlxAssets_obj; }
hx::ObjectPtr< FlxAssets_obj > FlxAssets_obj::__new()
{  hx::ObjectPtr< FlxAssets_obj > result = new FlxAssets_obj();
	result->__construct();
	return result;}

Dynamic FlxAssets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxAssets_obj > result = new FlxAssets_obj();
	result->__construct();
	return result;}

::String FlxAssets_obj::imgDefaultButton;

::String FlxAssets_obj::imgLogo;

::String FlxAssets_obj::imgDefault;

::String FlxAssets_obj::imgAuto;

::String FlxAssets_obj::imgAutoAlt;

::String FlxAssets_obj::imgLogoCorners;

::String FlxAssets_obj::imgLogoLight;

::String FlxAssets_obj::imgHandle;

::String FlxAssets_obj::imgDefaultCursor;

::String FlxAssets_obj::imgBounds;

::String FlxAssets_obj::imgOpen;

::String FlxAssets_obj::imgRecordOff;

::String FlxAssets_obj::imgRecordOn;

::String FlxAssets_obj::imgStop;

::String FlxAssets_obj::imgFlixel;

::String FlxAssets_obj::imgRestart;

::String FlxAssets_obj::imgPause;

::String FlxAssets_obj::imgPlay;

::String FlxAssets_obj::imgStep;

::String FlxAssets_obj::imgBase;

::String FlxAssets_obj::imgStick;

::String FlxAssets_obj::imgButtonA;

::String FlxAssets_obj::imgButtonB;

::String FlxAssets_obj::imgButtonC;

::String FlxAssets_obj::imgButtonX;

::String FlxAssets_obj::imgButtonY;

::String FlxAssets_obj::imgButtonUp;

::String FlxAssets_obj::imgButtonDown;

::String FlxAssets_obj::imgButtonLeft;

::String FlxAssets_obj::imgButtonRight;

::String FlxAssets_obj::debuggerFont;

::String FlxAssets_obj::defaultFont;

::String FlxAssets_obj::sndBeep;

Void FlxAssets_obj::drawLogo( ::flash::display::Graphics graph){
{
		HX_STACK_PUSH("FlxAssets::drawLogo","org/flixel/FlxAssets.hx",47);
		HX_STACK_ARG(graph,"graph");
		HX_STACK_LINE(49)
		graph->beginFill((int)47394,null());
		HX_STACK_LINE(50)
		graph->moveTo((int)50,(int)13);
		HX_STACK_LINE(51)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(52)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(53)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(54)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(55)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(56)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(57)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(58)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(59)
		graph->endFill();
		HX_STACK_LINE(62)
		graph->beginFill((int)16761138,null());
		HX_STACK_LINE(63)
		graph->moveTo((int)0,(int)0);
		HX_STACK_LINE(64)
		graph->lineTo((int)25,(int)0);
		HX_STACK_LINE(65)
		graph->lineTo((int)50,(int)13);
		HX_STACK_LINE(66)
		graph->lineTo((int)13,(int)50);
		HX_STACK_LINE(67)
		graph->lineTo((int)0,(int)25);
		HX_STACK_LINE(68)
		graph->lineTo((int)0,(int)0);
		HX_STACK_LINE(69)
		graph->endFill();
		HX_STACK_LINE(72)
		graph->beginFill((int)16066382,null());
		HX_STACK_LINE(73)
		graph->moveTo((int)100,(int)0);
		HX_STACK_LINE(74)
		graph->lineTo((int)75,(int)0);
		HX_STACK_LINE(75)
		graph->lineTo((int)51,(int)13);
		HX_STACK_LINE(76)
		graph->lineTo((int)87,(int)50);
		HX_STACK_LINE(77)
		graph->lineTo((int)100,(int)25);
		HX_STACK_LINE(78)
		graph->lineTo((int)100,(int)0);
		HX_STACK_LINE(79)
		graph->endFill();
		HX_STACK_LINE(82)
		graph->beginFill((int)3555839,null());
		HX_STACK_LINE(83)
		graph->moveTo((int)0,(int)100);
		HX_STACK_LINE(84)
		graph->lineTo((int)25,(int)100);
		HX_STACK_LINE(85)
		graph->lineTo((int)50,(int)87);
		HX_STACK_LINE(86)
		graph->lineTo((int)13,(int)51);
		HX_STACK_LINE(87)
		graph->lineTo((int)0,(int)75);
		HX_STACK_LINE(88)
		graph->lineTo((int)0,(int)100);
		HX_STACK_LINE(89)
		graph->endFill();
		HX_STACK_LINE(92)
		graph->beginFill((int)314875,null());
		HX_STACK_LINE(93)
		graph->moveTo((int)100,(int)100);
		HX_STACK_LINE(94)
		graph->lineTo((int)75,(int)100);
		HX_STACK_LINE(95)
		graph->lineTo((int)51,(int)87);
		HX_STACK_LINE(96)
		graph->lineTo((int)87,(int)51);
		HX_STACK_LINE(97)
		graph->lineTo((int)100,(int)75);
		HX_STACK_LINE(98)
		graph->lineTo((int)100,(int)100);
		HX_STACK_LINE(99)
		graph->endFill();
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,drawLogo,(void))

::flash::display::BitmapData FlxAssets_obj::getBitmapData( ::String id){
	HX_STACK_PUSH("FlxAssets::getBitmapData","org/flixel/FlxAssets.hx",103);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(103)
	return ::openfl::Assets_obj::getBitmapData(id,null());
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(FlxAssets_obj,getBitmapData,return )

Void FlxAssets_obj::cacheSounds( ){
{
		HX_STACK_PUSH("FlxAssets::cacheSounds","org/flixel/FlxAssets.hx",111);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(FlxAssets_obj,cacheSounds,(void))

Void FlxAssets_obj::addBitmapDataToCache( ::String key,::flash::display::BitmapData bmd){
{
		HX_STACK_PUSH("FlxAssets::addBitmapDataToCache","org/flixel/FlxAssets.hx",132);
		HX_STACK_ARG(key,"key");
		HX_STACK_ARG(bmd,"bmd");
		HX_STACK_LINE(133)
		::Reflect_obj::callMethod(hx::ClassOf< ::openfl::Assets >(),::Reflect_obj::field(hx::ClassOf< ::openfl::Assets >(),HX_CSTRING("initialize")),Dynamic( Array_obj<Dynamic>::__new()));
		struct _Function_1_1{
			inline static Dynamic Block( ){
				HX_STACK_PUSH("*::closure","org/flixel/FlxAssets.hx",134);
				{
					HX_STACK_LINE(134)
					Dynamic o = hx::ClassOf< ::openfl::Assets >();		HX_STACK_VAR(o,"o");
					HX_STACK_LINE(134)
					return (  (((o == null()))) ? Dynamic(null()) : Dynamic(o->__Field(HX_CSTRING("resourceTypes"),true)) );
				}
				return null();
			}
		};
		HX_STACK_LINE(134)
		::haxe::ds::StringMap resourceTypes = _Function_1_1::Block();		HX_STACK_VAR(resourceTypes,"resourceTypes");
		HX_STACK_LINE(136)
		resourceTypes->set(key,HX_CSTRING("image"));
		HX_STACK_LINE(137)
		::openfl::Assets_obj::cachedBitmapData->set(key,bmd);
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(FlxAssets_obj,addBitmapDataToCache,(void))


FlxAssets_obj::FlxAssets_obj()
{
}

void FlxAssets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxAssets);
	HX_MARK_END_CLASS();
}

void FlxAssets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic FlxAssets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"imgLogo") ) { return imgLogo; }
		if (HX_FIELD_EQ(inName,"imgAuto") ) { return imgAuto; }
		if (HX_FIELD_EQ(inName,"imgOpen") ) { return imgOpen; }
		if (HX_FIELD_EQ(inName,"imgStop") ) { return imgStop; }
		if (HX_FIELD_EQ(inName,"imgPlay") ) { return imgPlay; }
		if (HX_FIELD_EQ(inName,"imgStep") ) { return imgStep; }
		if (HX_FIELD_EQ(inName,"imgBase") ) { return imgBase; }
		if (HX_FIELD_EQ(inName,"sndBeep") ) { return sndBeep; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imgPause") ) { return imgPause; }
		if (HX_FIELD_EQ(inName,"imgStick") ) { return imgStick; }
		if (HX_FIELD_EQ(inName,"drawLogo") ) { return drawLogo_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imgHandle") ) { return imgHandle; }
		if (HX_FIELD_EQ(inName,"imgBounds") ) { return imgBounds; }
		if (HX_FIELD_EQ(inName,"imgFlixel") ) { return imgFlixel; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imgDefault") ) { return imgDefault; }
		if (HX_FIELD_EQ(inName,"imgAutoAlt") ) { return imgAutoAlt; }
		if (HX_FIELD_EQ(inName,"imgRestart") ) { return imgRestart; }
		if (HX_FIELD_EQ(inName,"imgButtonA") ) { return imgButtonA; }
		if (HX_FIELD_EQ(inName,"imgButtonB") ) { return imgButtonB; }
		if (HX_FIELD_EQ(inName,"imgButtonC") ) { return imgButtonC; }
		if (HX_FIELD_EQ(inName,"imgButtonX") ) { return imgButtonX; }
		if (HX_FIELD_EQ(inName,"imgButtonY") ) { return imgButtonY; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imgRecordOn") ) { return imgRecordOn; }
		if (HX_FIELD_EQ(inName,"imgButtonUp") ) { return imgButtonUp; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { return defaultFont; }
		if (HX_FIELD_EQ(inName,"cacheSounds") ) { return cacheSounds_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imgLogoLight") ) { return imgLogoLight; }
		if (HX_FIELD_EQ(inName,"imgRecordOff") ) { return imgRecordOff; }
		if (HX_FIELD_EQ(inName,"debuggerFont") ) { return debuggerFont; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imgButtonDown") ) { return imgButtonDown; }
		if (HX_FIELD_EQ(inName,"imgButtonLeft") ) { return imgButtonLeft; }
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imgLogoCorners") ) { return imgLogoCorners; }
		if (HX_FIELD_EQ(inName,"imgButtonRight") ) { return imgButtonRight; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"imgDefaultButton") ) { return imgDefaultButton; }
		if (HX_FIELD_EQ(inName,"imgDefaultCursor") ) { return imgDefaultCursor; }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"addBitmapDataToCache") ) { return addBitmapDataToCache_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxAssets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 7:
		if (HX_FIELD_EQ(inName,"imgLogo") ) { imgLogo=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgAuto") ) { imgAuto=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgOpen") ) { imgOpen=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgStop") ) { imgStop=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgPlay") ) { imgPlay=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgStep") ) { imgStep=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgBase") ) { imgBase=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"sndBeep") ) { sndBeep=inValue.Cast< ::String >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"imgPause") ) { imgPause=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgStick") ) { imgStick=inValue.Cast< ::String >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"imgHandle") ) { imgHandle=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgBounds") ) { imgBounds=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgFlixel") ) { imgFlixel=inValue.Cast< ::String >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"imgDefault") ) { imgDefault=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgAutoAlt") ) { imgAutoAlt=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgRestart") ) { imgRestart=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgButtonA") ) { imgButtonA=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgButtonB") ) { imgButtonB=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgButtonC") ) { imgButtonC=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgButtonX") ) { imgButtonX=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgButtonY") ) { imgButtonY=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"imgRecordOn") ) { imgRecordOn=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgButtonUp") ) { imgButtonUp=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"defaultFont") ) { defaultFont=inValue.Cast< ::String >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"imgLogoLight") ) { imgLogoLight=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgRecordOff") ) { imgRecordOff=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"debuggerFont") ) { debuggerFont=inValue.Cast< ::String >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"imgButtonDown") ) { imgButtonDown=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgButtonLeft") ) { imgButtonLeft=inValue.Cast< ::String >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"imgLogoCorners") ) { imgLogoCorners=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgButtonRight") ) { imgButtonRight=inValue.Cast< ::String >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"imgDefaultButton") ) { imgDefaultButton=inValue.Cast< ::String >(); return inValue; }
		if (HX_FIELD_EQ(inName,"imgDefaultCursor") ) { imgDefaultCursor=inValue.Cast< ::String >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxAssets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("imgDefaultButton"),
	HX_CSTRING("imgLogo"),
	HX_CSTRING("imgDefault"),
	HX_CSTRING("imgAuto"),
	HX_CSTRING("imgAutoAlt"),
	HX_CSTRING("imgLogoCorners"),
	HX_CSTRING("imgLogoLight"),
	HX_CSTRING("imgHandle"),
	HX_CSTRING("imgDefaultCursor"),
	HX_CSTRING("imgBounds"),
	HX_CSTRING("imgOpen"),
	HX_CSTRING("imgRecordOff"),
	HX_CSTRING("imgRecordOn"),
	HX_CSTRING("imgStop"),
	HX_CSTRING("imgFlixel"),
	HX_CSTRING("imgRestart"),
	HX_CSTRING("imgPause"),
	HX_CSTRING("imgPlay"),
	HX_CSTRING("imgStep"),
	HX_CSTRING("imgBase"),
	HX_CSTRING("imgStick"),
	HX_CSTRING("imgButtonA"),
	HX_CSTRING("imgButtonB"),
	HX_CSTRING("imgButtonC"),
	HX_CSTRING("imgButtonX"),
	HX_CSTRING("imgButtonY"),
	HX_CSTRING("imgButtonUp"),
	HX_CSTRING("imgButtonDown"),
	HX_CSTRING("imgButtonLeft"),
	HX_CSTRING("imgButtonRight"),
	HX_CSTRING("debuggerFont"),
	HX_CSTRING("defaultFont"),
	HX_CSTRING("sndBeep"),
	HX_CSTRING("drawLogo"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("cacheSounds"),
	HX_CSTRING("addBitmapDataToCache"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgDefaultButton,"imgDefaultButton");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgLogo,"imgLogo");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgDefault,"imgDefault");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgAuto,"imgAuto");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgAutoAlt,"imgAutoAlt");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgLogoCorners,"imgLogoCorners");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgLogoLight,"imgLogoLight");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgHandle,"imgHandle");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgDefaultCursor,"imgDefaultCursor");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgBounds,"imgBounds");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgOpen,"imgOpen");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgRecordOff,"imgRecordOff");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgRecordOn,"imgRecordOn");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgStop,"imgStop");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgFlixel,"imgFlixel");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgRestart,"imgRestart");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgPause,"imgPause");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgPlay,"imgPlay");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgStep,"imgStep");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgBase,"imgBase");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgStick,"imgStick");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonA,"imgButtonA");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonB,"imgButtonB");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonC,"imgButtonC");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonX,"imgButtonX");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonY,"imgButtonY");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonUp,"imgButtonUp");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonDown,"imgButtonDown");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonLeft,"imgButtonLeft");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::imgButtonRight,"imgButtonRight");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::debuggerFont,"debuggerFont");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::defaultFont,"defaultFont");
	HX_MARK_MEMBER_NAME(FlxAssets_obj::sndBeep,"sndBeep");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgDefaultButton,"imgDefaultButton");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgLogo,"imgLogo");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgDefault,"imgDefault");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgAuto,"imgAuto");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgAutoAlt,"imgAutoAlt");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgLogoCorners,"imgLogoCorners");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgLogoLight,"imgLogoLight");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgHandle,"imgHandle");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgDefaultCursor,"imgDefaultCursor");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgBounds,"imgBounds");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgOpen,"imgOpen");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgRecordOff,"imgRecordOff");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgRecordOn,"imgRecordOn");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgStop,"imgStop");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgFlixel,"imgFlixel");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgRestart,"imgRestart");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgPause,"imgPause");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgPlay,"imgPlay");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgStep,"imgStep");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgBase,"imgBase");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgStick,"imgStick");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonA,"imgButtonA");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonB,"imgButtonB");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonC,"imgButtonC");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonX,"imgButtonX");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonY,"imgButtonY");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonUp,"imgButtonUp");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonDown,"imgButtonDown");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonLeft,"imgButtonLeft");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::imgButtonRight,"imgButtonRight");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::debuggerFont,"debuggerFont");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::defaultFont,"defaultFont");
	HX_VISIT_MEMBER_NAME(FlxAssets_obj::sndBeep,"sndBeep");
};

Class FlxAssets_obj::__mClass;

void FlxAssets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxAssets"), hx::TCanCast< FlxAssets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxAssets_obj::__boot()
{
	imgDefaultButton= HX_CSTRING("assets/data/button.png");
	imgLogo= HX_CSTRING("assets/data/logo.png");
	imgDefault= HX_CSTRING("assets/data/default.png");
	imgAuto= HX_CSTRING("assets/data/autotiles.png");
	imgAutoAlt= HX_CSTRING("assets/data/autotiles_alt.png");
	imgLogoCorners= HX_CSTRING("assets/data/logo_corners.png");
	imgLogoLight= HX_CSTRING("assets/data/logo_light.png");
	imgHandle= HX_CSTRING("assets/data/handle.png");
	imgDefaultCursor= HX_CSTRING("assets/data/cursor.png");
	imgBounds= HX_CSTRING("assets/data/vis/bounds.png");
	imgOpen= HX_CSTRING("assets/data/vcr/open.png");
	imgRecordOff= HX_CSTRING("assets/data/vcr/record_off.png");
	imgRecordOn= HX_CSTRING("assets/data/vcr/record_on.png");
	imgStop= HX_CSTRING("assets/data/vcr/stop.png");
	imgFlixel= HX_CSTRING("assets/data/vcr/flixel.png");
	imgRestart= HX_CSTRING("assets/data/vcr/restart.png");
	imgPause= HX_CSTRING("assets/data/vcr/pause.png");
	imgPlay= HX_CSTRING("assets/data/vcr/play.png");
	imgStep= HX_CSTRING("assets/data/vcr/step.png");
	imgBase= HX_CSTRING("assets/data/base.png");
	imgStick= HX_CSTRING("assets/data/stick.png");
	imgButtonA= HX_CSTRING("assets/data/button_a.png");
	imgButtonB= HX_CSTRING("assets/data/button_b.png");
	imgButtonC= HX_CSTRING("assets/data/button_c.png");
	imgButtonX= HX_CSTRING("assets/data/button_x.png");
	imgButtonY= HX_CSTRING("assets/data/button_y.png");
	imgButtonUp= HX_CSTRING("assets/data/button_up.png");
	imgButtonDown= HX_CSTRING("assets/data/button_down.png");
	imgButtonLeft= HX_CSTRING("assets/data/button_left.png");
	imgButtonRight= HX_CSTRING("assets/data/button_right.png");
	debuggerFont= HX_CSTRING("assets/data/courier.ttf");
	defaultFont= HX_CSTRING("assets/data/nokiafc22.ttf");
	sndBeep= HX_CSTRING("Beep");
}

} // end namespace org
} // end namespace flixel
