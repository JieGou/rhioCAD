// File generated by CPPExt (CPP file)
//

#include "StepGeom_BSplineCurve.h"
#include "../Converter.h"
#include "StepGeom_HArray1OfCartesianPoint.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_CartesianPoint.h"


using namespace OCNaroWrappers;

OCStepGeom_BSplineCurve::OCStepGeom_BSplineCurve(StepGeom_BSplineCurve* nativeHandle) : OCStepGeom_BoundedCurve((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_BSplineCurve::OCStepGeom_BSplineCurve() : OCStepGeom_BoundedCurve((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_BSplineCurve();
}

 void OCStepGeom_BSplineCurve::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepGeom_BSplineCurve*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepGeom_BSplineCurve::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aDegree, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineCurveForm aCurveForm, OCStepData_Logical aClosedCurve, OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_BSplineCurve*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aDegree, *((Handle_StepGeom_HArray1OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineCurveForm)aCurveForm, (StepData_Logical)aClosedCurve, (StepData_Logical)aSelfIntersect);
}

 void OCStepGeom_BSplineCurve::SetDegree(Standard_Integer aDegree)
{
  ((StepGeom_BSplineCurve*)nativeHandle)->SetDegree(aDegree);
}

 Standard_Integer OCStepGeom_BSplineCurve::Degree()
{
  return ((StepGeom_BSplineCurve*)nativeHandle)->Degree();
}

 void OCStepGeom_BSplineCurve::SetControlPointsList(OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList)
{
  ((StepGeom_BSplineCurve*)nativeHandle)->SetControlPointsList(*((Handle_StepGeom_HArray1OfCartesianPoint*)aControlPointsList->Handle));
}

OCStepGeom_HArray1OfCartesianPoint^ OCStepGeom_BSplineCurve::ControlPointsList()
{
  Handle(StepGeom_HArray1OfCartesianPoint) tmp = ((StepGeom_BSplineCurve*)nativeHandle)->ControlPointsList();
  return gcnew OCStepGeom_HArray1OfCartesianPoint(&tmp);
}

OCStepGeom_CartesianPoint^ OCStepGeom_BSplineCurve::ControlPointsListValue(Standard_Integer num)
{
  StepGeom_CartesianPoint* tmp = new StepGeom_CartesianPoint();
  *tmp = ((StepGeom_BSplineCurve*)nativeHandle)->ControlPointsListValue(num);
  return gcnew OCStepGeom_CartesianPoint(tmp);
}

 Standard_Integer OCStepGeom_BSplineCurve::NbControlPointsList()
{
  return ((StepGeom_BSplineCurve*)nativeHandle)->NbControlPointsList();
}

 void OCStepGeom_BSplineCurve::SetCurveForm(OCStepGeom_BSplineCurveForm aCurveForm)
{
  ((StepGeom_BSplineCurve*)nativeHandle)->SetCurveForm((StepGeom_BSplineCurveForm)aCurveForm);
}

 OCStepGeom_BSplineCurveForm OCStepGeom_BSplineCurve::CurveForm()
{
  return (OCStepGeom_BSplineCurveForm)(((StepGeom_BSplineCurve*)nativeHandle)->CurveForm());
}

 void OCStepGeom_BSplineCurve::SetClosedCurve(OCStepData_Logical aClosedCurve)
{
  ((StepGeom_BSplineCurve*)nativeHandle)->SetClosedCurve((StepData_Logical)aClosedCurve);
}

 OCStepData_Logical OCStepGeom_BSplineCurve::ClosedCurve()
{
  return (OCStepData_Logical)(((StepGeom_BSplineCurve*)nativeHandle)->ClosedCurve());
}

 void OCStepGeom_BSplineCurve::SetSelfIntersect(OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_BSplineCurve*)nativeHandle)->SetSelfIntersect((StepData_Logical)aSelfIntersect);
}

 OCStepData_Logical OCStepGeom_BSplineCurve::SelfIntersect()
{
  return (OCStepData_Logical)(((StepGeom_BSplineCurve*)nativeHandle)->SelfIntersect());
}


