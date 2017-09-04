// File generated by CPPExt (CPP file)
//

#include "BOP_FaceAreaBuilder.h"
#include "../Converter.h"
#include "BOP_LoopSet.h"
#include "BOP_LoopClassifier.h"


using namespace OCNaroWrappers;

OCBOP_FaceAreaBuilder::OCBOP_FaceAreaBuilder(BOP_FaceAreaBuilder* nativeHandle) : OCBOP_Area2dBuilder((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOP_FaceAreaBuilder::OCBOP_FaceAreaBuilder() : OCBOP_Area2dBuilder((OCDummy^)nullptr)

{
  nativeHandle = new BOP_FaceAreaBuilder();
}

OCBOP_FaceAreaBuilder::OCBOP_FaceAreaBuilder(OCNaroWrappers::OCBOP_LoopSet^ LS, OCNaroWrappers::OCBOP_LoopClassifier^ LC, System::Boolean ForceClass) : OCBOP_Area2dBuilder((OCDummy^)nullptr)

{
  nativeHandle = new BOP_FaceAreaBuilder(*((BOP_LoopSet*)LS->Handle), *((BOP_LoopClassifier*)LC->Handle), OCConverter::BooleanToStandardBoolean(ForceClass));
}

 void OCBOP_FaceAreaBuilder::InitFaceAreaBuilder(OCNaroWrappers::OCBOP_LoopSet^ LS, OCNaroWrappers::OCBOP_LoopClassifier^ LC, System::Boolean ForceClass)
{
  ((BOP_FaceAreaBuilder*)nativeHandle)->InitFaceAreaBuilder(*((BOP_LoopSet*)LS->Handle), *((BOP_LoopClassifier*)LC->Handle), OCConverter::BooleanToStandardBoolean(ForceClass));
}

