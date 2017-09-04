// File generated by CPPExt (MPV)
//
#ifndef _HLRAlgo_Array1OfPISeg_OCWrappers_HeaderFile
#define _HLRAlgo_Array1OfPISeg_OCWrappers_HeaderFile

// include native header
#include <HLRAlgo_Array1OfPISeg.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCHLRAlgo_PolyInternalSegment;



public ref class OCHLRAlgo_Array1OfPISeg  {

protected:
  HLRAlgo_Array1OfPISeg* nativeHandle;
  OCHLRAlgo_Array1OfPISeg(OCDummy^) {};

public:
  property HLRAlgo_Array1OfPISeg* Handle
  {
    HLRAlgo_Array1OfPISeg* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCHLRAlgo_Array1OfPISeg(HLRAlgo_Array1OfPISeg* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_Array1OfPISeg(Standard_Integer Low, Standard_Integer Up);


OCHLRAlgo_Array1OfPISeg(OCNaroWrappers::OCHLRAlgo_PolyInternalSegment^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCHLRAlgo_PolyInternalSegment^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCHLRAlgo_Array1OfPISeg^ Assign(OCNaroWrappers::OCHLRAlgo_Array1OfPISeg^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCHLRAlgo_PolyInternalSegment^ Value) ;


 /*instead*/  OCHLRAlgo_PolyInternalSegment^ Value(Standard_Integer Index) ;


 /*instead*/  OCHLRAlgo_PolyInternalSegment^ ChangeValue(Standard_Integer Index) ;

~OCHLRAlgo_Array1OfPISeg()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif