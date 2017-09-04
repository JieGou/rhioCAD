// File generated by CPPExt (CPP file)
//

#include "StepGeom_PcurveOrSurface.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "StepGeom_Pcurve.h"
#include "StepGeom_Surface.h"


using namespace OCNaroWrappers;

OCStepGeom_PcurveOrSurface::OCStepGeom_PcurveOrSurface(StepGeom_PcurveOrSurface* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_PcurveOrSurface::OCStepGeom_PcurveOrSurface() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_PcurveOrSurface();
}

 Standard_Integer OCStepGeom_PcurveOrSurface::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepGeom_PcurveOrSurface*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepGeom_Pcurve^ OCStepGeom_PcurveOrSurface::Pcurve()
{
  StepGeom_Pcurve* tmp = new StepGeom_Pcurve();
  *tmp = ((StepGeom_PcurveOrSurface*)nativeHandle)->Pcurve();
  return gcnew OCStepGeom_Pcurve(tmp);
}

OCStepGeom_Surface^ OCStepGeom_PcurveOrSurface::Surface()
{
  StepGeom_Surface* tmp = new StepGeom_Surface();
  *tmp = ((StepGeom_PcurveOrSurface*)nativeHandle)->Surface();
  return gcnew OCStepGeom_Surface(tmp);
}

