#include <hxcpp.h>

#ifndef INCLUDED_MenuState
#include <MenuState.h>
#endif
#ifndef INCLUDED_ProjectClass
#include <ProjectClass.h>
#endif
#ifndef INCLUDED_flash_Lib
#include <flash/Lib.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObject
#include <flash/display/DisplayObject.h>
#endif
#ifndef INCLUDED_flash_display_DisplayObjectContainer
#include <flash/display/DisplayObjectContainer.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_display_InteractiveObject
#include <flash/display/InteractiveObject.h>
#endif
#ifndef INCLUDED_flash_display_MovieClip
#include <flash/display/MovieClip.h>
#endif
#ifndef INCLUDED_flash_display_Sprite
#include <flash/display/Sprite.h>
#endif
#ifndef INCLUDED_flash_display_Stage
#include <flash/display/Stage.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_hxMath
#include <hxMath.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGame
#include <org/flixel/FlxGame.h>
#endif
#ifndef INCLUDED_org_flixel_FlxGroup
#include <org/flixel/FlxGroup.h>
#endif
#ifndef INCLUDED_org_flixel_FlxState
#include <org/flixel/FlxState.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedGroup
#include <org/flixel/FlxTypedGroup.h>
#endif

Void ProjectClass_obj::__construct()
{
HX_STACK_PUSH("ProjectClass::new","ProjectClass.hx",9);
{
	HX_STACK_LINE(10)
	int stageWidth = ::flash::Lib_obj::get_current()->get_stage()->get_stageWidth();		HX_STACK_VAR(stageWidth,"stageWidth");
	HX_STACK_LINE(11)
	int stageHeight = ::flash::Lib_obj::get_current()->get_stage()->get_stageHeight();		HX_STACK_VAR(stageHeight,"stageHeight");
	HX_STACK_LINE(12)
	Float ratioX = (Float(stageWidth) / Float((int)832));		HX_STACK_VAR(ratioX,"ratioX");
	HX_STACK_LINE(13)
	Float ratioY = (Float(stageHeight) / Float((int)640));		HX_STACK_VAR(ratioY,"ratioY");
	HX_STACK_LINE(14)
	Float ratio = ::Math_obj::min(ratioX,ratioY);		HX_STACK_VAR(ratio,"ratio");
	HX_STACK_LINE(15)
	super::__construct(::Math_obj::ceil((Float(stageWidth) / Float(ratio))),::Math_obj::ceil((Float(stageHeight) / Float(ratio))),hx::ClassOf< ::MenuState >(),ratio,(int)30,(int)30);
}
;
	return null();
}

ProjectClass_obj::~ProjectClass_obj() { }

Dynamic ProjectClass_obj::__CreateEmpty() { return  new ProjectClass_obj; }
hx::ObjectPtr< ProjectClass_obj > ProjectClass_obj::__new()
{  hx::ObjectPtr< ProjectClass_obj > result = new ProjectClass_obj();
	result->__construct();
	return result;}

Dynamic ProjectClass_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< ProjectClass_obj > result = new ProjectClass_obj();
	result->__construct();
	return result;}


ProjectClass_obj::ProjectClass_obj()
{
}

void ProjectClass_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(ProjectClass);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void ProjectClass_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic ProjectClass_obj::__Field(const ::String &inName,bool inCallProp)
{
	return super::__Field(inName,inCallProp);
}

Dynamic ProjectClass_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void ProjectClass_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(ProjectClass_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(ProjectClass_obj::__mClass,"__mClass");
};

Class ProjectClass_obj::__mClass;

void ProjectClass_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("ProjectClass"), hx::TCanCast< ProjectClass_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void ProjectClass_obj::__boot()
{
}

