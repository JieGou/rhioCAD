// File generated by CPPExt (CPP file)
//

#include "StepGeom_Axis2Placement3d.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_CartesianPoint.h"
#include "StepGeom_Direction.h"


using namespace OCNaroWrappers;

OCStepGeom_Axis2Placement3d::OCStepGeom_Axis2Placement3d(StepGeom_Axis2Placement3d* nativeHandle) : OCStepGeom_Placement((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_Axis2Placement3d::OCStepGeom_Axis2Placement3d() : OCStepGeom_Placement((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_Axis2Placement3d();
}

 void OCStepGeom_Axis2Placement3d::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_CartesianPoint^ aLocation)
{
  ((StepGeom_Axis2Placement3d*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_CartesianPoint*)aLocation->Handle));
}

 void OCStepGeom_Axis2Placement3d::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_CartesianPoint^ aLocation, System::Boolean hasAaxis, OCNaroWrappers::OCStepGeom_Direction^ aAxis, System::Boolean hasArefDirection, OCNaroWrappers::OCStepGeom_Direction^ aRefDirection)
{
  ((StepGeom_Axis2Placement3d*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepGeom_CartesianPoint*)aLocation->Handle), OCConverter::BooleanToStandardBoolean(hasAaxis), *((StepGeom_Direction*)aAxis->Handle), OCConverter::BooleanToStandardBoolean(hasArefDirection), *((StepGeom_Direction*)aRefDirection->Handle));
}

 void OCStepGeom_Axis2Placement3d::SetAxis(OCNaroWrappers::OCStepGeom_Direction^ aAxis)
{
  ((StepGeom_Axis2Placement3d*)nativeHandle)->SetAxis(*((StepGeom_Direction*)aAxis->Handle));
}

 void OCStepGeom_Axis2Placement3d::UnSetAxis()
{
  ((StepGeom_Axis2Placement3d*)nativeHandle)->UnSetAxis();
}

OCStepGeom_Direction^ OCStepGeom_Axis2Placement3d::Axis()
{
  StepGeom_Direction* tmp = new StepGeom_Direction();
  *tmp = ((StepGeom_Axis2Placement3d*)nativeHandle)->Axis();
  return gcnew OCStepGeom_Direction(tmp);
}

 System::Boolean OCStepGeom_Axis2Placement3d::HasAxis()
{
  return OCConverter::StandardBooleanToBoolean(((StepGeom_Axis2Placement3d*)nativeHandle)->HasAxis());
}

 void OCStepGeom_Axis2Placement3d::SetRefDirection(OCNaroWrappers::OCStepGeom_Direction^ aRefDirection)
{
  ((StepGeom_Axis2Placement3d*)nativeHandle)->SetRefDirection(*((StepGeom_Direction*)aRefDirection->Handle));
}

 void OCStepGeom_Axis2Placement3d::UnSetRefDirection()
{
  ((StepGeom_Axis2Placement3d*)nativeHandle)->UnSetRefDirection();
}

OCStepGeom_Direction^ OCStepGeom_Axis2Placement3d::RefDirection()
{
  StepGeom_Direction* tmp = new StepGeom_Direction();
  *tmp = ((StepGeom_Axis2Placement3d*)nativeHandle)->RefDirection();
  return gcnew OCStepGeom_Direction(tmp);
}

 System::Boolean OCStepGeom_Axis2Placement3d::HasRefDirection()
{
  return OCConverter::StandardBooleanToBoolean(((StepGeom_Axis2Placement3d*)nativeHandle)->HasRefDirection());
}


