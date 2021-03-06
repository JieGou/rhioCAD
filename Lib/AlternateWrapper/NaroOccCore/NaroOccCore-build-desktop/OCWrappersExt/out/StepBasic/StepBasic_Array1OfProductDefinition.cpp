// File generated by CPPExt (CPP file)
//

#include "StepBasic_Array1OfProductDefinition.h"
#include "../Converter.h"
#include "StepBasic_ProductDefinition.h"


using namespace OCNaroWrappers;

OCStepBasic_Array1OfProductDefinition::OCStepBasic_Array1OfProductDefinition(StepBasic_Array1OfProductDefinition* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCStepBasic_Array1OfProductDefinition::OCStepBasic_Array1OfProductDefinition(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepBasic_Array1OfProductDefinition(Low, Up);
}

OCStepBasic_Array1OfProductDefinition::OCStepBasic_Array1OfProductDefinition(OCNaroWrappers::OCStepBasic_ProductDefinition^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new StepBasic_Array1OfProductDefinition(*((Handle_StepBasic_ProductDefinition*)Item->Handle), Low, Up);
}

 void OCStepBasic_Array1OfProductDefinition::Init(OCNaroWrappers::OCStepBasic_ProductDefinition^ V)
{
  ((StepBasic_Array1OfProductDefinition*)nativeHandle)->Init(*((Handle_StepBasic_ProductDefinition*)V->Handle));
}

 System::Boolean OCStepBasic_Array1OfProductDefinition::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((StepBasic_Array1OfProductDefinition*)nativeHandle)->IsAllocated());
}

OCStepBasic_Array1OfProductDefinition^ OCStepBasic_Array1OfProductDefinition::Assign(OCNaroWrappers::OCStepBasic_Array1OfProductDefinition^ Other)
{
  StepBasic_Array1OfProductDefinition* tmp = new StepBasic_Array1OfProductDefinition(0, 0);
  *tmp = ((StepBasic_Array1OfProductDefinition*)nativeHandle)->Assign(*((StepBasic_Array1OfProductDefinition*)Other->Handle));
  return gcnew OCStepBasic_Array1OfProductDefinition(tmp);
}

 Standard_Integer OCStepBasic_Array1OfProductDefinition::Length()
{
  return ((StepBasic_Array1OfProductDefinition*)nativeHandle)->Length();
}

 Standard_Integer OCStepBasic_Array1OfProductDefinition::Lower()
{
  return ((StepBasic_Array1OfProductDefinition*)nativeHandle)->Lower();
}

 Standard_Integer OCStepBasic_Array1OfProductDefinition::Upper()
{
  return ((StepBasic_Array1OfProductDefinition*)nativeHandle)->Upper();
}

 void OCStepBasic_Array1OfProductDefinition::SetValue(Standard_Integer Index, OCNaroWrappers::OCStepBasic_ProductDefinition^ Value)
{
  ((StepBasic_Array1OfProductDefinition*)nativeHandle)->SetValue(Index, *((Handle_StepBasic_ProductDefinition*)Value->Handle));
}

OCStepBasic_ProductDefinition^ OCStepBasic_Array1OfProductDefinition::Value(Standard_Integer Index)
{
  Handle(StepBasic_ProductDefinition) tmp = ((StepBasic_Array1OfProductDefinition*)nativeHandle)->Value(Index);
  return gcnew OCStepBasic_ProductDefinition(&tmp);
}

OCStepBasic_ProductDefinition^ OCStepBasic_Array1OfProductDefinition::ChangeValue(Standard_Integer Index)
{
  Handle(StepBasic_ProductDefinition) tmp = ((StepBasic_Array1OfProductDefinition*)nativeHandle)->ChangeValue(Index);
  return gcnew OCStepBasic_ProductDefinition(&tmp);
}


