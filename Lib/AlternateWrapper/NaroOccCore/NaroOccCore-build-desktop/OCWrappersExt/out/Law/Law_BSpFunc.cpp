// File generated by CPPExt (CPP file)
//

#include "Law_BSpFunc.h"
#include "../Converter.h"
#include "Law_BSpline.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "Law_Function.h"


using namespace OCNaroWrappers;

OCLaw_BSpFunc::OCLaw_BSpFunc(Handle(Law_BSpFunc)* nativeHandle) : OCLaw_Function((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Law_BSpFunc(*nativeHandle);
}

OCLaw_BSpFunc::OCLaw_BSpFunc() : OCLaw_Function((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Law_BSpFunc(new Law_BSpFunc());
}

OCLaw_BSpFunc::OCLaw_BSpFunc(OCNaroWrappers::OCLaw_BSpline^ C, Standard_Real First, Standard_Real Last) : OCLaw_Function((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Law_BSpFunc(new Law_BSpFunc(*((Handle_Law_BSpline*)C->Handle), First, Last));
}

 OCGeomAbs_Shape OCLaw_BSpFunc::Continuity()
{
  return (OCGeomAbs_Shape)((*((Handle_Law_BSpFunc*)nativeHandle))->Continuity());
}

 Standard_Integer OCLaw_BSpFunc::NbIntervals(OCGeomAbs_Shape S)
{
  return (*((Handle_Law_BSpFunc*)nativeHandle))->NbIntervals((GeomAbs_Shape)S);
}

 void OCLaw_BSpFunc::Intervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  (*((Handle_Law_BSpFunc*)nativeHandle))->Intervals(*((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 Standard_Real OCLaw_BSpFunc::Value(Standard_Real X)
{
  return (*((Handle_Law_BSpFunc*)nativeHandle))->Value(X);
}

 void OCLaw_BSpFunc::D1(Standard_Real X, Standard_Real& F, Standard_Real& D)
{
  (*((Handle_Law_BSpFunc*)nativeHandle))->D1(X, F, D);
}

 void OCLaw_BSpFunc::D2(Standard_Real X, Standard_Real& F, Standard_Real& D, Standard_Real& D2)
{
  (*((Handle_Law_BSpFunc*)nativeHandle))->D2(X, F, D, D2);
}

OCLaw_Function^ OCLaw_BSpFunc::Trim(Standard_Real PFirst, Standard_Real PLast, Standard_Real Tol)
{
  Handle(Law_Function) tmp = (*((Handle_Law_BSpFunc*)nativeHandle))->Trim(PFirst, PLast, Tol);
  return gcnew OCLaw_Function(&tmp);
}

 void OCLaw_BSpFunc::Bounds(Standard_Real& PFirst, Standard_Real& PLast)
{
  (*((Handle_Law_BSpFunc*)nativeHandle))->Bounds(PFirst, PLast);
}

OCLaw_BSpline^ OCLaw_BSpFunc::Curve()
{
  Handle(Law_BSpline) tmp = (*((Handle_Law_BSpFunc*)nativeHandle))->Curve();
  return gcnew OCLaw_BSpline(&tmp);
}

 void OCLaw_BSpFunc::SetCurve(OCNaroWrappers::OCLaw_BSpline^ C)
{
  (*((Handle_Law_BSpFunc*)nativeHandle))->SetCurve(*((Handle_Law_BSpline*)C->Handle));
}


