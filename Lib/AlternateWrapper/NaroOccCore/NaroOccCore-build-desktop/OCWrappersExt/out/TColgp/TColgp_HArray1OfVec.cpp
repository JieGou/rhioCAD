// File generated by CPPExt (CPP file)
//

#include "TColgp_HArray1OfVec.h"
#include "../Converter.h"
#include "../gp/gp_Vec.h"
#include "TColgp_Array1OfVec.h"


using namespace OCNaroWrappers;

OCTColgp_HArray1OfVec::OCTColgp_HArray1OfVec(Handle(TColgp_HArray1OfVec)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColgp_HArray1OfVec(*nativeHandle);
}

OCTColgp_HArray1OfVec::OCTColgp_HArray1OfVec(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray1OfVec(new TColgp_HArray1OfVec(Low, Up));
}

OCTColgp_HArray1OfVec::OCTColgp_HArray1OfVec(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCgp_Vec^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColgp_HArray1OfVec(new TColgp_HArray1OfVec(Low, Up, *((gp_Vec*)V->Handle)));
}

 void OCTColgp_HArray1OfVec::Init(OCNaroWrappers::OCgp_Vec^ V)
{
  (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->Init(*((gp_Vec*)V->Handle));
}

 Standard_Integer OCTColgp_HArray1OfVec::Length()
{
  return (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->Length();
}

 Standard_Integer OCTColgp_HArray1OfVec::Lower()
{
  return (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->Lower();
}

 Standard_Integer OCTColgp_HArray1OfVec::Upper()
{
  return (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->Upper();
}

 void OCTColgp_HArray1OfVec::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_Vec^ Value)
{
  (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->SetValue(Index, *((gp_Vec*)Value->Handle));
}

OCgp_Vec^ OCTColgp_HArray1OfVec::Value(Standard_Integer Index)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->Value(Index);
  return gcnew OCgp_Vec(tmp);
}

OCgp_Vec^ OCTColgp_HArray1OfVec::ChangeValue(Standard_Integer Index)
{
  gp_Vec* tmp = new gp_Vec();
  *tmp = (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->ChangeValue(Index);
  return gcnew OCgp_Vec(tmp);
}

OCTColgp_Array1OfVec^ OCTColgp_HArray1OfVec::Array1()
{
  TColgp_Array1OfVec* tmp = new TColgp_Array1OfVec(0, 0);
  *tmp = (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->Array1();
  return gcnew OCTColgp_Array1OfVec(tmp);
}

OCTColgp_Array1OfVec^ OCTColgp_HArray1OfVec::ChangeArray1()
{
  TColgp_Array1OfVec* tmp = new TColgp_Array1OfVec(0, 0);
  *tmp = (*((Handle_TColgp_HArray1OfVec*)nativeHandle))->ChangeArray1();
  return gcnew OCTColgp_Array1OfVec(tmp);
}

