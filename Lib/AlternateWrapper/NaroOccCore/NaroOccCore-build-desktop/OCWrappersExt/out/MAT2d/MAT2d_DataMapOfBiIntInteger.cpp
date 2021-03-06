// File generated by CPPExt (CPP file)
//

#include "MAT2d_DataMapOfBiIntInteger.h"
#include "../Converter.h"
#include "MAT2d_BiInt.h"
#include "MAT2d_MapBiIntHasher.h"
#include "MAT2d_DataMapNodeOfDataMapOfBiIntInteger.h"
#include "MAT2d_DataMapIteratorOfDataMapOfBiIntInteger.h"


using namespace OCNaroWrappers;

OCMAT2d_DataMapOfBiIntInteger::OCMAT2d_DataMapOfBiIntInteger(MAT2d_DataMapOfBiIntInteger* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMAT2d_DataMapOfBiIntInteger::OCMAT2d_DataMapOfBiIntInteger(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new MAT2d_DataMapOfBiIntInteger(NbBuckets);
}

OCMAT2d_DataMapOfBiIntInteger^ OCMAT2d_DataMapOfBiIntInteger::Assign(OCNaroWrappers::OCMAT2d_DataMapOfBiIntInteger^ Other)
{
  MAT2d_DataMapOfBiIntInteger* tmp = new MAT2d_DataMapOfBiIntInteger(0);
  *tmp = ((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->Assign(*((MAT2d_DataMapOfBiIntInteger*)Other->Handle));
  return gcnew OCMAT2d_DataMapOfBiIntInteger(tmp);
}

 void OCMAT2d_DataMapOfBiIntInteger::ReSize(Standard_Integer NbBuckets)
{
  ((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCMAT2d_DataMapOfBiIntInteger::Bind(OCNaroWrappers::OCMAT2d_BiInt^ K, Standard_Integer I)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->Bind(*((MAT2d_BiInt*)K->Handle), I));
}

 System::Boolean OCMAT2d_DataMapOfBiIntInteger::IsBound(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->IsBound(*((MAT2d_BiInt*)K->Handle)));
}

 System::Boolean OCMAT2d_DataMapOfBiIntInteger::UnBind(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return OCConverter::StandardBooleanToBoolean(((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->UnBind(*((MAT2d_BiInt*)K->Handle)));
}

 Standard_Integer OCMAT2d_DataMapOfBiIntInteger::Find(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return ((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->Find(*((MAT2d_BiInt*)K->Handle));
}

 Standard_Integer OCMAT2d_DataMapOfBiIntInteger::ChangeFind(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return ((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->ChangeFind(*((MAT2d_BiInt*)K->Handle));
}

 Standard_Address OCMAT2d_DataMapOfBiIntInteger::Find1(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return ((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->Find1(*((MAT2d_BiInt*)K->Handle));
}

 Standard_Address OCMAT2d_DataMapOfBiIntInteger::ChangeFind1(OCNaroWrappers::OCMAT2d_BiInt^ K)
{
  return ((MAT2d_DataMapOfBiIntInteger*)nativeHandle)->ChangeFind1(*((MAT2d_BiInt*)K->Handle));
}


