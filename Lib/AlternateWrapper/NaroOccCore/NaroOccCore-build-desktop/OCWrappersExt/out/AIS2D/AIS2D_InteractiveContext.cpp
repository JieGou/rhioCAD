// File generated by CPPExt (CPP file)
//

#include "AIS2D_InteractiveContext.h"
#include "../Converter.h"
#include "../V2d/V2d_Viewer.h"
#include "AIS2D_InteractiveObject.h"
#include "AIS2D_HSequenceOfIO.h"
#include "../V2d/V2d_View.h"
#include "../Aspect/Aspect_GenericColorMap.h"
#include "../Aspect/Aspect_TypeMap.h"
#include "../Aspect/Aspect_WidthMap.h"
#include "../Aspect/Aspect_MarkMap.h"
#include "../Aspect/Aspect_FontMap.h"
#include "AIS2D_LocalContext.h"
#include "../Graphic2d/Graphic2d_DisplayList.h"
#include "../MMgt/MMgt_TShared.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "AIS2D_ListOfIO.h"
#include "../Quantity/Quantity_Color.h"
#include "../Aspect/Aspect_FontStyle.h"
#include "../Graphic2d/Graphic2d_TransientManager.h"
#include "../Graphic2d/Graphic2d_Primitive.h"


using namespace OCNaroWrappers;

OCAIS2D_InteractiveContext::OCAIS2D_InteractiveContext(Handle(AIS2D_InteractiveContext)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AIS2D_InteractiveContext(*nativeHandle);
}

OCAIS2D_InteractiveContext::OCAIS2D_InteractiveContext(OCNaroWrappers::OCV2d_Viewer^ MainViewer) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS2D_InteractiveContext(new AIS2D_InteractiveContext(*((Handle_V2d_Viewer*)MainViewer->Handle)));
}

OCAIS2D_InteractiveContext::OCAIS2D_InteractiveContext(OCNaroWrappers::OCV2d_Viewer^ MainViewer, OCNaroWrappers::OCV2d_Viewer^ aCollector) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AIS2D_InteractiveContext(new AIS2D_InteractiveContext(*((Handle_V2d_Viewer*)MainViewer->Handle), *((Handle_V2d_Viewer*)aCollector->Handle)));
}

 void OCAIS2D_InteractiveContext::Display(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Display(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::Display(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, Standard_Integer aDispMode, Standard_Integer aSelectMode, System::Boolean UpdateVwr, System::Boolean AllowDecomp)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Display(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), aDispMode, aSelectMode, OCConverter::BooleanToStandardBoolean(UpdateVwr), OCConverter::BooleanToStandardBoolean(AllowDecomp));
}

 void OCAIS2D_InteractiveContext::Load(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, Standard_Integer SelMode, System::Boolean AllowDecomp)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Load(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), SelMode, OCConverter::BooleanToStandardBoolean(AllowDecomp));
}

 void OCAIS2D_InteractiveContext::Erase(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr, System::Boolean PutInCollector)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Erase(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr), OCConverter::BooleanToStandardBoolean(PutInCollector));
}

 void OCAIS2D_InteractiveContext::EraseAll(System::Boolean PutInCollector, System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->EraseAll(OCConverter::BooleanToStandardBoolean(PutInCollector), OCConverter::BooleanToStandardBoolean(updateVwr));
}

 void OCAIS2D_InteractiveContext::DisplayAll(System::Boolean OnlyFromCollector, System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->DisplayAll(OCConverter::BooleanToStandardBoolean(OnlyFromCollector), OCConverter::BooleanToStandardBoolean(updateVwr));
}

 void OCAIS2D_InteractiveContext::EraseSelected(System::Boolean PutInCollector, System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->EraseSelected(OCConverter::BooleanToStandardBoolean(PutInCollector), OCConverter::BooleanToStandardBoolean(updateVwr));
}

 void OCAIS2D_InteractiveContext::DisplaySelected(System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->DisplaySelected(OCConverter::BooleanToStandardBoolean(updateVwr));
}

 System::Boolean OCAIS2D_InteractiveContext::KeepTemporary(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, Standard_Integer InWhichLocal)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->KeepTemporary(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), InWhichLocal));
}

 void OCAIS2D_InteractiveContext::Redisplay(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean updateVwr, System::Boolean allModes)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Redisplay(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(updateVwr), OCConverter::BooleanToStandardBoolean(allModes));
}

 System::Boolean OCAIS2D_InteractiveContext::IsCurrent(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsCurrent(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 System::Boolean OCAIS2D_InteractiveContext::IsSelected(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsSelected(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 void OCAIS2D_InteractiveContext::Highlight(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Highlight(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(updateVwr));
}

 void OCAIS2D_InteractiveContext::HighlightWithColor(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, OCQuantity_NameOfColor aCol, System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->HighlightWithColor(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), (Quantity_NameOfColor)aCol, OCConverter::BooleanToStandardBoolean(updateVwr));
}

 void OCAIS2D_InteractiveContext::Unhighlight(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Unhighlight(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(updateVwr));
}

 void OCAIS2D_InteractiveContext::SetPrecision(Standard_Integer aPrec)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetPrecision(aPrec);
}

 Standard_Integer OCAIS2D_InteractiveContext::DetectPrecision()
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->DetectPrecision();
}

 void OCAIS2D_InteractiveContext::Place(Standard_Integer XPix, Standard_Integer YPix, OCNaroWrappers::OCV2d_View^ aView, OCNaroWrappers::OCAIS2D_InteractiveObject^ anIO, System::Boolean isTemporary)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Place(XPix, YPix, *((Handle_V2d_View*)aView->Handle), *((Handle_AIS2D_InteractiveObject*)anIO->Handle), OCConverter::BooleanToStandardBoolean(isTemporary));
}

 void OCAIS2D_InteractiveContext::Drag(Standard_Integer XPix, Standard_Integer YPix, OCNaroWrappers::OCV2d_View^ aView, System::Boolean isTemporary)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Drag(XPix, YPix, *((Handle_V2d_View*)aView->Handle), OCConverter::BooleanToStandardBoolean(isTemporary));
}

 OCAIS2D_StatusOfDetection OCAIS2D_InteractiveContext::MoveTo(Standard_Integer XPix, Standard_Integer YPix, OCNaroWrappers::OCV2d_View^ aView)
{
  return (OCAIS2D_StatusOfDetection)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->MoveTo(XPix, YPix, *((Handle_V2d_View*)aView->Handle)));
}

 OCAIS2D_StatusOfDetection OCAIS2D_InteractiveContext::MoveCircleTo(Standard_Integer XPix, Standard_Integer YPix, Standard_Integer Radius, OCNaroWrappers::OCV2d_View^ aView)
{
  return (OCAIS2D_StatusOfDetection)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->MoveCircleTo(XPix, YPix, Radius, *((Handle_V2d_View*)aView->Handle)));
}

 OCAIS2D_StatusOfDetection OCAIS2D_InteractiveContext::MoveTo(Standard_Integer Xmin, Standard_Integer Ymin, Standard_Integer Xmax, Standard_Integer Ymax, OCNaroWrappers::OCV2d_View^ aView)
{
  return (OCAIS2D_StatusOfDetection)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->MoveTo(Xmin, Ymin, Xmax, Ymax, *((Handle_V2d_View*)aView->Handle)));
}

 OCAIS2D_StatusOfPick OCAIS2D_InteractiveContext::Select(System::Boolean UpdateVwr)
{
  return (OCAIS2D_StatusOfPick)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Select(OCConverter::BooleanToStandardBoolean(UpdateVwr)));
}

 OCAIS2D_StatusOfPick OCAIS2D_InteractiveContext::ShiftSelect(System::Boolean UpdateVwr)
{
  return (OCAIS2D_StatusOfPick)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->ShiftSelect(OCConverter::BooleanToStandardBoolean(UpdateVwr)));
}

 OCAIS2D_StatusOfPick OCAIS2D_InteractiveContext::ShiftSelect(Standard_Integer XPMin, Standard_Integer YPMin, Standard_Integer XPMax, Standard_Integer YPMax, OCNaroWrappers::OCV2d_View^ aView, System::Boolean UpdateVwr)
{
  return (OCAIS2D_StatusOfPick)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->ShiftSelect(XPMin, YPMin, XPMax, YPMax, *((Handle_V2d_View*)aView->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr)));
}

 void OCAIS2D_InteractiveContext::SetHighlightColor(OCQuantity_NameOfColor aCol)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetHighlightColor((Quantity_NameOfColor)aCol);
}

 void OCAIS2D_InteractiveContext::SetSelectionColor(OCQuantity_NameOfColor aCol)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetSelectionColor((Quantity_NameOfColor)aCol);
}

 void OCAIS2D_InteractiveContext::SetSubIntensityColor(OCQuantity_NameOfColor aCol)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetSubIntensityColor((Quantity_NameOfColor)aCol);
}

 Standard_Integer OCAIS2D_InteractiveContext::DisplayMode()
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->DisplayMode();
}

 OCQuantity_NameOfColor OCAIS2D_InteractiveContext::HighlightColor()
{
  return (OCQuantity_NameOfColor)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->HighlightColor());
}

 OCQuantity_NameOfColor OCAIS2D_InteractiveContext::SelectionColor()
{
  return (OCQuantity_NameOfColor)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SelectionColor());
}

 OCQuantity_NameOfColor OCAIS2D_InteractiveContext::SubIntensityColor()
{
  return (OCQuantity_NameOfColor)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SubIntensityColor());
}

 void OCAIS2D_InteractiveContext::SubIntensityOn(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SubIntensityOn(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::SubIntensityOff(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SubIntensityOff(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 System::Boolean OCAIS2D_InteractiveContext::IsCollectorClosed()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsCollectorClosed());
}

 void OCAIS2D_InteractiveContext::CloseCollector()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->CloseCollector();
}

 void OCAIS2D_InteractiveContext::OpenCollector()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->OpenCollector();
}

 Standard_Integer OCAIS2D_InteractiveContext::OpenLocalContext(System::Boolean UseDispObj, System::Boolean AllowDecomposit, System::Boolean AcceptEraseOfObj)
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->OpenLocalContext(OCConverter::BooleanToStandardBoolean(UseDispObj), OCConverter::BooleanToStandardBoolean(AllowDecomposit), OCConverter::BooleanToStandardBoolean(AcceptEraseOfObj));
}

 void OCAIS2D_InteractiveContext::CloseLocalContext(Standard_Integer ind, System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->CloseLocalContext(ind, OCConverter::BooleanToStandardBoolean(updateVwr));
}

 Standard_Integer OCAIS2D_InteractiveContext::IndexOfCurrentLocal()
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IndexOfCurrentLocal();
}

 void OCAIS2D_InteractiveContext::CloseAllContext(System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->CloseAllContext(OCConverter::BooleanToStandardBoolean(updateVwr));
}

 void OCAIS2D_InteractiveContext::SetCurrentObject(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetCurrentObject(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::AddOrRemoveCurObject(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->AddOrRemoveCurObject(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::UpdateCurrent()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->UpdateCurrent();
}

 void OCAIS2D_InteractiveContext::SetOkCurrent()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetOkCurrent();
}

 void OCAIS2D_InteractiveContext::HighlightCurrent(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->HighlightCurrent(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::UnhighlightCurrent(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->UnhighlightCurrent(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::ClearCurrent(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->ClearCurrent(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::SetSelected(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetSelected(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::SetSelectedCurrent()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetSelectedCurrent();
}

 void OCAIS2D_InteractiveContext::UpdateSelected(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->UpdateSelected(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::AddOrRemoveSelected(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->AddOrRemoveSelected(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::HighlightSelected(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->HighlightSelected(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::UnhighlightSelected(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->UnhighlightSelected(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 void OCAIS2D_InteractiveContext::ClearSelected(System::Boolean UpdateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->ClearSelected(OCConverter::BooleanToStandardBoolean(UpdateVwr));
}

 Standard_Integer OCAIS2D_InteractiveContext::NbSelected()
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->NbSelected();
}

 void OCAIS2D_InteractiveContext::InitSelected()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->InitSelected();
}

 System::Boolean OCAIS2D_InteractiveContext::MoreSelected()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->MoreSelected());
}

 void OCAIS2D_InteractiveContext::NextSelected()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->NextSelected();
}

OCMMgt_TShared^ OCAIS2D_InteractiveContext::SelectedObject()
{
  Handle(MMgt_TShared) tmp = (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SelectedObject();
  return gcnew OCMMgt_TShared(&tmp);
}

 OCAIS2D_DisplayStatus OCAIS2D_InteractiveContext::DisplayStatus(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return (OCAIS2D_DisplayStatus)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->DisplayStatus(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 AIS2D_PToListOfInt OCAIS2D_InteractiveContext::DisplayedModes(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->DisplayedModes(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle));
}

 System::Boolean OCAIS2D_InteractiveContext::IsDisplayed(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsDisplayed(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 System::Boolean OCAIS2D_InteractiveContext::IsDisplayed(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, Standard_Integer aMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsDisplayed(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), aMode));
}

 System::Boolean OCAIS2D_InteractiveContext::IsHighlighted(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsHighlighted(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 System::Boolean OCAIS2D_InteractiveContext::IsHighlighted(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, System::Boolean& WithColor, OCQuantity_NameOfColor& theHiCol)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsHighlighted(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), (Standard_Boolean&)(WithColor), (Quantity_NameOfColor&)theHiCol));
}

 System::Boolean OCAIS2D_InteractiveContext::IsInCollector(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsInCollector(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle)));
}

 void OCAIS2D_InteractiveContext::Status(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, OCNaroWrappers::OCTCollection_ExtendedString^ aStatus)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->Status(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), *((TCollection_ExtendedString*)aStatus->Handle));
}

 void OCAIS2D_InteractiveContext::UpdateCurrentViewer()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->UpdateCurrentViewer();
}

 void OCAIS2D_InteractiveContext::UpdateCollector()
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->UpdateCollector();
}

OCV2d_Viewer^ OCAIS2D_InteractiveContext::CurrentViewer()
{
  Handle(V2d_Viewer) tmp = (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->CurrentViewer();
  return gcnew OCV2d_Viewer(&tmp);
}

 System::Boolean OCAIS2D_InteractiveContext::HasOpenedContext()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->HasOpenedContext());
}

 void OCAIS2D_InteractiveContext::DisplayedObjects(OCNaroWrappers::OCAIS2D_ListOfIO^ aListOfIO, System::Boolean OnlyFromNeutral)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->DisplayedObjects(*((AIS2D_ListOfIO*)aListOfIO->Handle), OCConverter::BooleanToStandardBoolean(OnlyFromNeutral));
}

 void OCAIS2D_InteractiveContext::SetPickMode(OCGraphic2d_PickMode aMode)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetPickMode((Graphic2d_PickMode)aMode);
}

 OCGraphic2d_PickMode OCAIS2D_InteractiveContext::GetPickMode()
{
  return (OCGraphic2d_PickMode)((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->GetPickMode());
}

 Standard_Integer OCAIS2D_InteractiveContext::HighestIndex()
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->HighestIndex();
}

 Standard_Integer OCAIS2D_InteractiveContext::InitializeColor(OCNaroWrappers::OCQuantity_Color^ aColor)
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->InitializeColor(*((Quantity_Color*)aColor->Handle));
}

 Standard_Integer OCAIS2D_InteractiveContext::InitializeStyle(OCAspect_TypeOfLine aType)
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->InitializeStyle((Aspect_TypeOfLine)aType);
}

 Standard_Integer OCAIS2D_InteractiveContext::InitializeWidth(OCAspect_WidthOfLine aWidth)
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->InitializeWidth((Aspect_WidthOfLine)aWidth);
}

 Standard_Integer OCAIS2D_InteractiveContext::InitializeMarker(OCAspect_TypeOfMarker aMark)
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->InitializeMarker((Aspect_TypeOfMarker)aMark);
}

 Standard_Integer OCAIS2D_InteractiveContext::InitializeFont(OCNaroWrappers::OCAspect_FontStyle^ aFont)
{
  return (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->InitializeFont(*((Aspect_FontStyle*)aFont->Handle));
}

 void OCAIS2D_InteractiveContext::ResetOriginalState(System::Boolean updateVwr)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->ResetOriginalState(OCConverter::BooleanToStandardBoolean(updateVwr));
}

 void OCAIS2D_InteractiveContext::BeginImmediateDraw(OCNaroWrappers::OCV2d_View^ aView)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->BeginImmediateDraw(*((Handle_V2d_View*)aView->Handle));
}

 void OCAIS2D_InteractiveContext::ImmediateDraw(OCNaroWrappers::OCAIS2D_InteractiveObject^ anIObj, OCNaroWrappers::OCV2d_View^ aView)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->ImmediateDraw(*((Handle_AIS2D_InteractiveObject*)anIObj->Handle), *((Handle_V2d_View*)aView->Handle));
}

 void OCAIS2D_InteractiveContext::EndImmediateDraw(OCNaroWrappers::OCV2d_View^ aView)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->EndImmediateDraw(*((Handle_V2d_View*)aView->Handle));
}

 System::Boolean OCAIS2D_InteractiveContext::IsImmediateModeOn(OCNaroWrappers::OCV2d_View^ aView)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_AIS2D_InteractiveContext*)nativeHandle))->IsImmediateModeOn(*((Handle_V2d_View*)aView->Handle)));
}

 void OCAIS2D_InteractiveContext::SetDetectionMode(OCAIS2D_TypeOfDetection mode)
{
  (*((Handle_AIS2D_InteractiveContext*)nativeHandle))->SetDetectionMode((AIS2D_TypeOfDetection)mode);
}

