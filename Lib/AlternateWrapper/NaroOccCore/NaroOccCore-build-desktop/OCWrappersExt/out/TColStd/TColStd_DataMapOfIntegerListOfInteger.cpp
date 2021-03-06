// File generated by CPPExt (CPP file)
//

#include "TColStd_DataMapOfIntegerListOfInteger.h"
#include "../Converter.h"
#include "TColStd_ListOfInteger.h"
#include "TColStd_MapIntegerHasher.h"
#include "TColStd_DataMapNodeOfDataMapOfIntegerListOfInteger.h"
#include "TColStd_DataMapIteratorOfDataMapOfIntegerListOfInteger.h"


using namespace OCNaroWrappers;

OCTColStd_DataMapOfIntegerListOfInteger::OCTColStd_DataMapOfIntegerListOfInteger(TColStd_DataMapOfIntegerListOfInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_DataMapOfIntegerListOfInteger::OCTColStd_DataMapOfIntegerListOfInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_DataMapOfIntegerListOfInteger(NbBuckets);
}

OCTColStd_DataMapOfIntegerListOfInteger^ OCTColStd_DataMapOfIntegerListOfInteger::Assign(OCNaroWrappers::OCTColStd_DataMapOfIntegerListOfInteger^ Other)
{
  TColStd_DataMapOfIntegerListOfInteger* tmp = new TColStd_DataMapOfIntegerListOfInteger(0);
  *tmp = ((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->Assign(*((TColStd_DataMapOfIntegerListOfInteger*)Other->Handle));
  return gcnew OCTColStd_DataMapOfIntegerListOfInteger(tmp);
}

 void OCTColStd_DataMapOfIntegerListOfInteger::ReSize(Standard_Integer NbBuckets)
{
  ((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCTColStd_DataMapOfIntegerListOfInteger::Bind(Standard_Integer K, OCNaroWrappers::OCTColStd_ListOfInteger^ I)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->Bind(K, *((TColStd_ListOfInteger*)I->Handle)));
}

 System::Boolean OCTColStd_DataMapOfIntegerListOfInteger::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->IsBound(K));
}

 System::Boolean OCTColStd_DataMapOfIntegerListOfInteger::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->UnBind(K));
}

OCTColStd_ListOfInteger^ OCTColStd_DataMapOfIntegerListOfInteger::Find(Standard_Integer K)
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->Find(K);
  return gcnew OCTColStd_ListOfInteger(tmp);
}

OCTColStd_ListOfInteger^ OCTColStd_DataMapOfIntegerListOfInteger::ChangeFind(Standard_Integer K)
{
  TColStd_ListOfInteger* tmp = new TColStd_ListOfInteger();
  *tmp = ((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->ChangeFind(K);
  return gcnew OCTColStd_ListOfInteger(tmp);
}

 Standard_Address OCTColStd_DataMapOfIntegerListOfInteger::Find1(Standard_Integer K)
{
  return ((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->Find1(K);
}

 Standard_Address OCTColStd_DataMapOfIntegerListOfInteger::ChangeFind1(Standard_Integer K)
{
  return ((TColStd_DataMapOfIntegerListOfInteger*)nativeHandle)->ChangeFind1(K);
}


