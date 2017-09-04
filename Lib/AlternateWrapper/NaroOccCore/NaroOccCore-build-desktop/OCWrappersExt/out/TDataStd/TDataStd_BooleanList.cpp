// File generated by CPPExt (CPP file)
//

#include "TDataStd_BooleanList.h"
#include "../Converter.h"
#include "../Standard/Standard_GUID.h"
#include "../TDF/TDF_Label.h"
#include "TDataStd_ListOfByte.h"
#include "../TDF/TDF_Attribute.h"
#include "../TDF/TDF_RelocationTable.h"


using namespace OCNaroWrappers;

OCTDataStd_BooleanList::OCTDataStd_BooleanList(Handle(TDataStd_BooleanList)* nativeHandle) : OCTDF_Attribute((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TDataStd_BooleanList(*nativeHandle);
}

OCStandard_GUID^ OCTDataStd_BooleanList::GetID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = TDataStd_BooleanList::GetID();
  return gcnew OCStandard_GUID(tmp);
}

OCTDataStd_BooleanList^ OCTDataStd_BooleanList::Set(OCNaroWrappers::OCTDF_Label^ label)
{
  Handle(TDataStd_BooleanList) tmp = TDataStd_BooleanList::Set(*((TDF_Label*)label->Handle));
  return gcnew OCTDataStd_BooleanList(&tmp);
}

OCTDataStd_BooleanList::OCTDataStd_BooleanList() : OCTDF_Attribute((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TDataStd_BooleanList(new TDataStd_BooleanList());
}

 System::Boolean OCTDataStd_BooleanList::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_BooleanList*)nativeHandle))->IsEmpty());
}

 Standard_Integer OCTDataStd_BooleanList::Extent()
{
  return (*((Handle_TDataStd_BooleanList*)nativeHandle))->Extent();
}

 void OCTDataStd_BooleanList::Prepend(System::Boolean value)
{
  (*((Handle_TDataStd_BooleanList*)nativeHandle))->Prepend(OCConverter::BooleanToStandardBoolean(value));
}

 void OCTDataStd_BooleanList::Append(System::Boolean value)
{
  (*((Handle_TDataStd_BooleanList*)nativeHandle))->Append(OCConverter::BooleanToStandardBoolean(value));
}

 void OCTDataStd_BooleanList::Clear()
{
  (*((Handle_TDataStd_BooleanList*)nativeHandle))->Clear();
}

 System::Boolean OCTDataStd_BooleanList::First()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_BooleanList*)nativeHandle))->First());
}

 System::Boolean OCTDataStd_BooleanList::Last()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_TDataStd_BooleanList*)nativeHandle))->Last());
}

OCTDataStd_ListOfByte^ OCTDataStd_BooleanList::List()
{
  TDataStd_ListOfByte* tmp = new TDataStd_ListOfByte();
  *tmp = (*((Handle_TDataStd_BooleanList*)nativeHandle))->List();
  return gcnew OCTDataStd_ListOfByte(tmp);
}

OCStandard_GUID^ OCTDataStd_BooleanList::ID()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_TDataStd_BooleanList*)nativeHandle))->ID();
  return gcnew OCStandard_GUID(tmp);
}

 void OCTDataStd_BooleanList::Restore(OCNaroWrappers::OCTDF_Attribute^ With)
{
  (*((Handle_TDataStd_BooleanList*)nativeHandle))->Restore(*((Handle_TDF_Attribute*)With->Handle));
}

OCTDF_Attribute^ OCTDataStd_BooleanList::NewEmpty()
{
  Handle(TDF_Attribute) tmp = (*((Handle_TDataStd_BooleanList*)nativeHandle))->NewEmpty();
  return gcnew OCTDF_Attribute(&tmp);
}

 void OCTDataStd_BooleanList::Paste(OCNaroWrappers::OCTDF_Attribute^ Into, OCNaroWrappers::OCTDF_RelocationTable^ RT)
{
  (*((Handle_TDataStd_BooleanList*)nativeHandle))->Paste(*((Handle_TDF_Attribute*)Into->Handle), *((Handle_TDF_RelocationTable*)RT->Handle));
}

 Standard_OStream& OCTDataStd_BooleanList::Dump(Standard_OStream& anOS)
{
  return (*((Handle_TDataStd_BooleanList*)nativeHandle))->Dump(anOS);
}

