// File generated by CPPExt (CPP file)
//

#include "Interface_IntList.h"
#include "../Converter.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"


using namespace OCNaroWrappers;

OCInterface_IntList::OCInterface_IntList(Interface_IntList* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCInterface_IntList::OCInterface_IntList() 
{
  nativeHandle = new Interface_IntList();
}

OCInterface_IntList::OCInterface_IntList(Standard_Integer nbe) 
{
  nativeHandle = new Interface_IntList(nbe);
}

OCInterface_IntList::OCInterface_IntList(OCNaroWrappers::OCInterface_IntList^ other, System::Boolean copied) 
{
  nativeHandle = new Interface_IntList(*((Interface_IntList*)other->Handle), OCConverter::BooleanToStandardBoolean(copied));
}

 void OCInterface_IntList::Initialize(Standard_Integer nbe)
{
  ((Interface_IntList*)nativeHandle)->Initialize(nbe);
}

 void OCInterface_IntList::Internals(Standard_Integer& nbrefs, OCNaroWrappers::OCTColStd_HArray1OfInteger^ ents, OCNaroWrappers::OCTColStd_HArray1OfInteger^ refs)
{
  ((Interface_IntList*)nativeHandle)->Internals(nbrefs, *((Handle_TColStd_HArray1OfInteger*)ents->Handle), *((Handle_TColStd_HArray1OfInteger*)refs->Handle));
}

 Standard_Integer OCInterface_IntList::NbEntities()
{
  return ((Interface_IntList*)nativeHandle)->NbEntities();
}

 void OCInterface_IntList::SetNbEntities(Standard_Integer nbe)
{
  ((Interface_IntList*)nativeHandle)->SetNbEntities(nbe);
}

 void OCInterface_IntList::SetNumber(Standard_Integer number)
{
  ((Interface_IntList*)nativeHandle)->SetNumber(number);
}

 Standard_Integer OCInterface_IntList::Number()
{
  return ((Interface_IntList*)nativeHandle)->Number();
}

OCInterface_IntList^ OCInterface_IntList::List(Standard_Integer number, System::Boolean copied)
{
  Interface_IntList* tmp = new Interface_IntList();
  *tmp = ((Interface_IntList*)nativeHandle)->List(number, OCConverter::BooleanToStandardBoolean(copied));
  return gcnew OCInterface_IntList(tmp);
}

 void OCInterface_IntList::SetRedefined(System::Boolean mode)
{
  ((Interface_IntList*)nativeHandle)->SetRedefined(OCConverter::BooleanToStandardBoolean(mode));
}

 void OCInterface_IntList::Reservate(Standard_Integer count)
{
  ((Interface_IntList*)nativeHandle)->Reservate(count);
}

 void OCInterface_IntList::Add(Standard_Integer ref)
{
  ((Interface_IntList*)nativeHandle)->Add(ref);
}

 Standard_Integer OCInterface_IntList::Length()
{
  return ((Interface_IntList*)nativeHandle)->Length();
}

 System::Boolean OCInterface_IntList::IsRedefined(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean(((Interface_IntList*)nativeHandle)->IsRedefined(num));
}

 Standard_Integer OCInterface_IntList::Value(Standard_Integer num)
{
  return ((Interface_IntList*)nativeHandle)->Value(num);
}

 System::Boolean OCInterface_IntList::Remove(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean(((Interface_IntList*)nativeHandle)->Remove(num));
}

 void OCInterface_IntList::Clear()
{
  ((Interface_IntList*)nativeHandle)->Clear();
}

 void OCInterface_IntList::AdjustSize(Standard_Integer margin)
{
  ((Interface_IntList*)nativeHandle)->AdjustSize(margin);
}

