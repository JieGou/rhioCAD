// File generated by CPPExt (CPP file)
//

#include "TColStd_MapIteratorOfMapOfInteger.h"
#include "../Converter.h"
#include "TColStd_MapIntegerHasher.h"
#include "TColStd_MapOfInteger.h"
#include "TColStd_StdMapNodeOfMapOfInteger.h"


using namespace OCNaroWrappers;

OCTColStd_MapIteratorOfMapOfInteger::OCTColStd_MapIteratorOfMapOfInteger(TColStd_MapIteratorOfMapOfInteger* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColStd_MapIteratorOfMapOfInteger::OCTColStd_MapIteratorOfMapOfInteger() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_MapIteratorOfMapOfInteger();
}

OCTColStd_MapIteratorOfMapOfInteger::OCTColStd_MapIteratorOfMapOfInteger(OCNaroWrappers::OCTColStd_MapOfInteger^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TColStd_MapIteratorOfMapOfInteger(*((TColStd_MapOfInteger*)aMap->Handle));
}

 void OCTColStd_MapIteratorOfMapOfInteger::Initialize(OCNaroWrappers::OCTColStd_MapOfInteger^ aMap)
{
  ((TColStd_MapIteratorOfMapOfInteger*)nativeHandle)->Initialize(*((TColStd_MapOfInteger*)aMap->Handle));
}

 Standard_Integer OCTColStd_MapIteratorOfMapOfInteger::Key()
{
  return ((TColStd_MapIteratorOfMapOfInteger*)nativeHandle)->Key();
}

