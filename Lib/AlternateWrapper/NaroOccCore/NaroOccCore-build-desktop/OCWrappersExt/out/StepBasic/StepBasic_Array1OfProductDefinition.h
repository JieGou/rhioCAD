// File generated by CPPExt (MPV)
//
#ifndef _StepBasic_Array1OfProductDefinition_OCWrappers_HeaderFile
#define _StepBasic_Array1OfProductDefinition_OCWrappers_HeaderFile

// include native header
#include <StepBasic_Array1OfProductDefinition.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepBasic_ProductDefinition;



public ref class OCStepBasic_Array1OfProductDefinition  {

protected:
  StepBasic_Array1OfProductDefinition* nativeHandle;
  OCStepBasic_Array1OfProductDefinition(OCDummy^) {};

public:
  property StepBasic_Array1OfProductDefinition* Handle
  {
    StepBasic_Array1OfProductDefinition* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepBasic_Array1OfProductDefinition(StepBasic_Array1OfProductDefinition* nativeHandle);

// Methods PUBLIC


OCStepBasic_Array1OfProductDefinition(Standard_Integer Low, Standard_Integer Up);


OCStepBasic_Array1OfProductDefinition(OCNaroWrappers::OCStepBasic_ProductDefinition^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_ProductDefinition^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepBasic_Array1OfProductDefinition^ Assign(OCNaroWrappers::OCStepBasic_Array1OfProductDefinition^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_ProductDefinition^ Value) ;


 /*instead*/  OCStepBasic_ProductDefinition^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepBasic_ProductDefinition^ ChangeValue(Standard_Integer Index) ;

~OCStepBasic_Array1OfProductDefinition()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
