// File generated by CPPExt (CPP file)
//

#include "MeshVS_Array1OfSequenceOfInteger.h"
#include "../Converter.h"
#include "../TColStd/TColStd_SequenceOfInteger.h"


using namespace OCNaroWrappers;

OCMeshVS_Array1OfSequenceOfInteger::OCMeshVS_Array1OfSequenceOfInteger(MeshVS_Array1OfSequenceOfInteger* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCMeshVS_Array1OfSequenceOfInteger::OCMeshVS_Array1OfSequenceOfInteger(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new MeshVS_Array1OfSequenceOfInteger(Low, Up);
}

OCMeshVS_Array1OfSequenceOfInteger::OCMeshVS_Array1OfSequenceOfInteger(OCNaroWrappers::OCTColStd_SequenceOfInteger^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new MeshVS_Array1OfSequenceOfInteger(*((TColStd_SequenceOfInteger*)Item->Handle), Low, Up);
}

 void OCMeshVS_Array1OfSequenceOfInteger::Init(OCNaroWrappers::OCTColStd_SequenceOfInteger^ V)
{
  ((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->Init(*((TColStd_SequenceOfInteger*)V->Handle));
}

 System::Boolean OCMeshVS_Array1OfSequenceOfInteger::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->IsAllocated());
}

OCMeshVS_Array1OfSequenceOfInteger^ OCMeshVS_Array1OfSequenceOfInteger::Assign(OCNaroWrappers::OCMeshVS_Array1OfSequenceOfInteger^ Other)
{
  MeshVS_Array1OfSequenceOfInteger* tmp = new MeshVS_Array1OfSequenceOfInteger(0, 0);
  *tmp = ((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->Assign(*((MeshVS_Array1OfSequenceOfInteger*)Other->Handle));
  return gcnew OCMeshVS_Array1OfSequenceOfInteger(tmp);
}

 Standard_Integer OCMeshVS_Array1OfSequenceOfInteger::Length()
{
  return ((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->Length();
}

 Standard_Integer OCMeshVS_Array1OfSequenceOfInteger::Lower()
{
  return ((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->Lower();
}

 Standard_Integer OCMeshVS_Array1OfSequenceOfInteger::Upper()
{
  return ((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->Upper();
}

 void OCMeshVS_Array1OfSequenceOfInteger::SetValue(Standard_Integer Index, OCNaroWrappers::OCTColStd_SequenceOfInteger^ Value)
{
  ((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->SetValue(Index, *((TColStd_SequenceOfInteger*)Value->Handle));
}

OCTColStd_SequenceOfInteger^ OCMeshVS_Array1OfSequenceOfInteger::Value(Standard_Integer Index)
{
  TColStd_SequenceOfInteger* tmp = new TColStd_SequenceOfInteger();
  *tmp = ((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->Value(Index);
  return gcnew OCTColStd_SequenceOfInteger(tmp);
}

OCTColStd_SequenceOfInteger^ OCMeshVS_Array1OfSequenceOfInteger::ChangeValue(Standard_Integer Index)
{
  TColStd_SequenceOfInteger* tmp = new TColStd_SequenceOfInteger();
  *tmp = ((MeshVS_Array1OfSequenceOfInteger*)nativeHandle)->ChangeValue(Index);
  return gcnew OCTColStd_SequenceOfInteger(tmp);
}


