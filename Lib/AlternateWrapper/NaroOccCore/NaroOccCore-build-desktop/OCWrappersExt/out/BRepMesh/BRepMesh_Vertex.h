// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_Vertex_OCWrappers_HeaderFile
#define _BRepMesh_Vertex_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_Vertex.hxx>
#include "../Converter.h"


#include "../gp/gp_XY.h"
#include "BRepMesh_DegreeOfFreedom.h"


namespace OCNaroWrappers
{

ref class OCgp_XY;



public ref class OCBRepMesh_Vertex  {

protected:
  BRepMesh_Vertex* nativeHandle;
  OCBRepMesh_Vertex(OCDummy^) {};

public:
  property BRepMesh_Vertex* Handle
  {
    BRepMesh_Vertex* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_Vertex(BRepMesh_Vertex* nativeHandle);

// Methods PUBLIC


OCBRepMesh_Vertex();


OCBRepMesh_Vertex(OCNaroWrappers::OCgp_XY^ UV, Standard_Integer Locat3d, OCBRepMesh_DegreeOfFreedom Move);


OCBRepMesh_Vertex(Standard_Real U, Standard_Real V, OCBRepMesh_DegreeOfFreedom Move);


 /*instead*/  void Initialize(OCNaroWrappers::OCgp_XY^ UV, Standard_Integer Locat3d, OCBRepMesh_DegreeOfFreedom Move) ;


 /*instead*/  OCgp_XY^ Coord() ;


 /*instead*/  Standard_Integer Location3d() ;


 /*instead*/  OCBRepMesh_DegreeOfFreedom Movability() ;


 /*instead*/  void SetMovability(OCBRepMesh_DegreeOfFreedom Move) ;


 /*instead*/  Standard_Integer HashCode(Standard_Integer Upper) ;


 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCBRepMesh_Vertex^ Other) ;

~OCBRepMesh_Vertex()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
