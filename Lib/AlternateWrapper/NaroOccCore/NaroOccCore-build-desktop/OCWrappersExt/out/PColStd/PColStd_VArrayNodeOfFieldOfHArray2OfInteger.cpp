// File generated by CPPExt (CPP file)
//

#include "PColStd_VArrayNodeOfFieldOfHArray2OfInteger.h"
#include "../Converter.h"
#include "PColStd_FieldOfHArray2OfInteger.h"
#include "PColStd_VArrayTNodeOfFieldOfHArray2OfInteger.h"


using namespace OCNaroWrappers;

OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger::OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger(Handle(PColStd_VArrayNodeOfFieldOfHArray2OfInteger)* nativeHandle) : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PColStd_VArrayNodeOfFieldOfHArray2OfInteger(*nativeHandle);
}

OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger::OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger() : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PColStd_VArrayNodeOfFieldOfHArray2OfInteger(new PColStd_VArrayNodeOfFieldOfHArray2OfInteger());
}

OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger::OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger(Standard_Integer aValue) : OCPStandard_ArrayNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PColStd_VArrayNodeOfFieldOfHArray2OfInteger(new PColStd_VArrayNodeOfFieldOfHArray2OfInteger(aValue));
}

 void OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger::SetValue(Standard_Integer aValue)
{
  (*((Handle_PColStd_VArrayNodeOfFieldOfHArray2OfInteger*)nativeHandle))->SetValue(aValue);
}

 Standard_Address OCPColStd_VArrayNodeOfFieldOfHArray2OfInteger::Value()
{
  return (*((Handle_PColStd_VArrayNodeOfFieldOfHArray2OfInteger*)nativeHandle))->Value();
}

