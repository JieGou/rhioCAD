// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Array1OfTrimmingSelect_OCWrappers_HeaderFile
#define _StepGeom_Array1OfTrimmingSelect_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Array1OfTrimmingSelect.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepGeom_TrimmingSelect;



public ref class OCStepGeom_Array1OfTrimmingSelect  {

protected:
  StepGeom_Array1OfTrimmingSelect* nativeHandle;
  OCStepGeom_Array1OfTrimmingSelect(OCDummy^) {};

public:
  property StepGeom_Array1OfTrimmingSelect* Handle
  {
    StepGeom_Array1OfTrimmingSelect* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepGeom_Array1OfTrimmingSelect(StepGeom_Array1OfTrimmingSelect* nativeHandle);

// Methods PUBLIC


OCStepGeom_Array1OfTrimmingSelect(Standard_Integer Low, Standard_Integer Up);


OCStepGeom_Array1OfTrimmingSelect(OCNaroWrappers::OCStepGeom_TrimmingSelect^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_TrimmingSelect^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepGeom_Array1OfTrimmingSelect^ Assign(OCNaroWrappers::OCStepGeom_Array1OfTrimmingSelect^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepGeom_TrimmingSelect^ Value) ;


 /*instead*/  OCStepGeom_TrimmingSelect^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepGeom_TrimmingSelect^ ChangeValue(Standard_Integer Index) ;

~OCStepGeom_Array1OfTrimmingSelect()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
