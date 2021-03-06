// File generated by CPPExt (Transient)
//
#ifndef _BRepBlend_Line_OCWrappers_HeaderFile
#define _BRepBlend_Line_OCWrappers_HeaderFile

// include the wrapped class
#include <BRepBlend_Line.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../Blend/Blend_SequenceOfPoint.h"
#include "../IntSurf/IntSurf_TypeTrans.h"
#include "BRepBlend_Extremity.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_HVertex;
ref class OCAdaptor2d_HCurve2d;
ref class OCBRepBlend_PointOnRst;
ref class OCBRepBlend_SequenceOfPointOnRst;
ref class OCBRepBlend_Extremity;
ref class OCBlend_Point;



public ref class OCBRepBlend_Line : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCBRepBlend_Line(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBlend_Line(Handle(BRepBlend_Line)* nativeHandle);

// Methods PUBLIC


OCBRepBlend_Line();


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCBlend_Point^ P) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBlend_Point^ P) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBlend_Point^ P) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;


 /*instead*/  void Set(OCIntSurf_TypeTrans TranS1, OCIntSurf_TypeTrans TranS2) ;


 /*instead*/  void Set(OCIntSurf_TypeTrans Trans) ;


 /*instead*/  void SetStartPoints(OCNaroWrappers::OCBRepBlend_Extremity^ StartPt1, OCNaroWrappers::OCBRepBlend_Extremity^ StartPt2) ;


 /*instead*/  void SetEndPoints(OCNaroWrappers::OCBRepBlend_Extremity^ EndPt1, OCNaroWrappers::OCBRepBlend_Extremity^ EndPt2) ;


 /*instead*/  Standard_Integer NbPoints() ;


 /*instead*/  OCBlend_Point^ Point(Standard_Integer Index) ;


 /*instead*/  OCIntSurf_TypeTrans TransitionOnS1() ;


 /*instead*/  OCIntSurf_TypeTrans TransitionOnS2() ;


 /*instead*/  OCBRepBlend_Extremity^ StartPointOnFirst() ;


 /*instead*/  OCBRepBlend_Extremity^ StartPointOnSecond() ;


 /*instead*/  OCBRepBlend_Extremity^ EndPointOnFirst() ;


 /*instead*/  OCBRepBlend_Extremity^ EndPointOnSecond() ;


 /*instead*/  OCIntSurf_TypeTrans TransitionOnS() ;

~OCBRepBlend_Line()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
