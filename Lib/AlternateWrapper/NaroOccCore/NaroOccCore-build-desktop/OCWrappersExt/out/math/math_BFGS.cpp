// File generated by CPPExt (CPP file)
//

#include "math_BFGS.h"
#include "../Converter.h"
#include "math_MultipleVarFunctionWithGradient.h"
#include "math_Vector.h"


using namespace OCNaroWrappers;

OCmath_BFGS::OCmath_BFGS(math_BFGS* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCmath_BFGS::OCmath_BFGS(OCNaroWrappers::OCmath_MultipleVarFunctionWithGradient^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint, Standard_Real Tolerance, Standard_Integer NbIterations, Standard_Real ZEPS) 
{
  nativeHandle = new math_BFGS(*((math_MultipleVarFunctionWithGradient*)F->Handle), *((math_Vector*)StartingPoint->Handle), Tolerance, NbIterations, ZEPS);
}

OCmath_BFGS::OCmath_BFGS(OCNaroWrappers::OCmath_MultipleVarFunctionWithGradient^ F, Standard_Real Tolerance, Standard_Integer NbIterations, Standard_Real ZEPS) 
{
  nativeHandle = new math_BFGS(*((math_MultipleVarFunctionWithGradient*)F->Handle), Tolerance, NbIterations, ZEPS);
}

 void OCmath_BFGS::Delete()
{
  ((math_BFGS*)nativeHandle)->Delete();
}

 void OCmath_BFGS::Perform(OCNaroWrappers::OCmath_MultipleVarFunctionWithGradient^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint)
{
  ((math_BFGS*)nativeHandle)->Perform(*((math_MultipleVarFunctionWithGradient*)F->Handle), *((math_Vector*)StartingPoint->Handle));
}

 System::Boolean OCmath_BFGS::IsSolutionReached(OCNaroWrappers::OCmath_MultipleVarFunctionWithGradient^ F)
{
  return OCConverter::StandardBooleanToBoolean(((math_BFGS*)nativeHandle)->IsSolutionReached(*((math_MultipleVarFunctionWithGradient*)F->Handle)));
}

 System::Boolean OCmath_BFGS::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((math_BFGS*)nativeHandle)->IsDone());
}

OCmath_Vector^ OCmath_BFGS::Location()
{
  math_Vector* tmp = new math_Vector(0, 0);
  *tmp = ((math_BFGS*)nativeHandle)->Location();
  return gcnew OCmath_Vector(tmp);
}

 void OCmath_BFGS::Location(OCNaroWrappers::OCmath_Vector^ Loc)
{
  ((math_BFGS*)nativeHandle)->Location(*((math_Vector*)Loc->Handle));
}

 Standard_Real OCmath_BFGS::Minimum()
{
  return ((math_BFGS*)nativeHandle)->Minimum();
}

OCmath_Vector^ OCmath_BFGS::Gradient()
{
  math_Vector* tmp = new math_Vector(0, 0);
  *tmp = ((math_BFGS*)nativeHandle)->Gradient();
  return gcnew OCmath_Vector(tmp);
}

 void OCmath_BFGS::Gradient(OCNaroWrappers::OCmath_Vector^ Grad)
{
  ((math_BFGS*)nativeHandle)->Gradient(*((math_Vector*)Grad->Handle));
}

 Standard_Integer OCmath_BFGS::NbIterations()
{
  return ((math_BFGS*)nativeHandle)->NbIterations();
}

 void OCmath_BFGS::Dump(Standard_OStream& o)
{
  ((math_BFGS*)nativeHandle)->Dump(o);
}

