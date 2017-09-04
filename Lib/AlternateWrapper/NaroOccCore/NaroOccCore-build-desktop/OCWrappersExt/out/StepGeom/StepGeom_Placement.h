// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_Placement_OCWrappers_HeaderFile
#define _StepGeom_Placement_OCWrappers_HeaderFile

// include native header
#include <StepGeom_Placement.hxx>
#include "../Converter.h"

#include "StepGeom_GeometricRepresentationItem.h"

#include "StepGeom_CartesianPoint.h"
#include "StepGeom_GeometricRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepGeom_CartesianPoint;



public ref class OCStepGeom_Placement  : public OCStepGeom_GeometricRepresentationItem {

protected:
  // dummy constructor;
  OCStepGeom_Placement(OCDummy^) : OCStepGeom_GeometricRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_Placement(StepGeom_Placement* nativeHandle);

// Methods PUBLIC

//! Returns a Placement <br>
OCStepGeom_Placement();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepGeom_CartesianPoint^ aLocation) ;


 /*instead*/  void SetLocation(OCNaroWrappers::OCStepGeom_CartesianPoint^ aLocation) ;


 /*instead*/  OCStepGeom_CartesianPoint^ Location() ;

~OCStepGeom_Placement()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif