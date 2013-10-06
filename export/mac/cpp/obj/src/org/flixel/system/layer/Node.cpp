#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_flash_display_BitmapData
#include <flash/display/BitmapData.h>
#endif
#ifndef INCLUDED_flash_display_IBitmapDrawable
#include <flash/display/IBitmapDrawable.h>
#endif
#ifndef INCLUDED_flash_geom_Point
#include <flash/geom/Point.h>
#endif
#ifndef INCLUDED_flash_geom_Rectangle
#include <flash/geom/Rectangle.h>
#endif
#ifndef INCLUDED_org_flixel_plugin_texturepacker_TexturePackerData
#include <org/flixel/plugin/texturepacker/TexturePackerData.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Atlas
#include <org/flixel/system/layer/Atlas.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_Node
#include <org/flixel/system/layer/Node.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_TileSheetData
#include <org/flixel/system/layer/TileSheetData.h>
#endif
#ifndef INCLUDED_org_flixel_system_layer_frames_FlxSpriteFrames
#include <org/flixel/system/layer/frames/FlxSpriteFrames.h>
#endif
namespace org{
namespace flixel{
namespace system{
namespace layer{

Void Node_obj::__construct(::org::flixel::system::layer::Atlas atlas,::flash::geom::Rectangle rect,::flash::display::BitmapData item,::String __o_key)
{
HX_STACK_PUSH("Node::new","org/flixel/system/layer/Node.hx",28);
::String key = __o_key.Default(HX_CSTRING(""));
{
	HX_STACK_LINE(29)
	this->atlas = atlas;
	HX_STACK_LINE(30)
	this->item = item;
	HX_STACK_LINE(31)
	this->left = null();
	HX_STACK_LINE(32)
	this->right = null();
	HX_STACK_LINE(33)
	this->rect = rect;
	HX_STACK_LINE(34)
	this->point = ::flash::geom::Point_obj::__new(rect->x,rect->y);
	HX_STACK_LINE(35)
	this->key = key;
}
;
	return null();
}

Node_obj::~Node_obj() { }

Dynamic Node_obj::__CreateEmpty() { return  new Node_obj; }
hx::ObjectPtr< Node_obj > Node_obj::__new(::org::flixel::system::layer::Atlas atlas,::flash::geom::Rectangle rect,::flash::display::BitmapData item,::String __o_key)
{  hx::ObjectPtr< Node_obj > result = new Node_obj();
	result->__construct(atlas,rect,item,__o_key);
	return result;}

Dynamic Node_obj::__Create(hx::DynamicArray inArgs)
{  hx::ObjectPtr< Node_obj > result = new Node_obj();
	result->__construct(inArgs[0],inArgs[1],inArgs[2],inArgs[3]);
	return result;}

Void Node_obj::destroy( ){
{
		HX_STACK_PUSH("Node::destroy","org/flixel/system/layer/Node.hx",101);
		HX_STACK_THIS(this);
		HX_STACK_LINE(102)
		this->atlas = null();
		HX_STACK_LINE(103)
		this->item = null();
		HX_STACK_LINE(104)
		this->left = null();
		HX_STACK_LINE(105)
		this->right = null();
		HX_STACK_LINE(106)
		this->rect = null();
		HX_STACK_LINE(107)
		this->point = null();
	}
return null();
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,destroy,(void))

int Node_obj::addTileRect( ::flash::geom::Rectangle tileRect,::flash::geom::Point point){
	HX_STACK_PUSH("Node::addTileRect","org/flixel/system/layer/Node.hx",94);
	HX_STACK_THIS(this);
	HX_STACK_ARG(tileRect,"tileRect");
	HX_STACK_ARG(point,"point");
	HX_STACK_LINE(95)
	hx::AddEq(tileRect->x,this->get_x());
	HX_STACK_LINE(96)
	hx::AddEq(tileRect->y,this->get_y());
	HX_STACK_LINE(97)
	return this->atlas->_tileSheetData->addTileRect(tileRect,point);
}


HX_DEFINE_DYNAMIC_FUNC2(Node_obj,addTileRect,return )

::org::flixel::system::layer::frames::FlxSpriteFrames Node_obj::getTexturePackerFrames( ::org::flixel::plugin::texturepacker::TexturePackerData data){
	HX_STACK_PUSH("Node::getTexturePackerFrames","org/flixel/system/layer/Node.hx",89);
	HX_STACK_THIS(this);
	HX_STACK_ARG(data,"data");
	HX_STACK_LINE(89)
	return this->atlas->_tileSheetData->getTexturePackerFrames(data,this->get_x(),this->get_y());
}


HX_DEFINE_DYNAMIC_FUNC1(Node_obj,getTexturePackerFrames,return )

::org::flixel::system::layer::frames::FlxSpriteFrames Node_obj::getSpriteSheetFrames( int frameWidth,int frameHeight,::flash::geom::Point origin,hx::Null< int >  __o_startX,hx::Null< int >  __o_startY,hx::Null< int >  __o_endX,hx::Null< int >  __o_endY,hx::Null< int >  __o_xSpacing,hx::Null< int >  __o_ySpacing){
int startX = __o_startX.Default(0);
int startY = __o_startY.Default(0);
int endX = __o_endX.Default(0);
int endY = __o_endY.Default(0);
int xSpacing = __o_xSpacing.Default(0);
int ySpacing = __o_ySpacing.Default(0);
	HX_STACK_PUSH("Node::getSpriteSheetFrames","org/flixel/system/layer/Node.hx",76);
	HX_STACK_THIS(this);
	HX_STACK_ARG(frameWidth,"frameWidth");
	HX_STACK_ARG(frameHeight,"frameHeight");
	HX_STACK_ARG(origin,"origin");
	HX_STACK_ARG(startX,"startX");
	HX_STACK_ARG(startY,"startY");
	HX_STACK_ARG(endX,"endX");
	HX_STACK_ARG(endY,"endY");
	HX_STACK_ARG(xSpacing,"xSpacing");
	HX_STACK_ARG(ySpacing,"ySpacing");
{
		HX_STACK_LINE(77)
		if (((endX == (int)0))){
			HX_STACK_LINE(78)
			hx::AddEq(endX,this->item->get_width());
		}
		HX_STACK_LINE(81)
		if (((endY == (int)0))){
			HX_STACK_LINE(82)
			hx::AddEq(endY,this->item->get_height());
		}
		HX_STACK_LINE(85)
		return this->atlas->_tileSheetData->getSpriteSheetFrames(frameWidth,frameHeight,origin,(startX + this->get_x()),(startY + this->get_y()),(endX + this->get_x()),(endY + this->get_y()),xSpacing,ySpacing);
	}
}


HX_DEFINE_DYNAMIC_FUNC9(Node_obj,getSpriteSheetFrames,return )

int Node_obj::get_height( ){
	HX_STACK_PUSH("Node::get_height","org/flixel/system/layer/Node.hx",71);
	HX_STACK_THIS(this);
	HX_STACK_LINE(71)
	return ::Std_obj::_int(this->rect->height);
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,get_height,return )

int Node_obj::get_width( ){
	HX_STACK_PUSH("Node::get_width","org/flixel/system/layer/Node.hx",66);
	HX_STACK_THIS(this);
	HX_STACK_LINE(66)
	return ::Std_obj::_int(this->rect->width);
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,get_width,return )

int Node_obj::get_y( ){
	HX_STACK_PUSH("Node::get_y","org/flixel/system/layer/Node.hx",61);
	HX_STACK_THIS(this);
	HX_STACK_LINE(61)
	return ::Std_obj::_int(this->rect->y);
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,get_y,return )

int Node_obj::get_x( ){
	HX_STACK_PUSH("Node::get_x","org/flixel/system/layer/Node.hx",56);
	HX_STACK_THIS(this);
	HX_STACK_LINE(56)
	return ::Std_obj::_int(this->rect->x);
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,get_x,return )

bool Node_obj::canPlace( int width,int height){
	HX_STACK_PUSH("Node::canPlace","org/flixel/system/layer/Node.hx",46);
	HX_STACK_THIS(this);
	HX_STACK_ARG(width,"width");
	HX_STACK_ARG(height,"height");
	HX_STACK_LINE(46)
	return (bool((this->rect->width >= width)) && bool((this->rect->height >= height)));
}


HX_DEFINE_DYNAMIC_FUNC2(Node_obj,canPlace,return )

bool Node_obj::get_isEmpty( ){
	HX_STACK_PUSH("Node::get_isEmpty","org/flixel/system/layer/Node.hx",41);
	HX_STACK_THIS(this);
	HX_STACK_LINE(41)
	return (bool((bool((this->item == null())) && bool((this->left == null())))) && bool((this->right == null())));
}


HX_DEFINE_DYNAMIC_FUNC0(Node_obj,get_isEmpty,return )


Node_obj::Node_obj()
{
}

void Node_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Node);
	HX_MARK_MEMBER_NAME(height,"height");
	HX_MARK_MEMBER_NAME(width,"width");
	HX_MARK_MEMBER_NAME(y,"y");
	HX_MARK_MEMBER_NAME(x,"x");
	HX_MARK_MEMBER_NAME(isEmpty,"isEmpty");
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(point,"point");
	HX_MARK_MEMBER_NAME(rect,"rect");
	HX_MARK_MEMBER_NAME(right,"right");
	HX_MARK_MEMBER_NAME(left,"left");
	HX_MARK_MEMBER_NAME(item,"item");
	HX_MARK_MEMBER_NAME(atlas,"atlas");
	HX_MARK_END_CLASS();
}

void Node_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(height,"height");
	HX_VISIT_MEMBER_NAME(width,"width");
	HX_VISIT_MEMBER_NAME(y,"y");
	HX_VISIT_MEMBER_NAME(x,"x");
	HX_VISIT_MEMBER_NAME(isEmpty,"isEmpty");
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(point,"point");
	HX_VISIT_MEMBER_NAME(rect,"rect");
	HX_VISIT_MEMBER_NAME(right,"right");
	HX_VISIT_MEMBER_NAME(left,"left");
	HX_VISIT_MEMBER_NAME(item,"item");
	HX_VISIT_MEMBER_NAME(atlas,"atlas");
}

Dynamic Node_obj::__Field(const ::String &inName,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { return inCallProp ? get_y() : y; }
		if (HX_FIELD_EQ(inName,"x") ) { return inCallProp ? get_x() : x; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return key; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { return rect; }
		if (HX_FIELD_EQ(inName,"left") ) { return left; }
		if (HX_FIELD_EQ(inName,"item") ) { return item; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"get_y") ) { return get_y_dyn(); }
		if (HX_FIELD_EQ(inName,"get_x") ) { return get_x_dyn(); }
		if (HX_FIELD_EQ(inName,"width") ) { return inCallProp ? get_width() : width; }
		if (HX_FIELD_EQ(inName,"point") ) { return point; }
		if (HX_FIELD_EQ(inName,"right") ) { return right; }
		if (HX_FIELD_EQ(inName,"atlas") ) { return atlas; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { return inCallProp ? get_height() : height; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"destroy") ) { return destroy_dyn(); }
		if (HX_FIELD_EQ(inName,"isEmpty") ) { return inCallProp ? get_isEmpty() : isEmpty; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"canPlace") ) { return canPlace_dyn(); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"get_width") ) { return get_width_dyn(); }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"get_height") ) { return get_height_dyn(); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"addTileRect") ) { return addTileRect_dyn(); }
		if (HX_FIELD_EQ(inName,"get_isEmpty") ) { return get_isEmpty_dyn(); }
		break;
	case 20:
		if (HX_FIELD_EQ(inName,"getSpriteSheetFrames") ) { return getSpriteSheetFrames_dyn(); }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"getTexturePackerFrames") ) { return getTexturePackerFrames_dyn(); }
	}
	return super::__Field(inName,inCallProp);
}

Dynamic Node_obj::__SetField(const ::String &inName,const Dynamic &inValue,bool inCallProp)
{
	switch(inName.length) {
	case 1:
		if (HX_FIELD_EQ(inName,"y") ) { y=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"x") ) { x=inValue.Cast< int >(); return inValue; }
		break;
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast< ::String >(); return inValue; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"rect") ) { rect=inValue.Cast< ::flash::geom::Rectangle >(); return inValue; }
		if (HX_FIELD_EQ(inName,"left") ) { left=inValue.Cast< ::org::flixel::system::layer::Node >(); return inValue; }
		if (HX_FIELD_EQ(inName,"item") ) { item=inValue.Cast< ::flash::display::BitmapData >(); return inValue; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"width") ) { width=inValue.Cast< int >(); return inValue; }
		if (HX_FIELD_EQ(inName,"point") ) { point=inValue.Cast< ::flash::geom::Point >(); return inValue; }
		if (HX_FIELD_EQ(inName,"right") ) { right=inValue.Cast< ::org::flixel::system::layer::Node >(); return inValue; }
		if (HX_FIELD_EQ(inName,"atlas") ) { atlas=inValue.Cast< ::org::flixel::system::layer::Atlas >(); return inValue; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"height") ) { height=inValue.Cast< int >(); return inValue; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"isEmpty") ) { isEmpty=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Node_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_CSTRING("height"));
	outFields->push(HX_CSTRING("width"));
	outFields->push(HX_CSTRING("y"));
	outFields->push(HX_CSTRING("x"));
	outFields->push(HX_CSTRING("isEmpty"));
	outFields->push(HX_CSTRING("key"));
	outFields->push(HX_CSTRING("point"));
	outFields->push(HX_CSTRING("rect"));
	outFields->push(HX_CSTRING("right"));
	outFields->push(HX_CSTRING("left"));
	outFields->push(HX_CSTRING("item"));
	outFields->push(HX_CSTRING("atlas"));
	super::__GetFields(outFields);
};

static ::String sStaticFields[] = {
	String(null()) };

static ::String sMemberFields[] = {
	HX_CSTRING("destroy"),
	HX_CSTRING("addTileRect"),
	HX_CSTRING("getTexturePackerFrames"),
	HX_CSTRING("getSpriteSheetFrames"),
	HX_CSTRING("get_height"),
	HX_CSTRING("get_width"),
	HX_CSTRING("get_y"),
	HX_CSTRING("get_x"),
	HX_CSTRING("height"),
	HX_CSTRING("width"),
	HX_CSTRING("y"),
	HX_CSTRING("x"),
	HX_CSTRING("canPlace"),
	HX_CSTRING("get_isEmpty"),
	HX_CSTRING("isEmpty"),
	HX_CSTRING("key"),
	HX_CSTRING("point"),
	HX_CSTRING("rect"),
	HX_CSTRING("right"),
	HX_CSTRING("left"),
	HX_CSTRING("item"),
	HX_CSTRING("atlas"),
	String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Node_obj::__mClass,"__mClass");
};

static void sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Node_obj::__mClass,"__mClass");
};

Class Node_obj::__mClass;

void Node_obj::__register()
{
	hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("org.flixel.system.layer.Node"), hx::TCanCast< Node_obj> ,sStaticFields,sMemberFields,
	&__CreateEmpty, &__Create,
	&super::__SGetClass(), 0, sMarkStatics, sVisitStatics);
}

void Node_obj::__boot()
{
}

} // end namespace org
} // end namespace flixel
} // end namespace system
} // end namespace layer
