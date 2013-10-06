#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_Reflect
#include <Reflect.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
namespace nme{

Void AssetData_obj::__construct()
{
	return null();
}

AssetData_obj::~AssetData_obj() { }

Dynamic AssetData_obj::__CreateEmpty() { return  new AssetData_obj; }
hx::ObjectPtr< AssetData_obj > AssetData_obj::__new()
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

Dynamic AssetData_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< AssetData_obj > result = new AssetData_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap AssetData_obj::library;

::haxe::ds::StringMap AssetData_obj::path;

::haxe::ds::StringMap AssetData_obj::type;

bool AssetData_obj::initialized;

Void AssetData_obj::initialize( ){
{
		HX_STACK_PUSH("AssetData::initialize","nme/AssetData.hx",17);
		HX_STACK_LINE(17)
		if ((!(::nme::AssetData_obj::initialized))){
			HX_STACK_LINE(21)
			::nme::AssetData_obj::path = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(22)
			::nme::AssetData_obj::type = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(23)
			::nme::AssetData_obj::library = ::haxe::ds::StringMap_obj::__new();
			HX_STACK_LINE(25)
			::nme::AssetData_obj::path->set(HX_CSTRING("Beep"),HX_CSTRING("assets/data/beep.wav"));
			HX_STACK_LINE(26)
			{
				HX_STACK_LINE(26)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("sound").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(26)
				::nme::AssetData_obj::type->set(HX_CSTRING("Beep"),value);
			}
			HX_STACK_LINE(27)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/autotiles.png"),HX_CSTRING("assets/data/autotiles.png"));
			HX_STACK_LINE(28)
			{
				HX_STACK_LINE(28)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(28)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/autotiles.png"),value);
			}
			HX_STACK_LINE(29)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/autotiles_alt.png"),HX_CSTRING("assets/data/autotiles_alt.png"));
			HX_STACK_LINE(30)
			{
				HX_STACK_LINE(30)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(30)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/autotiles_alt.png"),value);
			}
			HX_STACK_LINE(31)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/base.png"),HX_CSTRING("assets/data/base.png"));
			HX_STACK_LINE(32)
			{
				HX_STACK_LINE(32)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(32)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/base.png"),value);
			}
			HX_STACK_LINE(33)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/beep.mp3"),HX_CSTRING("assets/data/beep.mp3"));
			HX_STACK_LINE(34)
			{
				HX_STACK_LINE(34)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("music").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(34)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/beep.mp3"),value);
			}
			HX_STACK_LINE(35)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/beep.wav"),HX_CSTRING("assets/data/beep.wav"));
			HX_STACK_LINE(36)
			{
				HX_STACK_LINE(36)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("sound").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(36)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/beep.wav"),value);
			}
			HX_STACK_LINE(37)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button.png"),HX_CSTRING("assets/data/button.png"));
			HX_STACK_LINE(38)
			{
				HX_STACK_LINE(38)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(38)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button.png"),value);
			}
			HX_STACK_LINE(39)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_a.png"),HX_CSTRING("assets/data/button_a.png"));
			HX_STACK_LINE(40)
			{
				HX_STACK_LINE(40)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(40)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_a.png"),value);
			}
			HX_STACK_LINE(41)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_b.png"),HX_CSTRING("assets/data/button_b.png"));
			HX_STACK_LINE(42)
			{
				HX_STACK_LINE(42)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(42)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_b.png"),value);
			}
			HX_STACK_LINE(43)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_c.png"),HX_CSTRING("assets/data/button_c.png"));
			HX_STACK_LINE(44)
			{
				HX_STACK_LINE(44)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(44)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_c.png"),value);
			}
			HX_STACK_LINE(45)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_down.png"),HX_CSTRING("assets/data/button_down.png"));
			HX_STACK_LINE(46)
			{
				HX_STACK_LINE(46)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(46)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_down.png"),value);
			}
			HX_STACK_LINE(47)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_left.png"),HX_CSTRING("assets/data/button_left.png"));
			HX_STACK_LINE(48)
			{
				HX_STACK_LINE(48)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(48)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_left.png"),value);
			}
			HX_STACK_LINE(49)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_right.png"),HX_CSTRING("assets/data/button_right.png"));
			HX_STACK_LINE(50)
			{
				HX_STACK_LINE(50)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(50)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_right.png"),value);
			}
			HX_STACK_LINE(51)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_up.png"),HX_CSTRING("assets/data/button_up.png"));
			HX_STACK_LINE(52)
			{
				HX_STACK_LINE(52)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(52)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_up.png"),value);
			}
			HX_STACK_LINE(53)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_x.png"),HX_CSTRING("assets/data/button_x.png"));
			HX_STACK_LINE(54)
			{
				HX_STACK_LINE(54)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(54)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_x.png"),value);
			}
			HX_STACK_LINE(55)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/button_y.png"),HX_CSTRING("assets/data/button_y.png"));
			HX_STACK_LINE(56)
			{
				HX_STACK_LINE(56)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(56)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/button_y.png"),value);
			}
			HX_STACK_LINE(57)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/courier.ttf"),HX_CSTRING("assets/data/courier.ttf"));
			HX_STACK_LINE(58)
			{
				HX_STACK_LINE(58)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("font").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(58)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/courier.ttf"),value);
			}
			HX_STACK_LINE(59)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/cursor.png"),HX_CSTRING("assets/data/cursor.png"));
			HX_STACK_LINE(60)
			{
				HX_STACK_LINE(60)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(60)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/cursor.png"),value);
			}
			HX_STACK_LINE(61)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/default.png"),HX_CSTRING("assets/data/default.png"));
			HX_STACK_LINE(62)
			{
				HX_STACK_LINE(62)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(62)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/default.png"),value);
			}
			HX_STACK_LINE(63)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/fontData10pt.png"),HX_CSTRING("assets/data/fontData10pt.png"));
			HX_STACK_LINE(64)
			{
				HX_STACK_LINE(64)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(64)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/fontData10pt.png"),value);
			}
			HX_STACK_LINE(65)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/fontData11pt.png"),HX_CSTRING("assets/data/fontData11pt.png"));
			HX_STACK_LINE(66)
			{
				HX_STACK_LINE(66)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(66)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/fontData11pt.png"),value);
			}
			HX_STACK_LINE(67)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/handle.png"),HX_CSTRING("assets/data/handle.png"));
			HX_STACK_LINE(68)
			{
				HX_STACK_LINE(68)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(68)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/handle.png"),value);
			}
			HX_STACK_LINE(69)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/logo.png"),HX_CSTRING("assets/data/logo.png"));
			HX_STACK_LINE(70)
			{
				HX_STACK_LINE(70)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(70)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/logo.png"),value);
			}
			HX_STACK_LINE(71)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/logo_corners.png"),HX_CSTRING("assets/data/logo_corners.png"));
			HX_STACK_LINE(72)
			{
				HX_STACK_LINE(72)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(72)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/logo_corners.png"),value);
			}
			HX_STACK_LINE(73)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/logo_light.png"),HX_CSTRING("assets/data/logo_light.png"));
			HX_STACK_LINE(74)
			{
				HX_STACK_LINE(74)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(74)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/logo_light.png"),value);
			}
			HX_STACK_LINE(75)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/nokiafc22.ttf"),HX_CSTRING("assets/data/nokiafc22.ttf"));
			HX_STACK_LINE(76)
			{
				HX_STACK_LINE(76)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("font").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(76)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/nokiafc22.ttf"),value);
			}
			HX_STACK_LINE(77)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/stick.png"),HX_CSTRING("assets/data/stick.png"));
			HX_STACK_LINE(78)
			{
				HX_STACK_LINE(78)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(78)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/stick.png"),value);
			}
			HX_STACK_LINE(79)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/flixel.png"),HX_CSTRING("assets/data/vcr/flixel.png"));
			HX_STACK_LINE(80)
			{
				HX_STACK_LINE(80)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(80)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/flixel.png"),value);
			}
			HX_STACK_LINE(81)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/open.png"),HX_CSTRING("assets/data/vcr/open.png"));
			HX_STACK_LINE(82)
			{
				HX_STACK_LINE(82)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(82)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/open.png"),value);
			}
			HX_STACK_LINE(83)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/pause.png"),HX_CSTRING("assets/data/vcr/pause.png"));
			HX_STACK_LINE(84)
			{
				HX_STACK_LINE(84)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(84)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/pause.png"),value);
			}
			HX_STACK_LINE(85)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/play.png"),HX_CSTRING("assets/data/vcr/play.png"));
			HX_STACK_LINE(86)
			{
				HX_STACK_LINE(86)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(86)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/play.png"),value);
			}
			HX_STACK_LINE(87)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/record_off.png"),HX_CSTRING("assets/data/vcr/record_off.png"));
			HX_STACK_LINE(88)
			{
				HX_STACK_LINE(88)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(88)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/record_off.png"),value);
			}
			HX_STACK_LINE(89)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/record_on.png"),HX_CSTRING("assets/data/vcr/record_on.png"));
			HX_STACK_LINE(90)
			{
				HX_STACK_LINE(90)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(90)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/record_on.png"),value);
			}
			HX_STACK_LINE(91)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/restart.png"),HX_CSTRING("assets/data/vcr/restart.png"));
			HX_STACK_LINE(92)
			{
				HX_STACK_LINE(92)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(92)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/restart.png"),value);
			}
			HX_STACK_LINE(93)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/step.png"),HX_CSTRING("assets/data/vcr/step.png"));
			HX_STACK_LINE(94)
			{
				HX_STACK_LINE(94)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(94)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/step.png"),value);
			}
			HX_STACK_LINE(95)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vcr/stop.png"),HX_CSTRING("assets/data/vcr/stop.png"));
			HX_STACK_LINE(96)
			{
				HX_STACK_LINE(96)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(96)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vcr/stop.png"),value);
			}
			HX_STACK_LINE(97)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/data/vis/bounds.png"),HX_CSTRING("assets/data/vis/bounds.png"));
			HX_STACK_LINE(98)
			{
				HX_STACK_LINE(98)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(98)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/data/vis/bounds.png"),value);
			}
			HX_STACK_LINE(99)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/HaxeFlixel.svg"),HX_CSTRING("assets/HaxeFlixel.svg"));
			HX_STACK_LINE(100)
			{
				HX_STACK_LINE(100)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("text").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(100)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/HaxeFlixel.svg"),value);
			}
			HX_STACK_LINE(101)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/player-sheet0.png"),HX_CSTRING("assets/player-sheet0.png"));
			HX_STACK_LINE(102)
			{
				HX_STACK_LINE(102)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(102)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/player-sheet0.png"),value);
			}
			HX_STACK_LINE(103)
			::nme::AssetData_obj::path->set(HX_CSTRING("assets/player.png"),HX_CSTRING("assets/player.png"));
			HX_STACK_LINE(104)
			{
				HX_STACK_LINE(104)
				::openfl::AssetType value = ::Reflect_obj::field(hx::ClassOf< ::openfl::AssetType >(),HX_CSTRING("image").toUpperCase());		HX_STACK_VAR(value,"value");
				HX_STACK_LINE(104)
				::nme::AssetData_obj::type->set(HX_CSTRING("assets/player.png"),value);
			}
			HX_STACK_LINE(107)
			::nme::AssetData_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(AssetData_obj,initialize,(void))


AssetData_obj::AssetData_obj()
{
}

void AssetData_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(AssetData);
	HX_MARK_END_CLASS();
}

void AssetData_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic AssetData_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return path; }
		if (HX_FIELD_EQ(inName,"type") ) { return type; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return library; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic AssetData_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void AssetData_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("library"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("initialized"),
	HX_CSTRING("initialize"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(AssetData_obj::library,"library");
	HX_MARK_MEMBER_NAME(AssetData_obj::path,"path");
	HX_MARK_MEMBER_NAME(AssetData_obj::type,"type");
	HX_MARK_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AssetData_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(AssetData_obj::library,"library");
	HX_VISIT_MEMBER_NAME(AssetData_obj::path,"path");
	HX_VISIT_MEMBER_NAME(AssetData_obj::type,"type");
	HX_VISIT_MEMBER_NAME(AssetData_obj::initialized,"initialized");
};

Class AssetData_obj::__mClass;

void AssetData_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("nme.AssetData"), hx::TCanCast< AssetData_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void AssetData_obj::__boot()
{
	initialized= false;
}

} // end namespace nme
