#include <hxcpp.h>

#ifndef INCLUDED_openfl_LibraryType
#include <openfl/LibraryType.h>
#endif
namespace openfl{

::openfl::LibraryType LibraryType_obj::SWF;

::openfl::LibraryType LibraryType_obj::SWF_LITE;

::openfl::LibraryType LibraryType_obj::XFL;

HX_DEFINE_CREATE_ENUM(LibraryType_obj)

int LibraryType_obj::__FindIndex(::String inName)
{
	if (inName==HX_CSTRING("SWF")) return 0;
	if (inName==HX_CSTRING("SWF_LITE")) return 1;
	if (inName==HX_CSTRING("XFL")) return 2;
	return super::__FindIndex(inName);
}

int LibraryType_obj::__FindArgCount(::String inName)
{
	if (inName==HX_CSTRING("SWF")) return 0;
	if (inName==HX_CSTRING("SWF_LITE")) return 0;
	if (inName==HX_CSTRING("XFL")) return 0;
	return super::__FindArgCount(inName);
}

Dynamic LibraryType_obj::__Field(const ::String &inName,bool inCallProp)
{
	if (inName==HX_CSTRING("SWF")) return SWF;
	if (inName==HX_CSTRING("SWF_LITE")) return SWF_LITE;
	if (inName==HX_CSTRING("XFL")) return XFL;
	return super::__Field(inName,inCallProp);
}

static ::String sStaticFields[] = {
	HX_CSTRING("SWF"),
	HX_CSTRING("SWF_LITE"),
	HX_CSTRING("XFL"),
	::String(null()) };

static void sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(LibraryType_obj::SWF,"SWF");
	HX_MARK_MEMBER_NAME(LibraryType_obj::SWF_LITE,"SWF_LITE");
	HX_MARK_MEMBER_NAME(LibraryType_obj::XFL,"XFL");
};

static void sVisitStatic(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(LibraryType_obj::__mClass,"__mClass");
	HX_VISIT_MEMBER_NAME(LibraryType_obj::SWF,"SWF");
	HX_VISIT_MEMBER_NAME(LibraryType_obj::SWF_LITE,"SWF_LITE");
	HX_VISIT_MEMBER_NAME(LibraryType_obj::XFL,"XFL");
};

static ::String sMemberFields[] = { ::String(null()) };
Class LibraryType_obj::__mClass;

Dynamic __Create_LibraryType_obj() { return new LibraryType_obj; }

void LibraryType_obj::__register()
{

hx::Static(__mClass) = hx::RegisterClass(HX_CSTRING("openfl.LibraryType"), hx::TCanCast< LibraryType_obj >,sStaticFields,sMemberFields,
	&__Create_LibraryType_obj, &__Create,
	&super::__SGetClass(), &CreateLibraryType_obj, sMarkStatics, sVisitStatic);
}

void LibraryType_obj::__boot()
{
hx::Static(SWF) = hx::CreateEnum< LibraryType_obj >(HX_CSTRING("SWF"),0);
hx::Static(SWF_LITE) = hx::CreateEnum< LibraryType_obj >(HX_CSTRING("SWF_LITE"),1);
hx::Static(XFL) = hx::CreateEnum< LibraryType_obj >(HX_CSTRING("XFL"),2);
}


} // end namespace openfl
