// File generated by CPPExt (Transient)
//
#ifndef _FEmTool_Curve_OCWrappers_HeaderFile
#define _FEmTool_Curve_OCWrappers_HeaderFile

// include the wrapped class
#include <FEmTool_Curve.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_Array1OfInteger.h"
#include "../TColStd/TColStd_Array1OfReal.h"


namespace OCNaroWrappers
{

ref class OCPLib_Base;
ref class OCTColStd_HArray1OfReal;
ref class OCTColStd_Array1OfReal;
ref class OCTColStd_Array2OfReal;


//!  Curve defined by Polynomial Elements. <br>
public ref class OCFEmTool_Curve : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCFEmTool_Curve(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCFEmTool_Curve(Handle(FEmTool_Curve)* nativeHandle);

// Methods PUBLIC


OCFEmTool_Curve(Standard_Integer Dimension, Standard_Integer NbElements, OCNaroWrappers::OCPLib_Base^ TheBase, Standard_Real Tolerance);


 /*instead*/  OCTColStd_Array1OfReal^ Knots() ;


 /*instead*/  void SetElement(Standard_Integer IndexOfElement, OCNaroWrappers::OCTColStd_Array2OfReal^ Coeffs) ;


 /*instead*/  void D0(Standard_Real U, OCNaroWrappers::OCTColStd_Array1OfReal^ Pnt) ;


 /*instead*/  void D1(Standard_Real U, OCNaroWrappers::OCTColStd_Array1OfReal^ Vec) ;


 /*instead*/  void D2(Standard_Real U, OCNaroWrappers::OCTColStd_Array1OfReal^ Vec) ;


 /*instead*/  void Length(Standard_Real FirstU, Standard_Real LastU, Standard_Real& Length) ;


 /*instead*/  void GetElement(Standard_Integer IndexOfElement, OCNaroWrappers::OCTColStd_Array2OfReal^ Coeffs) ;

//!  returns  coefficients  of  all  elements  in  canonical  base. <br>
 /*instead*/  void GetPolynom(OCNaroWrappers::OCTColStd_Array1OfReal^ Coeffs) ;


 /*instead*/  Standard_Integer NbElements() ;


 /*instead*/  Standard_Integer Dimension() ;


 /*instead*/  OCPLib_Base^ Base() ;


 /*instead*/  Standard_Integer Degree(Standard_Integer IndexOfElement) ;


 /*instead*/  void SetDegree(Standard_Integer IndexOfElement, Standard_Integer Degree) ;


 /*instead*/  void ReduceDegree(Standard_Integer IndexOfElement, Standard_Real Tol, Standard_Integer& NewDegree, Standard_Real& MaxError) ;

~OCFEmTool_Curve()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif