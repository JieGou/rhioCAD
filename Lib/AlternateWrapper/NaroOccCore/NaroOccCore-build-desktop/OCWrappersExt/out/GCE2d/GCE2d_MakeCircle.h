// File generated by CPPExt (MPV)
//
#ifndef _GCE2d_MakeCircle_OCWrappers_HeaderFile
#define _GCE2d_MakeCircle_OCWrappers_HeaderFile

// include native header
#include <GCE2d_MakeCircle.hxx>
#include "../Converter.h"

#include "GCE2d_Root.h"

#include "GCE2d_Root.h"


namespace OCNaroWrappers
{

ref class OCGeom2d_Circle;
ref class OCgp_Circ2d;
ref class OCgp_Ax2d;
ref class OCgp_Ax22d;
ref class OCgp_Pnt2d;


//! This class implements the following algorithms used <br>
//!           to create Cirlec from Geom2d. <br>
//! <br>
//!           * Create a Circle parallel to another and passing <br>
//!             though a point. <br>
//!           * Create a Circle parallel to another at the distance <br>
//!             Dist. <br>
//!           * Create a Circle passing through 3 points. <br>
//!           * Create a Circle with its center and the normal of its <br>
//!             plane and its radius. <br>
//!           * Create a Circle with its axis and radius. <br>
public ref class OCGCE2d_MakeCircle  : public OCGCE2d_Root {

protected:
  // dummy constructor;
  OCGCE2d_MakeCircle(OCDummy^) : OCGCE2d_Root((OCDummy^)nullptr) {};

public:

// constructor from native
OCGCE2d_MakeCircle(GCE2d_MakeCircle* nativeHandle);

// Methods PUBLIC

//!  creates a circle from a non persistent one. <br>
OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Circ2d^ C);


//!  A is the "XAxis" of the circle which defines the origin <br>
//!  of parametrization. <br>
//!  It is not forbidden to create a circle with Radius = 0.0 <br>
//!  The status is "NegativeRadius" if Radius < 0. <br>
OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Ax2d^ A, Standard_Real Radius, System::Boolean Sense);


//!  A is the local coordinate system of the circle which defines <br>
//!  the origin of parametrization. <br>
//!  It is not forbidden to create a circle with Radius = 0.0 <br>
//!  The status is "NegativeRadius" if Radius < 0. <br>
OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Ax22d^ A, Standard_Real Radius);

//! Make a Circle from Geom2d <TheCirc> parallel to another <br>
//!           Circ <Circ> with a distance <Dist>. <br>
//!           If Dist is greater than zero the result is enclosing <br>
//!           the circle <Circ>, else the result is enclosed by the <br>
//!           circle <Circ>. <br>
OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Circ2d^ Circ, Standard_Real Dist);

//! Make a Circle from Geom2d <TheCirc> parallel to another <br>
//!           Circ <Circ> and passing through a Pnt <Point>. <br>
OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Circ2d^ Circ, OCNaroWrappers::OCgp_Pnt2d^ Point);

//! Make a Circ from gp <TheCirc> passing through 3 <br>
//!           Pnt2d <P1>,<P2>,<P3>. <br>
OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Pnt2d^ P1, OCNaroWrappers::OCgp_Pnt2d^ P2, OCNaroWrappers::OCgp_Pnt2d^ P3);

//! Make a Circ from geom2d <TheCirc> by its center an radius. <br>
OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Pnt2d^ P, Standard_Real Radius, System::Boolean Sense);

//! Makes a Circle from geom2d <TheCirc> with its center <br>
//!           <Center> and a point giving the radius. <br>
//!           If Sense is true the local coordinate system of <br>
//!           the solution is direct and non direct in the other case. <br>
//! Warning <br>
//! The MakeCircle class does not prevent the <br>
//! construction of a circle with a null radius. <br>
//! If an error occurs (that is, when IsDone returns <br>
//! false), the Status function returns: <br>
//! -   gce_NegativeRadius if Radius is less than 0.0, or <br>
//! -   gce_IntersectionError if points P1, P2 and P3 <br>
//!   are collinear and the three are not coincident. <br>
OCGCE2d_MakeCircle(OCNaroWrappers::OCgp_Pnt2d^ Center, OCNaroWrappers::OCgp_Pnt2d^ Point, System::Boolean Sense);

//! Returns the constructed circle. <br>
//! Exceptions StdFail_NotDone if no circle is constructed. <br>
 /*instead*/  OCGeom2d_Circle^ Value() ;


 /*instead*/  OCGeom2d_Circle^ Operator() ;

~OCGCE2d_MakeCircle()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif