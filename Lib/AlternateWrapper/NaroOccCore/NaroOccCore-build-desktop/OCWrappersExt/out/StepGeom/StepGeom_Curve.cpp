// File generated by CPPExt (CPP file)
//

#include "StepGeom_Curve.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCStepGeom_Curve::OCStepGeom_Curve(StepGeom_Curve* nativeHandle) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_Curve::OCStepGeom_Curve() : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_Curve();
}


