// File generated by CPPExt (CPP file)
//

#include "TColGeom2d_Array1OfBoundedCurve.h"
#include "../Converter.h"
#include "../Geom2d/Geom2d_BoundedCurve.h"


using namespace OCNaroWrappers;

OCTColGeom2d_Array1OfBoundedCurve::OCTColGeom2d_Array1OfBoundedCurve(TColGeom2d_Array1OfBoundedCurve* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColGeom2d_Array1OfBoundedCurve::OCTColGeom2d_Array1OfBoundedCurve(Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom2d_Array1OfBoundedCurve(Low, Up);
}

OCTColGeom2d_Array1OfBoundedCurve::OCTColGeom2d_Array1OfBoundedCurve(OCNaroWrappers::OCGeom2d_BoundedCurve^ Item, Standard_Integer Low, Standard_Integer Up) 
{
  nativeHandle = new TColGeom2d_Array1OfBoundedCurve(*((Handle_Geom2d_BoundedCurve*)Item->Handle), Low, Up);
}

 void OCTColGeom2d_Array1OfBoundedCurve::Init(OCNaroWrappers::OCGeom2d_BoundedCurve^ V)
{
  ((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->Init(*((Handle_Geom2d_BoundedCurve*)V->Handle));
}

 System::Boolean OCTColGeom2d_Array1OfBoundedCurve::IsAllocated()
{
  return OCConverter::StandardBooleanToBoolean(((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->IsAllocated());
}

OCTColGeom2d_Array1OfBoundedCurve^ OCTColGeom2d_Array1OfBoundedCurve::Assign(OCNaroWrappers::OCTColGeom2d_Array1OfBoundedCurve^ Other)
{
  TColGeom2d_Array1OfBoundedCurve* tmp = new TColGeom2d_Array1OfBoundedCurve(0, 0);
  *tmp = ((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->Assign(*((TColGeom2d_Array1OfBoundedCurve*)Other->Handle));
  return gcnew OCTColGeom2d_Array1OfBoundedCurve(tmp);
}

 Standard_Integer OCTColGeom2d_Array1OfBoundedCurve::Length()
{
  return ((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->Length();
}

 Standard_Integer OCTColGeom2d_Array1OfBoundedCurve::Lower()
{
  return ((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->Lower();
}

 Standard_Integer OCTColGeom2d_Array1OfBoundedCurve::Upper()
{
  return ((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->Upper();
}

 void OCTColGeom2d_Array1OfBoundedCurve::SetValue(Standard_Integer Index, OCNaroWrappers::OCGeom2d_BoundedCurve^ Value)
{
  ((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->SetValue(Index, *((Handle_Geom2d_BoundedCurve*)Value->Handle));
}

OCGeom2d_BoundedCurve^ OCTColGeom2d_Array1OfBoundedCurve::Value(Standard_Integer Index)
{
  Handle(Geom2d_BoundedCurve) tmp = ((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->Value(Index);
  return gcnew OCGeom2d_BoundedCurve(&tmp);
}

OCGeom2d_BoundedCurve^ OCTColGeom2d_Array1OfBoundedCurve::ChangeValue(Standard_Integer Index)
{
  Handle(Geom2d_BoundedCurve) tmp = ((TColGeom2d_Array1OfBoundedCurve*)nativeHandle)->ChangeValue(Index);
  return gcnew OCGeom2d_BoundedCurve(&tmp);
}


