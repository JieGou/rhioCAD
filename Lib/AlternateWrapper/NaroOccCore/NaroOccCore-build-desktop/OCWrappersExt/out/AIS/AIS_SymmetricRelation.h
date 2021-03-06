// File generated by CPPExt (Transient)
//
#ifndef _AIS_SymmetricRelation_OCWrappers_HeaderFile
#define _AIS_SymmetricRelation_OCWrappers_HeaderFile

// include the wrapped class
#include <AIS_SymmetricRelation.hxx>
#include "../Converter.h"

#include "AIS_Relation.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Dir.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCGeom_Plane;
ref class OCPrsMgr_PresentationManager3d;
ref class OCPrs3d_Presentation;
ref class OCPrs3d_Projector;
ref class OCPrsMgr_PresentationManager2d;
ref class OCGraphic2d_GraphicObject;
ref class OCGeom_Transformation;
ref class OCSelectMgr_Selection;


//! A framework to display constraints of symmetricity <br>
//! between two or more datum Interactive Objects. <br>
//! A plane serves as the axis of symmetry between the <br>
//! shapes of which the datums are parts. <br>
public ref class OCAIS_SymmetricRelation : OCAIS_Relation {

protected:
  // dummy constructor;
  OCAIS_SymmetricRelation(OCDummy^) : OCAIS_Relation((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_SymmetricRelation(Handle(AIS_SymmetricRelation)* nativeHandle);

// Methods PUBLIC

//! Constructs an object to display constraints of symmetricity. <br>
//! This object is defined by a tool aSymmTool, a first <br>
//! shape FirstShape, a second shape SecondShape, and a plane aPlane. <br>
//! aPlane serves as the axis of symmetry. <br>
//! aSymmTool is the shape composed of FirstShape <br>
//! SecondShape and aPlane. It may be queried and <br>
//! edited using the functions GetTool and SetTool. <br>
//! The two shapes are typically two edges, two vertices or two points. <br>
OCAIS_SymmetricRelation(OCNaroWrappers::OCTopoDS_Shape^ aSymmTool, OCNaroWrappers::OCTopoDS_Shape^ FirstShape, OCNaroWrappers::OCTopoDS_Shape^ SecondShape, OCNaroWrappers::OCGeom_Plane^ aPlane);

//! Returns true if the symmetric constraint display is movable. <br>
virtual /*instead*/  System::Boolean IsMovable() override;

//! Sets the tool aSymmetricTool composed of a first <br>
//! shape, a second shape, and a plane. <br>
//! This tool is initially created at construction time. <br>
 /*instead*/  void SetTool(OCNaroWrappers::OCTopoDS_Shape^ aSymmetricTool) ;

//! Returns the tool composed of a first shape, a second <br>
//! shape, and a plane. This tool is created at construction time. <br>
 /*instead*/  OCTopoDS_Shape^ GetTool() ;

//! computes the presentation according to a point of view <br>
//!          given by <aProjector>. <br>
//!          To be Used when the associated degenerated Presentations <br>
//!          have been transformed by <aTrsf> which is not a Pure <br>
//!          Translation. The HLR Prs can't be deducted automatically <br>
//!          WARNING :<aTrsf> must be applied <br>
//!           to the object to display before computation  !!! <br>
virtual /*instead*/  void Compute(OCNaroWrappers::OCPrs3d_Projector^ aProjector, OCNaroWrappers::OCGeom_Transformation^ aTrsf, OCNaroWrappers::OCPrs3d_Presentation^ aPresentation) override;

~OCAIS_SymmetricRelation()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
