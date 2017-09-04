// File generated by CPPExt (CPP file)
//

#include "BOPTools_IDMapOfPaveBlockIMapOfPaveBlock.h"
#include "../Converter.h"
#include "BOPTools_PaveBlock.h"
#include "BOPTools_IMapOfPaveBlock.h"
#include "BOPTools_PaveBlockMapHasher.h"
#include "BOPTools_IndexedDataMapNodeOfIDMapOfPaveBlockIMapOfPaveBlock.h"


using namespace OCNaroWrappers;

OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock(BOPTools_IDMapOfPaveBlockIMapOfPaveBlock* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_IDMapOfPaveBlockIMapOfPaveBlock(NbBuckets);
}

OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock^ OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::Assign(OCNaroWrappers::OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock^ Other)
{
  BOPTools_IDMapOfPaveBlockIMapOfPaveBlock* tmp = new BOPTools_IDMapOfPaveBlockIMapOfPaveBlock(0);
  *tmp = ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->Assign(*((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)Other->Handle));
  return gcnew OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock(tmp);
}

 void OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::ReSize(Standard_Integer NbBuckets)
{
  ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::Add(OCNaroWrappers::OCBOPTools_PaveBlock^ K, OCNaroWrappers::OCBOPTools_IMapOfPaveBlock^ I)
{
  return ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->Add(*((BOPTools_PaveBlock*)K->Handle), *((BOPTools_IMapOfPaveBlock*)I->Handle));
}

 void OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::Substitute(Standard_Integer I, OCNaroWrappers::OCBOPTools_PaveBlock^ K, OCNaroWrappers::OCBOPTools_IMapOfPaveBlock^ T)
{
  ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->Substitute(I, *((BOPTools_PaveBlock*)K->Handle), *((BOPTools_IMapOfPaveBlock*)T->Handle));
}

 void OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::RemoveLast()
{
  ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->RemoveLast();
}

 System::Boolean OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::Contains(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  return OCConverter::StandardBooleanToBoolean(((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->Contains(*((BOPTools_PaveBlock*)K->Handle)));
}

OCBOPTools_PaveBlock^ OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::FindKey(Standard_Integer I)
{
  BOPTools_PaveBlock* tmp = new BOPTools_PaveBlock();
  *tmp = ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->FindKey(I);
  return gcnew OCBOPTools_PaveBlock(tmp);
}

OCBOPTools_IMapOfPaveBlock^ OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::FindFromIndex(Standard_Integer I)
{
  BOPTools_IMapOfPaveBlock* tmp = new BOPTools_IMapOfPaveBlock(0);
  *tmp = ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->FindFromIndex(I);
  return gcnew OCBOPTools_IMapOfPaveBlock(tmp);
}

OCBOPTools_IMapOfPaveBlock^ OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::ChangeFromIndex(Standard_Integer I)
{
  BOPTools_IMapOfPaveBlock* tmp = new BOPTools_IMapOfPaveBlock(0);
  *tmp = ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->ChangeFromIndex(I);
  return gcnew OCBOPTools_IMapOfPaveBlock(tmp);
}

 Standard_Integer OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::FindIndex(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  return ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->FindIndex(*((BOPTools_PaveBlock*)K->Handle));
}

OCBOPTools_IMapOfPaveBlock^ OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::FindFromKey(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  BOPTools_IMapOfPaveBlock* tmp = new BOPTools_IMapOfPaveBlock(0);
  *tmp = ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->FindFromKey(*((BOPTools_PaveBlock*)K->Handle));
  return gcnew OCBOPTools_IMapOfPaveBlock(tmp);
}

OCBOPTools_IMapOfPaveBlock^ OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::ChangeFromKey(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  BOPTools_IMapOfPaveBlock* tmp = new BOPTools_IMapOfPaveBlock(0);
  *tmp = ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->ChangeFromKey(*((BOPTools_PaveBlock*)K->Handle));
  return gcnew OCBOPTools_IMapOfPaveBlock(tmp);
}

 Standard_Address OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::FindFromKey1(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  return ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->FindFromKey1(*((BOPTools_PaveBlock*)K->Handle));
}

 Standard_Address OCBOPTools_IDMapOfPaveBlockIMapOfPaveBlock::ChangeFromKey1(OCNaroWrappers::OCBOPTools_PaveBlock^ K)
{
  return ((BOPTools_IDMapOfPaveBlockIMapOfPaveBlock*)nativeHandle)->ChangeFromKey1(*((BOPTools_PaveBlock*)K->Handle));
}

