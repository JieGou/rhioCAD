// File generated by CPPExt (MPV)
//
#ifndef _StepShape_Array1OfConnectedFaceSet_OCWrappers_HeaderFile
#define _StepShape_Array1OfConnectedFaceSet_OCWrappers_HeaderFile

// include native header
#include <StepShape_Array1OfConnectedFaceSet.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCStepShape_ConnectedFaceSet;



public ref class OCStepShape_Array1OfConnectedFaceSet  {

protected:
  StepShape_Array1OfConnectedFaceSet* nativeHandle;
  OCStepShape_Array1OfConnectedFaceSet(OCDummy^) {};

public:
  property StepShape_Array1OfConnectedFaceSet* Handle
  {
    StepShape_Array1OfConnectedFaceSet* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCStepShape_Array1OfConnectedFaceSet(StepShape_Array1OfConnectedFaceSet* nativeHandle);

// Methods PUBLIC


OCStepShape_Array1OfConnectedFaceSet(Standard_Integer Low, Standard_Integer Up);


OCStepShape_Array1OfConnectedFaceSet(OCNaroWrappers::OCStepShape_ConnectedFaceSet^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCStepShape_ConnectedFaceSet^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCStepShape_Array1OfConnectedFaceSet^ Assign(OCNaroWrappers::OCStepShape_Array1OfConnectedFaceSet^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStepShape_ConnectedFaceSet^ Value) ;


 /*instead*/  OCStepShape_ConnectedFaceSet^ Value(Standard_Integer Index) ;


 /*instead*/  OCStepShape_ConnectedFaceSet^ ChangeValue(Standard_Integer Index) ;

~OCStepShape_Array1OfConnectedFaceSet()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
