// File generated by CPPExt (CPP file)
//

#include "StepVisual_PresentationSet.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepVisual_PresentationSet::OCStepVisual_PresentationSet(Handle(StepVisual_PresentationSet)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepVisual_PresentationSet(*nativeHandle);
}

OCStepVisual_PresentationSet::OCStepVisual_PresentationSet() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_StepVisual_PresentationSet(new StepVisual_PresentationSet());
}

