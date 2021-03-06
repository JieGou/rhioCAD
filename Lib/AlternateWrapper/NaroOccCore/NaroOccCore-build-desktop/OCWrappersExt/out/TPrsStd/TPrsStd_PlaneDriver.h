// File generated by CPPExt (Transient)
//
#ifndef _TPrsStd_PlaneDriver_OCWrappers_HeaderFile
#define _TPrsStd_PlaneDriver_OCWrappers_HeaderFile

// include the wrapped class
#include <TPrsStd_PlaneDriver.hxx>
#include "../Converter.h"

#include "TPrsStd_Driver.h"



namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCAIS_InteractiveObject;


//! An implementation of TPrsStd_Driver for planes. <br>
public ref class OCTPrsStd_PlaneDriver : OCTPrsStd_Driver {

protected:
  // dummy constructor;
  OCTPrsStd_PlaneDriver(OCDummy^) : OCTPrsStd_Driver((OCDummy^)nullptr) {};

public:

// constructor from native
OCTPrsStd_PlaneDriver(Handle(TPrsStd_PlaneDriver)* nativeHandle);

// Methods PUBLIC

//! Constructs an empty plane driver. <br>
OCTPrsStd_PlaneDriver();

//! Build the AISObject (if null) or update it. <br>
//!           No compute is done. <br>
//!           Returns <True> if informations was found <br>
//!           and AISObject updated. <br>
virtual /*instead*/  System::Boolean Update(OCNaroWrappers::OCTDF_Label^ aLabel, OCNaroWrappers::OCAIS_InteractiveObject^ anAISObject) ;

~OCTPrsStd_PlaneDriver()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
