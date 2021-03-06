// File generated by CPPExt (CPP file)
//

#include "Interface_GlobalNodeOfGeneralLib.h"
#include "../Converter.h"
#include "Interface_GeneralModule.h"
#include "Interface_Protocol.h"
#include "../Standard/Standard_Transient.h"
#include "Interface_GeneralLib.h"
#include "Interface_NodeOfGeneralLib.h"


using namespace OCNaroWrappers;

OCInterface_GlobalNodeOfGeneralLib::OCInterface_GlobalNodeOfGeneralLib(Handle(Interface_GlobalNodeOfGeneralLib)* nativeHandle) : OCStandard_Transient((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Interface_GlobalNodeOfGeneralLib(*nativeHandle);
}

OCInterface_GlobalNodeOfGeneralLib::OCInterface_GlobalNodeOfGeneralLib() : OCStandard_Transient((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Interface_GlobalNodeOfGeneralLib(new Interface_GlobalNodeOfGeneralLib());
}

 void OCInterface_GlobalNodeOfGeneralLib::Add(OCNaroWrappers::OCInterface_GeneralModule^ amodule, OCNaroWrappers::OCInterface_Protocol^ aprotocol)
{
  (*((Handle_Interface_GlobalNodeOfGeneralLib*)nativeHandle))->Add(*((Handle_Interface_GeneralModule*)amodule->Handle), *((Handle_Interface_Protocol*)aprotocol->Handle));
}

OCInterface_GeneralModule^ OCInterface_GlobalNodeOfGeneralLib::Module()
{
  Handle(Interface_GeneralModule) tmp = (*((Handle_Interface_GlobalNodeOfGeneralLib*)nativeHandle))->Module();
  return gcnew OCInterface_GeneralModule(&tmp);
}

OCInterface_Protocol^ OCInterface_GlobalNodeOfGeneralLib::Protocol()
{
  Handle(Interface_Protocol) tmp = (*((Handle_Interface_GlobalNodeOfGeneralLib*)nativeHandle))->Protocol();
  return gcnew OCInterface_Protocol(&tmp);
}

OCInterface_GlobalNodeOfGeneralLib^ OCInterface_GlobalNodeOfGeneralLib::Next()
{
  Handle(Interface_GlobalNodeOfGeneralLib) tmp = (*((Handle_Interface_GlobalNodeOfGeneralLib*)nativeHandle))->Next();
  return gcnew OCInterface_GlobalNodeOfGeneralLib(&tmp);
}


