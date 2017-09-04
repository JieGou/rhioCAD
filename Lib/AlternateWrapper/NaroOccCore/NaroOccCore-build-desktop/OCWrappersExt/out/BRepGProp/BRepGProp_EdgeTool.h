// File generated by CPPExt (MPV)
//
#ifndef _BRepGProp_EdgeTool_OCWrappers_HeaderFile
#define _BRepGProp_EdgeTool_OCWrappers_HeaderFile

// include native header
#include <BRepGProp_EdgeTool.hxx>
#include "../Converter.h"


#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCBRepAdaptor_Curve;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCTColStd_Array1OfReal;


//!   Provides  the required  methods    to instantiate <br>
//!  CGProps from GProp with a Curve from BRepAdaptor. <br>
public ref class OCBRepGProp_EdgeTool  {

protected:
  BRepGProp_EdgeTool* nativeHandle;
  OCBRepGProp_EdgeTool(OCDummy^) {};

public:
  property BRepGProp_EdgeTool* Handle
  {
    BRepGProp_EdgeTool* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepGProp_EdgeTool(BRepGProp_EdgeTool* nativeHandle);

// Methods PUBLIC


//!  Returns the parametric value of the start point of <br>
//!  the curve.  The curve is oriented from the start point <br>
//!  to the end point. <br>
static /*instead*/  Standard_Real FirstParameter(OCNaroWrappers::OCBRepAdaptor_Curve^ C) ;


//!  Returns the parametric value of the end point of <br>
//!  the curve.  The curve is oriented from the start point <br>
//!  to the end point. <br>
static /*instead*/  Standard_Real LastParameter(OCNaroWrappers::OCBRepAdaptor_Curve^ C) ;


//!  Returns the number of Gauss points required to do <br>
//!  the integration with a good accuracy using the <br>
//!  Gauss method.  For a polynomial curve of degree n <br>
//!  the maxima of accuracy is obtained with an order <br>
//!  of integration equal to 2*n-1. <br>
static /*instead*/  Standard_Integer IntegrationOrder(OCNaroWrappers::OCBRepAdaptor_Curve^ C) ;

//! Returns the point of parameter U on the loaded curve. <br>
static /*instead*/  OCgp_Pnt^ Value(OCNaroWrappers::OCBRepAdaptor_Curve^ C, Standard_Real U) ;


//!  Returns the point of parameter U and the first derivative <br>
//!  at this point. <br>
static /*instead*/  void D1(OCNaroWrappers::OCBRepAdaptor_Curve^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ V1) ;

//! Returns  the number  of  intervals for  continuity <br>
//!          <S>. May be one if Continuity(me) >= <S> <br>
static /*instead*/  Standard_Integer NbIntervals(OCNaroWrappers::OCBRepAdaptor_Curve^ C, OCGeomAbs_Shape S) ;

//! Stores in <T> the  parameters bounding the intervals <br>
//!          of continuity <S>. <br>
//! <br>
//!          The array must provide  enough room to  accomodate <br>
//!          for the parameters. i.e. T.Length() > NbIntervals() <br>
static /*instead*/  void Intervals(OCNaroWrappers::OCBRepAdaptor_Curve^ C, OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) ;

~OCBRepGProp_EdgeTool()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif