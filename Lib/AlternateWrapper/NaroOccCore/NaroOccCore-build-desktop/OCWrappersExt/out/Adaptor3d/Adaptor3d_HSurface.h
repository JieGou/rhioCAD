// File generated by CPPExt (Transient)
//
#ifndef _Adaptor3d_HSurface_OCWrappers_HeaderFile
#define _Adaptor3d_HSurface_OCWrappers_HeaderFile

// include the wrapped class
#include <Adaptor3d_HSurface.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../GeomAbs/GeomAbs_Shape.h"
#include "../gp/gp_Pnt.h"
#include "../gp/gp_Vec.h"
#include "../GeomAbs/GeomAbs_SurfaceType.h"
#include "../gp/gp_Pln.h"
#include "../gp/gp_Cylinder.h"
#include "../gp/gp_Cone.h"
#include "../gp/gp_Sphere.h"
#include "../gp/gp_Torus.h"
#include "../gp/gp_Ax1.h"
#include "../gp/gp_Dir.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_Surface;
ref class OCTColStd_Array1OfReal;
ref class OCgp_Pnt;
ref class OCgp_Vec;
ref class OCGeom_BezierSurface;
ref class OCGeom_BSplineSurface;
ref class OCAdaptor3d_HCurve;


//! Root class for surfaces manipulated by handles, on <br>
//! which geometric algorithms work. <br>
//! An adapted surface is an interface between the <br>
//! services provided by a surface and those required of <br>
//! the surface by algorithms which use it. <br>
//! A derived concrete class is provided: <br>
//! GeomAdaptor_HSurface for a surface from the Geom package. <br>
public ref class OCAdaptor3d_HSurface : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAdaptor3d_HSurface(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAdaptor3d_HSurface(Handle(Adaptor3d_HSurface)* nativeHandle);

// Methods PUBLIC


 /*instead*/  Standard_Real FirstUParameter() ;


 /*instead*/  Standard_Real LastUParameter() ;


 /*instead*/  Standard_Real FirstVParameter() ;


 /*instead*/  Standard_Real LastVParameter() ;


 /*instead*/  OCGeomAbs_Shape UContinuity() ;


 /*instead*/  OCGeomAbs_Shape VContinuity() ;


 /*instead*/  Standard_Integer NbUIntervals(OCGeomAbs_Shape S) ;


 /*instead*/  Standard_Integer NbVIntervals(OCGeomAbs_Shape S) ;


 /*instead*/  void UIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) ;


 /*instead*/  void VIntervals(OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S) ;


 /*instead*/  OCAdaptor3d_HSurface^ UTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol) ;


 /*instead*/  OCAdaptor3d_HSurface^ VTrim(Standard_Real First, Standard_Real Last, Standard_Real Tol) ;


 /*instead*/  System::Boolean IsUClosed() ;


 /*instead*/  System::Boolean IsVClosed() ;


 /*instead*/  System::Boolean IsUPeriodic() ;


 /*instead*/  Standard_Real UPeriod() ;


 /*instead*/  System::Boolean IsVPeriodic() ;


 /*instead*/  Standard_Real VPeriod() ;


 /*instead*/  OCgp_Pnt^ Value(Standard_Real U, Standard_Real V) ;


 /*instead*/  void D0(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P) ;


 /*instead*/  void D1(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V) ;


 /*instead*/  void D2(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV) ;


 /*instead*/  void D3(Standard_Real U, Standard_Real V, OCNaroWrappers::OCgp_Pnt^ P, OCNaroWrappers::OCgp_Vec^ D1U, OCNaroWrappers::OCgp_Vec^ D1V, OCNaroWrappers::OCgp_Vec^ D2U, OCNaroWrappers::OCgp_Vec^ D2V, OCNaroWrappers::OCgp_Vec^ D2UV, OCNaroWrappers::OCgp_Vec^ D3U, OCNaroWrappers::OCgp_Vec^ D3V, OCNaroWrappers::OCgp_Vec^ D3UUV, OCNaroWrappers::OCgp_Vec^ D3UVV) ;


 /*instead*/  OCgp_Vec^ DN(Standard_Real U, Standard_Real V, Standard_Integer Nu, Standard_Integer Nv) ;


 /*instead*/  Standard_Real UResolution(Standard_Real R3d) ;


 /*instead*/  Standard_Real VResolution(Standard_Real R3d) ;


 /*instead*/  OCGeomAbs_SurfaceType GetType() ;


 /*instead*/  OCgp_Pln^ Plane() ;


 /*instead*/  OCgp_Cylinder^ Cylinder() ;


 /*instead*/  OCgp_Cone^ Cone() ;


 /*instead*/  OCgp_Sphere^ Sphere() ;


 /*instead*/  OCgp_Torus^ Torus() ;


 /*instead*/  Standard_Integer UDegree() ;


 /*instead*/  Standard_Integer NbUPoles() ;


 /*instead*/  Standard_Integer VDegree() ;


 /*instead*/  Standard_Integer NbVPoles() ;


 /*instead*/  Standard_Integer NbUKnots() ;


 /*instead*/  Standard_Integer NbVKnots() ;


 /*instead*/  System::Boolean IsURational() ;


 /*instead*/  System::Boolean IsVRational() ;


 /*instead*/  OCGeom_BezierSurface^ Bezier() ;


 /*instead*/  OCGeom_BSplineSurface^ BSpline() ;


 /*instead*/  OCgp_Ax1^ AxeOfRevolution() ;


 /*instead*/  OCgp_Dir^ Direction() ;


 /*instead*/  OCAdaptor3d_HCurve^ BasisCurve() ;


 /*instead*/  OCAdaptor3d_HSurface^ BasisSurface() ;


 /*instead*/  Standard_Real OffsetValue() ;

~OCAdaptor3d_HSurface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif