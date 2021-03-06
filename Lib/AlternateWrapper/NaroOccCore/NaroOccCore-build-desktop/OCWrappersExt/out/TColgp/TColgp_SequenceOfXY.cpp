// File generated by CPPExt (CPP file)
//

#include "TColgp_SequenceOfXY.h"
#include "../Converter.h"
#include "../gp/gp_XY.h"
#include "TColgp_SequenceNodeOfSequenceOfXY.h"


using namespace OCNaroWrappers;

OCTColgp_SequenceOfXY::OCTColgp_SequenceOfXY(TColgp_SequenceOfXY* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTColgp_SequenceOfXY::OCTColgp_SequenceOfXY() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new TColgp_SequenceOfXY();
}

OCTColgp_SequenceOfXY^ OCTColgp_SequenceOfXY::Assign(OCNaroWrappers::OCTColgp_SequenceOfXY^ Other)
{
  TColgp_SequenceOfXY* tmp = new TColgp_SequenceOfXY();
  *tmp = ((TColgp_SequenceOfXY*)nativeHandle)->Assign(*((TColgp_SequenceOfXY*)Other->Handle));
  return gcnew OCTColgp_SequenceOfXY(tmp);
}

 void OCTColgp_SequenceOfXY::Append(OCNaroWrappers::OCgp_XY^ T)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->Append(*((gp_XY*)T->Handle));
}

 void OCTColgp_SequenceOfXY::Append(OCNaroWrappers::OCTColgp_SequenceOfXY^ S)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->Append(*((TColgp_SequenceOfXY*)S->Handle));
}

 void OCTColgp_SequenceOfXY::Prepend(OCNaroWrappers::OCgp_XY^ T)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->Prepend(*((gp_XY*)T->Handle));
}

 void OCTColgp_SequenceOfXY::Prepend(OCNaroWrappers::OCTColgp_SequenceOfXY^ S)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->Prepend(*((TColgp_SequenceOfXY*)S->Handle));
}

 void OCTColgp_SequenceOfXY::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCgp_XY^ T)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->InsertBefore(Index, *((gp_XY*)T->Handle));
}

 void OCTColgp_SequenceOfXY::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfXY^ S)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->InsertBefore(Index, *((TColgp_SequenceOfXY*)S->Handle));
}

 void OCTColgp_SequenceOfXY::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCgp_XY^ T)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->InsertAfter(Index, *((gp_XY*)T->Handle));
}

 void OCTColgp_SequenceOfXY::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfXY^ S)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->InsertAfter(Index, *((TColgp_SequenceOfXY*)S->Handle));
}

OCgp_XY^ OCTColgp_SequenceOfXY::First()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((TColgp_SequenceOfXY*)nativeHandle)->First();
  return gcnew OCgp_XY(tmp);
}

OCgp_XY^ OCTColgp_SequenceOfXY::Last()
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((TColgp_SequenceOfXY*)nativeHandle)->Last();
  return gcnew OCgp_XY(tmp);
}

 void OCTColgp_SequenceOfXY::Split(Standard_Integer Index, OCNaroWrappers::OCTColgp_SequenceOfXY^ Sub)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->Split(Index, *((TColgp_SequenceOfXY*)Sub->Handle));
}

OCgp_XY^ OCTColgp_SequenceOfXY::Value(Standard_Integer Index)
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((TColgp_SequenceOfXY*)nativeHandle)->Value(Index);
  return gcnew OCgp_XY(tmp);
}

 void OCTColgp_SequenceOfXY::SetValue(Standard_Integer Index, OCNaroWrappers::OCgp_XY^ I)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->SetValue(Index, *((gp_XY*)I->Handle));
}

OCgp_XY^ OCTColgp_SequenceOfXY::ChangeValue(Standard_Integer Index)
{
  gp_XY* tmp = new gp_XY();
  *tmp = ((TColgp_SequenceOfXY*)nativeHandle)->ChangeValue(Index);
  return gcnew OCgp_XY(tmp);
}

 void OCTColgp_SequenceOfXY::Remove(Standard_Integer Index)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->Remove(Index);
}

 void OCTColgp_SequenceOfXY::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((TColgp_SequenceOfXY*)nativeHandle)->Remove(FromIndex, ToIndex);
}


