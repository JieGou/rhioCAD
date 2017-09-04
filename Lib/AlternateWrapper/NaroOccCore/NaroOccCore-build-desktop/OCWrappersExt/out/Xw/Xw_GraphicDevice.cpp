// File generated by CPPExt (CPP file)
//

#include "Xw_GraphicDevice.h"
#include "../Converter.h"
#include "Xw_ColorMap.h"
#include "Xw_TypeMap.h"
#include "Xw_WidthMap.h"
#include "Xw_FontMap.h"
#include "Xw_MarkMap.h"
#include "Xw_Window.h"
#include "../Aspect/Aspect_GraphicDriver.h"


using namespace OCNaroWrappers;

OCXw_GraphicDevice::OCXw_GraphicDevice(Handle(Xw_GraphicDevice)* nativeHandle) : OCAspect_GraphicDevice((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Xw_GraphicDevice(*nativeHandle);
}

OCXw_GraphicDevice::OCXw_GraphicDevice(System::String^ Connection, OCXw_TypeOfMapping Mapping, Standard_Integer Ncolors, System::Boolean UseDefault) : OCAspect_GraphicDevice((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Xw_GraphicDevice(new Xw_GraphicDevice(OCConverter::StringToStandardCString(Connection), (Xw_TypeOfMapping)Mapping, Ncolors, OCConverter::BooleanToStandardBoolean(UseDefault)));
}

OCXw_ColorMap^ OCXw_GraphicDevice::ColorMap2D()
{
  Handle(Xw_ColorMap) tmp = (*((Handle_Xw_GraphicDevice*)nativeHandle))->ColorMap2D();
  return gcnew OCXw_ColorMap(&tmp);
}

 OCXw_TypeOfVisual OCXw_GraphicDevice::VisualClass2D()
{
  return (OCXw_TypeOfVisual)((*((Handle_Xw_GraphicDevice*)nativeHandle))->VisualClass2D());
}

 OCXw_TypeOfVisual OCXw_GraphicDevice::OverlayVisualClass2D()
{
  return (OCXw_TypeOfVisual)((*((Handle_Xw_GraphicDevice*)nativeHandle))->OverlayVisualClass2D());
}

OCXw_ColorMap^ OCXw_GraphicDevice::ColorMap3D()
{
  Handle(Xw_ColorMap) tmp = (*((Handle_Xw_GraphicDevice*)nativeHandle))->ColorMap3D();
  return gcnew OCXw_ColorMap(&tmp);
}

 OCXw_TypeOfVisual OCXw_GraphicDevice::VisualClass3D()
{
  return (OCXw_TypeOfVisual)((*((Handle_Xw_GraphicDevice*)nativeHandle))->VisualClass3D());
}

 OCXw_TypeOfVisual OCXw_GraphicDevice::OverlayVisualClass3D()
{
  return (OCXw_TypeOfVisual)((*((Handle_Xw_GraphicDevice*)nativeHandle))->OverlayVisualClass3D());
}

OCXw_TypeMap^ OCXw_GraphicDevice::TypeMap()
{
  Handle(Xw_TypeMap) tmp = (*((Handle_Xw_GraphicDevice*)nativeHandle))->TypeMap();
  return gcnew OCXw_TypeMap(&tmp);
}

OCXw_WidthMap^ OCXw_GraphicDevice::WidthMap()
{
  Handle(Xw_WidthMap) tmp = (*((Handle_Xw_GraphicDevice*)nativeHandle))->WidthMap();
  return gcnew OCXw_WidthMap(&tmp);
}

OCXw_FontMap^ OCXw_GraphicDevice::FontMap()
{
  Handle(Xw_FontMap) tmp = (*((Handle_Xw_GraphicDevice*)nativeHandle))->FontMap();
  return gcnew OCXw_FontMap(&tmp);
}

OCXw_MarkMap^ OCXw_GraphicDevice::MarkMap()
{
  Handle(Xw_MarkMap) tmp = (*((Handle_Xw_GraphicDevice*)nativeHandle))->MarkMap();
  return gcnew OCXw_MarkMap(&tmp);
}

 System::String^ OCXw_GraphicDevice::Display()
{
  return OCConverter::StandardCStringToString((*((Handle_Xw_GraphicDevice*)nativeHandle))->Display());
}

 Standard_Address OCXw_GraphicDevice::XDisplay()
{
  return (*((Handle_Xw_GraphicDevice*)nativeHandle))->XDisplay();
}

 void OCXw_GraphicDevice::DisplaySize(Standard_Integer& Width, Standard_Integer& Height)
{
  (*((Handle_Xw_GraphicDevice*)nativeHandle))->DisplaySize(Width, Height);
}

 void OCXw_GraphicDevice::DisplaySize(Quantity_Length& Width, Quantity_Length& Height)
{
  (*((Handle_Xw_GraphicDevice*)nativeHandle))->DisplaySize(Width, Height);
}

 Standard_Integer OCXw_GraphicDevice::PlaneLayer(Standard_Integer aVisualID)
{
  return (*((Handle_Xw_GraphicDevice*)nativeHandle))->PlaneLayer(aVisualID);
}

OCAspect_GraphicDriver^ OCXw_GraphicDevice::GraphicDriver()
{
  Handle(Aspect_GraphicDriver) tmp = (*((Handle_Xw_GraphicDevice*)nativeHandle))->GraphicDriver();
  return gcnew OCAspect_GraphicDriver(&tmp);
}

