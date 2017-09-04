// File generated by CPPExt (CPP file)
//

#include "Aspect_ColorScale.h"
#include "../Converter.h"
#include "../Quantity/Quantity_Color.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../TColStd/TColStd_SequenceOfExtendedString.h"
#include "Aspect_SequenceOfColor.h"
#include "Aspect_ColorMap.h"


using namespace OCNaroWrappers;

OCAspect_ColorScale::OCAspect_ColorScale(Handle(Aspect_ColorScale)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Aspect_ColorScale(*nativeHandle);
}

 System::Boolean OCAspect_ColorScale::FindColor(Standard_Real Value, OCNaroWrappers::OCQuantity_Color^ Color)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Aspect_ColorScale*)nativeHandle))->FindColor(Value, *((Quantity_Color*)Color->Handle)));
}

 System::Boolean OCAspect_ColorScale::FindColor(Standard_Real Value, Standard_Real Min, Standard_Real Max, Standard_Integer ColorsCount, OCNaroWrappers::OCQuantity_Color^ Color)
{
  return OCConverter::StandardBooleanToBoolean(Aspect_ColorScale::FindColor(Value, Min, Max, ColorsCount, *((Quantity_Color*)Color->Handle)));
}

 Standard_Real OCAspect_ColorScale::GetMin()
{
  return (*((Handle_Aspect_ColorScale*)nativeHandle))->GetMin();
}

 Standard_Real OCAspect_ColorScale::GetMax()
{
  return (*((Handle_Aspect_ColorScale*)nativeHandle))->GetMax();
}

 void OCAspect_ColorScale::GetRange(Standard_Real& aMin, Standard_Real& aMax)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->GetRange(aMin, aMax);
}

 OCAspect_TypeOfColorScaleData OCAspect_ColorScale::GetLabelType()
{
  return (OCAspect_TypeOfColorScaleData)((*((Handle_Aspect_ColorScale*)nativeHandle))->GetLabelType());
}

 OCAspect_TypeOfColorScaleData OCAspect_ColorScale::GetColorType()
{
  return (OCAspect_TypeOfColorScaleData)((*((Handle_Aspect_ColorScale*)nativeHandle))->GetColorType());
}

 Standard_Integer OCAspect_ColorScale::GetNumberOfIntervals()
{
  return (*((Handle_Aspect_ColorScale*)nativeHandle))->GetNumberOfIntervals();
}

OCTCollection_ExtendedString^ OCAspect_ColorScale::GetTitle()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_Aspect_ColorScale*)nativeHandle))->GetTitle();
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCTCollection_AsciiString^ OCAspect_ColorScale::GetFormat()
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = (*((Handle_Aspect_ColorScale*)nativeHandle))->GetFormat();
  return gcnew OCTCollection_AsciiString(tmp);
}

OCTCollection_ExtendedString^ OCAspect_ColorScale::GetLabel(Standard_Integer anIndex)
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_Aspect_ColorScale*)nativeHandle))->GetLabel(anIndex);
  return gcnew OCTCollection_ExtendedString(tmp);
}

