// File generated by CPPExt (CPP file)
//

#include "MAT_DataMapIteratorOfDataMapOfIntegerBasicElt.h"
#include "../Converter.h"
#include "MAT_BasicElt.h"
#include "../TColStd/TColStd_MapIntegerHasher.h"
#include "MAT_DataMapOfIntegerBasicElt.h"
#include "MAT_DataMapNodeOfDataMapOfIntegerBasicElt.h"


using namespace OCNaroWrappers;

OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt::OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt(MAT_DataMapIteratorOfDataMapOfIntegerBasicElt* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt::OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MAT_DataMapIteratorOfDataMapOfIntegerBasicElt();
}

OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt::OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt(OCNaroWrappers::OCMAT_DataMapOfIntegerBasicElt^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new MAT_DataMapIteratorOfDataMapOfIntegerBasicElt(*((MAT_DataMapOfIntegerBasicElt*)aMap->Handle));
}

 void OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt::Initialize(OCNaroWrappers::OCMAT_DataMapOfIntegerBasicElt^ aMap)
{
  ((MAT_DataMapIteratorOfDataMapOfIntegerBasicElt*)nativeHandle)->Initialize(*((MAT_DataMapOfIntegerBasicElt*)aMap->Handle));
}

 Standard_Integer OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt::Key()
{
  return ((MAT_DataMapIteratorOfDataMapOfIntegerBasicElt*)nativeHandle)->Key();
}

OCMAT_BasicElt^ OCMAT_DataMapIteratorOfDataMapOfIntegerBasicElt::Value()
{
  Handle(MAT_BasicElt) tmp = ((MAT_DataMapIteratorOfDataMapOfIntegerBasicElt*)nativeHandle)->Value();
  return gcnew OCMAT_BasicElt(&tmp);
}


