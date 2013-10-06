#ifndef INCLUDED_org_flixel_FlxTypedButton
#define INCLUDED_org_flixel_FlxTypedButton

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#include <org/flixel/FlxSprite.h>
HX_DECLARE_CLASS2(flash,events,Event)
HX_DECLARE_CLASS2(flash,events,EventDispatcher)
HX_DECLARE_CLASS2(flash,events,IEventDispatcher)
HX_DECLARE_CLASS2(flash,media,Sound)
HX_DECLARE_CLASS2(org,flixel,FlxBasic)
HX_DECLARE_CLASS2(org,flixel,FlxCamera)
HX_DECLARE_CLASS2(org,flixel,FlxObject)
HX_DECLARE_CLASS2(org,flixel,FlxSound)
HX_DECLARE_CLASS2(org,flixel,FlxSprite)
HX_DECLARE_CLASS2(org,flixel,FlxTypedButton)
HX_DECLARE_CLASS4(org,flixel,system,layer,Atlas)
HX_DECLARE_CLASS3(org,flixel,util,FlxPoint)
namespace org{
namespace flixel{


class HXCPP_CLASS_ATTRIBUTES  FlxTypedButton_obj : public ::org::flixel::FlxSprite_obj{
	public:
		typedef ::org::flixel::FlxSprite_obj super;
		typedef FlxTypedButton_obj OBJ_;
		FlxTypedButton_obj();
		Void __construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);

	public:
		static hx::ObjectPtr< FlxTypedButton_obj > __new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick);
		static Dynamic __CreateEmpty();
		static Dynamic __Create(hx::DynamicArray inArgs);
		~FlxTypedButton_obj();

		HX_DO_RTTI;
		static void __boot();
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		::String __ToString() const { return HX_CSTRING("FlxTypedButton"); }

		virtual ::org::flixel::system::layer::Atlas set_atlas( ::org::flixel::system::layer::Atlas value);

		virtual Void onMouseUp( ::flash::events::Event event);
		Dynamic onMouseUp_dyn();

		virtual Void setSounds( ::flash::media::Sound SoundOver,hx::Null< Float >  SoundOverVolume,::flash::media::Sound SoundOut,hx::Null< Float >  SoundOutVolume,::flash::media::Sound SoundDown,hx::Null< Float >  SoundDownVolume,::flash::media::Sound SoundUp,hx::Null< Float >  SoundUpVolume);
		Dynamic setSounds_dyn();

		virtual Void drawDebug( );

		virtual Void draw( );

		virtual bool updateButtonStatus( ::org::flixel::util::FlxPoint Point,::org::flixel::FlxCamera Camera,bool JustPressed);
		Dynamic updateButtonStatus_dyn();

		virtual Void updateButton( );
		Dynamic updateButton_dyn();

		virtual Void update( );

		virtual Void destroy( );

		bool _initialized;
		bool _pressed;
		::org::flixel::FlxSound soundUp;
		::org::flixel::FlxSound soundDown;
		::org::flixel::FlxSound soundOut;
		::org::flixel::FlxSound soundOver;
		int status;
		Dynamic onOut;
		Dynamic &onOut_dyn() { return onOut;}
		Dynamic onOver;
		Dynamic &onOver_dyn() { return onOver;}
		Dynamic onDown;
		Dynamic &onDown_dyn() { return onDown;}
		Dynamic onUp;
		Dynamic &onUp_dyn() { return onUp;}
		::org::flixel::util::FlxPoint labelOffset;
		Dynamic label;
		bool on;
};

} // end namespace org
} // end namespace flixel

#endif /* INCLUDED_org_flixel_FlxTypedButton */ 