OCQuantity_Color^ OCAspect_ColorScale::GetColor(Standard_Integer anIndex)
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = (*((Handle_Aspect_ColorScale*)nativeHandle))->GetColor(anIndex);
  return gcnew OCQuantity_Color(tmp);
}

 void OCAspect_ColorScale::GetLabels(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ aLabels)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->GetLabels(*((TColStd_SequenceOfExtendedString*)aLabels->Handle));
}

 void OCAspect_ColorScale::GetColors(OCNaroWrappers::OCAspect_SequenceOfColor^ aColors)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->GetColors(*((Aspect_SequenceOfColor*)aColors->Handle));
}

 OCAspect_TypeOfColorScalePosition OCAspect_ColorScale::GetLabelPosition()
{
  return (OCAspect_TypeOfColorScalePosition)((*((Handle_Aspect_ColorScale*)nativeHandle))->GetLabelPosition());
}

 OCAspect_TypeOfColorScalePosition OCAspect_ColorScale::GetTitlePosition()
{
  return (OCAspect_TypeOfColorScalePosition)((*((Handle_Aspect_ColorScale*)nativeHandle))->GetTitlePosition());
}

 System::Boolean OCAspect_ColorScale::IsReversed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Aspect_ColorScale*)nativeHandle))->IsReversed());
}

 System::Boolean OCAspect_ColorScale::IsLabelAtBorder()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Aspect_ColorScale*)nativeHandle))->IsLabelAtBorder());
}

 void OCAspect_ColorScale::SetMin(Standard_Real aMin)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetMin(aMin);
}

 void OCAspect_ColorScale::SetMax(Standard_Real aMax)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetMax(aMax);
}

 void OCAspect_ColorScale::SetRange(Standard_Real aMin, Standard_Real aMax)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetRange(aMin, aMax);
}

 void OCAspect_ColorScale::SetLabelType(OCAspect_TypeOfColorScaleData aType)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetLabelType((Aspect_TypeOfColorScaleData)aType);
}

 void OCAspect_ColorScale::SetColorType(OCAspect_TypeOfColorScaleData aType)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetColorType((Aspect_TypeOfColorScaleData)aType);
}

 void OCAspect_ColorScale::SetNumberOfIntervals(Standard_Integer aNum)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetNumberOfIntervals(aNum);
}

 void OCAspect_ColorScale::SetTitle(OCNaroWrappers::OCTCollection_ExtendedString^ aTitle)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetTitle(*((TCollection_ExtendedString*)aTitle->Handle));
}

 void OCAspect_ColorScale::SetFormat(OCNaroWrappers::OCTCollection_AsciiString^ aFormat)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetFormat(*((TCollection_AsciiString*)aFormat->Handle));
}

 void OCAspect_ColorScale::SetLabel(OCNaroWrappers::OCTCollection_ExtendedString^ aLabel, Standard_Integer anIndex)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetLabel(*((TCollection_ExtendedString*)aLabel->Handle), anIndex);
}

 void OCAspect_ColorScale::SetColor(OCNaroWrappers::OCQuantity_Color^ aColor, Standard_Integer anIndex)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetColor(*((Quantity_Color*)aColor->Handle), anIndex);
}

 void OCAspect_ColorScale::SetLabels(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ aSeq)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetLabels(*((TColStd_SequenceOfExtendedString*)aSeq->Handle));
}

 void OCAspect_ColorScale::SetColors(OCNaroWrappers::OCAspect_ColorMap^ aMap)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetColors(*((Handle_Aspect_ColorMap*)aMap->Handle));
}

 void OCAspect_ColorScale::SetColors(OCNaroWrappers::OCAspect_SequenceOfColor^ aSeq)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetColors(*((Aspect_SequenceOfColor*)aSeq->Handle));
}

 void OCAspect_ColorScale::SetLabelPosition(OCAspect_TypeOfColorScalePosition aPos)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetLabelPosition((Aspect_TypeOfColorScalePosition)aPos);
}

 void OCAspect_ColorScale::SetTitlePosition(OCAspect_TypeOfColorScalePosition aPos)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetTitlePosition((Aspect_TypeOfColorScalePosition)aPos);
}

 void OCAspect_ColorScale::SetReversed(System::Boolean aReverse)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetReversed(OCConverter::BooleanToStandardBoolean(aReverse));
}

 void OCAspect_ColorScale::SetLabelAtBorder(System::Boolean anOn)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetLabelAtBorder(OCConverter::BooleanToStandardBoolean(anOn));
}

 void OCAspect_ColorScale::GetSize(Standard_Real& aWidth, Standard_Real& aHeight)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->GetSize(aWidth, aHeight);
}

 Standard_Real OCAspect_ColorScale::GetWidth()
{
  return (*((Handle_Aspect_ColorScale*)nativeHandle))->GetWidth();
}

 Standard_Real OCAspect_ColorScale::GetHeight()
{
  return (*((Handle_Aspect_ColorScale*)nativeHandle))->GetHeight();
}

 void OCAspect_ColorScale::SetSize(Standard_Real aWidth, Standard_Real aHeight)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetSize(aWidth, aHeight);
}

 void OCAspect_ColorScale::SetWidth(Standard_Real aWidth)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetWidth(aWidth);
}

 void OCAspect_ColorScale::SetHeight(Standard_Real aHeight)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetHeight(aHeight);
}

 void OCAspect_ColorScale::GetPosition(Standard_Real& aX, Standard_Real& aY)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->GetPosition(aX, aY);
}

 Standard_Real OCAspect_ColorScale::GetXPosition()
{
  return (*((Handle_Aspect_ColorScale*)nativeHandle))->GetXPosition();
}

 Standard_Real OCAspect_ColorScale::GetYPosition()
{
  return (*((Handle_Aspect_ColorScale*)nativeHandle))->GetYPosition();
}

 void OCAspect_ColorScale::SetPosition(Standard_Real aX, Standard_Real aY)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetPosition(aX, aY);
}

 void OCAspect_ColorScale::SetXPosition(Standard_Real aX)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetXPosition(aX);
}

 void OCAspect_ColorScale::SetYPosition(Standard_Real aY)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetYPosition(aY);
}

 Standard_Integer OCAspect_ColorScale::GetTextHeight()
{
  return (*((Handle_Aspect_ColorScale*)nativeHandle))->GetTextHeight();
}

 void OCAspect_ColorScale::SetTextHeight(Standard_Integer aHeigh)
{
  (*((Handle_Aspect_ColorScale*)nativeHandle))->SetTextHeight(aHeigh);
}

