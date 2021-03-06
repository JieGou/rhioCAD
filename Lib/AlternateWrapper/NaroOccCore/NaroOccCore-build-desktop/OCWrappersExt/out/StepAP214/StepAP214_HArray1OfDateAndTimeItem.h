// File generated by CPPExt (Transient)
//
#ifndef _StepAP214_HArray1OfDateAndTimeItem_OCWrappers_HeaderFile
#define _StepAP214_HArray1OfDateAndTimeItem_OCWrappers_HeaderFile

// include the wrapped class
#include <StepAP214_HArray1OfDateAndTimeItem.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepAP214_Array1OfDateAndTimeItem.h"


namespace OCNaroWrappers
{

ref class OCStepAP214_DateAndTimeItem;
ref class OCStepAP214_Array1OfDateAndTimeItem;



public ref class OCStepAP214_HArray1OfDateAndTimeItem : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepAP214_HArray1OfDateAndTimeItem(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepAP214_HArray1OfDateAndTimeItem(Handle(StepAP214_HArray1OfDateAndTimeItem)* nativeHandle);

// Methods PUBLIC


OCStepAP214_HArray1OfDateAndTimeItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP214_HArray1OfDateAndTimeItem(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCStepAP214_DateAndTimeItem^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP214_DateAndTimeItem^ V) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_DateAndTimeItem^ Value) ;


 /*instead*/  OCStepAP214_DateAndTimeItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_DateAndTimeItem^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_Array1OfDateAndTimeItem^ Array1() ;


 /*instead*/  OCStepAP214_Array1OfDateAndTimeItem^ ChangeArray1() ;

~OCStepAP214_HArray1OfDateAndTimeItem()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
