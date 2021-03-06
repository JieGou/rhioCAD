// File generated by CPPExt (MPV)
//
#ifndef _BRepFill_FaceAndOrder_OCWrappers_HeaderFile
#define _BRepFill_FaceAndOrder_OCWrappers_HeaderFile

// include native header
#include <BRepFill_FaceAndOrder.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Face.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCBRepFill_Filling;
ref class OCTopoDS_Face;


//! A structure containing Face and Order of constraint <br>
public ref class OCBRepFill_FaceAndOrder  {

protected:
  BRepFill_FaceAndOrder* nativeHandle;
  OCBRepFill_FaceAndOrder(OCDummy^) {};

public:
  property BRepFill_FaceAndOrder* Handle
  {
    BRepFill_FaceAndOrder* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepFill_FaceAndOrder(BRepFill_FaceAndOrder* nativeHandle);

// Methods PUBLIC


OCBRepFill_FaceAndOrder();


OCBRepFill_FaceAndOrder(OCNaroWrappers::OCTopoDS_Face^ aFace, OCGeomAbs_Shape anOrder);

~OCBRepFill_FaceAndOrder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
