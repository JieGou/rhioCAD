// File generated by CPPExt (CPP file)
//

#include "StepAP203_ContractedItem.h"
#include "../Converter.h"
#include "../Standard/Standard_Transient.h"
#include "../StepBasic/StepBasic_ProductDefinitionFormation.h"


using namespace OCNaroWrappers;

OCStepAP203_ContractedItem::OCStepAP203_ContractedItem(StepAP203_ContractedItem* nativeHandle) : OCStepData_SelectType((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepAP203_ContractedItem::OCStepAP203_ContractedItem() : OCStepData_SelectType((OCDummy^)nullptr)

{
  nativeHandle = new StepAP203_ContractedItem();
}

 Standard_Integer OCStepAP203_ContractedItem::CaseNum(OCNaroWrappers::OCStandard_Transient^ ent)
{
  return ((StepAP203_ContractedItem*)nativeHandle)->CaseNum(*((Handle_Standard_Transient*)ent->Handle));
}

OCStepBasic_ProductDefinitionFormation^ OCStepAP203_ContractedItem::ProductDefinitionFormation()
{
  Handle(StepBasic_ProductDefinitionFormation) tmp = ((StepAP203_ContractedItem*)nativeHandle)->ProductDefinitionFormation();
  return gcnew OCStepBasic_ProductDefinitionFormation(&tmp);
}


