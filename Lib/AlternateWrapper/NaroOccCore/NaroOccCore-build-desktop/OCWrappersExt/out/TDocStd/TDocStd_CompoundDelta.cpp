// File generated by CPPExt (CPP file)
//

#include "TDocStd_CompoundDelta.h"
#include "../Converter.h"
#include "TDocStd_Document.h"


using namespace OCNaroWrappers;

OCTDocStd_CompoundDelta::OCTDocStd_CompoundDelta(Handle(TDocStd_CompoundDelta)* nativeHandle) : OCTDF_Delta((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDocStd_CompoundDelta(*nativeHandle);
}

OCTDocStd_CompoundDelta::OCTDocStd_CompoundDelta() : OCTDF_Delta((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDocStd_CompoundDelta(new TDocStd_CompoundDelta());
}


