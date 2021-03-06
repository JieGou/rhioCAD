// File generated by CPPExt (CPP file)
//

#include "Transfer_TransferDispatch.h"
#include "../Converter.h"
#include "../Interface/Interface_InterfaceModel.h"
#include "../Interface/Interface_GeneralLib.h"
#include "../Interface/Interface_Protocol.h"
#include "Transfer_TransientProcess.h"
#include "../Standard/Standard_Transient.h"


using namespace OCNaroWrappers;

OCTransfer_TransferDispatch::OCTransfer_TransferDispatch(Transfer_TransferDispatch* nativeHandle) : OCInterface_CopyTool((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTransfer_TransferDispatch::OCTransfer_TransferDispatch(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_GeneralLib^ lib) : OCInterface_CopyTool((OCDummy^)nullptr)

{
  nativeHandle = new Transfer_TransferDispatch(*((Handle_Interface_InterfaceModel*)amodel->Handle), *((Interface_GeneralLib*)lib->Handle));
}

OCTransfer_TransferDispatch::OCTransfer_TransferDispatch(OCNaroWrappers::OCInterface_InterfaceModel^ amodel, OCNaroWrappers::OCInterface_Protocol^ protocol) : OCInterface_CopyTool((OCDummy^)nullptr)

{
  nativeHandle = new Transfer_TransferDispatch(*((Handle_Interface_InterfaceModel*)amodel->Handle), *((Handle_Interface_Protocol*)protocol->Handle));
}

OCTransfer_TransferDispatch::OCTransfer_TransferDispatch(OCNaroWrappers::OCInterface_InterfaceModel^ amodel) : OCInterface_CopyTool((OCDummy^)nullptr)

{
  nativeHandle = new Transfer_TransferDispatch(*((Handle_Interface_InterfaceModel*)amodel->Handle));
}

OCTransfer_TransientProcess^ OCTransfer_TransferDispatch::TransientProcess()
{
  Handle(Transfer_TransientProcess) tmp = ((Transfer_TransferDispatch*)nativeHandle)->TransientProcess();
  return gcnew OCTransfer_TransientProcess(&tmp);
}

 System::Boolean OCTransfer_TransferDispatch::Copy(OCNaroWrappers::OCStandard_Transient^ entfrom, OCNaroWrappers::OCStandard_Transient^ entto, System::Boolean mapped, System::Boolean errstat)
{
  return OCConverter::StandardBooleanToBoolean(((Transfer_TransferDispatch*)nativeHandle)->Copy(*((Handle_Standard_Transient*)entfrom->Handle), *((Handle_Standard_Transient*)entto->Handle), OCConverter::BooleanToStandardBoolean(mapped), OCConverter::BooleanToStandardBoolean(errstat)));
}


