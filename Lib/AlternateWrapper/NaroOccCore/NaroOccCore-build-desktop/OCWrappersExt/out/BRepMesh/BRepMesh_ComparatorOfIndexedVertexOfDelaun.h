// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_ComparatorOfIndexedVertexOfDelaun_OCWrappers_HeaderFile
#define _BRepMesh_ComparatorOfIndexedVertexOfDelaun_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_ComparatorOfIndexedVertexOfDelaun.hxx>
#include "../Converter.h"


#include "../gp/gp_XY.h"


namespace OCNaroWrappers
{

ref class OCBRepMesh_DataStructureOfDelaun;
ref class OCgp_XY;


//! Sort two point in a given direction. <br>
public ref class OCBRepMesh_ComparatorOfIndexedVertexOfDelaun  {

protected:
  BRepMesh_ComparatorOfIndexedVertexOfDelaun* nativeHandle;
  OCBRepMesh_ComparatorOfIndexedVertexOfDelaun(OCDummy^) {};

public:
  property BRepMesh_ComparatorOfIndexedVertexOfDelaun* Handle
  {
    BRepMesh_ComparatorOfIndexedVertexOfDelaun* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_ComparatorOfIndexedVertexOfDelaun(BRepMesh_ComparatorOfIndexedVertexOfDelaun* nativeHandle);

// Methods PUBLIC


OCBRepMesh_ComparatorOfIndexedVertexOfDelaun(OCNaroWrappers::OCgp_XY^ theDir, Standard_Real TheTol, OCNaroWrappers::OCBRepMesh_DataStructureOfDelaun^ HDS);

//! returns True if <Left> is lower than <Right> <br>
 /*instead*/  System::Boolean IsLower(Standard_Integer Left, Standard_Integer Right) ;

//! returns True if <Left> is greater than <Right> <br>
 /*instead*/  System::Boolean IsGreater(Standard_Integer Left, Standard_Integer Right) ;

//! returns True when <Right> and <Left> are equal. <br>
 /*instead*/  System::Boolean IsEqual(Standard_Integer Left, Standard_Integer Right) ;

~OCBRepMesh_ComparatorOfIndexedVertexOfDelaun()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
