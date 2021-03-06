// File generated by CPPExt (Transient)
//
#ifndef _Interface_Protocol_OCWrappers_HeaderFile
#define _Interface_Protocol_OCWrappers_HeaderFile

// include the wrapped class
#include <Interface_Protocol.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCStandard_Type;
ref class OCInterface_Graph;
ref class OCInterface_Check;
ref class OCInterface_InterfaceModel;


//! General description of Interface Protocols. A Protocol defines <br>
//!           a set of Entity types. This class provides also the notion of <br>
//!           Active Protocol, as a working context, defined once then <br>
//!           exploited by various Tools and Libraries. <br>
//! <br>
//!           It also gives control of type definitions. By default, types <br>
//!           are provided by CDL, but specific implementations, or topics <br>
//!           like multi-typing, may involve another way <br>
public ref class OCInterface_Protocol : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCInterface_Protocol(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCInterface_Protocol(Handle(Interface_Protocol)* nativeHandle);

// Methods PUBLIC

//! Returns the Active Protocol, if defined (else, returns a <br>
//!           Null Handle, which means "no defined active protocol") <br>
static /*instead*/  OCInterface_Protocol^ Active() ;

//! Sets a given Protocol to be the Active one (for the users of <br>
//!           Active, see just above). Applies to every sub-type of Protocol <br>
static /*instead*/  void SetActive(OCNaroWrappers::OCInterface_Protocol^ aprotocol) ;

//! Erases the Active Protocol (hence it becomes undefined) <br>
static /*instead*/  void ClearActive() ;

//! Returns a unique positive CaseNumber for each Recognized <br>
//!           Object. By default, recognition is based on Type(1) <br>
//!           By default, calls the following one which is deferred. <br>
virtual /*instead*/  Standard_Integer CaseNumber(OCNaroWrappers::OCStandard_Transient^ obj) ;

//! Returns True if type of <obj> is that defined from CDL <br>
//!           This is the default but it may change according implementation <br>
virtual /*instead*/  System::Boolean IsDynamicType(OCNaroWrappers::OCStandard_Transient^ obj) ;

//! Returns the count of DISTINCT types under which an entity may <br>
//!           be processed. Each one is candidate to be recognized by <br>
//!           TypeNumber, <obj> is then processed according it <br>
//!           By default, returns 1 (the DynamicType) <br>
virtual /*instead*/  Standard_Integer NbTypes(OCNaroWrappers::OCStandard_Transient^ obj) ;

//! Returns a type under which <obj> can be recognized and <br>
//!           processed, according its rank in its definition list (see <br>
//!           NbTypes). <br>
//!           By default, returns DynamicType <br>
 /*instead*/  OCStandard_Type^ Type(OCNaroWrappers::OCStandard_Transient^ obj, Standard_Integer nt) ;

//! Evaluates a Global Check for a model (with its Graph) <br>
//!           Returns True when done, False if data in model do not apply <br>
//! <br>
//!           Very specific of each norm, i.e. of each protocol : the <br>
//!           uppest level Protocol assumes it, it can call GlobalCheck of <br>
//!           its ressources only if it is necessary <br>
//! <br>
//!           Default does nothing, can be redefined <br>
virtual /*instead*/  System::Boolean GlobalCheck(OCNaroWrappers::OCInterface_Graph^ G, OCNaroWrappers::OCInterface_Check^ ach) ;

~OCInterface_Protocol()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
