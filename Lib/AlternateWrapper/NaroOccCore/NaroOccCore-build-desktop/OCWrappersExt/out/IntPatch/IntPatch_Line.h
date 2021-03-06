// File generated by CPPExt (Transient)
//
#ifndef _IntPatch_Line_OCWrappers_HeaderFile
#define _IntPatch_Line_OCWrappers_HeaderFile

// include the wrapped class
#include <IntPatch_Line.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "IntPatch_IType.h"
#include "../IntSurf/IntSurf_TypeTrans.h"
#include "../IntSurf/IntSurf_Situation.h"


namespace OCNaroWrappers
{



//! Definition of an intersection line between two <br>
//!          surfaces. <br>
//!          A line may be either geometric : line, circle, ellipse, <br>
//!          parabola, hyperbola, as defined in the class GLine, <br>
//!          or analytic, as defined in the class ALine, or defined <br>
//!          by a set of points (coming from a walking algorithm) as <br>
//!          defined in the class WLine. <br>
public ref class OCIntPatch_Line : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCIntPatch_Line(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCIntPatch_Line(Handle(IntPatch_Line)* nativeHandle);

// Methods PUBLIC

//! To initialize the fields, when the transitions <br>
//!          are In or Out. <br>
OCIntPatch_Line(System::Boolean Tang, OCIntSurf_TypeTrans Trans1, OCIntSurf_TypeTrans Trans2);

//! To initialize the fields, when the transitions <br>
//!          are Touch. <br>
OCIntPatch_Line(System::Boolean Tang, OCIntSurf_Situation Situ1, OCIntSurf_Situation Situ2);

//! To initialize the fields, when the transitions <br>
//!          are Undecided. <br>
OCIntPatch_Line(System::Boolean Tang);

//! To set the values returned by IsUIsoS1,.... <br>
//!          The default values are False. <br>
 /*instead*/  void SetValue(System::Boolean Uiso1, System::Boolean Viso1, System::Boolean Uiso2, System::Boolean Viso2) ;

//! Returns the type of geometry 3d (Line, Circle, Parabola, <br>
//!          Hyperbola, Ellipse, Analytic, Walking, Restriction) <br>
 /*instead*/  OCIntPatch_IType ArcType() ;

//! Returns TRUE if the intersection is a line of tangency <br>
//!          between the 2 patches. <br>
 /*instead*/  System::Boolean IsTangent() ;

//! Returns the type of the transition of the line <br>
//!          for the first surface. The transition is "constant" <br>
//!          along the line. <br>
//!          The transition is IN if the line is oriented in such <br>
//!          a way that the system of vector (N1,N2,T) is right-handed, <br>
//!          where N1 is the normal to the first surface at a point P, <br>
//!                N2 is the normal to the second surface at a point P, <br>
//!                T  is the tangent to the intersection line at P. <br>
//!          If the system of vector is left-handed, the transition <br>
//!          is OUT. <br>
//!          When N1 and N2 are colinear all along the intersection <br>
//!          line, the transition will be <br>
//!           - TOUCH, if it is possible to use the 2nd derivatives <br>
//!             to determine the position of one surafce compared <br>
//!             to the other (see Situation) <br>
//!           - UNDECIDED otherwise. <br>
//! <br>
//!          If one of the transition is TOUCH or UNDECIDED, the other <br>
//!          one has got the same value. <br>
 /*instead*/  OCIntSurf_TypeTrans TransitionOnS1() ;

//! Returns the type of the transition of the line <br>
//!          for the second surface. The transition is "constant" <br>
//!          along the line. <br>
 /*instead*/  OCIntSurf_TypeTrans TransitionOnS2() ;

//! Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of <br>
//!          the first patch compared to the second one, when <br>
//!          TransitionOnS1 or TransitionOnS2 returns TOUCH. <br>
//!          Otherwise, an exception is raised. <br>
 /*instead*/  OCIntSurf_Situation SituationS1() ;

//! Returns the situation (INSIDE/OUTSIDE/UNKNOWN) of <br>
//!          the second patch compared to the first one, when <br>
//!          TransitionOnS1 or TransitionOnS2 returns TOUCH. <br>
//!          Otherwise, an exception is raised. <br>
 /*instead*/  OCIntSurf_Situation SituationS2() ;

//! Returns TRUE if the intersection is a U isoparametric curve <br>
//!          on the first patch. <br>
 /*instead*/  System::Boolean IsUIsoOnS1() ;

//! Returns TRUE if the intersection is a V isoparametric curve <br>
//!          on the first patch. <br>
 /*instead*/  System::Boolean IsVIsoOnS1() ;

//! Returns TRUE if the intersection is a U isoparametric curve <br>
//!          on the second patch. <br>
 /*instead*/  System::Boolean IsUIsoOnS2() ;

//! Returns TRUE if the intersection is a V isoparametric curve <br>
//!          on the second patch. <br>
 /*instead*/  System::Boolean IsVIsoOnS2() ;

~OCIntPatch_Line()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
