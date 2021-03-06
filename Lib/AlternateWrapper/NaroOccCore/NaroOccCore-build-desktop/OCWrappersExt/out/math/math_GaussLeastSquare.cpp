// File generated by CPPExt (CPP file)
//

#include "math_GaussLeastSquare.h"
#include "../Converter.h"
#include "math_Matrix.h"
#include "math_Vector.h"


using namespace OCNaroWrappers;

OCmath_GaussLeastSquare::OCmath_GaussLeastSquare(math_GaussLeastSquare* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_GaussLeastSquare::OCmath_GaussLeastSquare(OCNaroWrappers::OCmath_Matrix^ A, Standard_Real MinPivot) 
{
  nativeHandle = new math_GaussLeastSquare(*((math_Matrix*)A->Handle), MinPivot);
}

 System::Boolean OCmath_GaussLeastSquare::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((math_GaussLeastSquare*)nativeHandle)->IsDone());
}

 void OCmath_GaussLeastSquare::Solve(OCNaroWrappers::OCmath_Vector^ B, OCNaroWrappers::OCmath_Vector^ X)
{
  ((math_GaussLeastSquare*)nativeHandle)->Solve(*((math_Vector*)B->Handle), *((math_Vector*)X->Handle));
}

 void OCmath_GaussLeastSquare::Dump(Standard_OStream& o)
{
  ((math_GaussLeastSquare*)nativeHandle)->Dump(o);
}


