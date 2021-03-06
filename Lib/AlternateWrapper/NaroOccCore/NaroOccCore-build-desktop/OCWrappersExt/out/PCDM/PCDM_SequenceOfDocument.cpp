// File generated by CPPExt (CPP file)
//

#include "PCDM_SequenceOfDocument.h"
#include "../Converter.h"
#include "PCDM_Document.h"
#include "PCDM_SequenceNodeOfSequenceOfDocument.h"


using namespace OCNaroWrappers;

OCPCDM_SequenceOfDocument::OCPCDM_SequenceOfDocument(PCDM_SequenceOfDocument* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCPCDM_SequenceOfDocument::OCPCDM_SequenceOfDocument() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new PCDM_SequenceOfDocument();
}

OCPCDM_SequenceOfDocument^ OCPCDM_SequenceOfDocument::Assign(OCNaroWrappers::OCPCDM_SequenceOfDocument^ Other)
{
  PCDM_SequenceOfDocument* tmp = new PCDM_SequenceOfDocument();
  *tmp = ((PCDM_SequenceOfDocument*)nativeHandle)->Assign(*((PCDM_SequenceOfDocument*)Other->Handle));
  return gcnew OCPCDM_SequenceOfDocument(tmp);
}

 void OCPCDM_SequenceOfDocument::Append(OCNaroWrappers::OCPCDM_Document^ T)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->Append(*((Handle_PCDM_Document*)T->Handle));
}

 void OCPCDM_SequenceOfDocument::Append(OCNaroWrappers::OCPCDM_SequenceOfDocument^ S)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->Append(*((PCDM_SequenceOfDocument*)S->Handle));
}

 void OCPCDM_SequenceOfDocument::Prepend(OCNaroWrappers::OCPCDM_Document^ T)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->Prepend(*((Handle_PCDM_Document*)T->Handle));
}

 void OCPCDM_SequenceOfDocument::Prepend(OCNaroWrappers::OCPCDM_SequenceOfDocument^ S)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->Prepend(*((PCDM_SequenceOfDocument*)S->Handle));
}

 void OCPCDM_SequenceOfDocument::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCPCDM_Document^ T)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->InsertBefore(Index, *((Handle_PCDM_Document*)T->Handle));
}

 void OCPCDM_SequenceOfDocument::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCPCDM_SequenceOfDocument^ S)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->InsertBefore(Index, *((PCDM_SequenceOfDocument*)S->Handle));
}

 void OCPCDM_SequenceOfDocument::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCPCDM_Document^ T)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->InsertAfter(Index, *((Handle_PCDM_Document*)T->Handle));
}

 void OCPCDM_SequenceOfDocument::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCPCDM_SequenceOfDocument^ S)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->InsertAfter(Index, *((PCDM_SequenceOfDocument*)S->Handle));
}

OCPCDM_Document^ OCPCDM_SequenceOfDocument::First()
{
  Handle(PCDM_Document) tmp = ((PCDM_SequenceOfDocument*)nativeHandle)->First();
  return gcnew OCPCDM_Document(&tmp);
}

OCPCDM_Document^ OCPCDM_SequenceOfDocument::Last()
{
  Handle(PCDM_Document) tmp = ((PCDM_SequenceOfDocument*)nativeHandle)->Last();
  return gcnew OCPCDM_Document(&tmp);
}

 void OCPCDM_SequenceOfDocument::Split(Standard_Integer Index, OCNaroWrappers::OCPCDM_SequenceOfDocument^ Sub)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->Split(Index, *((PCDM_SequenceOfDocument*)Sub->Handle));
}

OCPCDM_Document^ OCPCDM_SequenceOfDocument::Value(Standard_Integer Index)
{
  Handle(PCDM_Document) tmp = ((PCDM_SequenceOfDocument*)nativeHandle)->Value(Index);
  return gcnew OCPCDM_Document(&tmp);
}

 void OCPCDM_SequenceOfDocument::SetValue(Standard_Integer Index, OCNaroWrappers::OCPCDM_Document^ I)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->SetValue(Index, *((Handle_PCDM_Document*)I->Handle));
}

OCPCDM_Document^ OCPCDM_SequenceOfDocument::ChangeValue(Standard_Integer Index)
{
  Handle(PCDM_Document) tmp = ((PCDM_SequenceOfDocument*)nativeHandle)->ChangeValue(Index);
  return gcnew OCPCDM_Document(&tmp);
}

 void OCPCDM_SequenceOfDocument::Remove(Standard_Integer Index)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->Remove(Index);
}

 void OCPCDM_SequenceOfDocument::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((PCDM_SequenceOfDocument*)nativeHandle)->Remove(FromIndex, ToIndex);
}


