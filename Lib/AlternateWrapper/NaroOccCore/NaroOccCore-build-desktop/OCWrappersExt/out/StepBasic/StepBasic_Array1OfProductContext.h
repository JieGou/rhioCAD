// File generated by CPPExt (MPV)
//
#ifndef _StepBasic_Array1OfProductContext_OCWrappers_HeaderFile
#define _StepBasic_Array1OfProductContext_OCWrappers_HeaderFile

// include native header
#include <StepBasic_Array1OfProductContext.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepBasic_ProductContext;



public ref class OCStepBasic_Array1OfProductContext  {

protected:
  StepBasic_Array1OfProductContext* nativeHandle;
  OCStepBasic_Array1OfProductContext(OCDummy^) {};

public:
  property StepBasic_Array1OfProductContext* Handle
  {
    StepBasic_Array1OfProductContext* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepBasic_Array1OfProductContext(StepBasic_Array1OfProductContext* nativeHandle);

// Methods PUBLIC


OCStepBasic_Array1OfProductContext(Standard_Integer Low, Standard_Integer Up);


OCStepBasic_Array1OfProductContext(OCNaroWrappers::OCStepBasic_ProductContext^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_ProductContext^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepBasic_Array1OfProductContext^ Assign(OCNaroWrappers::OCStepBasic_Array1OfProductContext^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_ProductContext^ Value) ;


 /*instead*/  OCStepBasic_ProductContext^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepBasic_ProductContext^ ChangeValue(Standard_Integer Index) ;

~OCStepBasic_Array1OfProductContext()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif