// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_LinkHasherOfDataStructureOfDelaun_OCWrappers_HeaderFile
#define _BRepMesh_LinkHasherOfDataStructureOfDelaun_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_LinkHasherOfDataStructureOfDelaun.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBRepMesh_Edge;



public ref class OCBRepMesh_LinkHasherOfDataStructureOfDelaun  {

protected:
  BRepMesh_LinkHasherOfDataStructureOfDelaun* nativeHandle;
  OCBRepMesh_LinkHasherOfDataStructureOfDelaun(OCDummy^) {};

public:
  property BRepMesh_LinkHasherOfDataStructureOfDelaun* Handle
  {
    BRepMesh_LinkHasherOfDataStructureOfDelaun* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepMesh_LinkHasherOfDataStructureOfDelaun(BRepMesh_LinkHasherOfDataStructureOfDelaun* nativeHandle);

// Methods PUBLIC


static /*instead*/  Standard_Integer HashCode(OCNaroWrappers::OCBRepMesh_Edge^ K, Standard_Integer Upper) ;


static /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCBRepMesh_Edge^ K1, OCNaroWrappers::OCBRepMesh_Edge^ K2) ;

~OCBRepMesh_LinkHasherOfDataStructureOfDelaun()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif