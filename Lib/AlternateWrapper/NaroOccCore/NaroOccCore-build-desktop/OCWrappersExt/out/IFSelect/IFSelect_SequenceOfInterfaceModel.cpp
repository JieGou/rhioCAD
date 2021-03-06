// File generated by CPPExt (CPP file)
//

#include "IFSelect_SequenceOfInterfaceModel.h"
#include "../Converter.h"
#include "../Interface/Interface_InterfaceModel.h"
#include "IFSelect_SequenceNodeOfSequenceOfInterfaceModel.h"


using namespace OCNaroWrappers;

OCIFSelect_SequenceOfInterfaceModel::OCIFSelect_SequenceOfInterfaceModel(IFSelect_SequenceOfInterfaceModel* nativeHandle) : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCIFSelect_SequenceOfInterfaceModel::OCIFSelect_SequenceOfInterfaceModel() : OCTCollection_BaseSequence((OCDummy^)nullptr)

{
  nativeHandle = new IFSelect_SequenceOfInterfaceModel();
}

OCIFSelect_SequenceOfInterfaceModel^ OCIFSelect_SequenceOfInterfaceModel::Assign(OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ Other)
{
  IFSelect_SequenceOfInterfaceModel* tmp = new IFSelect_SequenceOfInterfaceModel();
  *tmp = ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Assign(*((IFSelect_SequenceOfInterfaceModel*)Other->Handle));
  return gcnew OCIFSelect_SequenceOfInterfaceModel(tmp);
}

 void OCIFSelect_SequenceOfInterfaceModel::Append(OCNaroWrappers::OCInterface_InterfaceModel^ T)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Append(*((Handle_Interface_InterfaceModel*)T->Handle));
}

 void OCIFSelect_SequenceOfInterfaceModel::Append(OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ S)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Append(*((IFSelect_SequenceOfInterfaceModel*)S->Handle));
}

 void OCIFSelect_SequenceOfInterfaceModel::Prepend(OCNaroWrappers::OCInterface_InterfaceModel^ T)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Prepend(*((Handle_Interface_InterfaceModel*)T->Handle));
}

 void OCIFSelect_SequenceOfInterfaceModel::Prepend(OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ S)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Prepend(*((IFSelect_SequenceOfInterfaceModel*)S->Handle));
}

 void OCIFSelect_SequenceOfInterfaceModel::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCInterface_InterfaceModel^ T)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->InsertBefore(Index, *((Handle_Interface_InterfaceModel*)T->Handle));
}

 void OCIFSelect_SequenceOfInterfaceModel::InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ S)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->InsertBefore(Index, *((IFSelect_SequenceOfInterfaceModel*)S->Handle));
}

 void OCIFSelect_SequenceOfInterfaceModel::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCInterface_InterfaceModel^ T)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->InsertAfter(Index, *((Handle_Interface_InterfaceModel*)T->Handle));
}

 void OCIFSelect_SequenceOfInterfaceModel::InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ S)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->InsertAfter(Index, *((IFSelect_SequenceOfInterfaceModel*)S->Handle));
}

OCInterface_InterfaceModel^ OCIFSelect_SequenceOfInterfaceModel::First()
{
  Handle(Interface_InterfaceModel) tmp = ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->First();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

OCInterface_InterfaceModel^ OCIFSelect_SequenceOfInterfaceModel::Last()
{
  Handle(Interface_InterfaceModel) tmp = ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Last();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

 void OCIFSelect_SequenceOfInterfaceModel::Split(Standard_Integer Index, OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ Sub)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Split(Index, *((IFSelect_SequenceOfInterfaceModel*)Sub->Handle));
}

OCInterface_InterfaceModel^ OCIFSelect_SequenceOfInterfaceModel::Value(Standard_Integer Index)
{
  Handle(Interface_InterfaceModel) tmp = ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Value(Index);
  return gcnew OCInterface_InterfaceModel(&tmp);
}

 void OCIFSelect_SequenceOfInterfaceModel::SetValue(Standard_Integer Index, OCNaroWrappers::OCInterface_InterfaceModel^ I)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->SetValue(Index, *((Handle_Interface_InterfaceModel*)I->Handle));
}

OCInterface_InterfaceModel^ OCIFSelect_SequenceOfInterfaceModel::ChangeValue(Standard_Integer Index)
{
  Handle(Interface_InterfaceModel) tmp = ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->ChangeValue(Index);
  return gcnew OCInterface_InterfaceModel(&tmp);
}

 void OCIFSelect_SequenceOfInterfaceModel::Remove(Standard_Integer Index)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Remove(Index);
}

 void OCIFSelect_SequenceOfInterfaceModel::Remove(Standard_Integer FromIndex, Standard_Integer ToIndex)
{
  ((IFSelect_SequenceOfInterfaceModel*)nativeHandle)->Remove(FromIndex, ToIndex);
}


