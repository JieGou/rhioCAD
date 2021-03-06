// File generated by CPPExt (CPP file)
//

#include "Transfer_TransferOutput.h"
#include "../Converter.h"
#include "Transfer_TransientProcess.h"
#include "../Interface/Interface_InterfaceModel.h"
#include "Transfer_ActorOfTransientProcess.h"
#include "../Standard/Standard_Transient.h"
#include "../Interface/Interface_Protocol.h"
#include "../Interface/Interface_Graph.h"
#include "../Interface/Interface_EntityIterator.h"


using namespace OCNaroWrappers;

OCTransfer_TransferOutput::OCTransfer_TransferOutput(Transfer_TransferOutput* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTransfer_TransferOutput::OCTransfer_TransferOutput(OCNaroWrappers::OCTransfer_ActorOfTransientProcess^ actor, OCNaroWrappers::OCInterface_InterfaceModel^ amodel) 
{
  nativeHandle = new Transfer_TransferOutput(*((Handle_Transfer_ActorOfTransientProcess*)actor->Handle), *((Handle_Interface_InterfaceModel*)amodel->Handle));
}

OCTransfer_TransferOutput::OCTransfer_TransferOutput(OCNaroWrappers::OCTransfer_TransientProcess^ proc, OCNaroWrappers::OCInterface_InterfaceModel^ amodel) 
{
  nativeHandle = new Transfer_TransferOutput(*((Handle_Transfer_TransientProcess*)proc->Handle), *((Handle_Interface_InterfaceModel*)amodel->Handle));
}

OCInterface_InterfaceModel^ OCTransfer_TransferOutput::Model()
{
  Handle(Interface_InterfaceModel) tmp = ((Transfer_TransferOutput*)nativeHandle)->Model();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

OCTransfer_TransientProcess^ OCTransfer_TransferOutput::TransientProcess()
{
  Handle(Transfer_TransientProcess) tmp = ((Transfer_TransferOutput*)nativeHandle)->TransientProcess();
  return gcnew OCTransfer_TransientProcess(&tmp);
}

 void OCTransfer_TransferOutput::Transfer(OCNaroWrappers::OCStandard_Transient^ obj)
{
  ((Transfer_TransferOutput*)nativeHandle)->Transfer(*((Handle_Standard_Transient*)obj->Handle));
}

 void OCTransfer_TransferOutput::TransferRoots(OCNaroWrappers::OCInterface_Protocol^ protocol)
{
  ((Transfer_TransferOutput*)nativeHandle)->TransferRoots(*((Handle_Interface_Protocol*)protocol->Handle));
}

 void OCTransfer_TransferOutput::TransferRoots(OCNaroWrappers::OCInterface_Graph^ G)
{
  ((Transfer_TransferOutput*)nativeHandle)->TransferRoots(*((Interface_Graph*)G->Handle));
}

 void OCTransfer_TransferOutput::TransferRoots()
{
  ((Transfer_TransferOutput*)nativeHandle)->TransferRoots();
}

OCInterface_EntityIterator^ OCTransfer_TransferOutput::ListForStatus(System::Boolean normal, System::Boolean roots)
{
  Interface_EntityIterator* tmp = new Interface_EntityIterator();
  *tmp = ((Transfer_TransferOutput*)nativeHandle)->ListForStatus(OCConverter::BooleanToStandardBoolean(normal), OCConverter::BooleanToStandardBoolean(roots));
  return gcnew OCInterface_EntityIterator(tmp);
}

OCInterface_InterfaceModel^ OCTransfer_TransferOutput::ModelForStatus(OCNaroWrappers::OCInterface_Protocol^ protocol, System::Boolean normal, System::Boolean roots)
{
  Handle(Interface_InterfaceModel) tmp = ((Transfer_TransferOutput*)nativeHandle)->ModelForStatus(*((Handle_Interface_Protocol*)protocol->Handle), OCConverter::BooleanToStandardBoolean(normal), OCConverter::BooleanToStandardBoolean(roots));
  return gcnew OCInterface_InterfaceModel(&tmp);
}


