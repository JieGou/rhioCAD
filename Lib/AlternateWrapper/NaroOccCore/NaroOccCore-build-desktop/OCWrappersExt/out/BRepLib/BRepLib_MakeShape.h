// File generated by CPPExt (MPV)
//
#ifndef _BRepLib_MakeShape_OCWrappers_HeaderFile
#define _BRepLib_MakeShape_OCWrappers_HeaderFile

// include native header
#include <BRepLib_MakeShape.hxx>
#include "../Converter.h"

#include "BRepLib_Command.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_ListOfShape.h"
#include "BRepLib_Command.h"
#include "BRepLib_ShapeModification.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopoDS_Face;
ref class OCTopTools_ListOfShape;
ref class OCTopoDS_Edge;


//! This    is  the  root     class for     all  shape <br>
//!          constructions.  It stores the result. <br>
//! <br>
//!          It  provides deferred methods to trace the history <br>
//!          of sub-shapes. <br>
public ref class OCBRepLib_MakeShape  : public OCBRepLib_Command {

protected:
  // dummy constructor;
  OCBRepLib_MakeShape(OCDummy^) : OCBRepLib_Command((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepLib_MakeShape(BRepLib_MakeShape* nativeHandle);

// Methods PUBLIC


OCBRepLib_MakeShape();

//! This is  called by  Shape().  It does  nothing but <br>
//!          may be redefined. <br>
 /*instead*/  void Build() ;


 /*instead*/  OCTopoDS_Shape^ Shape() ;

//! returns the status of the Face after <br>
//!          the shape creation. <br>
virtual /*instead*/  OCBRepLib_ShapeModification FaceStatus(OCNaroWrappers::OCTopoDS_Face^ F) ;

//! Returns True if the Face generates new topology. <br>
virtual /*instead*/  System::Boolean HasDescendants(OCNaroWrappers::OCTopoDS_Face^ F) ;

//! returns the list of generated Faces. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ DescendantFaces(OCNaroWrappers::OCTopoDS_Face^ F) ;

//! returns the number of surfaces <br>
//!          after the shape creation. <br>
virtual /*instead*/  Standard_Integer NbSurfaces() ;

//! Return the faces created for surface I. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ NewFaces(Standard_Integer I) ;

//! returns a list of the created faces <br>
//!          from the edge <E>. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ FacesFromEdges(OCNaroWrappers::OCTopoDS_Edge^ E) ;

~OCBRepLib_MakeShape()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
