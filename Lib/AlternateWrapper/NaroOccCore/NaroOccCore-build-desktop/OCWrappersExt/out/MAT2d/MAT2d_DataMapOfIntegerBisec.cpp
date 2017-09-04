// File generated by CPPExt (CPP file)
//

#include "MAT2d_DataMapOfIntegerBisec.h"
#include "../Converter.h"
#include "../Bisector/Bisector_Bisec.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MAT2d_DataMapNodeOfDataMapOfIntegerBisec.h"
#include "MAT2d_DataMapIteratorOfDataMapOfIntegerBisec.h"


using namespace OCNaroWrappers;

OCMAT2d_DataMapOfIntegerBisec::OCMAT2d_DataMapOfIntegerBisec(MAT2d_DataMapOfIntegerBisec* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMAT2d_DataMapOfIntegerBisec::OCMAT2d_DataMapOfIntegerBisec(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new MAT2d_DataMapOfIntegerBisec(NbBuckets);
}

OCMAT2d_DataMapOfIntegerBisec^ OCMAT2d_DataMapOfIntegerBisec::Assign(OCNaroWrappers::OCMAT2d_DataMapOfIntegerBisec^ Other)
{
  MAT2d_DataMapOfIntegerBisec* tmp = new MAT2d_DataMapOfIntegerBisec(0);
  *tmp = ((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->Assign(*((MAT2d_DataMapOfIntegerBisec*)Other->Handle));
  return gcnew OCMAT2d_DataMapOfIntegerBisec(tmp);
}

 void OCMAT2d_DataMapOfIntegerBisec::ReSize(Standard_Integer NbBuckets)
{
  ((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCMAT2d_DataMapOfIntegerBisec::Bind(Standard_Integer K, OCNaroWrappers::OCBisector_Bisec^ I)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->Bind(K, *((Bisector_Bisec*)I->Handle)));
}

 System::Boolean OCMAT2d_DataMapOfIntegerBisec::IsBound(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->IsBound(K));
}

 System::Boolean OCMAT2d_DataMapOfIntegerBisec::UnBind(Standard_Integer K)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->UnBind(K));
}

OCBisector_Bisec^ OCMAT2d_DataMapOfIntegerBisec::Find(Standard_Integer K)
{
  Bisector_Bisec* tmp = new Bisector_Bisec();
  *tmp = ((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->Find(K);
  return gcnew OCBisector_Bisec(tmp);
}

OCBisector_Bisec^ OCMAT2d_DataMapOfIntegerBisec::ChangeFind(Standard_Integer K)
{
  Bisector_Bisec* tmp = new Bisector_Bisec();
  *tmp = ((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->ChangeFind(K);
  return gcnew OCBisector_Bisec(tmp);
}

 Standard_Address OCMAT2d_DataMapOfIntegerBisec::Find1(Standard_Integer K)
{
  return ((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->Find1(K);
}

 Standard_Address OCMAT2d_DataMapOfIntegerBisec::ChangeFind1(Standard_Integer K)
{
  return ((MAT2d_DataMapOfIntegerBisec*)nativeHandle)->ChangeFind1(K);
}

