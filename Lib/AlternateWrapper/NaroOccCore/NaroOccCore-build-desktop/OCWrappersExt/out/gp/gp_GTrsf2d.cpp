// File generated by CPPExt (CPP file)
//

#include "gp_GTrsf2d.h"
#include "../Converter.h"
#include "gp_Trsf2d.h"
#include "gp_Mat2d.h"
#include "gp_XY.h"
#include "gp_Ax2d.h"


using namespace OCNaroWrappers;

OCgp_GTrsf2d::OCgp_GTrsf2d(gp_GTrsf2d* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_GTrsf2d::OCgp_GTrsf2d() 
{
  nativeHandle = new gp_GTrsf2d();
}

OCgp_GTrsf2d::OCgp_GTrsf2d(OCNaroWrappers::OCgp_Trsf2d^ T) 
{
  nativeHandle = new gp_GTrsf2d(*((gp_Trsf2d*)T->Handle));
}

OCgp_GTrsf2d::OCgp_GTrsf2d(OCNaroWrappers::OCgp_Mat2d^ M, OCNaroWrappers::OCgp_XY^ V) 
{
  nativeHandle = new gp_GTrsf2d(*((gp_Mat2d*)M->Handle), *((gp_XY*)V->Handle));
}

 void OCgp_GTrsf2d::SetAffinity(OCNaroWrappers::OCgp_Ax2d^ A, Standard_Real Ratio)
{
  ((gp_GTrsf2d*)nativeHandle)->SetAffinity(*((gp_Ax2d*)A->Handle), Ratio);
}

 void OCgp_GTrsf2d::SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Real Value)
{
  ((gp_GTrsf2d*)nativeHandle)->SetValue(Row, Col, Value);
}

 void OCgp_GTrsf2d::SetTranslationPart(OCNaroWrappers::OCgp_XY^ Coord)
{
  ((gp_GTrsf2d*)nativeHandle)->SetTranslationPart(*((gp_XY*)Coord->Handle));
}

 void OCgp_GTrsf2d::SetTrsf2d(OCNaroWrappers::OCgp_Trsf2d^ T)
{
  ((gp_GTrsf2d*)nativeHandle)->SetTrsf2d(*((gp_Trsf2d*)T->Handle));
}

 void OCgp_GTrsf2d::SetVectorialPart(OCNaroWrappers::OCgp_Mat2d^ Matrix)
{
  ((gp_GTrsf2d*)nativeHandle)->SetVectorialPart(*((gp_Mat2d*)Matrix->Handle));
}

 System::Boolean OCgp_GTrsf2d::IsNegative()
{
  return OCConverter::StandardBooleanToBoolean(((gp_GTrsf2d*)nativeHandle)->IsNegative());
}

 System::Boolean OCgp_GTrsf2d::IsSingular()
{
  return OCConverter::StandardBooleanToBoolean(((gp_GTrsf2d*)nativeHandle)->IsSingular());
}

 OCgp_TrsfForm OCgp_GTrsf2d::Form()
{
  return (OCgp_TrsfForm)(((gp_GTrsf2d*)nativeHandle)->Form());
}

OCgp_XY^ OCgp_GTrsf2d::TranslationPart()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((gp_GTrsf2d*)nativeHandle)->TranslationPart();
  return gcnew OCgp_XY(tmp);
}

OCgp_Mat2d^ OCgp_GTrsf2d::VectorialPart()
{
  gp_Mat2d* tmp = new gp_Mat2d();
  *tmp = ((gp_GTrsf2d*)nativeHandle)->VectorialPart();
  return gcnew OCgp_Mat2d(tmp);
}

 Standard_Real OCgp_GTrsf2d::Value(Standard_Integer Row, Standard_Integer Col)
{
  return ((gp_GTrsf2d*)nativeHandle)->Value(Row, Col);
}

 void OCgp_GTrsf2d::Invert()
{
  ((gp_GTrsf2d*)nativeHandle)->Invert();
}

OCgp_GTrsf2d^ OCgp_GTrsf2d::Inverted()
{
  gp_GTrsf2d* tmp = new gp_GTrsf2d();
  *tmp = ((gp_GTrsf2d*)nativeHandle)->Inverted();
  return gcnew OCgp_GTrsf2d(tmp);
}

 void OCgp_GTrsf2d::Multiply(OCNaroWrappers::OCgp_GTrsf2d^ T)
{
  ((gp_GTrsf2d*)nativeHandle)->Multiply(*((gp_GTrsf2d*)T->Handle));
}

OCgp_GTrsf2d^ OCgp_GTrsf2d::Multiplied(OCNaroWrappers::OCgp_GTrsf2d^ T)
{
  gp_GTrsf2d* tmp = new gp_GTrsf2d();
  *tmp = ((gp_GTrsf2d*)nativeHandle)->Multiplied(*((gp_GTrsf2d*)T->Handle));
  return gcnew OCgp_GTrsf2d(tmp);
}

 void OCgp_GTrsf2d::PreMultiply(OCNaroWrappers::OCgp_GTrsf2d^ T)
{
  ((gp_GTrsf2d*)nativeHandle)->PreMultiply(*((gp_GTrsf2d*)T->Handle));
}

 void OCgp_GTrsf2d::Power(Standard_Integer N)
{
  ((gp_GTrsf2d*)nativeHandle)->Power(N);
}

OCgp_GTrsf2d^ OCgp_GTrsf2d::Powered(Standard_Integer N)
{
  gp_GTrsf2d* tmp = new gp_GTrsf2d();
  *tmp = ((gp_GTrsf2d*)nativeHandle)->Powered(N);
  return gcnew OCgp_GTrsf2d(tmp);
}

 void OCgp_GTrsf2d::Transforms(OCNaroWrappers::OCgp_XY^ Coord)
{
  ((gp_GTrsf2d*)nativeHandle)->Transforms(*((gp_XY*)Coord->Handle));
}

OCgp_XY^ OCgp_GTrsf2d::Transformed(OCNaroWrappers::OCgp_XY^ Coord)
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((gp_GTrsf2d*)nativeHandle)->Transformed(*((gp_XY*)Coord->Handle));
  return gcnew OCgp_XY(tmp);
}

 void OCgp_GTrsf2d::Transforms(Standard_Real& X, Standard_Real& Y)
{
  ((gp_GTrsf2d*)nativeHandle)->Transforms(X, Y);
}

OCgp_Trsf2d^ OCgp_GTrsf2d::Trsf2d()
{
  gp_Trsf2d* tmp = new gp_Trsf2d();
  *tmp = ((gp_GTrsf2d*)nativeHandle)->Trsf2d();
  return gcnew OCgp_Trsf2d(tmp);
}


