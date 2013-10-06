#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_Bitmap
#include <flash/display/Bitmap.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
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
#ifndef INCLUDED_flash_display_PixelSnapping
#include <flash/display/PixelSnapping.h>
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
#ifndef INCLUDED_flash_text_Font
#include <flash/text/Font.h>
#endif
#ifndef INCLUDED_flash_text_TextField
#include <flash/text/TextField.h>
#endif
#ifndef INCLUDED_flash_text_TextFormat
#include <flash/text/TextFormat.h>
#endif
#ifndef INCLUDED_flash_text_TextFormatAlign
#include <flash/text/TextFormatAlign.h>
#endif
#ifndef INCLUDED_flash_ui_Mouse
#include <flash/ui/Mouse.h>
#endif
#ifndef INCLUDED_openfl_Assets
#include <openfl/Assets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxAssets
#include <org/flixel/FlxAssets.h>
#endif
#ifndef INCLUDED_org_flixel_FlxG
#include <org/flixel/FlxG.h>
#endif
#ifndef INCLUDED_org_flixel_system_debug_VCR
#include <org/flixel/system/debug/VCR.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_FlxMouse
#include <org/flixel/system/input/FlxMouse.h>
#endif
#ifndef INCLUDED_org_flixel_system_input_IFlxInput
#include <org/flixel/system/input/IFlxInput.h>
#endif
#ifndef INCLUDED_org_flixel_util_FlxPoint
#include <org/flixel/util/FlxPoint.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace debug{

Void VCR_obj::__construct()
{
HX_STACK_PUSH("VCR::new","org/flixel/system/debug/VCR.hx",84);
{
	HX_STACK_LINE(85)
	super::__construct();
	HX_STACK_LINE(87)
	int spacing = (int)7;		HX_STACK_VAR(spacing,"spacing");
	HX_STACK_LINE(89)
	this->_open = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgOpen),null(),null());
	HX_STACK_LINE(90)
	this->addChild(this->_open);
	HX_STACK_LINE(92)
	this->_recordOff = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgRecordOff),null(),null());
	HX_STACK_LINE(93)
	this->_recordOff->set_x(((this->_open->get_x() + this->_open->get_width()) + spacing));
	HX_STACK_LINE(94)
	this->addChild(this->_recordOff);
	HX_STACK_LINE(96)
	this->_recordOn = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgRecordOn),null(),null());
	HX_STACK_LINE(97)
	this->_recordOn->set_x(this->_recordOff->get_x());
	HX_STACK_LINE(98)
	this->_recordOn->set_visible(false);
	HX_STACK_LINE(99)
	this->addChild(this->_recordOn);
	HX_STACK_LINE(107)
	this->_stop = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgStop),null(),null());
	HX_STACK_LINE(108)
	this->_stop->set_x(this->_recordOff->get_x());
	HX_STACK_LINE(109)
	this->_stop->set_visible(false);
	HX_STACK_LINE(110)
	this->addChild(this->_stop);
	HX_STACK_LINE(112)
	this->_flixel = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgFlixel),null(),null());
	HX_STACK_LINE(113)
	this->_flixel->set_x(((this->_recordOff->get_x() + this->_recordOff->get_width()) + spacing));
	HX_STACK_LINE(114)
	this->addChild(this->_flixel);
	HX_STACK_LINE(116)
	this->_restart = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgRestart),null(),null());
	HX_STACK_LINE(117)
	this->_restart->set_x(((this->_flixel->get_x() + this->_flixel->get_width()) + spacing));
	HX_STACK_LINE(118)
	this->addChild(this->_restart);
	HX_STACK_LINE(120)
	this->_pause = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgPause),null(),null());
	HX_STACK_LINE(121)
	this->_pause->set_x(((this->_restart->get_x() + this->_restart->get_width()) + spacing));
	HX_STACK_LINE(122)
	this->addChild(this->_pause);
	HX_STACK_LINE(124)
	this->_play = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgPlay),null(),null());
	HX_STACK_LINE(125)
	this->_play->set_x(this->_pause->get_x());
	HX_STACK_LINE(126)
	this->_play->set_visible(false);
	HX_STACK_LINE(127)
	this->addChild(this->_play);
	HX_STACK_LINE(129)
	this->_step = ::flash::display::Bitmap_obj::__new(::org::flixel::FlxAssets_obj::getBitmapData(::org::flixel::FlxAssets_obj::imgStep),null(),null());
	HX_STACK_LINE(130)
	this->_step->set_x(((this->_pause->get_x() + this->_pause->get_width()) + spacing));
	HX_STACK_LINE(131)
	this->addChild(this->_step);
	HX_STACK_LINE(133)
	this->_runtimeDisplay = ::flash::text::TextField_obj::__new();
	HX_STACK_LINE(134)
	this->_runtimeDisplay->set_width(this->get_width());
	HX_STACK_LINE(135)
	this->_runtimeDisplay->set_x(this->get_width());
	HX_STACK_LINE(136)
	this->_runtimeDisplay->set_y((int)-2);
	HX_STACK_LINE(137)
	this->_runtimeDisplay->set_multiline(false);
	HX_STACK_LINE(138)
	this->_runtimeDisplay->set_wordWrap(false);
	HX_STACK_LINE(139)
	this->_runtimeDisplay->set_selectable(false);
	HX_STACK_LINE(140)
	::flash::text::TextFormat dtf = ::flash::text::TextFormat_obj::__new(::openfl::Assets_obj::getFont(::org::flixel::FlxAssets_obj::debuggerFont)->fontName,(int)12,(int)16777215,null(),null(),null(),null(),null(),null(),null(),null(),null(),null());		HX_STACK_VAR(dtf,"dtf");
	HX_STACK_LINE(141)
	dtf->align = ::flash::text::TextFormatAlign_obj::CENTER;
	HX_STACK_LINE(143)
	this->_runtimeDisplay->set_defaultTextFormat(dtf);
	HX_STACK_LINE(144)
	this->_runtimeDisplay->set_visible(false);
	HX_STACK_LINE(145)
	this->addChild(this->_runtimeDisplay);
	HX_STACK_LINE(146)
	this->_runtime = (int)0;
	HX_STACK_LINE(148)
	this->stepRequested = false;
	HX_STACK_LINE(153)
	this->unpress();
	HX_STACK_LINE(154)
	this->checkOver();
	HX_STACK_LINE(155)
	this->updateGUI();
	HX_STACK_LINE(157)
	this->addEventListener(::flash::events::Event_obj::ENTER_FRAME,this->init_dyn(),null(),null(),null());
}
;
	return null();
}

VCR_obj::~VCR_obj() { }

Dynamic VCR_obj::__CreateEmpty() { return  new VCR_obj; }
hx::ObjectPtr< VCR_obj > VCR_obj::__new()
{  hx::ObjectPtr< VCR_obj > result = new VCR_obj();
	result->__construct();
	return result;}

Dynamic VCR_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< VCR_obj > result = new VCR_obj();
	result->__construct();
	return result;}

Void VCR_obj::updateGUI( ){
{
		HX_STACK_PUSH("VCR::updateGUI","org/flixel/system/debug/VCR.hx",692);
		HX_STACK_THIS(this);
		HX_STACK_LINE(693)
		if ((this->_recordOn->get_visible())){
			HX_STACK_LINE(695)
			this->_open->set_alpha(this->_restart->set_alpha(this->_pause->set_alpha(this->_step->set_alpha(0.35))));
			HX_STACK_LINE(696)
			this->_recordOn->set_alpha(1.0);
			HX_STACK_LINE(697)
			return null();
		}
		HX_STACK_LINE(700)
		if (((bool(this->_overOpen) && bool((this->_open->get_alpha() != 1.0))))){
			HX_STACK_LINE(701)
			this->_open->set_alpha(1.0);
		}
		else{
			HX_STACK_LINE(704)
			if (((bool(!(this->_overOpen)) && bool((this->_open->get_alpha() != 0.8))))){
				HX_STACK_LINE(705)
				this->_open->set_alpha(0.8);
			}
		}
		HX_STACK_LINE(709)
		if (((bool(this->_overRecord) && bool((this->_recordOff->get_alpha() != 1.0))))){
			HX_STACK_LINE(710)
			this->_recordOff->set_alpha(this->_recordOn->set_alpha(this->_stop->set_alpha(1.0)));
		}
		else{
			HX_STACK_LINE(713)
			if (((bool(!(this->_overRecord)) && bool((this->_recordOff->get_alpha() != 0.8))))){
				HX_STACK_LINE(714)
				this->_recordOff->set_alpha(this->_recordOn->set_alpha(this->_stop->set_alpha(0.8)));
			}
		}
		HX_STACK_LINE(718)
		if (((bool(this->_overRestart) && bool((this->_restart->get_alpha() != 1.0))))){
			HX_STACK_LINE(719)
			this->_restart->set_alpha(1.0);
		}
		else{
			HX_STACK_LINE(722)
			if (((bool(!(this->_overRestart)) && bool((this->_restart->get_alpha() != 0.8))))){
				HX_STACK_LINE(723)
				this->_restart->set_alpha(0.8);
			}
		}
		HX_STACK_LINE(727)
		if (((bool(this->_overPause) && bool((this->_pause->get_alpha() != 1.0))))){
			HX_STACK_LINE(728)
			this->_pause->set_alpha(this->_play->set_alpha(1.0));
		}
		else{
			HX_STACK_LINE(731)
			if (((bool(!(this->_overPause)) && bool((this->_pause->get_alpha() != 0.8))))){
				HX_STACK_LINE(732)
				this->_pause->set_alpha(this->_play->set_alpha(0.8));
			}
		}
		HX_STACK_LINE(736)
		if (((bool(this->_overStep) && bool((this->_step->get_alpha() != 1.0))))){
			HX_STACK_LINE(737)
			this->_step->set_alpha(1.0);
		}
		else{
			HX_STACK_LINE(740)
			if (((bool(!(this->_overStep)) && bool((this->_step->get_alpha() != 0.8))))){
				HX_STACK_LINE(741)
				this->_step->set_alpha(0.8);
			}
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,updateGUI,(void))

Void VCR_obj::unpress( ){
{
		HX_STACK_PUSH("VCR::unpress","org/flixel/system/debug/VCR.hx",680);
		HX_STACK_THIS(this);
		HX_STACK_LINE(681)
		this->_pressingOpen = false;
		HX_STACK_LINE(682)
		this->_pressingRecord = false;
		HX_STACK_LINE(683)
		this->_pressingRestart = false;
		HX_STACK_LINE(684)
		this->_pressingPause = false;
		HX_STACK_LINE(685)
		this->_pressingStep = false;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,unpress,(void))

bool VCR_obj::checkOver( ){
	HX_STACK_PUSH("VCR::checkOver","org/flixel/system/debug/VCR.hx",644);
	HX_STACK_THIS(this);
	HX_STACK_LINE(645)
	this->_overOpen = this->_overRecord = this->_overRestart = this->_overPause = this->_overStep = false;
	HX_STACK_LINE(646)
	if (((bool((bool((bool((this->get_mouseX() < (int)0)) || bool((this->get_mouseX() > this->get_width())))) || bool((this->get_mouseY() < (int)0)))) || bool((this->get_mouseY() > (int)15))))){
		HX_STACK_LINE(647)
		return false;
	}
	HX_STACK_LINE(650)
	if (((bool((this->get_mouseX() >= this->_recordOff->get_x())) && bool((this->get_mouseX() <= (this->_recordOff->get_x() + this->_recordOff->get_width())))))){
		HX_STACK_LINE(651)
		this->_overRecord = true;
	}
	HX_STACK_LINE(654)
	if (((bool(!(this->_recordOn->get_visible())) && bool(!(this->_overRecord))))){
		HX_STACK_LINE(655)
		if (((bool((this->get_mouseX() >= this->_open->get_x())) && bool((this->get_mouseX() <= (this->_open->get_x() + this->_open->get_width())))))){
			HX_STACK_LINE(657)
			this->_overOpen = true;
		}
		else{
			HX_STACK_LINE(660)
			if (((bool((this->get_mouseX() >= this->_restart->get_x())) && bool((this->get_mouseX() <= (this->_restart->get_x() + this->_restart->get_width())))))){
				HX_STACK_LINE(661)
				this->_overRestart = true;
			}
			else{
				HX_STACK_LINE(664)
				if (((bool((this->get_mouseX() >= this->_pause->get_x())) && bool((this->get_mouseX() <= (this->_pause->get_x() + this->_pause->get_width())))))){
					HX_STACK_LINE(665)
					this->_overPause = true;
				}
				else{
					HX_STACK_LINE(668)
					if (((bool((this->get_mouseX() >= this->_step->get_x())) && bool((this->get_mouseX() <= (this->_step->get_x() + this->_step->get_width())))))){
						HX_STACK_LINE(669)
						this->_overStep = true;
					}
				}
			}
		}
	}
	HX_STACK_LINE(673)
	return true;
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,checkOver,return )

Void VCR_obj::onMouseUp( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("VCR::onMouseUp","org/flixel/system/debug/VCR.hx",588);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(590)
		if (((bool(this->_overOpen) && bool(this->_pressingOpen)))){
			HX_STACK_LINE(591)
			this->onOpen();
		}
		else{
			HX_STACK_LINE(594)
			if (((bool(this->_overRecord) && bool(this->_pressingRecord)))){
				HX_STACK_LINE(595)
				if ((this->_stop->get_visible())){
					HX_STACK_LINE(597)
					this->onStop();
				}
				else{
					HX_STACK_LINE(600)
					if ((this->_recordOn->get_visible())){
						HX_STACK_LINE(601)
						this->stopRecording();
					}
					else{
						HX_STACK_LINE(605)
						this->onRecord(!(E->altKey));
					}
				}
			}
			else{
				HX_STACK_LINE(611)
				if (((bool(this->_overRestart) && bool(this->_pressingRestart)))){
					HX_STACK_LINE(612)
					this->onRestart(!(E->altKey));
				}
				else{
					HX_STACK_LINE(615)
					if (((bool(this->_overPause) && bool(this->_pressingPause)))){
						HX_STACK_LINE(616)
						if ((this->_play->get_visible())){
							HX_STACK_LINE(618)
							this->onPlay();
						}
						else{
							HX_STACK_LINE(622)
							this->onPause();
						}
					}
					else{
						HX_STACK_LINE(626)
						if (((bool(this->_overStep) && bool(this->_pressingStep)))){
							HX_STACK_LINE(627)
							this->onStep();
						}
					}
				}
			}
		}
		HX_STACK_LINE(631)
		this->unpress();
		HX_STACK_LINE(632)
		this->checkOver();
		HX_STACK_LINE(633)
		this->updateGUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onMouseUp,(void))

Void VCR_obj::onMouseDown( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("VCR::onMouseDown","org/flixel/system/debug/VCR.hx",558);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(559)
		this->unpress();
		HX_STACK_LINE(560)
		if ((this->_overOpen)){
			HX_STACK_LINE(561)
			this->_pressingOpen = true;
		}
		HX_STACK_LINE(564)
		if ((this->_overRecord)){
			HX_STACK_LINE(565)
			this->_pressingRecord = true;
		}
		HX_STACK_LINE(568)
		if ((this->_overRestart)){
			HX_STACK_LINE(569)
			this->_pressingRestart = true;
		}
		HX_STACK_LINE(572)
		if ((this->_overPause)){
			HX_STACK_LINE(573)
			this->_pressingPause = true;
		}
		HX_STACK_LINE(576)
		if ((this->_overStep)){
			HX_STACK_LINE(577)
			this->_pressingStep = true;
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onMouseDown,(void))

Void VCR_obj::onMouseMove( ::flash::events::MouseEvent E){
{
		HX_STACK_PUSH("VCR::onMouseMove","org/flixel/system/debug/VCR.hx",545);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(546)
		if ((!(this->checkOver()))){
			HX_STACK_LINE(547)
			this->unpress();
		}
		HX_STACK_LINE(550)
		this->updateGUI();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onMouseMove,(void))

Void VCR_obj::init( ::flash::events::Event E){
{
		HX_STACK_PUSH("VCR::init","org/flixel/system/debug/VCR.hx",524);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
		HX_STACK_LINE(528)
		if (((this->get_stage() == null()))){
			HX_STACK_LINE(530)
			return null();
		}
		HX_STACK_LINE(533)
		this->removeEventListener(::flash::events::Event_obj::ENTER_FRAME,this->init_dyn(),null());
		HX_STACK_LINE(535)
		this->get_parent()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null(),null(),null());
		HX_STACK_LINE(536)
		this->get_parent()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null(),null(),null());
		HX_STACK_LINE(537)
		this->get_parent()->addEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null(),null(),null());
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,init,(void))

Void VCR_obj::onStep( ){
{
		HX_STACK_PUSH("VCR::onStep","org/flixel/system/debug/VCR.hx",509);
		HX_STACK_THIS(this);
		HX_STACK_LINE(510)
		if ((!(this->paused))){
			HX_STACK_LINE(511)
			this->onPause();
		}
		HX_STACK_LINE(514)
		this->stepRequested = true;
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onStep,(void))

Void VCR_obj::onPlay( ){
{
		HX_STACK_PUSH("VCR::onPlay","org/flixel/system/debug/VCR.hx",493);
		HX_STACK_THIS(this);
		HX_STACK_LINE(495)
		if ((!(::org::flixel::FlxG_obj::mouse->useSystemCursor))){
			HX_STACK_LINE(496)
			::flash::ui::Mouse_obj::hide();
		}
		HX_STACK_LINE(499)
		this->paused = false;
		HX_STACK_LINE(500)
		this->_play->set_visible(false);
		HX_STACK_LINE(501)
		this->_pause->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onPlay,(void))

Void VCR_obj::onPause( ){
{
		HX_STACK_PUSH("VCR::onPause","org/flixel/system/debug/VCR.hx",477);
		HX_STACK_THIS(this);
		HX_STACK_LINE(479)
		if ((!(::org::flixel::FlxG_obj::mouse->useSystemCursor))){
			HX_STACK_LINE(480)
			::flash::ui::Mouse_obj::show();
		}
		HX_STACK_LINE(483)
		this->paused = true;
		HX_STACK_LINE(484)
		this->_pause->set_visible(false);
		HX_STACK_LINE(485)
		this->_play->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onPause,(void))

Void VCR_obj::onRestart( hx::Null< bool >  __o_StandardMode){
bool StandardMode = __o_StandardMode.Default(false);
	HX_STACK_PUSH("VCR::onRestart","org/flixel/system/debug/VCR.hx",458);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StandardMode,"StandardMode");
{
		HX_STACK_LINE(458)
		::org::flixel::FlxG_obj::reloadReplay(StandardMode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onRestart,(void))

Void VCR_obj::onStop( ){
{
		HX_STACK_PUSH("VCR::onStop","org/flixel/system/debug/VCR.hx",445);
		HX_STACK_THIS(this);
		HX_STACK_LINE(445)
		::org::flixel::FlxG_obj::stopReplay();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onStop,(void))

Void VCR_obj::onSaveError( ::flash::events::Event E){
{
		HX_STACK_PUSH("VCR::onSaveError","org/flixel/system/debug/VCR.hx",430);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onSaveError,(void))

Void VCR_obj::onSaveCancel( ::flash::events::Event E){
{
		HX_STACK_PUSH("VCR::onSaveCancel","org/flixel/system/debug/VCR.hx",416);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onSaveCancel,(void))

Void VCR_obj::onSaveComplete( ::flash::events::Event E){
{
		HX_STACK_PUSH("VCR::onSaveComplete","org/flixel/system/debug/VCR.hx",401);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onSaveComplete,(void))

Void VCR_obj::stopRecording( ){
{
		HX_STACK_PUSH("VCR::stopRecording","org/flixel/system/debug/VCR.hx",379);
		HX_STACK_THIS(this);
		HX_STACK_LINE(381)
		::String data = ::org::flixel::FlxG_obj::stopRecording();		HX_STACK_VAR(data,"data");
		HX_STACK_LINE(384)
		if (((bool((data != null())) && bool((data.length > (int)0))))){
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,stopRecording,(void))

Void VCR_obj::onRecord( hx::Null< bool >  __o_StandardMode){
bool StandardMode = __o_StandardMode.Default(false);
	HX_STACK_PUSH("VCR::onRecord","org/flixel/system/debug/VCR.hx",366);
	HX_STACK_THIS(this);
	HX_STACK_ARG(StandardMode,"StandardMode");
{
		HX_STACK_LINE(367)
		if ((this->_play->get_visible())){
			HX_STACK_LINE(368)
			this->onPlay();
		}
		HX_STACK_LINE(371)
		::org::flixel::FlxG_obj::recordReplay(StandardMode);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onRecord,(void))

Void VCR_obj::onOpenError( ::flash::events::Event E){
{
		HX_STACK_PUSH("VCR::onOpenError","org/flixel/system/debug/VCR.hx",350);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onOpenError,(void))

Void VCR_obj::onOpenCancel( ::flash::events::Event E){
{
		HX_STACK_PUSH("VCR::onOpenCancel","org/flixel/system/debug/VCR.hx",337);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onOpenCancel,(void))

Void VCR_obj::onOpenComplete( ::flash::events::Event E){
{
		HX_STACK_PUSH("VCR::onOpenComplete","org/flixel/system/debug/VCR.hx",309);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onOpenComplete,(void))

Void VCR_obj::onOpenSelect( ::flash::events::Event E){
{
		HX_STACK_PUSH("VCR::onOpenSelect","org/flixel/system/debug/VCR.hx",292);
		HX_STACK_THIS(this);
		HX_STACK_ARG(E,"E");
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,onOpenSelect,(void))

Void VCR_obj::onOpen( ){
{
		HX_STACK_PUSH("VCR::onOpen","org/flixel/system/debug/VCR.hx",277);
		HX_STACK_THIS(this);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,onOpen,(void))

Void VCR_obj::updateRuntime( int Time){
{
		HX_STACK_PUSH("VCR::updateRuntime","org/flixel/system/debug/VCR.hx",260);
		HX_STACK_THIS(this);
		HX_STACK_ARG(Time,"Time");
		HX_STACK_LINE(261)
		hx::AddEq(this->_runtime,Time);
		struct _Function_1_1{
			inline static ::String Block( ::org::flixel::system::debug::VCR_obj *__this){
				HX_STACK_PUSH("*::closure","org/flixel/system/debug/VCR.hx",262);
				{
					HX_STACK_LINE(262)
					Float Seconds = ::Std_obj::_int((Float(__this->_runtime) / Float((int)1000)));		HX_STACK_VAR(Seconds,"Seconds");
					HX_STACK_LINE(262)
					::String timeString = (::Std_obj::_int((Float(Seconds) / Float((int)60))) + HX_CSTRING(":"));		HX_STACK_VAR(timeString,"timeString");
					HX_STACK_LINE(262)
					int timeStringHelper = hx::Mod(::Std_obj::_int(Seconds),(int)60);		HX_STACK_VAR(timeStringHelper,"timeStringHelper");
					HX_STACK_LINE(262)
					if (((timeStringHelper < (int)10))){
						HX_STACK_LINE(262)
						hx::AddEq(timeString,HX_CSTRING("0"));
					}
					HX_STACK_LINE(262)
					hx::AddEq(timeString,timeStringHelper);
					HX_STACK_LINE(262)
					{
						HX_STACK_LINE(262)
						hx::AddEq(timeString,HX_CSTRING("."));
						HX_STACK_LINE(262)
						timeStringHelper = ::Std_obj::_int((((Seconds - ::Std_obj::_int(Seconds))) * (int)100));
						HX_STACK_LINE(262)
						if (((timeStringHelper < (int)10))){
							HX_STACK_LINE(262)
							hx::AddEq(timeString,HX_CSTRING("0"));
						}
						HX_STACK_LINE(262)
						hx::AddEq(timeString,timeStringHelper);
					}
					HX_STACK_LINE(262)
					return timeString;
				}
				return null();
			}
		};
		HX_STACK_LINE(262)
		this->_runtimeDisplay->set_text(_Function_1_1::Block(this));
		HX_STACK_LINE(263)
		if ((!(this->_runtimeDisplay->get_visible()))){
			HX_STACK_LINE(264)
			this->_runtimeDisplay->set_visible(true);
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC1(VCR_obj,updateRuntime,(void))

Void VCR_obj::playing( ){
{
		HX_STACK_PUSH("VCR::playing","org/flixel/system/debug/VCR.hx",250);
		HX_STACK_THIS(this);
		HX_STACK_LINE(251)
		this->_recordOff->set_visible(false);
		HX_STACK_LINE(252)
		this->_recordOn->set_visible(false);
		HX_STACK_LINE(253)
		this->_stop->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,playing,(void))

Void VCR_obj::stopped( ){
{
		HX_STACK_PUSH("VCR::stopped","org/flixel/system/debug/VCR.hx",239);
		HX_STACK_THIS(this);
		HX_STACK_LINE(240)
		this->_stop->set_visible(false);
		HX_STACK_LINE(241)
		this->_recordOn->set_visible(false);
		HX_STACK_LINE(242)
		this->_recordOff->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,stopped,(void))

Void VCR_obj::recording( ){
{
		HX_STACK_PUSH("VCR::recording","org/flixel/system/debug/VCR.hx",228);
		HX_STACK_THIS(this);
		HX_STACK_LINE(229)
		this->_stop->set_visible(false);
		HX_STACK_LINE(230)
		this->_recordOff->set_visible(false);
		HX_STACK_LINE(231)
		this->_recordOn->set_visible(true);
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,recording,(void))

Void VCR_obj::destroy( ){
{
		HX_STACK_PUSH("VCR::destroy","org/flixel/system/debug/VCR.hx",164);
		HX_STACK_THIS(this);
		HX_STACK_LINE(169)
		if (((this->_open != null()))){
			HX_STACK_LINE(170)
			this->removeChild(this->_open);
		}
		HX_STACK_LINE(173)
		this->_open = null();
		HX_STACK_LINE(174)
		if (((this->_recordOff != null()))){
			HX_STACK_LINE(175)
			this->removeChild(this->_recordOff);
		}
		HX_STACK_LINE(178)
		this->_recordOff = null();
		HX_STACK_LINE(179)
		if (((this->_recordOn != null()))){
			HX_STACK_LINE(180)
			this->removeChild(this->_recordOn);
		}
		HX_STACK_LINE(183)
		this->_recordOn = null();
		HX_STACK_LINE(184)
		if (((this->_stop != null()))){
			HX_STACK_LINE(185)
			this->removeChild(this->_stop);
		}
		HX_STACK_LINE(188)
		this->_stop = null();
		HX_STACK_LINE(189)
		if (((this->_flixel != null()))){
			HX_STACK_LINE(190)
			this->removeChild(this->_flixel);
		}
		HX_STACK_LINE(193)
		this->_flixel = null();
		HX_STACK_LINE(194)
		if (((this->_restart != null()))){
			HX_STACK_LINE(195)
			this->removeChild(this->_restart);
		}
		HX_STACK_LINE(198)
		this->_restart = null();
		HX_STACK_LINE(199)
		if (((this->_pause != null()))){
			HX_STACK_LINE(200)
			this->removeChild(this->_pause);
		}
		HX_STACK_LINE(203)
		this->_pause = null();
		HX_STACK_LINE(204)
		if (((this->_play != null()))){
			HX_STACK_LINE(205)
			this->removeChild(this->_play);
		}
		HX_STACK_LINE(208)
		this->_play = null();
		HX_STACK_LINE(209)
		if (((this->_step != null()))){
			HX_STACK_LINE(210)
			this->removeChild(this->_step);
		}
		HX_STACK_LINE(213)
		this->_step = null();
		HX_STACK_LINE(215)
		if (((this->get_parent() != null()))){
			HX_STACK_LINE(217)
			this->get_parent()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_MOVE,this->onMouseMove_dyn(),null());
			HX_STACK_LINE(218)
			this->get_parent()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_DOWN,this->onMouseDown_dyn(),null());
			HX_STACK_LINE(219)
			this->get_parent()->removeEventListener(::flash::events::MouseEvent_obj::MOUSE_UP,this->onMouseUp_dyn(),null());
		}
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(VCR_obj,destroy,(void))

::String VCR_obj::DEFAULT_FILE_NAME;


VCR_obj::VCR_obj()
{
}

void VCR_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(VCR);
	HX_MARK_MEMBER_NAME(_runtime,"_runtime");
	HX_MARK_MEMBER_NAME(_runtimeDisplay,"_runtimeDisplay");
	HX_MARK_MEMBER_NAME(_pressingStep,"_pressingStep");
	HX_MARK_MEMBER_NAME(_pressingPause,"_pressingPause");
	HX_MARK_MEMBER_NAME(_pressingRestart,"_pressingRestart");
	HX_MARK_MEMBER_NAME(_pressingRecord,"_pressingRecord");
	HX_MARK_MEMBER_NAME(_pressingOpen,"_pressingOpen");
	HX_MARK_MEMBER_NAME(_overStep,"_overStep");
	HX_MARK_MEMBER_NAME(_overPause,"_overPause");
	HX_MARK_MEMBER_NAME(_overRestart,"_overRestart");
	HX_MARK_MEMBER_NAME(_overRecord,"_overRecord");
	HX_MARK_MEMBER_NAME(_overOpen,"_overOpen");
	HX_MARK_MEMBER_NAME(_step,"_step");
	HX_MARK_MEMBER_NAME(_play,"_play");
	HX_MARK_MEMBER_NAME(_pause,"_pause");
	HX_MARK_MEMBER_NAME(_restart,"_restart");
	HX_MARK_MEMBER_NAME(_flixel,"_flixel");
	HX_MARK_MEMBER_NAME(_stop,"_stop");
	HX_MARK_MEMBER_NAME(_recordOn,"_recordOn");
	HX_MARK_MEMBER_NAME(_recordOff,"_recordOff");
	HX_MARK_MEMBER_NAME(_open,"_open");
	HX_MARK_MEMBER_NAME(stepRequested,"stepRequested");
	HX_MARK_MEMBER_NAME(paused,"paused");
	super::__Mark(HX_MARK_ARG);
	HX_MARK_END_CLASS();
}

void VCR_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(_runtime,"_runtime");
	HX_VISIT_MEMBER_NAME(_runtimeDisplay,"_runtimeDisplay");
	HX_VISIT_MEMBER_NAME(_pressingStep,"_pressingStep");
	HX_VISIT_MEMBER_NAME(_pressingPause,"_pressingPause");
	HX_VISIT_MEMBER_NAME(_pressingRestart,"_pressingRestart");
	HX_VISIT_MEMBER_NAME(_pressingRecord,"_pressingRecord");
	HX_VISIT_MEMBER_NAME(_pressingOpen,"_pressingOpen");
	HX_VISIT_MEMBER_NAME(_overStep,"_overStep");
	HX_VISIT_MEMBER_NAME(_overPause,"_overPause");
	HX_VISIT_MEMBER_NAME(_overRestart,"_overRestart");
	HX_VISIT_MEMBER_NAME(_overRecord,"_overRecord");
	HX_VISIT_MEMBER_NAME(_overOpen,"_overOpen");
	HX_VISIT_MEMBER_NAME(_step,"_step");
	HX_VISIT_MEMBER_NAME(_play,"_play");
	HX_VISIT_MEMBER_NAME(_pause,"_pause");
	HX_VISIT_MEMBER_NAME(_restart,"_restart");
	HX_VISIT_MEMBER_NAME(_flixel,"_flixel");
	HX_VISIT_MEMBER_NAME(_stop,"_stop");
	HX_VISIT_MEMBER_NAME(_recordOn,"_recordOn");
	HX_VISIT_MEMBER_NAME(_recordOff,"_recordOff");
	HX_VISIT_MEMBER_NAME(_open,"_open");
	HX_VISIT_MEMBER_NAME(stepRequested,"stepRequested");
	HX_VISIT_MEMBER_NAME(paused,"paused");
	super::__Visit(HX_VISIT_ARG);
}

Dynamic VCR_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"init") ) { return init_dyn(); }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"_step") ) { return _step; }
		if (HX_FIELD_EQ(inName,"_play") ) { return _play; }
		if (HX_FIELD_EQ(inName,"_stop") ) { return _stop; }
		if (HX_FIELD_EQ(inName,"_open") ) { return _open; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"onStep") ) { return onStep_dyn(); }
		if (HX_FIELD_EQ(inName,"onPlay") ) { return onPlay_dyn(); }
		if (HX_FIELD_EQ(inName,"onStop") ) { return onStop_dyn(); }
		if (HX_FIELD_EQ(inName,"onOpen") ) { return onOpen_dyn(); }
		if (HX_FIELD_EQ(inName,"_pause") ) { return _pause; }
		if (HX_FIELD_EQ(inName,"paused") ) { return paused; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"unpress") ) { return unpress_dyn(); }
		if (HX_FIELD_EQ(inName,"onPause") ) { return onPause_dyn(); }
		if (HX_FIELD_EQ(inName,"playing") ) { return playing_dyn(); }
		if (HX_FIELD_EQ(inName,"stopped") ) { return stopped_dyn(); }
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"_flixel") ) { return _flixel; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"onRecord") ) { return onRecord_dyn(); }
		if (HX_FIELD_EQ(inName,"_runtime") ) { return _runtime; }
		if (HX_FIELD_EQ(inName,"_restart") ) { return _restart; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"updateGUI") ) { return updateGUI_dyn(); }
		if (HX_FIELD_EQ(inName,"checkOver") ) { return checkOver_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseUp") ) { return onMouseUp_dyn(); }
		if (HX_FIELD_EQ(inName,"onRestart") ) { return onRestart_dyn(); }
		if (HX_FIELD_EQ(inName,"recording") ) { return recording_dyn(); }
		if (HX_FIELD_EQ(inName,"_overStep") ) { return _overStep; }
		if (HX_FIELD_EQ(inName,"_overOpen") ) { return _overOpen; }
		if (HX_FIELD_EQ(inName,"_recordOn") ) { return _recordOn; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_overPause") ) { return _overPause; }
		if (HX_FIELD_EQ(inName,"_recordOff") ) { return _recordOff; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"onMouseDown") ) { return onMouseDown_dyn(); }
		if (HX_FIELD_EQ(inName,"onMouseMove") ) { return onMouseMove_dyn(); }
		if (HX_FIELD_EQ(inName,"onSaveError") ) { return onSaveError_dyn(); }
		if (HX_FIELD_EQ(inName,"onOpenError") ) { return onOpenError_dyn(); }
		if (HX_FIELD_EQ(inName,"_overRecord") ) { return _overRecord; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"onSaveCancel") ) { return onSaveCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"onOpenCancel") ) { return onOpenCancel_dyn(); }
		if (HX_FIELD_EQ(inName,"onOpenSelect") ) { return onOpenSelect_dyn(); }
		if (HX_FIELD_EQ(inName,"_overRestart") ) { return _overRestart; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stopRecording") ) { return stopRecording_dyn(); }
		if (HX_FIELD_EQ(inName,"updateRuntime") ) { return updateRuntime_dyn(); }
		if (HX_FIELD_EQ(inName,"_pressingStep") ) { return _pressingStep; }
		if (HX_FIELD_EQ(inName,"_pressingOpen") ) { return _pressingOpen; }
		if (HX_FIELD_EQ(inName,"stepRequested") ) { return stepRequested; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"onSaveComplete") ) { return onSaveComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"onOpenComplete") ) { return onOpenComplete_dyn(); }
		if (HX_FIELD_EQ(inName,"_pressingPause") ) { return _pressingPause; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_runtimeDisplay") ) { return _runtimeDisplay; }
		if (HX_FIELD_EQ(inName,"_pressingRecord") ) { return _pressingRecord; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_pressingRestart") ) { return _pressingRestart; }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic VCR_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"_step") ) { _step=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_play") ) { _play=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_stop") ) { _stop=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_open") ) { _open=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"_pause") ) { _pause=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		if (HX_FIELD_EQ(inName,"paused") ) { paused=inValue.Cast< bool >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"_flixel") ) { _flixel=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"_runtime") ) { _runtime=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_restart") ) { _restart=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"_overStep") ) { _overStep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_overOpen") ) { _overOpen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recordOn") ) { _recordOn=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"_overPause") ) { _overPause=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_recordOff") ) { _recordOff=inValue.Cast< ::flash::display::Bitmap >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"_overRecord") ) { _overRecord=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"_overRestart") ) { _overRestart=inValue.Cast< bool >(); return inValue; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"_pressingStep") ) { _pressingStep=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressingOpen") ) { _pressingOpen=inValue.Cast< bool >(); return inValue; }
		if (HX_FIELD_EQ(inName,"stepRequested") ) { stepRequested=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"_pressingPause") ) { _pressingPause=inValue.Cast< bool >(); return inValue; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"_runtimeDisplay") ) { _runtimeDisplay=inValue.Cast< ::flash::text::TextField >(); return inValue; }
		if (HX_FIELD_EQ(inName,"_pressingRecord") ) { _pressingRecord=inValue.Cast< bool >(); return inValue; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"_pressingRestart") ) { _pressingRestart=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void VCR_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("_runtime"));
	outFields->push(HX_CSTRING("_runtimeDisplay"));
	outFields->push(HX_CSTRING("_pressingStep"));
	outFields->push(HX_CSTRING("_pressingPause"));
	outFields->push(HX_CSTRING("_pressingRestart"));
	outFields->push(HX_CSTRING("_pressingRecord"));
	outFields->push(HX_CSTRING("_pressingOpen"));
	outFields->push(HX_CSTRING("_overStep"));
	outFields->push(HX_CSTRING("_overPause"));
	outFields->push(HX_CSTRING("_overRestart"));
	outFields->push(HX_CSTRING("_overRecord"));
	outFields->push(HX_CSTRING("_overOpen"));
	outFields->push(HX_CSTRING("_step"));
	outFields->push(HX_CSTRING("_play"));
	outFields->push(HX_CSTRING("_pause"));
	outFields->push(HX_CSTRING("_restart"));
	outFields->push(HX_CSTRING("_flixel"));
	outFields->push(HX_CSTRING("_stop"));
	outFields->push(HX_CSTRING("_recordOn"));
	outFields->push(HX_CSTRING("_recordOff"));
	outFields->push(HX_CSTRING("_open"));
	outFields->push(HX_CSTRING("stepRequested"));
	outFields->push(HX_CSTRING("paused"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	HX_CSTRING("DEFAULT_FILE_NAME"),
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("updateGUI"),
	HX_CSTRING("unpress"),
	HX_CSTRING("checkOver"),
	HX_CSTRING("onMouseUp"),
	HX_CSTRING("onMouseDown"),
	HX_CSTRING("onMouseMove"),
	HX_CSTRING("init"),
	HX_CSTRING("onStep"),
	HX_CSTRING("onPlay"),
	HX_CSTRING("onPause"),
	HX_CSTRING("onRestart"),
	HX_CSTRING("onStop"),
	HX_CSTRING("onSaveError"),
	HX_CSTRING("onSaveCancel"),
	HX_CSTRING("onSaveComplete"),
	HX_CSTRING("stopRecording"),
	HX_CSTRING("onRecord"),
	HX_CSTRING("onOpenError"),
	HX_CSTRING("onOpenCancel"),
	HX_CSTRING("onOpenComplete"),
	HX_CSTRING("onOpenSelect"),
	HX_CSTRING("onOpen"),
	HX_CSTRING("updateRuntime"),
	HX_CSTRING("playing"),
	HX_CSTRING("stopped"),
	HX_CSTRING("recording"),
	HX_CSTRING("destroy"),
	HX_CSTRING("_runtime"),
	HX_CSTRING("_runtimeDisplay"),
	HX_CSTRING("_pressingStep"),
	HX_CSTRING("_pressingPause"),
	HX_CSTRING("_pressingRestart"),
	HX_CSTRING("_pressingRecord"),
	HX_CSTRING("_pressingOpen"),
	HX_CSTRING("_overStep"),
	HX_CSTRING("_overPause"),
	HX_CSTRING("_overRestart"),
	HX_CSTRING("_overRecord"),
	HX_CSTRING("_overOpen"),
	HX_CSTRING("_step"),
	HX_CSTRING("_play"),
	HX_CSTRING("_pause"),
	HX_CSTRING("_restart"),
	HX_CSTRING("_flixel"),
	HX_CSTRING("_stop"),
	HX_CSTRING("_recordOn"),
	HX_CSTRING("_recordOff"),
	HX_CSTRING("_open"),
	HX_CSTRING("stepRequested"),
	HX_CSTRING("paused"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(VCR_obj::__mClass,"__mClass");
	HX_MARK_MEMBER_NAME(VCR_obj::DEFAULT_FILE_NAME,"DEFAULT_FILE_NAME");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(VCR_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(VCR_obj::DEFAULT_FILE_NAME,"DEFAULT_FILE_NAME");
};

Class VCR_obj::__mClass;

void VCR_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.debug.VCR"), hx::TCanCast< VCR_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void VCR_obj::__boot()
{
	DEFAULT_FILE_NAME= HX_CSTRING("replay.fgr");
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace debug
