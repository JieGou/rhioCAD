// File generated by CPPExt (CPP file)
//

#include "BOP_EmptyBuilder.h"
#include "../Converter.h"
#include "../BOPTools/BOPTools_DSFiller.h"


using namespace OCNaroWrappers;

OCBOP_EmptyBuilder::OCBOP_EmptyBuilder(BOP_EmptyBuilder* nativeHandle) : OCBOP_Builder((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOP_EmptyBuilder::OCBOP_EmptyBuilder() : OCBOP_Builder((OCDummy^)nullptr)

{
  nativeHandle = new BOP_EmptyBuilder();
}

 void OCBOP_EmptyBuilder::Do()
{
  ((BOP_EmptyBuilder*)nativeHandle)->Do();
}

 void OCBOP_EmptyBuilder::DoWithFiller(OCNaroWrappers::OCBOPTools_DSFiller^ aDSF)
{
  ((BOP_EmptyBuilder*)nativeHandle)->DoWithFiller(*((BOPTools_DSFiller*)aDSF->Handle));
}

 void OCBOP_EmptyBuilder::Destroy()
{
  ((BOP_EmptyBuilder*)nativeHandle)->Destroy();
}

 void OCBOP_EmptyBuilder::BuildResult()
{
  ((BOP_EmptyBuilder*)nativeHandle)->BuildResult();
}


