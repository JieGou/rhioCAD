// File generated by CPPExt (CPP file)
//

#include "MeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger.h"
#include "../Converter.h"
#include "../TColStd/TColStd_MapOfInteger.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MeshDS_DataMapOfIntegerMapOfInteger.h"
#include "MeshDS_DataMapIteratorOfDataMapOfIntegerMapOfInteger.h"


using namespace OCNaroWrappers;

OCMeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger::OCMeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger(Handle(MeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_MeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger(*nativeHandle);
}

OCMeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger::OCMeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger(Standard_Integer K, OCNaroWrappers::OCTColStd_MapOfInteger^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_MeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger(new MeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger(K, *((TColStd_MapOfInteger*)I->Handle), n));
}

 Standard_Integer OCMeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger::Key()
{
  return (*((Handle_MeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger*)nativeHandle))->Key();
}

OCTColStd_MapOfInteger^ OCMeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger::Value()
{
  TColStd_MapOfInteger* tmp = new TColStd_MapOfInteger(0);
  *tmp = (*((Handle_MeshDS_DataMapNodeOfDataMapOfIntegerMapOfInteger*)nativeHandle))->Value();
  return gcnew OCTColStd_MapOfInteger(tmp);
}


