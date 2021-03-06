// File generated by CPPExt (CPP file)
//

#include "StepShape_CsgSolid.h"
#include "../Converter.h"
#include "../TCollection/TCollection_HAsciiString.h"
#include "StepShape_CsgSelect.h"


using namespace OCNaroWrappers;

OCStepShape_CsgSolid::OCStepShape_CsgSolid(StepShape_CsgSolid* nativeHandle) : OCStepShape_SolidModel((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCStepShape_CsgSolid::OCStepShape_CsgSolid() : OCStepShape_SolidModel((OCDummy^)nullptr)

{
  nativeHandle = new StepShape_CsgSolid();
}

 void OCStepShape_CsgSolid::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName)
{
  ((StepShape_CsgSolid*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle));
}

 void OCStepShape_CsgSolid::Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_CsgSelect^ aTreeRootExpression)
{
  ((StepShape_CsgSolid*)nativeHandle)->Init(*((Handle_TCollection_HAsciiString*)aName->Handle), *((StepShape_CsgSelect*)aTreeRootExpression->Handle));
}

 void OCStepShape_CsgSolid::SetTreeRootExpression(OCNaroWrappers::OCStepShape_CsgSelect^ aTreeRootExpression)
{
  ((StepShape_CsgSolid*)nativeHandle)->SetTreeRootExpression(*((StepShape_CsgSelect*)aTreeRootExpression->Handle));
}

OCStepShape_CsgSelect^ OCStepShape_CsgSolid::TreeRootExpression()
{
  StepShape_CsgSelect* tmp = new StepShape_CsgSelect();
  *tmp = ((StepShape_CsgSolid*)nativeHandle)->TreeRootExpression();
  return gcnew OCStepShape_CsgSelect(tmp);
}


