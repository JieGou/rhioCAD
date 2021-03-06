// File generated by CPPExt (Transient)
//
#ifndef _Geom_Surface_OCWrappers_HeaderFile
#define _Geom_Surface_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_Surface.hxx>
#include "../Converter.h"

#include "Geom_Geometry.h"

#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCgp_Trsf;
ref class OCgp_GTrsf2d;
ref class OCGeom_Curve;
ref class OCgp_Pnt;
ref class OCgp_Vec;


//! Describes the common behavior of surfaces in 3D <br>
//! space. The Geom package provides many <br>
//! implementations of concrete derived surfaces, such as <br>
//! planes, cylinders, cones, spheres and tori, surfaces of <br>
//! linear extrusion, surfaces of revolution, Bezier and <br>
//! BSpline surfaces, and so on. <br>
//! The key characteristic of these surfaces is that they <br>
//! are parameterized. Geom_Surface demonstrates: <br>
//! - how to work with the parametric equation of a <br>
//!   surface to compute the point of parameters (u, <br>
//!   v), and, at this point, the 1st, 2nd ... Nth derivative, <br>
//! - how to find global information about a surface in <br>
//!   each parametric direction (for example, level of <br>
//!   continuity, whether the surface is closed, its <br>
//!   periodicity, the bounds of the parameters and so on), and <br>
//! - how the parameters change when geometric <br>
//!   transformations are applied to the surface, or the <br>
//!   orientation is modified. <br>
//!   Note that all surfaces must have a geometric <br>
//! continuity, and any surface is at least "C0". Generally, <br>
//! continuity is checked at construction time or when the <br>
//! curve is edited. Where this is not the case, the <br>
//! documentation makes this explicit. <br>
//! Warning <br>
//! The Geom package does not prevent the construction of <br>
//! surfaces with null areas, or surfaces which self-intersect. <br>
public ref class OCGeom_Surface : OCGeom_Geometry {

protected:
  // dummy constructor;
  OCGeom_Surface(OCDummy^) : OCGeom_Geometry((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_Surface(Handle(Geom_Surface)* nativeHandle);

// Methods PUBLIC


//!  Reverses the U direction of parametrization of <me>. <br>
//!  The bounds of the surface are not modified. <br>
//!  A copy of <me> is returned. <br>
 /*instead*/  OCGeom_Surface^ UReversed() ;


//!  Reverses the V direction of parametrization of <me>. <br>
//!  The bounds of the surface are not modified. <br>
//!  A copy of <me> is returned. <br>
 /*instead*/  OCGeom_Surface^ VReversed() ;

//! Computes the  parameters on the  transformed  surface for <br>
//!          the transform of the point of parameters U,V on <me>. <br>
//! <br>
//!          me->Transformed(T)->Value(U',V') <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          me->Value(U,V).Transformed(T) <br>
//! <br>
//!          Where U',V' are the new values of U,V after calling <br>
//! <br>
//!          me->TranformParameters(U,V,T) <br>
//! <br>
//!          This methods does not change <U> and <V> <br>
//! <br>
//!          It  can be redefined.  For  example on  the Plane, <br>
//!          Cylinder, Cone, Revolved and Extruded surfaces. <br>
virtual /*instead*/  void TransformParameters(Standard_Real& U, Standard_Real& V, OCNaroWrappers::OCgp_Trsf^ T) ;

//! Returns a 2d transformation  used to find the  new <br>
//!          parameters of a point on the transformed surface. <br>
//! <br>
//!          me->Transformed(T)->Value(U',V') <br>
//! <br>
//!          is the same point as <br>
//! <br>
//!          me->Value(U,V).Transformed(T) <br>
//! <br>
//!          Where U',V' are  obtained by transforming U,V with <br>
//!          th 2d transformation returned by <br>
//! <br>
//!          me->ParametricTransformation(T) <br>
//! <br>
//!          This methods returns an identity transformation <br>
//! <br>
//!          It  can be redefined.  For  example on  the Plane, <br>
//!          Cylinder, Cone, Revolved and Extruded surfaces. <br>
//! <br>
virtual /*instead*/  OCgp_GTrsf2d^ ParametricTransformation(OCNaroWrappers::OCgp_Trsf^ T) ;

//! Returns the period of this surface in the u <br>
//! parametric direction. <br>//! raises if the surface is not uperiodic. <br>
virtual /*instead*/  Standard_Real UPeriod() ;

//! Returns the period of this surface in the v parametric direction. <br>//! raises if the surface is not vperiodic. <br>
virtual /*instead*/  Standard_Real VPeriod() ;


//!  Computes the point of parameter U on the surface. <br>
//! <br>
//!  It is implemented with D0 <br>
//!  Raised only for an "OffsetSurface" if it is not possible to <br>
//!  compute the current point. <br>
 /*instead*/  OCgp_Pnt^ Value(Standard_Real U, Standard_Real V) ;

~OCGeom_Surface()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
