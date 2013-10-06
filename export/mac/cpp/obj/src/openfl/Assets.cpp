#include <hxcpp.h>

#ifndef INCLUDED_IMap
#include <IMap.h>
#endif
#ifndef INCLUDED_StringTools
#include <StringTools.h>
#endif
#ifndef INCLUDED_Type
#include <Type.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_flash_media_SoundLoaderContext
#include <flash/media/SoundLoaderContext.h>
#endif
#ifndef INCLUDED_flash_net_URLRequest
#include <flash/net/URLRequest.h>
#endif
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_FontStyle
#include <flash/text/FontStyle.h>
#endif
#ifndef INCLUDED_flash_text_FontType
#include <flash/text/FontType.h>
#endif
#ifndef INCLUDED_flash_utils_ByteArray
#include <flash/utils/ByteArray.h>
#endif
#ifndef INCLUDED_flash_utils_IDataInput
#include <flash/utils/IDataInput.h>
#endif
#ifndef INCLUDED_flash_utils_IDataOutput
#include <flash/utils/IDataOutput.h>
#endif
#ifndef INCLUDED_haxe_Log
#include <haxe/Log.h>
#endif
#ifndef INCLUDED_haxe_ds_StringMap
#include <haxe/ds/StringMap.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_nme_AssetData
#include <nme/AssetData.h>
#endif
#ifndef INCLUDED_openfl_AssetType
#include <openfl/AssetType.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_openfl_utils_IMemoryRange
#include <openfl/utils/IMemoryRange.h>
#endif
namespace openfl{

Void Assets_obj::__construct()
{
	return null();
}

Assets_obj::~Assets_obj() { }

Dynamic Assets_obj::__CreateEmpty() { return  new Assets_obj; }
hx::ObjectPtr< Assets_obj > Assets_obj::__new()
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

Dynamic Assets_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Assets_obj > result = new Assets_obj();
	result->__construct();
	return result;}

::haxe::ds::StringMap Assets_obj::cachedBitmapData;

Array< ::String > Assets_obj::id;

::haxe::ds::StringMap Assets_obj::library;

::haxe::ds::StringMap Assets_obj::path;

::haxe::ds::StringMap Assets_obj::type;

bool Assets_obj::initialized;

Void Assets_obj::initialize( ){
{
		HX_STACK_PUSH("Assets::initialize","openfl/Assets.hx",62);
		HX_STACK_LINE(62)
		if ((!(::openfl::Assets_obj::initialized))){
			HX_STACK_LINE(68)
			::nme::AssetData_obj::initialize();
			HX_STACK_LINE(72)
			::openfl::Assets_obj::initialized = true;
		}
	}
return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,initialize,(void))

::flash::display::BitmapData Assets_obj::getBitmapData( ::String id,hx::Null< bool >  __o_useCache){
bool useCache = __o_useCache.Default(true);
	HX_STACK_PUSH("Assets::getBitmapData","openfl/Assets.hx",86);
	HX_STACK_ARG(id,"id");
	HX_STACK_ARG(useCache,"useCache");
{
		HX_STACK_LINE(88)
		::openfl::Assets_obj::initialize();
		HX_STACK_LINE(92)
		if (((bool(::nme::AssetData_obj::type->exists(id)) && bool((::nme::AssetData_obj::type->get(id) == ::openfl::AssetType_obj::IMAGE))))){
			HX_STACK_LINE(92)
			if (((bool(useCache) && bool(::openfl::Assets_obj::cachedBitmapData->exists(id))))){
				HX_STACK_LINE(94)
				return ::openfl::Assets_obj::cachedBitmapData->get(id);
			}
			else{
				HX_STACK_LINE(110)
				::flash::display::BitmapData data = ::flash::display::BitmapData_obj::load(::nme::AssetData_obj::path->get(id),null());		HX_STACK_VAR(data,"data");
				HX_STACK_LINE(114)
				if ((useCache)){
					HX_STACK_LINE(114)
					::openfl::Assets_obj::cachedBitmapData->set(id,data);
				}
				HX_STACK_LINE(120)
				return data;
			}
		}
		else{
			HX_STACK_LINE(124)
			if (((id.indexOf(HX_CSTRING(":"),null()) > (int)-1))){
				HX_STACK_LINE(126)
				::String libraryName = id.substr((int)0,id.indexOf(HX_CSTRING(":"),null()));		HX_STACK_VAR(libraryName,"libraryName");
				HX_STACK_LINE(127)
				::String symbolName = id.substr((id.indexOf(HX_CSTRING(":"),null()) + (int)1),null());		HX_STACK_VAR(symbolName,"symbolName");
				HX_STACK_LINE(129)
				if ((::nme::AssetData_obj::library->exists(libraryName))){
				}
				else{
					HX_STACK_LINE(155)
					::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no asset library named \"") + libraryName) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),157,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
				}
			}
			else{
				HX_STACK_LINE(161)
				::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no BitmapData asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),163,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBitmapData")));
			}
		}
		HX_STACK_LINE(169)
		return null();
	}
}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Assets_obj,getBitmapData,return )

::flash::utils::ByteArray Assets_obj::getBytes( ::String id){
	HX_STACK_PUSH("Assets::getBytes","openfl/Assets.hx",180);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(182)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(186)
	if ((::nme::AssetData_obj::type->exists(id))){
		HX_STACK_LINE(186)
		return ::flash::utils::ByteArray_obj::readFile(::nme::AssetData_obj::path->get(id));
	}
	else{
		HX_STACK_LINE(218)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no String or ByteArray asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),220,HX_CSTRING("openfl.Assets"),HX_CSTRING("getBytes")));
	}
	HX_STACK_LINE(226)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getBytes,return )

::flash::text::Font Assets_obj::getFont( ::String id){
	HX_STACK_PUSH("Assets::getFont","openfl/Assets.hx",237);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(239)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(243)
	if (((bool(::nme::AssetData_obj::type->exists(id)) && bool((::nme::AssetData_obj::type->get(id) == ::openfl::AssetType_obj::FONT))))){
		HX_STACK_LINE(243)
		return ::flash::text::Font_obj::__new(::nme::AssetData_obj::path->get(id),null(),null());
	}
	else{
		HX_STACK_LINE(255)
		::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Font asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),257,HX_CSTRING("openfl.Assets"),HX_CSTRING("getFont")));
	}
	HX_STACK_LINE(263)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getFont,return )

::flash::media::Sound Assets_obj::getSound( ::String id){
	HX_STACK_PUSH("Assets::getSound","openfl/Assets.hx",330);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(332)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(336)
	if ((::nme::AssetData_obj::type->exists(id))){
		HX_STACK_LINE(338)
		::openfl::AssetType type = ::nme::AssetData_obj::type->get(id);		HX_STACK_VAR(type,"type");
		HX_STACK_LINE(340)
		if (((bool((type == ::openfl::AssetType_obj::SOUND)) || bool((type == ::openfl::AssetType_obj::MUSIC))))){
			HX_STACK_LINE(340)
			return ::flash::media::Sound_obj::__new(::flash::net::URLRequest_obj::__new(::nme::AssetData_obj::path->get(id)),null(),(type == ::openfl::AssetType_obj::MUSIC));
		}
	}
	HX_STACK_LINE(360)
	::haxe::Log_obj::trace(((HX_CSTRING("[openfl.Assets] There is no Sound asset with an ID of \"") + id) + HX_CSTRING("\"")),hx::SourceInfo(HX_CSTRING("Assets.hx"),360,HX_CSTRING("openfl.Assets"),HX_CSTRING("getSound")));
	HX_STACK_LINE(364)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getSound,return )

::String Assets_obj::getText( ::String id){
	HX_STACK_PUSH("Assets::getText","openfl/Assets.hx",407);
	HX_STACK_ARG(id,"id");
	HX_STACK_LINE(409)
	::flash::utils::ByteArray bytes = ::openfl::Assets_obj::getBytes(id);		HX_STACK_VAR(bytes,"bytes");
	HX_STACK_LINE(411)
	if (((bytes == null()))){
		HX_STACK_LINE(411)
		return null();
	}
	else{
		HX_STACK_LINE(415)
		return bytes->readUTFBytes(bytes->length);
	}
	HX_STACK_LINE(411)
	return null();
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,getText,return )

::Class Assets_obj::resolveClass( ::String name){
	HX_STACK_PUSH("Assets::resolveClass","openfl/Assets.hx",457);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(459)
	name = ::StringTools_obj::replace(name,HX_CSTRING("native."),HX_CSTRING("flash."));
	HX_STACK_LINE(460)
	name = ::StringTools_obj::replace(name,HX_CSTRING("browser."),HX_CSTRING("flash."));
	HX_STACK_LINE(461)
	return ::Type_obj::resolveClass(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveClass,return )

::Enum Assets_obj::resolveEnum( ::String name){
	HX_STACK_PUSH("Assets::resolveEnum","openfl/Assets.hx",466);
	HX_STACK_ARG(name,"name");
	HX_STACK_LINE(468)
	name = ::StringTools_obj::replace(name,HX_CSTRING("native."),HX_CSTRING("flash."));
	HX_STACK_LINE(469)
	name = ::StringTools_obj::replace(name,HX_CSTRING("browser."),HX_CSTRING("flash."));
	HX_STACK_LINE(478)
	return ::Type_obj::resolveEnum(name);
}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Assets_obj,resolveEnum,return )

Array< ::String > Assets_obj::get_id( ){
	HX_STACK_PUSH("Assets::get_id","openfl/Assets.hx",491);
	HX_STACK_LINE(493)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(495)
	Array< ::String > ids = Array_obj< ::String >::__new();		HX_STACK_VAR(ids,"ids");
	HX_STACK_LINE(499)
	for(::cpp::FastIterator_obj< ::String > *__it = ::cpp::CreateFastIterator< ::String >(::nme::AssetData_obj::type->keys());  __it->hasNext(); ){
		::String key = __it->next();
		ids->push(key);
	}
	HX_STACK_LINE(507)
	return ids;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_id,return )

::haxe::ds::StringMap Assets_obj::get_library( ){
	HX_STACK_PUSH("Assets::get_library","openfl/Assets.hx",512);
	HX_STACK_LINE(514)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(518)
	return ::nme::AssetData_obj::library;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_library,return )

::haxe::ds::StringMap Assets_obj::get_path( ){
	HX_STACK_PUSH("Assets::get_path","openfl/Assets.hx",529);
	HX_STACK_LINE(531)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(535)
	return ::nme::AssetData_obj::path;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_path,return )

::haxe::ds::StringMap Assets_obj::get_type( ){
	HX_STACK_PUSH("Assets::get_type","openfl/Assets.hx",546);
	HX_STACK_LINE(548)
	::openfl::Assets_obj::initialize();
	HX_STACK_LINE(552)
	return ::nme::AssetData_obj::type;
}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Assets_obj,get_type,return )


Assets_obj::Assets_obj()
{
}

void Assets_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Assets);
	HX_MARK_END_CLASS();
}

void Assets_obj::__Visit(HX_VISIT_PARAMS)
{
}

Dynamic Assets_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { return inCallProp ? get_id() : id; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { return inCallProp ? get_path() : path; }
		if (HX_FIELD_EQ(inName,"type") ) { return inCallProp ? get_type() : type; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"get_id") ) { return get_id_dyn(); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { return inCallProp ? get_library() : library; }
		if (HX_FIELD_EQ(inName,"getFont") ) { return getFont_dyn(); }
		if (HX_FIELD_EQ(inName,"getText") ) { return getText_dyn(); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"getBytes") ) { return getBytes_dyn(); }
		if (HX_FIELD_EQ(inName,"getSound") ) { return getSound_dyn(); }
		if (HX_FIELD_EQ(inName,"get_path") ) { return get_path_dyn(); }
		if (HX_FIELD_EQ(inName,"get_type") ) { return get_type_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"initialize") ) { return initialize_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { return initialized; }
		if (HX_FIELD_EQ(inName,"resolveEnum") ) { return resolveEnum_dyn(); }
		if (HX_FIELD_EQ(inName,"get_library") ) { return get_library_dyn(); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"resolveClass") ) { return resolveClass_dyn(); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"getBitmapData") ) { return getBitmapData_dyn(); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { return cachedBitmapData; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Assets_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"id") ) { id=inValue.Cast< Array< ::String > >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"path") ) { path=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"type") ) { type=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"library") ) { library=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"initialized") ) { initialized=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"cachedBitmapData") ) { cachedBitmapData=inValue.Cast< ::haxe::ds::StringMap >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Assets_obj::__GetFields(Array< ::String> &outFields)
{
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("cachedBitmapData"),
	HX_CSTRING("id"),
	HX_CSTRING("library"),
	HX_CSTRING("path"),
	HX_CSTRING("type"),
	HX_CSTRING("initialized"),
	HX_CSTRING("initialize"),
	HX_CSTRING("getBitmapData"),
	HX_CSTRING("getBytes"),
	HX_CSTRING("getFont"),
	HX_CSTRING("getSound"),
	HX_CSTRING("getText"),
	HX_CSTRING("resolveClass"),
	HX_CSTRING("resolveEnum"),
	HX_CSTRING("get_id"),
	HX_CSTRING("get_library"),
	HX_CSTRING("get_path"),
	HX_CSTRING("get_type"),
	String(null()) };

static ::String sMemberFields[] = {
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_MARK_MEMBER_NAME(Assets_obj::id,"id");
	HX_MARK_MEMBER_NAME(Assets_obj::library,"library");
	HX_MARK_MEMBER_NAME(Assets_obj::path,"path");
	HX_MARK_MEMBER_NAME(Assets_obj::type,"type");
	HX_MARK_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Assets_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(Assets_obj::cachedBitmapData,"cachedBitmapData");
	HX_VISIT_MEMBER_NAME(Assets_obj::id,"id");
	HX_VISIT_MEMBER_NAME(Assets_obj::library,"library");
	HX_VISIT_MEMBER_NAME(Assets_obj::path,"path");
	HX_VISIT_MEMBER_NAME(Assets_obj::type,"type");
	HX_VISIT_MEMBER_NAME(Assets_obj::initialized,"initialized");
};

Class Assets_obj::__mClass;

void Assets_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.Assets"), hx::TCanCast< Assets_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Assets_obj::__boot()
{
	cachedBitmapData= ::haxe::ds::StringMap_obj::__new();
	initialized= false;
}

} // end namespace openfl
