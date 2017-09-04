// File generated by CPPExt (MPV)
//
#ifndef _DsgPrs_EllipseRadiusPresentation_OCWrappers_HeaderFile
#define _DsgPrs_EllipseRadiusPresentation_OCWrappers_HeaderFile

// include native header
#include <DsgPrs_EllipseRadiusPresentation.hxx>
#include "../Converter.h"


#include "DsgPrs_ArrowSide.h"


namespace OCNaroWrappers
{

ref class OCPrs3d_Presentation;
ref class OCPrs3d_Drawer;
ref class OCTCollection_ExtendedString;
ref class OCgp_Pnt;
ref class OCgp_Elips;
ref class OCGeom_OffsetCurve;



public ref class OCDsgPrs_EllipseRadiusPresentation  {

protected:
  DsgPrs_EllipseRadiusPresentation* nativeHandle;
  OCDsgPrs_EllipseRadiusPresentation(OCDummy^) {};

public:
  property DsgPrs_EllipseRadiusPresentation* Handle
  {
    DsgPrs_EllipseRadiusPresentation* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCDsgPrs_EllipseRadiusPresentation(DsgPrs_EllipseRadiusPresentation* nativeHandle);

// Methods PUBLIC

//! draws a  Radius  (Major  or  Minor) <br>
//! representation for whole ellipse  case <br>
static /*instead*/  void Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, Standard_Real theval, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint, OCNaroWrappers::OCgp_Pnt^ anEndOfArrow, OCNaroWrappers::OCgp_Pnt^ aCenter, System::Boolean IsMaxRadius, OCDsgPrs_ArrowSide ArrowSide) ;

//! draws a  Radius  (Major  or  Minor) representation <br>
//!  for arc of an ellipse  case <br>
static /*instead*/  void Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, Standard_Real theval, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCgp_Elips^ anEllipse, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint, OCNaroWrappers::OCgp_Pnt^ anEndOfArrow, OCNaroWrappers::OCgp_Pnt^ aCenter, Standard_Real uFirst, System::Boolean IsInDomain, System::Boolean IsMaxRadius, OCDsgPrs_ArrowSide ArrowSide) ;

//! draws a  Radius  (Major  or  Minor) representation <br>
//!  for arc of an offset  curve  from  ellipse <br>
static /*instead*/  void Add(OCNaroWrappers::OCPrs3d_Presentation^ aPresentation, OCNaroWrappers::OCPrs3d_Drawer^ aDrawer, Standard_Real theval, OCNaroWrappers::OCTCollection_ExtendedString^ aText, OCNaroWrappers::OCGeom_OffsetCurve^ aCurve, OCNaroWrappers::OCgp_Pnt^ AttachmentPoint, OCNaroWrappers::OCgp_Pnt^ anEndOfArrow, OCNaroWrappers::OCgp_Pnt^ aCenter, Standard_Real uFirst, System::Boolean IsInDomain, System::Boolean IsMaxRadius, OCDsgPrs_ArrowSide ArrowSide) ;

~OCDsgPrs_EllipseRadiusPresentation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif