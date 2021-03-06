// File generated by CPPExt (CPP file)
//

#include "AppParCurves_Array1OfMultiPoint.h"
#include "../Converter.h"
#include "AppParCurves_MultiPoint.h"


using namespace OCNaroWrappers;

OCAppParCurves_Array1OfMultiPoint::OCAppParCurves_Array1OfMultiPoint(AppParCurves_Array1OfMultiPoint* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAppParCurves_Array1OfMultiPoint::OCAppParCurves_Array1OfMultiPoint(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new AppParCurves_Array1OfMultiPoint(Low, Up);
}

OCAppParCurves_Array1OfMultiPoint::OCAppParCurves_Array1OfMultiPoint(OCNaroWrappers::OCAppParCurves_MultiPoint^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new AppParCurves_Array1OfMultiPoint(*((AppParCurves_MultiPoint*)Item->Handle), Low, Up);
}

 void OCAppParCurves_Array1OfMultiPoint::Init(OCNaroWrappers::OCAppParCurves_MultiPoint^ V)
{
  ((AppParCurves_Array1OfMultiPoint*)nativeHandle)->Init(*((AppParCurves_MultiPoint*)V->Handle));
}

 System::Boolean OCAppParCurves_Array1OfMultiPoint::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((AppParCurves_Array1OfMultiPoint*)nativeHandle)->IsAllocated());
}

OCAppParCurves_Array1OfMultiPoint^ OCAppParCurves_Array1OfMultiPoint::Assign(OCNaroWrappers::OCAppParCurves_Array1OfMultiPoint^ Other)
{
  AppParCurves_Array1OfMultiPoint* tmp = new AppParCurves_Array1OfMultiPoint(0, 0);
  *tmp = ((AppParCurves_Array1OfMultiPoint*)nativeHandle)->Assign(*((AppParCurves_Array1OfMultiPoint*)Other->Handle));
  return gcnew OCAppParCurves_Array1OfMultiPoint(tmp);
}

 Standard_Integer OCAppParCurves_Array1OfMultiPoint::Length()
{
  return ((AppParCurves_Array1OfMultiPoint*)nativeHandle)->Length();
}

 Standard_Integer OCAppParCurves_Array1OfMultiPoint::Lower()
{
  return ((AppParCurves_Array1OfMultiPoint*)nativeHandle)->Lower();
}

 Standard_Integer OCAppParCurves_Array1OfMultiPoint::Upper()
{
  return ((AppParCurves_Array1OfMultiPoint*)nativeHandle)->Upper();
}

 void OCAppParCurves_Array1OfMultiPoint::SetValue(Standard_Integer Index, OCNaroWrappers::OCAppParCurves_MultiPoint^ Value)
{
  ((AppParCurves_Array1OfMultiPoint*)nativeHandle)->SetValue(Index, *((AppParCurves_MultiPoint*)Value->Handle));
}

OCAppParCurves_MultiPoint^ OCAppParCurves_Array1OfMultiPoint::Value(Standard_Integer Index)
{
  AppParCurves_MultiPoint* tmp = new AppParCurves_MultiPoint();
  *tmp = ((AppParCurves_Array1OfMultiPoint*)nativeHandle)->Value(Index);
  return gcnew OCAppParCurves_MultiPoint(tmp);
}

OCAppParCurves_MultiPoint^ OCAppParCurves_Array1OfMultiPoint::ChangeValue(Standard_Integer Index)
{
  AppParCurves_MultiPoint* tmp = new AppParCurves_MultiPoint();
  *tmp = ((AppParCurves_Array1OfMultiPoint*)nativeHandle)->ChangeValue(Index);
  return gcnew OCAppParCurves_MultiPoint(tmp);
}


