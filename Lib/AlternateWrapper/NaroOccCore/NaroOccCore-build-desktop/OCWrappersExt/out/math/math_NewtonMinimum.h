// File generated by CPPExt (MPV)
//
#ifndef _math_NewtonMinimum_OCWrappers_HeaderFile
#define _math_NewtonMinimum_OCWrappers_HeaderFile

// include native header
#include <math_NewtonMinimum.hxx>
#include "../Converter.h"


#include "math_Status.h"
#include "math_Vector.h"
#include "math_Matrix.h"


namespace OCNaroWrappers
{

ref class OCmath_MultipleVarFunctionWithHessian;
ref class OCmath_Vector;



public ref class OCmath_NewtonMinimum  {

protected:
  math_NewtonMinimum* nativeHandle;
  OCmath_NewtonMinimum(OCDummy^) {};

public:
  property math_NewtonMinimum* Handle
  {
    math_NewtonMinimum* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_NewtonMinimum(math_NewtonMinimum* nativeHandle);

// Methods PUBLIC

//! -- Given the  starting   point  StartingPoint, <br>
//!            The tolerance  required on  the  solution is given  by <br>
//!            Tolerance. <br>
//!             Iteration are  stopped if <br>
//!             (!WithSingularity)  and H(F(Xi)) is not definite <br>
//!             positive  (if the smaller eigenvalue of H < Convexity) <br>
//!            or IsConverged() returns True for 2 successives Iterations. <br>
//!  Warning: Obsolete Constructor (because IsConverged can not be redefined <br>
//!           with this. ) <br>
OCmath_NewtonMinimum(OCNaroWrappers::OCmath_MultipleVarFunctionWithHessian^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint, Standard_Real Tolerance, Standard_Integer NbIterations, Standard_Real Convexity, System::Boolean WithSingularity);


//!            The tolerance  required on  the  solution is given  by <br>
//!            Tolerance. <br>
//!             Iteration are  stopped if <br>
//!             (!WithSingularity)  and H(F(Xi)) is not definite <br>
//!             positive  (if the smaller eigenvalue of H < Convexity) <br>
//!            or IsConverged() returns True for 2 successives Iterations. <br>
//!  Warning: This constructor do not computation <br>
OCmath_NewtonMinimum(OCNaroWrappers::OCmath_MultipleVarFunctionWithHessian^ F, Standard_Real Tolerance, Standard_Integer NbIterations, Standard_Real Convexity, System::Boolean WithSingularity);


virtual /*instead*/  void Delete() ;

//! Search the solution. <br>
 /*instead*/  void Perform(OCNaroWrappers::OCmath_MultipleVarFunctionWithHessian^ F, OCNaroWrappers::OCmath_Vector^ StartingPoint) ;

//!  This method is  called    at the end  of   each <br>
//!            iteration to  check the convergence : <br>
//!            || Xi+1 - Xi || < Tolerance <br>
//!            or || F(Xi+1) - F(Xi)|| < Tolerance * || F(Xi) || <br>
//!            It can be  redefined in a sub-class to implement a specific  test. <br>
virtual /*instead*/  System::Boolean IsConverged() ;

//! Tests if an error has occured. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Tests if the Function is convexe during optimization. <br>
 /*instead*/  System::Boolean IsConvex() ;

//! returns the location vector of the minimum. <br>
//! Exception NotDone is raised if an error has occured. <br>
 /*instead*/  OCmath_Vector^ Location() ;

//! outputs the location vector of the minimum in Loc. <br>
//! Exception NotDone is raised if an error has occured. <br>
//! Exception DimensionError is raised if the range of Loc is not <br>
//! equal to the range of the StartingPoint. <br>
 /*instead*/  void Location(OCNaroWrappers::OCmath_Vector^ Loc) ;

//! returns the value of the minimum. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
 /*instead*/  Standard_Real Minimum() ;

//! returns the gradient vector at the minimum. <br>
//! Exception NotDone is raised if an error has occured.the minimum was not found. <br>
 /*instead*/  OCmath_Vector^ Gradient() ;

//! outputs the gradient vector at the minimum in Grad. <br>
//! Exception NotDone is raised if the minimum was not found. <br>
//! Exception DimensionError is raised if the range of Grad is not <br>
//! equal to the range of the StartingPoint. <br>
 /*instead*/  void Gradient(OCNaroWrappers::OCmath_Vector^ Grad) ;

//! returns the number of iterations really done in the <br>
//!          calculation of the minimum. <br>
//! The exception NotDone is raised if an error has occured. <br>
 /*instead*/  Standard_Integer NbIterations() ;

//! Prints on the stream o information on the current state <br>
//!          of the object. <br>
//!          Is used to redefine the operator <<. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_NewtonMinimum()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif