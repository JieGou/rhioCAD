// File generated by CPPExt (CPP file)
//

#include "TColStd_HArray1OfBoolean.h"
#include "../Converter.h"
#include "TColStd_Array1OfBoolean.h"


using namespace OCNaroWrappers;

OCTColStd_HArray1OfBoolean::OCTColStd_HArray1OfBoolean(Handle(TColStd_HArray1OfBoolean)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TColStd_HArray1OfBoolean(*nativeHandle);
}

OCTColStd_HArray1OfBoolean::OCTColStd_HArray1OfBoolean(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_HArray1OfBoolean(new TColStd_HArray1OfBoolean(Low, Up));
}

OCTColStd_HArray1OfBoolean::OCTColStd_HArray1OfBoolean(Standard_Integer Low, Standard_Integer Up, System::Boolean V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TColStd_HArray1OfBoolean(new TColStd_HArray1OfBoolean(Low, Up, OCConverter::BooleanToStandardBoolean(V)));
}

 void OCTColStd_HArray1OfBoolean::Init(System::Boolean V)
{
  (*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->Init(OCConverter::BooleanToStandardBoolean(V));
}

 Standard_Integer OCTColStd_HArray1OfBoolean::Length()
{
  return (*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->Length();
}

 Standard_Integer OCTColStd_HArray1OfBoolean::Lower()
{
  return (*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->Lower();
}

 Standard_Integer OCTColStd_HArray1OfBoolean::Upper()
{
  return (*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->Upper();
}

 void OCTColStd_HArray1OfBoolean::SetValue(Standard_Integer Index, System::Boolean Value)
{
  (*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->SetValue(Index, OCConverter::BooleanToStandardBoolean(Value));
}

 System::Boolean OCTColStd_HArray1OfBoolean::Value(Standard_Integer Index)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->Value(Index));
}

 System::Boolean OCTColStd_HArray1OfBoolean::ChangeValue(Standard_Integer Index)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->ChangeValue(Index));
}

OCTColStd_Array1OfBoolean^ OCTColStd_HArray1OfBoolean::Array1()
{
  TColStd_Array1OfBoolean* tmp = new TColStd_Array1OfBoolean(0, 0);
  *tmp = (*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->Array1();
  return gcnew OCTColStd_Array1OfBoolean(tmp);
}

OCTColStd_Array1OfBoolean^ OCTColStd_HArray1OfBoolean::ChangeArray1()
{
  TColStd_Array1OfBoolean* tmp = new TColStd_Array1OfBoolean(0, 0);
  *tmp = (*((Handle_TColStd_HArray1OfBoolean*)nativeHandle))->ChangeArray1();
  return gcnew OCTColStd_Array1OfBoolean(tmp);
}


