// File generated by CPPExt (Transient)
//
#ifndef _StepGeom_HArray2OfSurfacePatch_OCWrappers_HeaderFile
#define _StepGeom_HArray2OfSurfacePatch_OCWrappers_HeaderFile

// include the wrapped class
#include <StepGeom_HArray2OfSurfacePatch.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "StepGeom_Array2OfSurfacePatch.h"


namespace OCNaroWrappers
{

ref class OCStepGeom_SurfacePatch;
ref class OCStepGeom_Array2OfSurfacePatch;



public ref class OCStepGeom_HArray2OfSurfacePatch : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCStepGeom_HArray2OfSurfacePatch(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_HArray2OfSurfacePatch(Handle(StepGeom_HArray2OfSurfacePatch)* nativeHandle);

// Methods PUBLIC


OCStepGeom_HArray2OfSurfacePatch(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCStepGeom_HArray2OfSurfacePatch(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCStepGeom_SurfacePatch^ V);


 /*instead*/  void Init(OCNaroWrappers::OCStepGeom_SurfacePatch^ V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCStepGeom_SurfacePatch^ Value) ;


 /*instead*/  OCStepGeom_SurfacePatch^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCStepGeom_SurfacePatch^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCStepGeom_Array2OfSurfacePatch^ Array2() ;


 /*instead*/  OCStepGeom_Array2OfSurfacePatch^ ChangeArray2() ;

~OCStepGeom_HArray2OfSurfacePatch()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
