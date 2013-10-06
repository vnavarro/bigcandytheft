#include <hxcpp.h>

#ifndef INCLUDED_Player
#include <Player.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxInputStates
#include <org/flixel/system/input/FlxInputStates.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxKeyboard
#include <org/flixel/system/input/FlxKeyboard.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif

Void Player_obj::__construct()
{
HX_STACK_PUSH("Player::new","Player.hx",12);
{
	HX_STACK_LINE(13)
	super::__construct(null(),null(),null());
	HX_STACK_LINE(14)
	this->loadGraphic(HX_CSTRING("assets/player.png"),null(),null(),null(),null(),null(),null());
}
;
	return null();
}

Player_obj::~Player_obj() { }

Dynamic Player_obj::__CreateEmpty() { return  new Player_obj; }
hx::ObjectPtr< Player_obj > Player_obj::__new()
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Dynamic Player_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Player_obj > result = new Player_obj();
	result->__construct();
	return result;}

Void Player_obj::moveAround( ){
{
		HX_STACK_PUSH("Player::moveAround","Player.hx",22);
		HX_STACK_THIS(this);
		HX_STACK_LINE(22)
		if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("RIGHT")))){
			HX_STACK_LINE(23)
			hx::AddEq(this->x,(int)10);
		}
		else{
			HX_STACK_LINE(26)
			if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("LEFT")))){
				HX_STACK_LINE(26)
				hx::SubEq(this->x,(int)10);
			}
			else{
				HX_STACK_LINE(29)
				if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("UP")))){
					HX_STACK_LINE(29)
					hx::SubEq(this->y,(int)10);
				}
				else{
					HX_STACK_LINE(32)
					if ((::org::flixel::FlxG_obj::keys->pressed(HX_CSTRING("DOWN")))){
						HX_STACK_LINE(32)
						hx::AddEq(this->y,(int)10);
					}
				}
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Player_obj,moveAround,(void))

Void Player_obj::update( ){
{
		HX_STACK_PUSH("Player::update","Player.hx",17);
		HX_STACK_THIS(this);
		HX_STACK_LINE(18)
		this->super::update();
		HX_STACK_LINE(19)
		this->moveAround();
	}
return null();
}



Player_obj::Player_obj()
{
}

void Player_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Player);
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void Player_obj::__Visit(HX_VISIT_PARAMS)
{
	super::__Visit(HX_VISIT_ARG);
}

Dynamic Player_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"moveAround") ) { return moveAround_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Player_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	return super::__SetField(inName,inValue,inCallProp);
}

void Player_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("moveAround"),
	HX_CSTRING("update"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Player_obj::__mClass,"__mClass");
};

Class Player_obj::__mClass;

void Player_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("Player"), hx::TCanCast< Player_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Player_obj::__boot()
{
}

