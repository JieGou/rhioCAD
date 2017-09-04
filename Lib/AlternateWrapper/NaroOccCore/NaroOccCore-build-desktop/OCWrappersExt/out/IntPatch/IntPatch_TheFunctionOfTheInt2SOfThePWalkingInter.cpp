// File generated by CPPExt (CPP file)
//

#include "IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../Adaptor3d/Adaptor3d_HSurfaceTool.h"
#include "../math/math_Vector.h"
#include "../math/math_Matrix.h"
#include "../TColStd/TColStd_Array1OfReal.h"


using namespace OCNaroWrappers;

OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter(IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter* nativeHandle) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter() : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter();
}

OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter(OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr)

{
  nativeHandle = new IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter(*((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle));
}

 Standard_Integer OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::NbVariables()
{
  return ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->NbVariables();
}

 Standard_Integer OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::NbEquations()
{
  return ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->NbEquations();
}

 System::Boolean OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::Value(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F)
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->Value(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle)));
}

 System::Boolean OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::Derivatives(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->Derivatives(*((math_Vector*)X->Handle), *((math_Matrix*)D->Handle)));
}

 System::Boolean OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::Values(OCNaroWrappers::OCmath_Vector^ X, OCNaroWrappers::OCmath_Vector^ F, OCNaroWrappers::OCmath_Matrix^ D)
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->Values(*((math_Vector*)X->Handle), *((math_Vector*)F->Handle), *((math_Matrix*)D->Handle)));
}

 void OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::ComputeParameters(OCIntImp_ConstIsoparametric ChoixIso, OCNaroWrappers::OCTColStd_Array1OfReal^ Param, OCNaroWrappers::OCmath_Vector^ UVap, OCNaroWrappers::OCmath_Vector^ BornInf, OCNaroWrappers::OCmath_Vector^ BornSup, OCNaroWrappers::OCmath_Vector^ Tolerance)
{
  ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->ComputeParameters((IntImp_ConstIsoparametric)ChoixIso, *((TColStd_Array1OfReal*)Param->Handle), *((math_Vector*)UVap->Handle), *((math_Vector*)BornInf->Handle), *((math_Vector*)BornSup->Handle), *((math_Vector*)Tolerance->Handle));
}

 Standard_Real OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::Root()
{
  return ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->Root();
}

OCgp_Pnt^ OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::Point()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->Point();
  return gcnew OCgp_Pnt(tmp);
}

 System::Boolean OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::IsTangent(OCNaroWrappers::OCmath_Vector^ UVap, OCNaroWrappers::OCTColStd_Array1OfReal^ Param, OCIntImp_ConstIsoparametric& BestChoix)
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->IsTangent(*((math_Vector*)UVap->Handle), *((TColStd_Array1OfReal*)Param->Handle), (IntImp_ConstIsoparametric&)BestChoix));
}

OCgp_Dir^ OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::Direction()
{
  gp_Dir* tmp = new gp_Dir();
  *tmp = ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->Direction();
  return gcnew OCgp_Dir(tmp);
}

OCgp_Dir2d^ OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::DirectionOnS1()
{
  gp_Dir2d* tmp = new gp_Dir2d();
  *tmp = ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->DirectionOnS1();
  return gcnew OCgp_Dir2d(tmp);
}

OCgp_Dir2d^ OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::DirectionOnS2()
{
  gp_Dir2d* tmp = new gp_Dir2d();
  *tmp = ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->DirectionOnS2();
  return gcnew OCgp_Dir2d(tmp);
}

OCAdaptor3d_HSurface^ OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::AuxillarSurface1()
{
  Handle(Adaptor3d_HSurface) tmp = ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->AuxillarSurface1();
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

OCAdaptor3d_HSurface^ OCIntPatch_TheFunctionOfTheInt2SOfThePWalkingInter::AuxillarSurface2()
{
  Handle(Adaptor3d_HSurface) tmp = ((IntPatch_TheFunctionOfTheInt2SOfThePWalkingInter*)nativeHandle)->AuxillarSurface2();
  return gcnew OCAdaptor3d_HSurface(&tmp);
}

