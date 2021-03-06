// File generated by CPPExt (CPP file)
//

#include "Transfer_ActorOfFinderProcess.h"
#include "../Converter.h"
#include "Transfer_Binder.h"
#include "Transfer_Finder.h"
#include "Transfer_ProcessForFinder.h"
#include "Transfer_FinderProcess.h"
#include "../Standard/Standard_Transient.h"


using namespace OCNaroWrappers;

OCTransfer_ActorOfFinderProcess::OCTransfer_ActorOfFinderProcess(Handle(Transfer_ActorOfFinderProcess)* nativeHandle) : OCTransfer_ActorOfProcessForFinder((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Transfer_ActorOfFinderProcess(*nativeHandle);
}

OCTransfer_ActorOfFinderProcess::OCTransfer_ActorOfFinderProcess() : OCTransfer_ActorOfProcessForFinder((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Transfer_ActorOfFinderProcess(new Transfer_ActorOfFinderProcess());
}

 Standard_Integer OCTransfer_ActorOfFinderProcess::ModeTrans()
{
  return (*((Handle_Transfer_ActorOfFinderProcess*)nativeHandle))->ModeTrans();
}

OCTransfer_Binder^ OCTransfer_ActorOfFinderProcess::Transferring(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCTransfer_ProcessForFinder^ TP)
{
  Handle(Transfer_Binder) tmp = (*((Handle_Transfer_ActorOfFinderProcess*)nativeHandle))->Transferring(*((Handle_Transfer_Finder*)start->Handle), *((Handle_Transfer_ProcessForFinder*)TP->Handle));
  return gcnew OCTransfer_Binder(&tmp);
}

OCTransfer_Binder^ OCTransfer_ActorOfFinderProcess::Transfer(OCNaroWrappers::OCTransfer_Finder^ start, OCNaroWrappers::OCTransfer_FinderProcess^ TP)
{
  Handle(Transfer_Binder) tmp = (*((Handle_Transfer_ActorOfFinderProcess*)nativeHandle))->Transfer(*((Handle_Transfer_Finder*)start->Handle), *((Handle_Transfer_FinderProcess*)TP->Handle));
  return gcnew OCTransfer_Binder(&tmp);
}

OCStandard_Transient^ OCTransfer_ActorOfFinderProcess::TransferTransient(OCNaroWrappers::OCStandard_Transient^ start, OCNaroWrappers::OCTransfer_FinderProcess^ TP)
{
  Handle(Standard_Transient) tmp = (*((Handle_Transfer_ActorOfFinderProcess*)nativeHandle))->TransferTransient(*((Handle_Standard_Transient*)start->Handle), *((Handle_Transfer_FinderProcess*)TP->Handle));
  return gcnew OCStandard_Transient(&tmp);
}


