// File generated by CPPExt (CPP file)
//

#include "StepShape_FacetedBrep.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepShape_FacetedBrep::OCStepShape_FacetedBrep(StepShape_FacetedBrep* nativeHandle) : OCStepShape_ManifoldSolidBrep((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_FacetedBrep::OCStepShape_FacetedBrep() : OCStepShape_ManifoldSolidBrep((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_FacetedBrep();
}


