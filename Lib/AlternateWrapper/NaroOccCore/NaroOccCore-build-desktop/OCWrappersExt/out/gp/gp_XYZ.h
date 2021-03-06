// File generated by CPPExt (MPV)
//
#ifndef _gp_XYZ_OCWrappers_HeaderFile
#define _gp_XYZ_OCWrappers_HeaderFile

// include native header
#include <gp_XYZ.hxx>
#include "../Converter.h"


#include "../Standard/Standard_Storable.h"


namespace OCNaroWrappers
{

ref class OCgp_Mat;



//!  This class describes a cartesian coordinate entity in <br>
//!  3D space {X,Y,Z}. This entity is used for algebraic <br>
//!  calculation. This entity can be transformed <br>
//!  with a "Trsf" or a  "GTrsf" from package "gp". <br>
//! It is used in vectorial computations or for holding this type <br>
//! of information in data structures. <br>
public ref class OCgp_XYZ  {

protected:
  gp_XYZ* nativeHandle;
  OCgp_XYZ(OCDummy^) {};

public:
  property gp_XYZ* Handle
  {
    gp_XYZ* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCgp_XYZ(gp_XYZ* nativeHandle);

// Methods PUBLIC

//! Creates an XYZ object with zero co-ordinates (0,0,0) <br>
OCgp_XYZ();

//! creates an XYZ with given coordinates <br>
OCgp_XYZ(Standard_Real X, Standard_Real Y, Standard_Real Z);

//! For this XYZ object, assigns <br>
//!   the values X, Y and Z to its three coordinates <br>
 /*instead*/  void SetCoord(Standard_Real X, Standard_Real Y, Standard_Real Z) ;


//!  modifies the coordinate of range Index <br>
//!  Index = 1 => X is modified <br>
//!  Index = 2 => Y is modified <br>
//!  Index = 3 => Z is modified <br>
//!  Raises OutOfRange if Index != {1, 2, 3}. <br>
 /*instead*/  void SetCoord(Standard_Integer Index, Standard_Real Xi) ;

//! Assigns the given value to the X coordinate <br>
 /*instead*/  void SetX(Standard_Real X) ;

//! Assigns the given value to the Y coordinate <br>
 /*instead*/  void SetY(Standard_Real Y) ;

//! Assigns the given value to the Z coordinate <br>
 /*instead*/  void SetZ(Standard_Real Z) ;


//!  returns the coordinate of range Index : <br>
//!  Index = 1 => X is returned <br>
//!  Index = 2 => Y is returned <br>
//!  Index = 3 => Z is returned <br>
//! <br>
//! Raises OutOfRange if Index != {1, 2, 3}. <br>
 /*instead*/  Standard_Real Coord(Standard_Integer Index) ;


 /*instead*/  void Coord(Standard_Real& X, Standard_Real& Y, Standard_Real& Z) ;

//! Returns the X coordinate <br>
 /*instead*/  Standard_Real X() ;

//! Returns the Y coordinate <br>
 /*instead*/  Standard_Real Y() ;

//! Returns the Z coordinate <br>
 /*instead*/  Standard_Real Z() ;

//! computes Sqrt (X*X + Y*Y + Z*Z) where X, Y and Z are the three coordinates of this XYZ object. <br>
 /*instead*/  Standard_Real Modulus() ;

//! Computes X*X + Y*Y + Z*Z where X, Y and Z are the three coordinates of this XYZ object. <br>
 /*instead*/  Standard_Real SquareModulus() ;


//!  Returns True if he coordinates of this XYZ object are <br>
//! equal to the respective coordinates Other, <br>
//! within the specified tolerance Tolerance. I.e.: <br>
//!  abs(<me>.X() - Other.X()) <= Tolerance and <br>
//!  abs(<me>.Y() - Other.Y()) <= Tolerance and <br>
//!  abs(<me>.Z() - Other.Z()) <= Tolerance. <br>
 /*instead*/  System::Boolean IsEqual(OCNaroWrappers::OCgp_XYZ^ Other, Standard_Real Tolerance) ;


//! <me>.X() = <me>.X() + Other.X() <br>
//! <me>.Y() = <me>.Y() + Other.Y() <br>
//! <me>.Z() = <me>.Z() + Other.Z() <br>
 /*instead*/  void Add(OCNaroWrappers::OCgp_XYZ^ Other) ;


//! new.X() = <me>.X() + Other.X() <br>
//! new.Y() = <me>.Y() + Other.Y() <br>
//! new.Z() = <me>.Z() + Other.Z() <br>
 /*instead*/  OCgp_XYZ^ Added(OCNaroWrappers::OCgp_XYZ^ Other) ;


//! <me>.X() = <me>.Y() * Other.Z() - <me>.Z() * Other.Y() <br>
//! <me>.Y() = <me>.Z() * Other.X() - <me>.X() * Other.Z() <br>
//! <me>.Z() = <me>.X() * Other.Y() - <me>.Y() * Other.X() <br>
 /*instead*/  void Cross(OCNaroWrappers::OCgp_XYZ^ Right) ;


//! new.X() = <me>.Y() * Other.Z() - <me>.Z() * Other.Y() <br>
//! new.Y() = <me>.Z() * Other.X() - <me>.X() * Other.Z() <br>
//! new.Z() = <me>.X() * Other.Y() - <me>.Y() * Other.X() <br>
 /*instead*/  OCgp_XYZ^ Crossed(OCNaroWrappers::OCgp_XYZ^ Right) ;


//!  Computes the magnitude of the cross product between <me> and <br>
//!  Right. Returns || <me> ^ Right || <br>
 /*instead*/  Standard_Real CrossMagnitude(OCNaroWrappers::OCgp_XYZ^ Right) ;


//!  Computes the square magnitude of the cross product between <me> and <br>
//!  Right. Returns || <me> ^ Right ||**2 <br>
 /*instead*/  Standard_Real CrossSquareMagnitude(OCNaroWrappers::OCgp_XYZ^ Right) ;

//! Triple vector product <br>
//!  Computes <me> = <me>.Cross(Coord1.Cross(Coord2)) <br>
 /*instead*/  void CrossCross(OCNaroWrappers::OCgp_XYZ^ Coord1, OCNaroWrappers::OCgp_XYZ^ Coord2) ;

//! Triple vector product <br>
//!  computes New = <me>.Cross(Coord1.Cross(Coord2)) <br>
 /*instead*/  OCgp_XYZ^ CrossCrossed(OCNaroWrappers::OCgp_XYZ^ Coord1, OCNaroWrappers::OCgp_XYZ^ Coord2) ;

//! divides <me> by a real. <br>
 /*instead*/  void Divide(Standard_Real Scalar) ;

//! divides <me> by a real. <br>
 /*instead*/  OCgp_XYZ^ Divided(Standard_Real Scalar) ;

//! computes the scalar product between <me> and Other <br>
 /*instead*/  Standard_Real Dot(OCNaroWrappers::OCgp_XYZ^ Other) ;

//! computes the triple scalar product <br>
 /*instead*/  Standard_Real DotCross(OCNaroWrappers::OCgp_XYZ^ Coord1, OCNaroWrappers::OCgp_XYZ^ Coord2) ;


//!  <me>.X() = <me>.X() * Scalar; <br>
//!  <me>.Y() = <me>.Y() * Scalar; <br>
//!  <me>.Z() = <me>.Z() * Scalar; <br>
 /*instead*/  void Multiply(Standard_Real Scalar) ;


//!  <me>.X() = <me>.X() * Other.X(); <br>
//!  <me>.Y() = <me>.Y() * Other.Y(); <br>
//!  <me>.Z() = <me>.Z() * Other.Z(); <br>
 /*instead*/  void Multiply(OCNaroWrappers::OCgp_XYZ^ Other) ;

//! <me> = Matrix * <me> <br>
 /*instead*/  void Multiply(OCNaroWrappers::OCgp_Mat^ Matrix) ;


//!  New.X() = <me>.X() * Scalar; <br>
//!  New.Y() = <me>.Y() * Scalar; <br>
//!  New.Z() = <me>.Z() * Scalar; <br>
 /*instead*/  OCgp_XYZ^ Multiplied(Standard_Real Scalar) ;


//!  new.X() = <me>.X() * Other.X(); <br>
//!  new.Y() = <me>.Y() * Other.Y(); <br>
//!  new.Z() = <me>.Z() * Other.Z(); <br>
 /*instead*/  OCgp_XYZ^ Multiplied(OCNaroWrappers::OCgp_XYZ^ Other) ;

//!  New = Matrix * <me> <br>
 /*instead*/  OCgp_XYZ^ Multiplied(OCNaroWrappers::OCgp_Mat^ Matrix) ;


//!  <me>.X() = <me>.X()/ <me>.Modulus() <br>
//!  <me>.Y() = <me>.Y()/ <me>.Modulus() <br>
//!  <me>.Z() = <me>.Z()/ <me>.Modulus() <br>//! Raised if <me>.Modulus() <= Resolution from gp <br>
 /*instead*/  void Normalize() ;


//!  New.X() = <me>.X()/ <me>.Modulus() <br>
//!  New.Y() = <me>.Y()/ <me>.Modulus() <br>
//!  New.Z() = <me>.Z()/ <me>.Modulus() <br>//! Raised if <me>.Modulus() <= Resolution from gp <br>
 /*instead*/  OCgp_XYZ^ Normalized() ;


//!  <me>.X() = -<me>.X() <br>
//!  <me>.Y() = -<me>.Y() <br>
//!  <me>.Z() = -<me>.Z() <br>
 /*instead*/  void Reverse() ;


//!  New.X() = -<me>.X() <br>
//!  New.Y() = -<me>.Y() <br>
//!  New.Z() = -<me>.Z() <br>
 /*instead*/  OCgp_XYZ^ Reversed() ;


//!  <me>.X() = <me>.X() - Other.X() <br>
//!  <me>.Y() = <me>.Y() - Other.Y() <br>
//!  <me>.Z() = <me>.Z() - Other.Z() <br>
 /*instead*/  void Subtract(OCNaroWrappers::OCgp_XYZ^ Right) ;


//!  new.X() = <me>.X() - Other.X() <br>
//!  new.Y() = <me>.Y() - Other.Y() <br>
//!  new.Z() = <me>.Z() - Other.Z() <br>
 /*instead*/  OCgp_XYZ^ Subtracted(OCNaroWrappers::OCgp_XYZ^ Right) ;


//!  <me> is set to the following linear form : <br>
//!  A1 * XYZ1 + A2 * XYZ2 + A3 * XYZ3 + XYZ4 <br>
 /*instead*/  void SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, Standard_Real A2, OCNaroWrappers::OCgp_XYZ^ XYZ2, Standard_Real A3, OCNaroWrappers::OCgp_XYZ^ XYZ3, OCNaroWrappers::OCgp_XYZ^ XYZ4) ;


//!  <me> is set to the following linear form : <br>
//!  A1 * XYZ1 + A2 * XYZ2 + A3 * XYZ3 <br>
 /*instead*/  void SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, Standard_Real A2, OCNaroWrappers::OCgp_XYZ^ XYZ2, Standard_Real A3, OCNaroWrappers::OCgp_XYZ^ XYZ3) ;


//!  <me> is set to the following linear form : <br>
//!  A1 * XYZ1 + A2 * XYZ2 + XYZ3 <br>
 /*instead*/  void SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, Standard_Real A2, OCNaroWrappers::OCgp_XYZ^ XYZ2, OCNaroWrappers::OCgp_XYZ^ XYZ3) ;


//!  <me> is set to the following linear form : <br>
//!  A1 * XYZ1 + A2 * XYZ2 <br>
 /*instead*/  void SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, Standard_Real A2, OCNaroWrappers::OCgp_XYZ^ XYZ2) ;


//!  <me> is set to the following linear form : <br>
//!  A1 * XYZ1 + XYZ2 <br>
 /*instead*/  void SetLinearForm(Standard_Real A1, OCNaroWrappers::OCgp_XYZ^ XYZ1, OCNaroWrappers::OCgp_XYZ^ XYZ2) ;


//!  <me> is set to the following linear form : <br>
//!  XYZ1 + XYZ2 <br>
 /*instead*/  void SetLinearForm(OCNaroWrappers::OCgp_XYZ^ XYZ1, OCNaroWrappers::OCgp_XYZ^ XYZ2) ;

~OCgp_XYZ()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
