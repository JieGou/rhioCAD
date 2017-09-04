// File generated by CPPExt (MPV)
//
#ifndef _StepAP214_Array1OfDateAndTimeItem_OCWrappers_HeaderFile
#define _StepAP214_Array1OfDateAndTimeItem_OCWrappers_HeaderFile

// include native header
#include <StepAP214_Array1OfDateAndTimeItem.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepAP214_DateAndTimeItem;



public ref class OCStepAP214_Array1OfDateAndTimeItem  {

protected:
  StepAP214_Array1OfDateAndTimeItem* nativeHandle;
  OCStepAP214_Array1OfDateAndTimeItem(OCDummy^) {};

public:
  property StepAP214_Array1OfDateAndTimeItem* Handle
  {
    StepAP214_Array1OfDateAndTimeItem* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepAP214_Array1OfDateAndTimeItem(StepAP214_Array1OfDateAndTimeItem* nativeHandle);

// Methods PUBLIC


OCStepAP214_Array1OfDateAndTimeItem(Standard_Integer Low, Standard_Integer Up);


OCStepAP214_Array1OfDateAndTimeItem(OCNaroWrappers::OCStepAP214_DateAndTimeItem^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepAP214_DateAndTimeItem^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepAP214_Array1OfDateAndTimeItem^ Assign(OCNaroWrappers::OCStepAP214_Array1OfDateAndTimeItem^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepAP214_DateAndTimeItem^ Value) ;


 /*instead*/  OCStepAP214_DateAndTimeItem^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepAP214_DateAndTimeItem^ ChangeValue(Standard_Integer Index) ;

~OCStepAP214_Array1OfDateAndTimeItem()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif