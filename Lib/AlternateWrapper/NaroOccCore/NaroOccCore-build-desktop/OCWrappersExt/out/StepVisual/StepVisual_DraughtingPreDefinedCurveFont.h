// File generated by CPPExt (Transient)
//
#ifndef _StepVisual_DraughtingPreDefinedCurveFont_OCWrappers_HeaderFile
#define _StepVisual_DraughtingPreDefinedCurveFont_OCWrappers_HeaderFile

// include the wrapped class
#include <StepVisual_DraughtingPreDefinedCurveFont.hxx>
#include "../Converter.h"

#include "StepVisual_PreDefinedCurveFont.h"



namespace OCNaroWrappers
{




public ref class OCStepVisual_DraughtingPreDefinedCurveFont : OCStepVisual_PreDefinedCurveFont {

protected:
  // dummy constructor;
  OCStepVisual_DraughtingPreDefinedCurveFont(OCDummy^) : OCStepVisual_PreDefinedCurveFont((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepVisual_DraughtingPreDefinedCurveFont(Handle(StepVisual_DraughtingPreDefinedCurveFont)* nativeHandle);

// Methods PUBLIC

//! Returns a DraughtingPreDefinedCurveFont <br>
OCStepVisual_DraughtingPreDefinedCurveFont();

~OCStepVisual_DraughtingPreDefinedCurveFont()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
