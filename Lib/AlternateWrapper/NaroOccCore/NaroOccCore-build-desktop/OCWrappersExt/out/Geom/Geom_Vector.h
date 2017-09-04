// File generated by CPPExt (Transient)
//
#ifndef _Geom_Vector_OCWrappers_HeaderFile
#define _Geom_Vector_OCWrappers_HeaderFile

// include the wrapped class
#include <Geom_Vector.hxx>
#include "../Converter.h"

#include "Geom_Geometry.h"

#include "../gp/gp_Vec.h"


namespace OCNaroWrappers
{

ref class OCgp_Vec;


//!  The abstract class Vector describes the common <br>
//! behavior of vectors in 3D space. <br>
//! The Geom package provides two concrete classes of <br>
//! vectors: Geom_Direction (unit vector) and Geom_VectorWithMagnitude. <br>
public ref class OCGeom_Vector : OCGeom_Geometry {

protected:
  // dummy constructor;
  OCGeom_Vector(OCDummy^) : OCGeom_Geometry((OCDummy^)nullptr) {};

public:

// constructor from native
OCGeom_Vector(Handle(Geom_Vector)* nativeHandle);

// Methods PUBLIC

//! Reverses the vector <me>. <br>
 /*instead*/  void Reverse() ;


//!  Returns a copy of <me> reversed. <br>
 /*instead*/  OCGeom_Vector^ Reversed() ;

//! Computes the angular value, in radians, between this <br>
//! vector and vector Other. The result is a value between 0 and Pi. <br>
//! Exceptions <br>
//! gp_VectorWithNullMagnitude if: <br>
//! - the magnitude of this vector is less than or equal to <br>
//!   gp::Resolution(), or <br>
//! - the magnitude of vector Other is less than or equal <br>
//!   to gp::Resolution(). <br>
 /*instead*/  Standard_Real Angle(OCNaroWrappers::OCGeom_Vector^ Other) ;

//! Computes the angular value, in radians, between this <br>
//! vector and vector Other. The result is a value <br>
//! between -Pi and Pi. The vector VRef defines the <br>
//! positive sense of rotation: the angular value is positive <br>
//! if the cross product this ^ Other has the same <br>
//! orientation as VRef (in relation to the plane defined <br>
//! by this vector and vector Other). Otherwise, it is negative. <br>
//! Exceptions <br>
//! Standard_DomainError if this vector, vector Other <br>
//! and vector VRef are coplanar, except if this vector <br>
//! and vector Other are parallel. <br>
//! gp_VectorWithNullMagnitude if the magnitude of <br>
//! this vector, vector Other or vector VRef is less than <br>
//! or equal to gp::Resolution(). <br>
 /*instead*/  Standard_Real AngleWithRef(OCNaroWrappers::OCGeom_Vector^ Other, OCNaroWrappers::OCGeom_Vector^ VRef) ;

//! Returns the coordinates X, Y and Z of this vector. <br>
 /*instead*/  void Coord(Standard_Real& X, Standard_Real& Y, Standard_Real& Z) ;

//! Returns the X coordinate of <me>. <br>
 /*instead*/  Standard_Real X() ;

//! Returns the Y coordinate of <me>. <br>
 /*instead*/  Standard_Real Y() ;

//! Returns the Z coordinate of <me>. <br>
 /*instead*/  Standard_Real Z() ;

//! Computes the scalar product of this vector and vector Other. <br>
 /*instead*/  Standard_Real Dot(OCNaroWrappers::OCGeom_Vector^ Other) ;


//!  Computes the triple scalar product. Returns me . (V1 ^ V2) <br>
 /*instead*/  Standard_Real DotCross(OCNaroWrappers::OCGeom_Vector^ V1, OCNaroWrappers::OCGeom_Vector^ V2) ;

//! Converts this vector into a gp_Vec vector. <br>
 /*instead*/  OCgp_Vec^ Vec() ;

~OCGeom_Vector()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif