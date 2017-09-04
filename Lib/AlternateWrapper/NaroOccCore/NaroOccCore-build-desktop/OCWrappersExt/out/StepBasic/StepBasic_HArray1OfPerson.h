// File generated by CPPExt (Transient)
//
#ifndef _StepBasic_HArray1OfPerson_OCWrappers_HeaderFile
#define _StepBasic_HArray1OfPerson_OCWrappers_HeaderFile

// include the wrapped class
#include <StepBasic_HArray1OfPerson.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepBasic_Array1OfPerson.h"


namespace OCNaroWrappers
{

ref class OCStepBasic_Person;
ref class OCStepBasic_Array1OfPerson;



public ref class OCStepBasic_HArray1OfPerson : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepBasic_HArray1OfPerson(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepBasic_HArray1OfPerson(Handle(StepBasic_HArray1OfPerson)* nativeHandle);

// Methods PUBLIC


OCStepBasic_HArray1OfPerson(Standard_Integer Low, Standard_Integer Up);


OCStepBasic_HArray1OfPerson(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepBasic_Person^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepBasic_Person^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_Person^ Value) ;


 /*instead*/  OCStepBasic_Person^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepBasic_Person^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepBasic_Array1OfPerson^ Array1() ;


 /*instead*/  OCStepBasic_Array1OfPerson^ ChangeArray1() ;

~OCStepBasic_HArray1OfPerson()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif