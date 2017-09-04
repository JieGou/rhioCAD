// File generated by CPPExt (MPV)
//
#ifndef _IntPatch_ThePPIntOfIntersection_OCWrappers_HeaderFile
#define _IntPatch_ThePPIntOfIntersection_OCWrappers_HeaderFile

// include native header
#include <IntPatch_ThePPIntOfIntersection.hxx>
#include "../Converter.h"


#include "IntPatch_SequenceOfLine.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HVertex;
ref class OCAdaptor2d_HCurve2d;
ref class OCAdaptor3d_HSurface;
ref class OCIntPatch_HCurve2dTool;
ref class OCIntPatch_HSurfaceTool;
ref class OCAdaptor3d_TopolTool;
ref class OCIntPatch_HInterTool;
ref class OCIntPatch_ThePointOfIntersection;
ref class OCIntPatch_SequenceOfPointOfIntersection;
ref class OCIntPatch_TheWLineOfIntersection;
ref class OCIntPatch_TheRstIntOfIntersection;
ref class OCIntPatch_ThePolyhedronOfThePPIntOfIntersection;
ref class OCIntPatch_TheToolPolyhOfThePPIntOfIntersection;
ref class OCIntPatch_TheInterfPolyhedronOfThePPIntOfIntersection;
ref class OCIntPatch_ThePWalkingInterOfThePPIntOfIntersection;
ref class OCIntPatch_TheInt2SOfThePWalkingInterOfThePPIntOfIntersection;
ref class OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection;
ref class OCIntSurf_ListOfPntOn2S;
ref class OCIntPatch_Line;
ref class OCIntSurf_LineOn2S;



public ref class OCIntPatch_ThePPIntOfIntersection  {

protected:
  IntPatch_ThePPIntOfIntersection* nativeHandle;
  OCIntPatch_ThePPIntOfIntersection(OCDummy^) {};

public:
  property IntPatch_ThePPIntOfIntersection* Handle
  {
    IntPatch_ThePPIntOfIntersection* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntPatch_ThePPIntOfIntersection(IntPatch_ThePPIntOfIntersection* nativeHandle);

// Methods PUBLIC


OCIntPatch_ThePPIntOfIntersection();


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Polyhedron2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment, System::Boolean ClearFlag) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment, OCNaroWrappers::OCIntSurf_ListOfPntOn2S^ ListOfPnts, System::Boolean RestrictLine) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Polyhedron2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;


 /*instead*/  void Perform(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCIntPatch_ThePolyhedronOfThePPIntOfIntersection^ Polyhedron1, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, OCNaroWrappers::OCAdaptor3d_TopolTool^ Domain2, Standard_Real TolTangency, Standard_Real Epsilon, Standard_Real Deflection, Standard_Real Increment) ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer NbLines() ;


 /*instead*/  OCIntPatch_Line^ Line(Standard_Integer Index) ;


 /*instead*/  OCIntPatch_Line^ NewLine(OCNaroWrappers::OCAdaptor3d_HSurface^ Caro1, OCNaroWrappers::OCAdaptor3d_HSurface^ Caro2, Standard_Integer IndexLine, Standard_Integer LowPoint, Standard_Integer HighPoint, Standard_Integer NbPoints) ;


 /*instead*/  Standard_Integer GrilleInteger(Standard_Integer ix, Standard_Integer iy, Standard_Integer iz) ;


 /*instead*/  void IntegerGrille(Standard_Integer t, Standard_Integer& ix, Standard_Integer& iy, Standard_Integer& iz) ;


 /*instead*/  Standard_Integer DansGrille(Standard_Integer t) ;


 /*instead*/  Standard_Integer NbPointsGrille() ;


 /*instead*/  void RemplitLin(Standard_Integer x1, Standard_Integer y1, Standard_Integer z1, Standard_Integer x2, Standard_Integer y2, Standard_Integer z2, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection^ Map) ;


 /*instead*/  void RemplitTri(Standard_Integer x1, Standard_Integer y1, Standard_Integer z1, Standard_Integer x2, Standard_Integer y2, Standard_Integer z2, Standard_Integer x3, Standard_Integer y3, Standard_Integer z3, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection^ Map) ;


 /*instead*/  void Remplit(Standard_Integer a, Standard_Integer b, Standard_Integer c, OCNaroWrappers::OCIntPatch_PrmPrmIntersection_T3BitsOfThePPIntOfIntersection^ Map) ;


 /*instead*/  Standard_Integer CodeReject(Standard_Real x1, Standard_Real y1, Standard_Real z1, Standard_Real x2, Standard_Real y2, Standard_Real z2, Standard_Real x3, Standard_Real y3, Standard_Real z3) ;


 /*instead*/  void PointDepart(OCNaroWrappers::OCIntSurf_LineOn2S^ LineOn2S, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, Standard_Integer SU1, Standard_Integer SV1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, Standard_Integer SU2, Standard_Integer SV2) ;

~OCIntPatch_ThePPIntOfIntersection()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif