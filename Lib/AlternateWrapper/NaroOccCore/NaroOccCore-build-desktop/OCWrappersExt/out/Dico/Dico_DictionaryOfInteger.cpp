// File generated by CPPExt (CPP file)
//

#include "Dico_DictionaryOfInteger.h"
#include "../Converter.h"
#include "Dico_IteratorOfDictionaryOfInteger.h"
#include "Dico_StackItemOfDictionaryOfInteger.h"
#include "../TCollection/TCollection_AsciiString.h"


using namespace OCNaroWrappers;

OCDico_DictionaryOfInteger::OCDico_DictionaryOfInteger(Handle(Dico_DictionaryOfInteger)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Dico_DictionaryOfInteger(*nativeHandle);
}

OCDico_DictionaryOfInteger::OCDico_DictionaryOfInteger() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Dico_DictionaryOfInteger(new Dico_DictionaryOfInteger());
}

 System::Boolean OCDico_DictionaryOfInteger::HasItem(System::String^ name, System::Boolean exact)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->HasItem(OCConverter::StringToStandardCString(name), OCConverter::BooleanToStandardBoolean(exact)));
}

 System::Boolean OCDico_DictionaryOfInteger::HasItem(OCNaroWrappers::OCTCollection_AsciiString^ name, System::Boolean exact)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->HasItem(*((TCollection_AsciiString*)name->Handle), OCConverter::BooleanToStandardBoolean(exact)));
}

 Standard_Integer OCDico_DictionaryOfInteger::Item(System::String^ name, System::Boolean exact)
{
  return (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->Item(OCConverter::StringToStandardCString(name), OCConverter::BooleanToStandardBoolean(exact));
}

 Standard_Integer OCDico_DictionaryOfInteger::Item(OCNaroWrappers::OCTCollection_AsciiString^ name, System::Boolean exact)
{
  return (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->Item(*((TCollection_AsciiString*)name->Handle), OCConverter::BooleanToStandardBoolean(exact));
}

 System::Boolean OCDico_DictionaryOfInteger::GetItem(System::String^ name, Standard_Integer& anitem, System::Boolean exact)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->GetItem(OCConverter::StringToStandardCString(name), anitem, OCConverter::BooleanToStandardBoolean(exact)));
}

 System::Boolean OCDico_DictionaryOfInteger::GetItem(OCNaroWrappers::OCTCollection_AsciiString^ name, Standard_Integer& anitem, System::Boolean exact)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->GetItem(*((TCollection_AsciiString*)name->Handle), anitem, OCConverter::BooleanToStandardBoolean(exact)));
}

 void OCDico_DictionaryOfInteger::SetItem(System::String^ name, Standard_Integer anitem, System::Boolean exact)
{
  (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->SetItem(OCConverter::StringToStandardCString(name), anitem, OCConverter::BooleanToStandardBoolean(exact));
}

 void OCDico_DictionaryOfInteger::SetItem(OCNaroWrappers::OCTCollection_AsciiString^ name, Standard_Integer anitem, System::Boolean exact)
{
  (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->SetItem(*((TCollection_AsciiString*)name->Handle), anitem, OCConverter::BooleanToStandardBoolean(exact));
}

 Standard_Integer OCDico_DictionaryOfInteger::NewItem(System::String^ name, System::Boolean& isvalued, System::Boolean exact)
{
  return (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->NewItem(OCConverter::StringToStandardCString(name), (Standard_Boolean&)(isvalued), OCConverter::BooleanToStandardBoolean(exact));
}

 Standard_Integer OCDico_DictionaryOfInteger::NewItem(OCNaroWrappers::OCTCollection_AsciiString^ name, System::Boolean& isvalued, System::Boolean exact)
{
  return (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->NewItem(*((TCollection_AsciiString*)name->Handle), (Standard_Boolean&)(isvalued), OCConverter::BooleanToStandardBoolean(exact));
}

 System::Boolean OCDico_DictionaryOfInteger::RemoveItem(System::String^ name, System::Boolean cln, System::Boolean exact)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->RemoveItem(OCConverter::StringToStandardCString(name), OCConverter::BooleanToStandardBoolean(cln), OCConverter::BooleanToStandardBoolean(exact)));
}

 System::Boolean OCDico_DictionaryOfInteger::RemoveItem(OCNaroWrappers::OCTCollection_AsciiString^ name, System::Boolean cln, System::Boolean exact)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->RemoveItem(*((TCollection_AsciiString*)name->Handle), OCConverter::BooleanToStandardBoolean(cln), OCConverter::BooleanToStandardBoolean(exact)));
}

 void OCDico_DictionaryOfInteger::Clean()
{
  (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->Clean();
}

 System::Boolean OCDico_DictionaryOfInteger::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->IsEmpty());
}

 void OCDico_DictionaryOfInteger::Clear()
{
  (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->Clear();
}

OCDico_DictionaryOfInteger^ OCDico_DictionaryOfInteger::Copy()
{
  Handle(Dico_DictionaryOfInteger) tmp = (*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->Copy();
  return gcnew OCDico_DictionaryOfInteger(&tmp);
}

 System::Boolean OCDico_DictionaryOfInteger::Complete(OCNaroWrappers::OCDico_DictionaryOfInteger^ acell)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_Dico_DictionaryOfInteger*)nativeHandle))->Complete(*((Handle_Dico_DictionaryOfInteger*)acell->Handle)));
}


