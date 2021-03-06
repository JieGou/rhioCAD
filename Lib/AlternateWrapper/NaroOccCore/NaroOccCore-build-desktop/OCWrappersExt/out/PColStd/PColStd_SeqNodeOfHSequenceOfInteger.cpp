// File generated by CPPExt (CPP file)
//

#include "PColStd_SeqNodeOfHSequenceOfInteger.h"
#include "../Converter.h"
#include "PColStd_HSequenceOfInteger.h"
#include "PColStd_SeqExplorerOfHSequenceOfInteger.h"


using namespace OCNaroWrappers;

OCPColStd_SeqNodeOfHSequenceOfInteger::OCPColStd_SeqNodeOfHSequenceOfInteger(Handle(PColStd_SeqNodeOfHSequenceOfInteger)* nativeHandle) : OCPMMgt_PManaged((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_PColStd_SeqNodeOfHSequenceOfInteger(*nativeHandle);
}

OCPColStd_SeqNodeOfHSequenceOfInteger::OCPColStd_SeqNodeOfHSequenceOfInteger(OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ TheLast, Standard_Integer TheItem) : OCPMMgt_PManaged((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PColStd_SeqNodeOfHSequenceOfInteger(new PColStd_SeqNodeOfHSequenceOfInteger(*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)TheLast->Handle), TheItem));
}

OCPColStd_SeqNodeOfHSequenceOfInteger::OCPColStd_SeqNodeOfHSequenceOfInteger(Standard_Integer TheItem, OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ TheFirst) : OCPMMgt_PManaged((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PColStd_SeqNodeOfHSequenceOfInteger(new PColStd_SeqNodeOfHSequenceOfInteger(TheItem, *((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)TheFirst->Handle)));
}

OCPColStd_SeqNodeOfHSequenceOfInteger::OCPColStd_SeqNodeOfHSequenceOfInteger(OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ ThePrevious, OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ TheNext, Standard_Integer TheItem) : OCPMMgt_PManaged((OCDummy^)nullptr)

{
  nativeHandle = new Handle_PColStd_SeqNodeOfHSequenceOfInteger(new PColStd_SeqNodeOfHSequenceOfInteger(*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)ThePrevious->Handle), *((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)TheNext->Handle), TheItem));
}

 Standard_Integer OCPColStd_SeqNodeOfHSequenceOfInteger::Value()
{
  return (*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)nativeHandle))->Value();
}

OCPColStd_SeqNodeOfHSequenceOfInteger^ OCPColStd_SeqNodeOfHSequenceOfInteger::Next()
{
  Handle(PColStd_SeqNodeOfHSequenceOfInteger) tmp = (*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)nativeHandle))->Next();
  return gcnew OCPColStd_SeqNodeOfHSequenceOfInteger(&tmp);
}

OCPColStd_SeqNodeOfHSequenceOfInteger^ OCPColStd_SeqNodeOfHSequenceOfInteger::Previous()
{
  Handle(PColStd_SeqNodeOfHSequenceOfInteger) tmp = (*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)nativeHandle))->Previous();
  return gcnew OCPColStd_SeqNodeOfHSequenceOfInteger(&tmp);
}

 void OCPColStd_SeqNodeOfHSequenceOfInteger::SetValue(Standard_Integer AnItem)
{
  (*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)nativeHandle))->SetValue(AnItem);
}

 void OCPColStd_SeqNodeOfHSequenceOfInteger::SetNext(OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ ANode)
{
  (*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)nativeHandle))->SetNext(*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)ANode->Handle));
}

 void OCPColStd_SeqNodeOfHSequenceOfInteger::SetPrevious(OCNaroWrappers::OCPColStd_SeqNodeOfHSequenceOfInteger^ ANode)
{
  (*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)nativeHandle))->SetPrevious(*((Handle_PColStd_SeqNodeOfHSequenceOfInteger*)ANode->Handle));
}


