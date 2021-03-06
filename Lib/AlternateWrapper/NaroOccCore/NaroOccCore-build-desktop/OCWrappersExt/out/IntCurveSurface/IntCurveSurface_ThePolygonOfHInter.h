// File generated by CPPExt (MPV)
//
#ifndef _IntCurveSurface_ThePolygonOfHInter_OCWrappers_HeaderFile
#define _IntCurveSurface_ThePolygonOfHInter_OCWrappers_HeaderFile

// include native header
#include <IntCurveSurface_ThePolygonOfHInter.hxx>
#include "../Converter.h"


#include "../Bnd/Bnd_Box.h"
#include "../TColgp/TColgp_Array1OfPnt.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfReal;
ref class OCAdaptor3d_HCurve;
ref class OCIntCurveSurface_TheHCurveTool;
ref class OCTColStd_Array1OfReal;
ref class OCBnd_Box;
ref class OCgp_Pnt;



public ref class OCIntCurveSurface_ThePolygonOfHInter  {

protected:
  IntCurveSurface_ThePolygonOfHInter* nativeHandle;
  OCIntCurveSurface_ThePolygonOfHInter(OCDummy^) {};

public:
  property IntCurveSurface_ThePolygonOfHInter* Handle
  {
    IntCurveSurface_ThePolygonOfHInter* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntCurveSurface_ThePolygonOfHInter(IntCurveSurface_ThePolygonOfHInter* nativeHandle);

// Methods PUBLIC


OCIntCurveSurface_ThePolygonOfHInter(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, Standard_Integer NbPnt);


OCIntCurveSurface_ThePolygonOfHInter(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, Standard_Real U1, Standard_Real U2, Standard_Integer NbPnt);


OCIntCurveSurface_ThePolygonOfHInter(OCNaroWrappers::OCAdaptor3d_HCurve^ Curve, OCNaroWrappers::OCTColStd_Array1OfReal^ Upars);


 /*instead*/  OCBnd_Box^ Bounding() ;


 /*instead*/  Standard_Real DeflectionOverEstimation() ;


 /*instead*/  void SetDeflectionOverEstimation(Standard_Real x) ;


 /*instead*/  void Closed(System::Boolean clos) ;


 /*instead*/  System::Boolean Closed() ;


 /*instead*/  Standard_Integer NbSegments() ;


 /*instead*/  OCgp_Pnt^ BeginOfSeg(Standard_Integer Index) ;


 /*instead*/  OCgp_Pnt^ EndOfSeg(Standard_Integer Index) ;


 /*instead*/  Standard_Real InfParameter() ;


 /*instead*/  Standard_Real SupParameter() ;


 /*instead*/  Standard_Real ApproxParamOnCurve(Standard_Integer Index, Standard_Real ParamOnLine) ;


 /*instead*/  void Dump() ;

~OCIntCurveSurface_ThePolygonOfHInter()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
