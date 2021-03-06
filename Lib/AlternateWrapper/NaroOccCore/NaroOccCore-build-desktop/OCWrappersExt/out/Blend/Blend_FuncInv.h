// File generated by CPPExt (MPV)
//
#ifndef _Blend_FuncInv_OCWrappers_HeaderFile
#define _Blend_FuncInv_OCWrappers_HeaderFile

// include native header
#include <Blend_FuncInv.hxx>
#include "../Converter.h"

#include "../math/math_FunctionSetWithDerivatives.h"

#include "../math/math_FunctionSetWithDerivatives.h"


namespace OCNaroWrappers
{

ref class OCmath_Vector;
ref class OCmath_Matrix;
ref class OCAdaptor2d_HCurve2d;


//! Deferred class for a function used to compute a blending <br>
//!          surface between two surfaces, using a guide line. <br>
//!          This function is used to find a solution on a restriction <br>
//!          of one of the surface. <br>
//!          The vector <X> used in Value, Values and Derivatives methods <br>
//!          has to be the vector of the parametric coordinates t,w,U,V <br>
//!          where t is the parameter on the curve on surface, <br>
//!                w is the parameter on the guide line, <br>
//!                U,V are the parametric coordinates of a point on the <br>
//!                partner surface. <br>
public ref class OCBlend_FuncInv  : public OCmath_FunctionSetWithDerivatives {

protected:
  // dummy constructor;
  OCBlend_FuncInv(OCDummy^) : OCmath_FunctionSetWithDerivatives((OCDummy^)nullptr) {};

public:

// constructor from native
OCBlend_FuncInv(Blend_FuncInv* nativeHandle);

// Methods PUBLIC

//! Returns 4. <br>
 /*instead*/  Standard_Integer NbVariables() ;

~OCBlend_FuncInv()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
