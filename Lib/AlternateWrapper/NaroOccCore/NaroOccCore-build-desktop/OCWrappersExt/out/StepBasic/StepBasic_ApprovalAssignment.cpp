// File generated by CPPExt (CPP file)
//

#include "StepBasic_ApprovalAssignment.h"
#include "../Converter.h"
#include "StepBasic_Approval.h"


using namespace OCNaroWrappers;

OCStepBasic_ApprovalAssignment::OCStepBasic_ApprovalAssignment(Handle(StepBasic_ApprovalAssignment)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_StepBasic_ApprovalAssignment(*nativeHandle);
}

 void OCStepBasic_ApprovalAssignment::Init(OCNaroWrappers::OCStepBasic_Approval^ aAssignedApproval)
{
  (*((Handle_StepBasic_ApprovalAssignment*)nativeHandle))->Init(*((Handle_StepBasic_Approval*)aAssignedApproval->Handle));
}

 void OCStepBasic_ApprovalAssignment::SetAssignedApproval(OCNaroWrappers::OCStepBasic_Approval^ aAssignedApproval)
{
  (*((Handle_StepBasic_ApprovalAssignment*)nativeHandle))->SetAssignedApproval(*((Handle_StepBasic_Approval*)aAssignedApproval->Handle));
}

OCStepBasic_Approval^ OCStepBasic_ApprovalAssignment::AssignedApproval()
{
  Handle(StepBasic_Approval) tmp = (*((Handle_StepBasic_ApprovalAssignment*)nativeHandle))->AssignedApproval();
  return gcnew OCStepBasic_Approval(&tmp);
}


