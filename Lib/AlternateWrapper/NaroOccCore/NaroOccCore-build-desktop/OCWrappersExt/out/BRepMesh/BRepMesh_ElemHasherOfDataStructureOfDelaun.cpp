// File generated by CPPExt (CPP file)
//

#include "BRepMesh_ElemHasherOfDataStructureOfDelaun.h"
#include "../Converter.h"
#include "BRepMesh_Triangle.h"


using namespace OCNaroWrappers;

OCBRepMesh_ElemHasherOfDataStructureOfDelaun::OCBRepMesh_ElemHasherOfDataStructureOfDelaun(BRepMesh_ElemHasherOfDataStructureOfDelaun* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCBRepMesh_ElemHasherOfDataStructureOfDelaun::HashCode(OCNaroWrappers::OCBRepMesh_Triangle^ K, Standard_Integer Upper)
{
  return BRepMesh_ElemHasherOfDataStructureOfDelaun::HashCode(*((BRepMesh_Triangle*)K->Handle), Upper);
}

 System::Boolean OCBRepMesh_ElemHasherOfDataStructureOfDelaun::IsEqual(OCNaroWrappers::OCBRepMesh_Triangle^ K1, OCNaroWrappers::OCBRepMesh_Triangle^ K2)
{
  return OCConverter::StandardBooleanToBoolean(BRepMesh_ElemHasherOfDataStructureOfDelaun::IsEqual(*((BRepMesh_Triangle*)K1->Handle), *((BRepMesh_Triangle*)K2->Handle)));
}


