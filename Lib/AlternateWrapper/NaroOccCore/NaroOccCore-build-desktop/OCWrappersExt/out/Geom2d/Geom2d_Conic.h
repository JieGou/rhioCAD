// File generated by CPPExt (Transient)
//
#ifndef _Geom2d_Conic_OCWrappers_HeaderFile
#define _Geom2d_Conic_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom2d_Conic.hxx>
#include "../Converter.h"

#include "Geom2d_Curve.h"

#include "../gp/gp_Ax22d.h"
#include "../GeomAbs/GeomAbs_Shape.h"


namespace OCNaroWrappers
{

ref class OCgp_Ax22d;
ref class OCgp_Ax2d;
ref class OCgp_Pnt2d;


//! The abstract class Conic describes the common <br>
//! behavior of conic curves in 2D space and, in <br>
//! particular, their general characteristics. The Geom2d <br>
//! package provides four specific classes of conics: <br>
//! Geom2d_Circle, Geom2d_Ellipse, <br>
//! Geom2d_Hyperbola and Geom2d_Parabola. <br>
//! A conic is positioned in the plane with a coordinate <br>
//! system (gp_Ax22d object), where the origin is the <br>
//! center of the conic (or the apex in case of a parabola). <br>
//! This coordinate system is the local coordinate <br>
//! system of the conic. It gives the conic an explicit <br>
//! orientation, determining the direction in which the <br>
//! parameter increases along the conic. The "X Axis" of <br>
//! the local coordinate system also defines the origin of <br>
//! the parameter of the conic. <br>
public ref class OCGeom2d_Conic : OCGeom2d_Curve {

protected:
  // dummy constructor;
  OCGeom2d_Conic(OCDummy^) : OCGeom2d_Curve((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom2d_Conic(Handle(Geom2d_Conic)* nativeHandle);

// Methods PUBLIC

//! Modifies this conic, redefining its local coordinate system <br>
//! partially, by assigning P as its origin <br>
 /*instead*/  void SetAxis(OCNaroWrappers::OCgp_Ax22d^ A) ;


 /*instead*/  void SetXAxis(OCNaroWrappers::OCgp_Ax2d^ A) ;

//! Assigns the origin and unit vector of axis A to the <br>
//! origin of the local coordinate system of this conic and either: <br>
//! - its "X Direction", or <br>
//! - its "Y Direction". <br>
//! The other unit vector of the local coordinate system <br>
//! of this conic is recomputed normal to A, without <br>
//! changing the orientation of the local coordinate <br>
//! system (right-handed or left-handed). <br>
 /*instead*/  void SetYAxis(OCNaroWrappers::OCgp_Ax2d^ A) ;

//! Modifies this conic, redefining its local coordinate <br>
//! system fully, by assigning A as this coordinate system. <br>
 /*instead*/  void SetLocation(OCNaroWrappers::OCgp_Pnt2d^ P) ;


//!  Returns the "XAxis" of the conic. <br>
//!  This axis defines the origin of parametrization of the conic. <br>
//!  This axis and the "Yaxis" define the local coordinate system <br>
//!  of the conic. <br>
//! -C++: return const& <br>
 /*instead*/  OCgp_Ax2d^ XAxis() ;


//!  Returns the "YAxis" of the conic. <br>
//!  The "YAxis" is perpendicular to the "Xaxis". <br>
 /*instead*/  OCgp_Ax2d^ YAxis() ;


//!  Returns the location point of the conic. <br>
//!  For the circle, the ellipse and the hyperbola it is the center of <br>
//!  the conic. For the parabola it is the vertex of the parabola. <br>
 /*instead*/  OCgp_Pnt2d^ Location() ;


//!  Returns the local coordinates system of the conic. <br>
 /*instead*/  OCgp_Ax22d^ Position() ;


//!  Reverses the direction of parameterization of <me>. <br>
//!  The local coordinate system of the conic is modified. <br>
 /*instead*/  void Reverse() ;

//! Returns GeomAbs_CN which is the global continuity of any conic. <br>
 /*instead*/  OCGeomAbs_Shape Continuity() ;


//!  Returns True, the order of continuity of a conic is infinite. <br>
 /*instead*/  System::Boolean IsCN(Standard_Integer N) ;

~OCGeom2d_Conic()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif