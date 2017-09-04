// File generated by CPPExt (MPV)
//
#ifndef _Extrema_Array1OfPOnCurv_OCWrappers_HeaderFile
#define _Extrema_Array1OfPOnCurv_OCWrappers_HeaderFile

// include native header
#include <Extrema_Array1OfPOnCurv.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCExtrema_POnCurv;



public ref class OCExtrema_Array1OfPOnCurv  {

protected:
  Extrema_Array1OfPOnCurv* nativeHandle;
  OCExtrema_Array1OfPOnCurv(OCDummy^) {};

public:
  property Extrema_Array1OfPOnCurv* Handle
  {
    Extrema_Array1OfPOnCurv* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCExtrema_Array1OfPOnCurv(Extrema_Array1OfPOnCurv* nativeHandle);

// Methods PUBLIC


OCExtrema_Array1OfPOnCurv(Standard_Integer Low, Standard_Integer Up);


OCExtrema_Array1OfPOnCurv(OCNaroWrappers::OCExtrema_POnCurv^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCExtrema_POnCurv^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCExtrema_Array1OfPOnCurv^ Assign(OCNaroWrappers::OCExtrema_Array1OfPOnCurv^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCExtrema_POnCurv^ Value) ;


 /*instead*/  OCExtrema_POnCurv^ Value(Standard_Integer Index) ;


 /*instead*/  OCExtrema_POnCurv^ ChangeValue(Standard_Integer Index) ;

~OCExtrema_Array1OfPOnCurv()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif