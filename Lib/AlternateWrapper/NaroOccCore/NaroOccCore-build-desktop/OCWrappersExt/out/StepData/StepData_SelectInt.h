// File generated by CPPExt (Transient)
//
#ifndef _StepData_SelectInt_OCWrappers_HeaderFile
#define _StepData_SelectInt_OCWrappers_HeaderFile

// include the wrapped class
#include <StepData_SelectInt.hxx>
#include "../Converter.h"

#include "StepData_SelectMember.h"



namespace OCNaroWrappers
{



//! A SelectInt is a SelectMember specialised for a basic integer <br>
//!           type in a select which also accepts entities : this one has <br>
//!           NO NAME. <br>
//!           For a named select, see SelectNamed <br>
public ref class OCStepData_SelectInt : OCStepData_SelectMember {

protected:
  // dummy constructor;
  OCStepData_SelectInt(OCDummy^) : OCStepData_SelectMember((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepData_SelectInt(Handle(StepData_SelectInt)* nativeHandle);

// Methods PUBLIC


OCStepData_SelectInt();


virtual /*instead*/  Standard_Integer Kind() override;


virtual /*instead*/  void SetKind(Standard_Integer kind) override;


virtual /*instead*/  Standard_Integer Int() override;


virtual /*instead*/  void SetInt(Standard_Integer val) override;

~OCStepData_SelectInt()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif