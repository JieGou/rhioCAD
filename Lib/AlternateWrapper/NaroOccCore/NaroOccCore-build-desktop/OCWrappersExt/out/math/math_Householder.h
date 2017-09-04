// File generated by CPPExt (MPV)
//
#ifndef _math_Householder_OCWrappers_HeaderFile
#define _math_Householder_OCWrappers_HeaderFile

// include native header
#include <math_Householder.hxx>
#include "../Converter.h"


#include "math_Matrix.h"


namespace OCNaroWrappers
{

ref class OCmath_Matrix;
ref class OCmath_Vector;


//! This class implements the least square solution of a set of <br>
//!          linear equations of m unknowns (n >= m) using the Householder <br>
//!          method. It solves A.X = B. <br>
//!          This algorithm has more numerical stability than <br>
//!          GaussLeastSquare but is longer. <br>
//!          It must be used if the matrix is singular or nearly singular. <br>
//!          It is about 16% longer than GaussLeastSquare if there is only <br>
//!          one member B to solve. <br>
//!          It is about 30% longer if there are twenty B members to solve. <br>
public ref class OCmath_Householder  {

protected:
  math_Householder* nativeHandle;
  OCmath_Householder(OCDummy^) {};

public:
  property math_Householder* Handle
  {
    math_Householder* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCmath_Householder(math_Householder* nativeHandle);

// Methods PUBLIC

//! Given an input matrix A with n>= m, given an input matrix B <br>
//!          this constructor performs the least square resolution of <br>
//!          the set of linear equations A.X = B for each column of B. <br>
//!          If a column norm is less than EPS, the resolution can't <br>
//!          be done. <br>
//!          Exception DimensionError is raised if the row number of B <br>
//!          is different from the A row number. <br>
OCmath_Householder(OCNaroWrappers::OCmath_Matrix^ A, OCNaroWrappers::OCmath_Matrix^ B, Standard_Real EPS);

//! Given an input matrix A with n>= m, given an input matrix B <br>
//!          this constructor performs the least square resolution of <br>
//!          the set of linear equations A.X = B for each column of B. <br>
//!          If a column norm is less than EPS, the resolution can't <br>
//!          be done. <br>
//!          Exception DimensionError is raised if the row number of B <br>
//!          is different from the A row number. <br>
OCmath_Householder(OCNaroWrappers::OCmath_Matrix^ A, OCNaroWrappers::OCmath_Matrix^ B, Standard_Integer lowerArow, Standard_Integer upperArow, Standard_Integer lowerAcol, Standard_Integer upperAcol, Standard_Real EPS);

//! Given an input matrix A with n>= m, given an input vector B <br>
//!          this constructor performs the least square resolution of <br>
//!          the set of linear equations A.X = B. <br>
//!          If a column norm is less than EPS, the resolution can't <br>
//!          be done. <br>
//!          Exception DimensionError is raised if the length of B <br>
//!          is different from the A row number. <br>
OCmath_Householder(OCNaroWrappers::OCmath_Matrix^ A, OCNaroWrappers::OCmath_Vector^ B, Standard_Real EPS);

//! Returns true if the computations are successful, otherwise returns false. <br>
 /*instead*/  System::Boolean IsDone() ;

//! Given the integer Index, this routine returns the <br>
//!          corresponding least square solution sol. <br>
//!          Exception NotDone is raised if the resolution has not be <br>
//!          done. <br>
//!          Exception OutOfRange is raised if Index <=0 or <br>
//!          Index is more than the number of columns of B. <br>
 /*instead*/  void Value(OCNaroWrappers::OCmath_Vector^ sol, Standard_Integer Index) ;

//! Returns the matrix sol of all the solutions of the system <br>
//!          A.X = B. <br>
//!          Exception NotDone is raised is the resolution has not be <br>
//!          done. <br>
 /*instead*/  OCmath_Matrix^ AllValues() ;

//! Prints informations on the current state of the object. <br>
 /*instead*/  void Dump(Standard_OStream& o) ;

~OCmath_Householder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif