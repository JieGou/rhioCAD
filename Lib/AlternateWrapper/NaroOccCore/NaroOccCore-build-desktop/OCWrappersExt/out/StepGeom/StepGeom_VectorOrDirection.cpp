// File generated by CPPExt (CPP file)
//

#include "StepGeom_VectorOrDirection.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepGeom_Vector.h"
#include "StepGeom_Direction.h"


using namespace OCNaroWrappers;

OCStepGeom_VectorOrDirection::OCStepGeom_VectorOrDirection(StepGeom_VectorOrDirection* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_VectorOrDirection::OCStepGeom_VectorOrDirection() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_VectorOrDirection();
}

 Standard_Integer OCStepGeom_VectorOrDirection::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepGeom_VectorOrDirection*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepGeom_Vector^ OCStepGeom_VectorOrDirection::Vector()
{
  StepGeom_Vector* tmp = new StepGeom_Vector();
  *tmp = ((StepGeom_VectorOrDirection*)nativeHandle)->Vector();
  return gcnew OCStepGeom_Vector(tmp);
}

OCStepGeom_Direction^ OCStepGeom_VectorOrDirection::Direction()
{
  StepGeom_Direction* tmp = new StepGeom_Direction();
  *tmp = ((StepGeom_VectorOrDirection*)nativeHandle)->Direction();
  return gcnew OCStepGeom_Direction(tmp);
}


