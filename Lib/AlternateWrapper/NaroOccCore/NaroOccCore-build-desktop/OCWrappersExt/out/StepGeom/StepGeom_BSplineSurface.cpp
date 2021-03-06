// File generated by CPPExt (CPP file)
//

#include "StepGeom_BSplineSurface.h"
#include "../Converter.h"
#include "StepGeom_HArray2OfCartesianPoint.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepGeom_CartesianPoint.h"


using namespace OCNaroWrappers;

OCStepGeom_BSplineSurface::OCStepGeom_BSplineSurface(StepGeom_BSplineSurface* nativeHandle) : OCStepGeom_BoundedSurface((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepGeom_BSplineSurface::OCStepGeom_BSplineSurface() : OCStepGeom_BoundedSurface((OCDummy^)nullptr)

{
  nativeHandle = new StepGeom_BSplineSurface();
}

 void OCStepGeom_BSplineSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepGeom_BSplineSurface::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aUDegree, Standard_Integer aVDegree, OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineSurfaceForm aSurfaceForm, OCStepData_Logical aUClosed, OCStepData_Logical aVClosed, OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), aUDegree, aVDegree, *((Handle_StepGeom_HArray2OfCartesianPoint*)aControlPointsList->Handle), (StepGeom_BSplineSurfaceForm)aSurfaceForm, (StepData_Logical)aUClosed, (StepData_Logical)aVClosed, (StepData_Logical)aSelfIntersect);
}

 void OCStepGeom_BSplineSurface::SetUDegree(Standard_Integer aUDegree)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->SetUDegree(aUDegree);
}

 Standard_Integer OCStepGeom_BSplineSurface::UDegree()
{
  return ((StepGeom_BSplineSurface*)nativeHandle)->UDegree();
}

 void OCStepGeom_BSplineSurface::SetVDegree(Standard_Integer aVDegree)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->SetVDegree(aVDegree);
}

 Standard_Integer OCStepGeom_BSplineSurface::VDegree()
{
  return ((StepGeom_BSplineSurface*)nativeHandle)->VDegree();
}

 void OCStepGeom_BSplineSurface::SetControlPointsList(OCNaroWrappers::OCStepGeom_HArray2OfCartesianPoint^ aControlPointsList)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->SetControlPointsList(*((Handle_StepGeom_HArray2OfCartesianPoint*)aControlPointsList->Handle));
}

OCStepGeom_HArray2OfCartesianPoint^ OCStepGeom_BSplineSurface::ControlPointsList()
{
  Handle(StepGeom_HArray2OfCartesianPoint) tmp = ((StepGeom_BSplineSurface*)nativeHandle)->ControlPointsList();
  return gcnew OCStepGeom_HArray2OfCartesianPoint(&tmp);
}

OCStepGeom_CartesianPoint^ OCStepGeom_BSplineSurface::ControlPointsListValue(Standard_Integer num1, Standard_Integer num2)
{
  StepGeom_CartesianPoint* tmp = new StepGeom_CartesianPoint();
  *tmp = ((StepGeom_BSplineSurface*)nativeHandle)->ControlPointsListValue(num1, num2);
  return gcnew OCStepGeom_CartesianPoint(tmp);
}

 Standard_Integer OCStepGeom_BSplineSurface::NbControlPointsListI()
{
  return ((StepGeom_BSplineSurface*)nativeHandle)->NbControlPointsListI();
}

 Standard_Integer OCStepGeom_BSplineSurface::NbControlPointsListJ()
{
  return ((StepGeom_BSplineSurface*)nativeHandle)->NbControlPointsListJ();
}

 void OCStepGeom_BSplineSurface::SetSurfaceForm(OCStepGeom_BSplineSurfaceForm aSurfaceForm)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->SetSurfaceForm((StepGeom_BSplineSurfaceForm)aSurfaceForm);
}

 OCStepGeom_BSplineSurfaceForm OCStepGeom_BSplineSurface::SurfaceForm()
{
  return (OCStepGeom_BSplineSurfaceForm)(((StepGeom_BSplineSurface*)nativeHandle)->SurfaceForm());
}

 void OCStepGeom_BSplineSurface::SetUClosed(OCStepData_Logical aUClosed)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->SetUClosed((StepData_Logical)aUClosed);
}

 OCStepData_Logical OCStepGeom_BSplineSurface::UClosed()
{
  return (OCStepData_Logical)(((StepGeom_BSplineSurface*)nativeHandle)->UClosed());
}

 void OCStepGeom_BSplineSurface::SetVClosed(OCStepData_Logical aVClosed)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->SetVClosed((StepData_Logical)aVClosed);
}

 OCStepData_Logical OCStepGeom_BSplineSurface::VClosed()
{
  return (OCStepData_Logical)(((StepGeom_BSplineSurface*)nativeHandle)->VClosed());
}

 void OCStepGeom_BSplineSurface::SetSelfIntersect(OCStepData_Logical aSelfIntersect)
{
  ((StepGeom_BSplineSurface*)nativeHandle)->SetSelfIntersect((StepData_Logical)aSelfIntersect);
}

 OCStepData_Logical OCStepGeom_BSplineSurface::SelfIntersect()
{
  return (OCStepData_Logical)(((StepGeom_BSplineSurface*)nativeHandle)->SelfIntersect());
}


