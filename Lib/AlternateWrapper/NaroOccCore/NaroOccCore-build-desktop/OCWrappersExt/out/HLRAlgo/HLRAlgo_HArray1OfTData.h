// File generated by CPPExt (Transient)
//
#ifndef _HLRAlgo_HArray1OfTData_OCWrappers_HeaderFile
#define _HLRAlgo_HArray1OfTData_OCWrappers_HeaderFile

// include the wrapped class
#include <HLRAlgo_HArray1OfTData.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "HLRAlgo_Array1OfTData.h"


namespace OCNaroWrappers
{

ref class OCHLRAlgo_TriangleData;
ref class OCHLRAlgo_Array1OfTData;



public ref class OCHLRAlgo_HArray1OfTData : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCHLRAlgo_HArray1OfTData(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCHLRAlgo_HArray1OfTData(Handle(HLRAlgo_HArray1OfTData)* nativeHandle);

// Methods PUBLIC


OCHLRAlgo_HArray1OfTData(Standard_Integer Low, Standard_Integer Up);


OCHLRAlgo_HArray1OfTData(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCHLRAlgo_TriangleData^ V);


 /*instead*/  void Init(OCNaroWrappers::OCHLRAlgo_TriangleData^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCHLRAlgo_TriangleData^ Value) ;


 /*instead*/  OCHLRAlgo_TriangleData^ Value(Standard_Integer Index) ;


 /*instead*/  OCHLRAlgo_TriangleData^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCHLRAlgo_Array1OfTData^ Array1() ;


 /*instead*/  OCHLRAlgo_Array1OfTData^ ChangeArray1() ;

~OCHLRAlgo_HArray1OfTData()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
