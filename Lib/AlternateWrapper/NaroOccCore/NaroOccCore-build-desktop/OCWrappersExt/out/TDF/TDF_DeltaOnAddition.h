// File generated by CPPExt (Transient)
//
#ifndef _TDF_DeltaOnAddition_OCWrappers_HeaderFile
#define _TDF_DeltaOnAddition_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_DeltaOnAddition.hxx>
#include "../Converter.h"

#include "TDF_AttributeDelta.h"



namespace OCNaroWrappers
{

ref class OCTDF_Attribute;


//! This class provides default services for an <br>
//!          AttributeDelta on an ADDITION action. <br>
//! <br>
//!          Applying this AttributeDelta means REMOVING its <br>
//!          attribute. <br>
public ref class OCTDF_DeltaOnAddition : OCTDF_AttributeDelta {

protected:
  // dummy constructor;
  OCTDF_DeltaOnAddition(OCDummy^) : OCTDF_AttributeDelta((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_DeltaOnAddition(Handle(TDF_DeltaOnAddition)* nativeHandle);

// Methods PUBLIC

//! Creates a TDF_DeltaOnAddition. <br>
OCTDF_DeltaOnAddition(OCNaroWrappers::OCTDF_Attribute^ anAtt);

//! Applies the delta to the attribute. <br>
virtual /*instead*/  void Apply() ;

~OCTDF_DeltaOnAddition()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
