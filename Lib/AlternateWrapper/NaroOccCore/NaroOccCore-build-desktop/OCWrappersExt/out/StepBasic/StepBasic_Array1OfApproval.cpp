// File generated by CPPExt (CPP file)
//

#include "StepBasic_Array1OfApproval.h"
#include "../Converter.h"
#include "StepBasic_Approval.h"


using namespace OCNaroWrappers;

OCStepBasic_Array1OfApproval::OCStepBasic_Array1OfApproval(StepBasic_Array1OfApproval* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepBasic_Array1OfApproval::OCStepBasic_Array1OfApproval(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepBasic_Array1OfApproval(Low, Up);
}

OCStepBasic_Array1OfApproval::OCStepBasic_Array1OfApproval(OCNaroWrappers::OCStepBasic_Approval^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepBasic_Array1OfApproval(*((Handle_StepBasic_Approval*)Item->Handle), Low, Up);
}

 void OCStepBasic_Array1OfApproval::Init(OCNaroWrappers::OCStepBasic_Approval^ V)
{
  ((StepBasic_Array1OfApproval*)nativeHandle)->Init(*((Handle_StepBasic_Approval*)V->Handle));
}

 System::Boolean OCStepBasic_Array1OfApproval::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepBasic_Array1OfApproval*)nativeHandle)->IsAllocated());
}

OCStepBasic_Array1OfApproval^ OCStepBasic_Array1OfApproval::Assign(OCNaroWrappers::OCStepBasic_Array1OfApproval^ Other)
{
  StepBasic_Array1OfApproval* tmp = new StepBasic_Array1OfApproval(0, 0);
  *tmp = ((StepBasic_Array1OfApproval*)nativeHandle)->Assign(*((StepBasic_Array1OfApproval*)Other->Handle));
  return gcnew OCStepBasic_Array1OfApproval(tmp);
}

 Standard_Integer OCStepBasic_Array1OfApproval::Length()
{
  return ((StepBasic_Array1OfApproval*)nativeHandle)->Length();
}

 Standard_Integer OCStepBasic_Array1OfApproval::Lower()
{
  return ((StepBasic_Array1OfApproval*)nativeHandle)->Lower();
}

 Standard_Integer OCStepBasic_Array1OfApproval::Upper()
{
  return ((StepBasic_Array1OfApproval*)nativeHandle)->Upper();
}

 void OCStepBasic_Array1OfApproval::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_Approval^ Value)
{
  ((StepBasic_Array1OfApproval*)nativeHandle)->SetValue(Index, *((Handle_StepBasic_Approval*)Value->Handle));
}

OCStepBasic_Approval^ OCStepBasic_Array1OfApproval::Value(Standard_Integer Index)
{
  Handle(StepBasic_Approval) tmp = ((StepBasic_Array1OfApproval*)nativeHandle)->Value(Index);
  return gcnew OCStepBasic_Approval(&tmp);
}

OCStepBasic_Approval^ OCStepBasic_Array1OfApproval::ChangeValue(Standard_Integer Index)
{
  Handle(StepBasic_Approval) tmp = ((StepBasic_Array1OfApproval*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepBasic_Approval(&tmp);
}

