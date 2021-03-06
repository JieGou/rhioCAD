// File generated by CPPExt (CPP file)
//

#include "BOP_ShellShell.h"
#include "../Converter.h"
#include "../BOPTools/BOPTools_DSFiller.h"


using namespace OCNaroWrappers;

OCBOP_ShellShell::OCBOP_ShellShell(BOP_ShellShell* nativeHandle) : OCBOP_ShellSolid((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOP_ShellShell::OCBOP_ShellShell() : OCBOP_ShellSolid((OCDummy^)nullptr)

{
  nativeHandle = new BOP_ShellShell();
}

 void OCBOP_ShellShell::DoWithFiller(OCNaroWrappers::OCBOPTools_DSFiller^ aDSF)
{
  ((BOP_ShellShell*)nativeHandle)->DoWithFiller(*((BOPTools_DSFiller*)aDSF->Handle));
}

 void OCBOP_ShellShell::Destroy()
{
  ((BOP_ShellShell*)nativeHandle)->Destroy();
}

 void OCBOP_ShellShell::BuildResult()
{
  ((BOP_ShellShell*)nativeHandle)->BuildResult();
}

 void OCBOP_ShellShell::DoNewFaces()
{
  ((BOP_ShellShell*)nativeHandle)->DoNewFaces();
}


