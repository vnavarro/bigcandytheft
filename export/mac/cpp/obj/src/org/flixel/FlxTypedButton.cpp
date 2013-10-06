#include <hxcpp.h>

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
#ifndef INCLUDED_flash_events_Event
#include <flash/events/Event.h>
#endif
#ifndef INCLUDED_flash_events_EventDispatcher
#include <flash/events/EventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_IEventDispatcher
#include <flash/events/IEventDispatcher.h>
#endif
#ifndef INCLUDED_flash_events_MouseEvent
#include <flash/events/MouseEvent.h>
#endif
#ifndef INCLUDED_flash_events_TouchEvent
#include <flash/events/TouchEvent.h>
#endif
#ifndef INCLUDED_flash_media_Sound
#include <flash/media/Sound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxBasic
#include <org/flixel/FlxBasic.h>
#endif
#ifndef INCLUDED_org_flixel_FlxCamera
#include <org/flixel/FlxCamera.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_FlxObject
#include <org/flixel/FlxObject.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSound
#include <org/flixel/FlxSound.h>
#endif
#ifndef INCLUDED_org_flixel_FlxSprite
#include <org/flixel/FlxSprite.h>
#endif
#ifndef INCLUDED_org_flixel_FlxTypedButton
#include <org/flixel/FlxTypedButton.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxTouch
#include <org/flixel/system/input/FlxTouch.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxTouchManager
#include <org/flixel/system/input/FlxTouchManager.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{

Void FlxTypedButton_obj::__construct(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{
HX_STACK_PUSH("FlxTypedButton::new","org/flixel/FlxButton.hx",132);
Float X = __o_X.Default(0);
Float Y = __o_Y.Default(0);
{
	HX_STACK_LINE(133)
	super::__construct(X,Y,null());
	HX_STACK_LINE(135)
	this->loadGraphic(::org::flixel::FlxAssets_obj::imgDefaultButton,true,false,(int)80,(int)20,null(),null());
	HX_STACK_LINE(137)
	this->onUp = OnClick;
	HX_STACK_LINE(138)
	this->onDown = null();
	HX_STACK_LINE(139)
	this->onOut = null();
	HX_STACK_LINE(140)
	this->onOver = null();
	HX_STACK_LINE(142)
	this->soundOver = null();
	HX_STACK_LINE(143)
	this->soundOut = null();
	HX_STACK_LINE(144)
	this->soundDown = null();
	HX_STACK_LINE(145)
	this->soundUp = null();
	HX_STACK_LINE(147)
	this->status = (int)0;
	HX_STACK_LINE(148)
	this->on = false;
	HX_STACK_LINE(149)
	this->_pressed = false;
	HX_STACK_LINE(150)
	this->_initialized = false;
}
;
	return null();
}

FlxTypedButton_obj::~FlxTypedButton_obj() { }

Dynamic FlxTypedButton_obj::__CreateEmpty() { return  new FlxTypedButton_obj; }
hx::ObjectPtr< FlxTypedButton_obj > FlxTypedButton_obj::__new(hx::Null< Float >  __o_X,hx::Null< Float >  __o_Y,::String Label,Dynamic OnClick)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(__o_X,__o_Y,Label,OnClick);
	return result;}

Dynamic FlxTypedButton_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< FlxTypedButton_obj > result = new FlxTypedButton_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

::org::flixel::system::layer::Atlas FlxTypedButton_obj::set_atlas( ::org::flixel::system::layer::Atlas value){
	HX_STACK_PUSH("FlxTypedButton::set_atlas","org/flixel/FlxButton.hx",440);
	HX_STACK_THIS(this);
	HX_STACK_ARG(value,"value");
	HX_STACK_LINE(441)
	::org::flixel::system::layer::Atlas atl = this->super::set_atlas(value);		HX_STACK_VAR(atl,"atl");
	HX_STACK_LINE(442)
	if (((bool((atl == value)) && bool((this->label != null()))))){
		HX_STACK_LINE(443)
		this->label->__Field(HX_CSTRING("set_atlas"),true)(value);
	}
	HX_STACK_LINE(447)
	return value;
}


Void FlxTypedButton_obj::onMouseUp( ::flash::events::Event event){
{
		HX_STACK_PUSH("FlxTypedButton::onMouseUp","org/flixel/FlxButton.hx",422);
		HX_STACK_THIS(this);
		HX_STACK_ARG(event,"event");
		HX_STACK_LINE(423)
		if (((bool((bool((bool(!(this->exists)) || bool(!(this->visible)))) || bool(!(this->active)))) || bool((this->status != (int)2))))){
			HX_STACK_LINE(424)
			return null();
		}
		HX_STACK_LINE(427)
		if (((this->onUp_dyn() != null()))){
			HX_STACK_LINE(428)
			this->onUp();
		}
		HX_STACK_LINE(431)
		if (((this->soundUp != null()))){
			HX_STACK_LINE(432)
			this->soundUp->play(true);
		}
		HX_STACK_LINE(435)
		this->status = (int)0;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(FlxTypedButton_obj,onMouseUp,(void))

Void FlxTypedButton_obj::setSounds( ::flash::media::Sound SoundOver,hx::Null< Float >  __o_SoundOverVolume,::flash::media::Sound SoundOut,hx::Null< Float >  __o_SoundOutVolume,::flash::media::Sound SoundDown,hx::Null< Float >  __o_SoundDownVolume,::flash::media::Sound SoundUp,hx::Null< Float >  __o_SoundUpVolume){
Float SoundOverVolume = __o_SoundOverVolume.Default(1.0);
Float SoundOutVolume = __o_SoundOutVolume.Default(1.0);
Float SoundDownVolume = __o_SoundDownVolume.Default(1.0);
Float SoundUpVolume = __o_SoundUpVolume.Default(1.0);
	HX_STACK_PUSH("FlxTypedButton::setSounds","org/flixel/FlxButton.hx",399);
	HX_STACK_THIS(this);
	HX_STACK_ARG(SoundOver,"SoundOver");
	HX_STACK_ARG(SoundOverVolume,"SoundOverVolume");
	HX_STACK_ARG(SoundOut,"SoundOut");
	HX_STACK_ARG(SoundOutVolume,"SoundOutVolume");
	HX_STACK_ARG(SoundDown,"SoundDown");
	HX_STACK_ARG(SoundDownVolume,"SoundDownVolume");
	HX_STACK_ARG(SoundUp,"SoundUp");
	HX_STACK_ARG(SoundUpVolume,"SoundUpVolume");
{
		HX_STACK_LINE(400)
		if (((SoundOver != null()))){
			HX_STACK_LINE(401)
			this->soundOver = ::org::flixel::FlxG_obj::loadSound(SoundOver,SoundOverVolume,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(404)
		if (((SoundOut != null()))){
			HX_STACK_LINE(405)
			this->soundOut = ::org::flixel::FlxG_obj::loadSound(SoundOut,SoundOutVolume,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(408)
		if (((SoundDown != null()))){
			HX_STACK_LINE(409)
			this->soundDown = ::org::flixel::FlxG_obj::loadSound(SoundDown,SoundDownVolume,null(),null(),null(),null(),null());
		}
		HX_STACK_LINE(412)
		if (((SoundUp != null()))){
			HX_STACK_LINE(413)
			this->soundUp = ::org::flixel::FlxG_obj::loadSound(SoundUp,SoundUpVolume,null(),null(),null(),null(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC8(FlxTypedButton_obj,setSounds,(void))

Void FlxTypedButton_obj::drawDebug( ){
{
		HX_STACK_PUSH("FlxTypedButton::drawDebug","org/flixel/FlxButton.hx",374);
		HX_STACK_THIS(this);
		HX_STACK_LINE(375)
		this->super::drawDebug();
		HX_STACK_LINE(376)
		if (((this->label != null()))){
			HX_STACK_LINE(377)
			this->label->__Field(HX_CSTRING("drawDebug"),true)();
		}
	}
return null();
}


Void FlxTypedButton_obj::draw( ){
{
		HX_STACK_PUSH("FlxTypedButton::draw","org/flixel/FlxButton.hx",363);
		HX_STACK_THIS(this);
		HX_STACK_LINE(364)
		this->super::draw();
		HX_STACK_LINE(365)
		if (((this->label != null()))){
			HX_STACK_LINE(367)
			this->label->__FieldRef(HX_CSTRING("cameras")) = this->cameras;
			HX_STACK_LINE(368)
			this->label->__Field(HX_CSTRING("draw"),true)();
		}
	}
return null();
}


bool FlxTypedButton_obj::updateButtonStatus( ::org::flixel::util::FlxPoint Point,::org::flixel::FlxCamera Camera,bool JustPressed){
	HX_STACK_PUSH("FlxTypedButton::updateButtonStatus","org/flixel/FlxButton.hx",325);
	HX_STACK_THIS(this);
	HX_STACK_ARG(Point,"Point");
	HX_STACK_ARG(Camera,"Camera");
	HX_STACK_ARG(JustPressed,"JustPressed");
	HX_STACK_LINE(326)
	bool offAll = true;		HX_STACK_VAR(offAll,"offAll");
	HX_STACK_LINE(327)
	if ((this->overlapsPoint(Point,true,Camera))){
		HX_STACK_LINE(329)
		offAll = false;
		HX_STACK_LINE(330)
		if ((JustPressed)){
			HX_STACK_LINE(332)
			this->status = (int)2;
			HX_STACK_LINE(333)
			if (((this->onDown_dyn() != null()))){
				HX_STACK_LINE(334)
				this->onDown();
			}
			HX_STACK_LINE(337)
			if (((this->soundDown != null()))){
				HX_STACK_LINE(338)
				this->soundDown->play(true);
			}
		}
		HX_STACK_LINE(342)
		if (((this->status == (int)0))){
			HX_STACK_LINE(344)
			this->status = (int)1;
			HX_STACK_LINE(345)
			if (((this->onOver_dyn() != null()))){
				HX_STACK_LINE(346)
				this->onOver();
			}
			HX_STACK_LINE(349)
			if (((this->soundOver != null()))){
				HX_STACK_LINE(350)
				this->soundOver->play(true);
			}
		}
	}
	HX_STACK_LINE(356)
	return offAll;
}


HX_DEFINE_DYNAMIC_FUNC3(FlxTypedButton_obj,updateButtonStatus,return )

Void FlxTypedButton_obj::updateButton( ){
{
		HX_STACK_PUSH("FlxTypedButton::updateButton","org/flixel/FlxButton.hx",241);
		HX_STACK_THIS(this);
		HX_STACK_LINE(244)
		bool continueUpdate = false;		HX_STACK_VAR(continueUpdate,"continueUpdate");
		HX_STACK_LINE(247)
		continueUpdate = true;
		HX_STACK_LINE(251)
		continueUpdate = true;
		HX_STACK_LINE(254)
		if ((continueUpdate)){
			HX_STACK_LINE(256)
			if (((this->cameras == null()))){
				HX_STACK_LINE(257)
				this->cameras = ::org::flixel::FlxG_obj::cameras;
			}
			HX_STACK_LINE(260)
			::org::flixel::FlxCamera camera;		HX_STACK_VAR(camera,"camera");
			HX_STACK_LINE(261)
			int i = (int)0;		HX_STACK_VAR(i,"i");
			HX_STACK_LINE(262)
			int l = this->cameras->length;		HX_STACK_VAR(l,"l");
			HX_STACK_LINE(263)
			bool offAll = true;		HX_STACK_VAR(offAll,"offAll");
			HX_STACK_LINE(264)
			while(((i < l))){
				HX_STACK_LINE(266)
				camera = this->cameras->__get((i)++).StaticCast< ::org::flixel::FlxCamera >();
				HX_STACK_LINE(268)
				::org::flixel::FlxG_obj::mouse->getWorldPosition(camera,this->_point);
				HX_STACK_LINE(269)
				offAll = (  (((this->updateButtonStatus(this->_point,camera,::org::flixel::FlxG_obj::mouse->justPressed()) == false))) ? bool(false) : bool(offAll) );
				HX_STACK_LINE(272)
				{
					HX_STACK_LINE(272)
					int _g1 = (int)0;		HX_STACK_VAR(_g1,"_g1");
					int _g = ::org::flixel::FlxG_obj::touchManager->touches->length;		HX_STACK_VAR(_g,"_g");
					HX_STACK_LINE(272)
					while(((_g1 < _g))){
						HX_STACK_LINE(272)
						int j = (_g1)++;		HX_STACK_VAR(j,"j");
						HX_STACK_LINE(274)
						::org::flixel::system::input::FlxTouch touch = ::org::flixel::FlxG_obj::touchManager->touches->__get(j).StaticCast< ::org::flixel::system::input::FlxTouch >();		HX_STACK_VAR(touch,"touch");
						HX_STACK_LINE(275)
						touch->getWorldPosition(camera,this->_point);
						HX_STACK_LINE(276)
						offAll = (  (((this->updateButtonStatus(this->_point,camera,touch->justPressed()) == false))) ? bool(false) : bool(offAll) );
					}
				}
			}
			HX_STACK_LINE(280)
			if ((offAll)){
				HX_STACK_LINE(282)
				if (((this->status != (int)0))){
					HX_STACK_LINE(284)
					if (((this->onOut_dyn() != null()))){
						HX_STACK_LINE(285)
						this->onOut();
					}
					HX_STACK_LINE(288)
					if (((this->soundOut != null()))){
						HX_STACK_LINE(289)
						this->soundOut->play(true);
					}
				}
				HX_STACK_LINE(293)
				this->status = (int)0;
			}
		}
		HX_STACK_LINE(299)
		if (((this->label != null()))){
			HX_STACK_LINE(301)
			this->label->__FieldRef(HX_CSTRING("x")) = this->x;
			HX_STACK_LINE(302)
			this->label->__FieldRef(HX_CSTRING("y")) = this->y;
			HX_STACK_LINE(304)
			if (((this->labelOffset != null()))){
				HX_STACK_LINE(306)
				hx::AddEq(this->label->__FieldRef(HX_CSTRING("x")),this->labelOffset->x);
				HX_STACK_LINE(307)
				hx::AddEq(this->label->__FieldRef(HX_CSTRING("y")),this->labelOffset->y);
			}
			HX_STACK_LINE(310)
			this->label->__FieldRef(HX_CSTRING("scrollFactor")) = this->scrollFactor;
		}
		HX_STACK_LINE(314)
		if (((bool((this->status == (int)1)) && bool(this->on)))){
			HX_STACK_LINE(315)
			this->set_frame((int)0);
		}
		else{
			HX_STACK_LINE(319)
			this->set_frame(this->status);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(FlxTypedButton_obj,updateButton,(void))

Void FlxTypedButton_obj::update( ){
{
		HX_STACK_PUSH("FlxTypedButton::update","org/flixel/FlxButton.hx",200);
		HX_STACK_THIS(this);
		HX_STACK_LINE(201)
		if ((!(this->_initialized))){
			HX_STACK_LINE(202)
			if (((::org::flixel::FlxG_obj::get_stage() != null()))){
				HX_STACK_LINE(206)
				::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
				HX_STACK_LINE(209)
				::flash::Lib_obj::get_current()->get_stage()->addEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->onMouseUp_dyn(),null(),null(),null());
				HX_STACK_LINE(211)
				this->_initialized = true;
			}
		}
		HX_STACK_LINE(214)
		this->super::update();
		HX_STACK_LINE(216)
		this->updateButton();
		HX_STACK_LINE(220)
		if (((this->label == null()))){
			HX_STACK_LINE(221)
			return null();
		}
		HX_STACK_LINE(224)
		{
			HX_STACK_LINE(224)
			int _g = this->get_frame();		HX_STACK_VAR(_g,"_g");
			HX_STACK_LINE(224)
			switch( (int)(_g)){
				case (int)1: {
					HX_STACK_LINE(226)
					this->label->__Field(HX_CSTRING("set_alpha"),true)(1.0);
				}
				;break;
				case (int)2: {
					HX_STACK_LINE(229)
					this->label->__Field(HX_CSTRING("set_alpha"),true)(0.5);
					HX_STACK_LINE(230)
					(this->label->__FieldRef(HX_CSTRING("y")))++;
				}
				;break;
				default: {
					HX_STACK_LINE(232)
					this->label->__Field(HX_CSTRING("set_alpha"),true)(0.8);
				}
			}
		}
	}
return null();
}


Void FlxTypedButton_obj::destroy( ){
{
		HX_STACK_PUSH("FlxTypedButton::destroy","org/flixel/FlxButton.hx",157);
		HX_STACK_THIS(this);
		HX_STACK_LINE(158)
		if (((::org::flixel::FlxG_obj::get_stage() != null()))){
			HX_STACK_LINE(161)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
			HX_STACK_LINE(165)
			::flash::Lib_obj::get_current()->get_stage()->removeEventListener(::flash::events::TouchEvent_obj::TOUCH_END,this->onMouseUp_dyn(),null());
		}
		HX_STACK_LINE(168)
		if (((this->label != null()))){
			HX_STACK_LINE(170)
			this->label->__Field(HX_CSTRING("destroy"),true)();
			HX_STACK_LINE(171)
			this->label = null();
		}
		HX_STACK_LINE(173)
		this->onUp = null();
		HX_STACK_LINE(174)
		this->onDown = null();
		HX_STACK_LINE(175)
		this->onOut = null();
		HX_STACK_LINE(176)
		this->onOver = null();
		HX_STACK_LINE(177)
		if (((this->soundOver != null()))){
			HX_STACK_LINE(178)
			this->soundOver->destroy();
		}
		HX_STACK_LINE(181)
		if (((this->soundOut != null()))){
			HX_STACK_LINE(182)
			this->soundOut->destroy();
		}
		HX_STACK_LINE(185)
		if (((this->soundDown != null()))){
			HX_STACK_LINE(186)
			this->soundDown->destroy();
		}
		HX_STACK_LINE(189)
		if (((this->soundUp != null()))){
			HX_STACK_LINE(190)
			this->soundUp->destroy();
		}
		HX_STACK_LINE(193)
		this->super::destroy();
	}
return null();
}



FlxTypedButton_obj::FlxTypedButton_obj()
{
}

void FlxTypedButton_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(FlxTypedButton);
	HX_MARK_MEMBER_NAME(_initialized,"_initialized");
	HX_MARK_MEMBER_NAME(_pressed,"_pressed");
	HX_MARK_MEMBER_NAME(soundUp,"soundUp");
	HX_MARK_MEMBER_NAME(soundDown,"soundDown");
	HX_MARK_MEMBER_NAME(soundOut,"soundOut");
	HX_MARK_MEMBER_NAME(soundOver,"soundOver");
	HX_MARK_MEMBER_NAME(status,"status");
	HX_MARK_MEMBER_NAME(onOut,"onOut");
	HX_MARK_MEMBER_NAME(onOver,"onOver");
	HX_MARK_MEMBER_NAME(onDown,"onDown");
	HX_MARK_MEMBER_NAME(onUp,"onUp");
	HX_MARK_MEMBER_NAME(labelOffset,"labelOffset");
	HX_MARK_MEMBER_NAME(label,"label");
	HX_MARK_MEMBER_NAME(on,"on");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void FlxTypedButton_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_initialized,"_initialized");
	HX_VISIT_MEMBER_NAME(_pressed,"_pressed");
	HX_VISIT_MEMBER_NAME(soundUp,"soundUp");
	HX_VISIT_MEMBER_NAME(soundDown,"soundDown");
	HX_VISIT_MEMBER_NAME(soundOut,"soundOut");
	HX_VISIT_MEMBER_NAME(soundOver,"soundOver");
	HX_VISIT_MEMBER_NAME(status,"status");
	HX_VISIT_MEMBER_NAME(onOut,"onOut");
	HX_VISIT_MEMBER_NAME(onOver,"onOver");
	HX_VISIT_MEMBER_NAME(onDown,"onDown");
	HX_VISIT_MEMBER_NAME(onUp,"onUp");
	HX_VISIT_MEMBER_NAME(labelOffset,"labelOffset");
	HX_VISIT_MEMBER_NAME(label,"label");
	HX_VISIT_MEMBER_NAME(on,"on");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic FlxTypedButton_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { return on; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"draw") ) { return draw_dyn(); }
		if (HX_FIELD_EQ(inName,"onUp") ) { return onUp; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onOut") ) { return onOut; }
		if (HX_FIELD_EQ(inName,"label") ) { return label; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"update") ) { return update_dyn(); }
		if (HX_FIELD_EQ(inName,"status") ) { return status; }
		if (HX_FIELD_EQ(inName,"onOver") ) { return onOver; }
		if (HX_FIELD_EQ(inName,"onDown") ) { return onDown; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"soundUp") ) { return soundUp; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pressed") ) { return _pressed; }
		if (HX_FIELD_EQ(inName,"soundOut") ) { return soundOut; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"set_atlas") ) { return set_atlas_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"setSounds") ) { return setSounds_dyn(); }
		if (HX_FIELD_EQ(inName,"drawDebug") ) { return drawDebug_dyn(); }
		if (HX_FIELD_EQ(inName,"soundDown") ) { return soundDown; }
		if (HX_FIELD_EQ(inName,"soundOver") ) { return soundOver; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelOffset") ) { return labelOffset; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"updateButton") ) { return updateButton_dyn(); }
		if (HX_FIELD_EQ(inName,"_initialized") ) { return _initialized; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"updateButtonStatus") ) { return updateButtonStatus_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic FlxTypedButton_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"on") ) { on=inValue.Cast< bool >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"onUp") ) { onUp=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"onOut") ) { onOut=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"label") ) { label=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"status") ) { status=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onOver") ) { onOver=inValue.Cast< Dynamic >(); return inValue; }
		if (HX_FIELD_EQ(inName,"onDown") ) { onDown=inValue.Cast< Dynamic >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"soundUp") ) { soundUp=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_pressed") ) { _pressed=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundOut") ) { soundOut=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"soundDown") ) { soundDown=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		if (HX_FIELD_EQ(inName,"soundOver") ) { soundOver=inValue.Cast< ::org::flixel::FlxSound >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"labelOffset") ) { labelOffset=inValue.Cast< ::org::flixel::util::FlxPoint >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_initialized") ) { _initialized=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void FlxTypedButton_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_initialized"));
	outFields->push(HX_CSTRING("_pressed"));
	outFields->push(HX_CSTRING("soundUp"));
	outFields->push(HX_CSTRING("soundDown"));
	outFields->push(HX_CSTRING("soundOut"));
	outFields->push(HX_CSTRING("soundOver"));
	outFields->push(HX_CSTRING("status"));
	outFields->push(HX_CSTRING("labelOffset"));
	outFields->push(HX_CSTRING("label"));
	outFields->push(HX_CSTRING("on"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("set_atlas"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("setSounds"),
	HX_CSTRING("drawDebug"),
	HX_CSTRING("draw"),
	HX_CSTRING("updateButtonStatus"),
	HX_CSTRING("updateButton"),
	HX_CSTRING("update"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_initialized"),
	HX_CSTRING("_pressed"),
	HX_CSTRING("soundUp"),
	HX_CSTRING("soundDown"),
	HX_CSTRING("soundOut"),
	HX_CSTRING("soundOver"),
	HX_CSTRING("status"),
	HX_CSTRING("onOut"),
	HX_CSTRING("onOver"),
	HX_CSTRING("onDown"),
	HX_CSTRING("onUp"),
	HX_CSTRING("labelOffset"),
	HX_CSTRING("label"),
	HX_CSTRING("on"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(FlxTypedButton_obj::__mClass,"__mClass");
};

Class FlxTypedButton_obj::__mClass;

void FlxTypedButton_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.FlxTypedButton"), hx::TCanCast< FlxTypedButton_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void FlxTypedButton_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
