// File generated by CPPExt (CPP file)
//

#include "Transfer_TransferMapOfProcessForTransient.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "Transfer_Binder.h"
#include "../TColStd/TColStd_MapTransientHasher.h"
#include "Transfer_IndexedDataMapNodeOfTransferMapOfProcessForTransient.h"


using namespace OCNaroWrappers;

OCTransfer_TransferMapOfProcessForTransient::OCTransfer_TransferMapOfProcessForTransient(Transfer_TransferMapOfProcessForTransient* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTransfer_TransferMapOfProcessForTransient::OCTransfer_TransferMapOfProcessForTransient(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new Transfer_TransferMapOfProcessForTransient(NbBuckets);
}

OCTransfer_TransferMapOfProcessForTransient^ OCTransfer_TransferMapOfProcessForTransient::Assign(OCNaroWrappers::OCTransfer_TransferMapOfProcessForTransient^ Other)
{
  Transfer_TransferMapOfProcessForTransient* tmp = new Transfer_TransferMapOfProcessForTransient(0);
  *tmp = ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->Assign(*((Transfer_TransferMapOfProcessForTransient*)Other->Handle));
  return gcnew OCTransfer_TransferMapOfProcessForTransient(tmp);
}

 void OCTransfer_TransferMapOfProcessForTransient::ReSize(Standard_Integer NbBuckets)
{
  ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->ReSize(NbBuckets);
}

 Standard_Integer OCTransfer_TransferMapOfProcessForTransient::Add(OCNaroWrappers::OCStandard_Transient^ K, OCNaroWrappers::OCTransfer_Binder^ I)
{
  return ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->Add(*((Handle_Standard_Transient*)K->Handle), *((Handle_Transfer_Binder*)I->Handle));
}

 void OCTransfer_TransferMapOfProcessForTransient::Substitute(Standard_Integer I, OCNaroWrappers::OCStandard_Transient^ K, OCNaroWrappers::OCTransfer_Binder^ T)
{
  ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->Substitute(I, *((Handle_Standard_Transient*)K->Handle), *((Handle_Transfer_Binder*)T->Handle));
}

 void OCTransfer_TransferMapOfProcessForTransient::RemoveLast()
{
  ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->RemoveLast();
}

 System::Boolean OCTransfer_TransferMapOfProcessForTransient::Contains(OCNaroWrappers::OCStandard_Transient^ K)
{
  return OCConverter::StandardBooleanToBoolean(((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->Contains(*((Handle_Standard_Transient*)K->Handle)));
}

OCStandard_Transient^ OCTransfer_TransferMapOfProcessForTransient::FindKey(Standard_Integer I)
{
  Handle(Standard_Transient) tmp = ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->FindKey(I);
  return gcnew OCStandard_Transient(&tmp);
}

OCTransfer_Binder^ OCTransfer_TransferMapOfProcessForTransient::FindFromIndex(Standard_Integer I)
{
  Handle(Transfer_Binder) tmp = ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->FindFromIndex(I);
  return gcnew OCTransfer_Binder(&tmp);
}

OCTransfer_Binder^ OCTransfer_TransferMapOfProcessForTransient::ChangeFromIndex(Standard_Integer I)
{
  Handle(Transfer_Binder) tmp = ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->ChangeFromIndex(I);
  return gcnew OCTransfer_Binder(&tmp);
}

 Standard_Integer OCTransfer_TransferMapOfProcessForTransient::FindIndex(OCNaroWrappers::OCStandard_Transient^ K)
{
  return ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->FindIndex(*((Handle_Standard_Transient*)K->Handle));
}

OCTransfer_Binder^ OCTransfer_TransferMapOfProcessForTransient::FindFromKey(OCNaroWrappers::OCStandard_Transient^ K)
{
  Handle(Transfer_Binder) tmp = ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->FindFromKey(*((Handle_Standard_Transient*)K->Handle));
  return gcnew OCTransfer_Binder(&tmp);
}

OCTransfer_Binder^ OCTransfer_TransferMapOfProcessForTransient::ChangeFromKey(OCNaroWrappers::OCStandard_Transient^ K)
{
  Handle(Transfer_Binder) tmp = ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->ChangeFromKey(*((Handle_Standard_Transient*)K->Handle));
  return gcnew OCTransfer_Binder(&tmp);
}

 Standard_Address OCTransfer_TransferMapOfProcessForTransient::FindFromKey1(OCNaroWrappers::OCStandard_Transient^ K)
{
  return ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->FindFromKey1(*((Handle_Standard_Transient*)K->Handle));
}

 Standard_Address OCTransfer_TransferMapOfProcessForTransient::ChangeFromKey1(OCNaroWrappers::OCStandard_Transient^ K)
{
  return ((Transfer_TransferMapOfProcessForTransient*)nativeHandle)->ChangeFromKey1(*((Handle_Standard_Transient*)K->Handle));
}


