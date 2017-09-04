// File generated by CPPExt (CPP file)
//

#include "HatchGen_PointOnElement.h"
#include "../Converter.h"
#include "../IntRes2d/IntRes2d_IntersectionPoint.h"


using namespace OCNaroWrappers;

OCHatchGen_PointOnElement::OCHatchGen_PointOnElement(HatchGen_PointOnElement* nativeHandle) : OCHatchGen_IntersectionPoint((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCHatchGen_PointOnElement::OCHatchGen_PointOnElement() : OCHatchGen_IntersectionPoint((OCDummy^)nullptr)

{
  nativeHandle = new HatchGen_PointOnElement();
}

OCHatchGen_PointOnElement::OCHatchGen_PointOnElement(OCNaroWrappers::OCHatchGen_PointOnElement^ Point) : OCHatchGen_IntersectionPoint((OCDummy^)nullptr)

{
  nativeHandle = new HatchGen_PointOnElement(*((HatchGen_PointOnElement*)Point->Handle));
}

OCHatchGen_PointOnElement::OCHatchGen_PointOnElement(OCNaroWrappers::OCIntRes2d_IntersectionPoint^ Point) : OCHatchGen_IntersectionPoint((OCDummy^)nullptr)

{
  nativeHandle = new HatchGen_PointOnElement(*((IntRes2d_IntersectionPoint*)Point->Handle));
}

 void OCHatchGen_PointOnElement::SetIntersectionType(OCHatchGen_IntersectionType Type)
{
  ((HatchGen_PointOnElement*)nativeHandle)->SetIntersectionType((HatchGen_IntersectionType)Type);
}

 OCHatchGen_IntersectionType OCHatchGen_PointOnElement::IntersectionType()
{
  return (OCHatchGen_IntersectionType)(((HatchGen_PointOnElement*)nativeHandle)->IntersectionType());
}

 System::Boolean OCHatchGen_PointOnElement::IsIdentical(OCNaroWrappers::OCHatchGen_PointOnElement^ Point, Standard_Real Confusion)
{
  return OCConverter::StandardBooleanToBoolean(((HatchGen_PointOnElement*)nativeHandle)->IsIdentical(*((HatchGen_PointOnElement*)Point->Handle), Confusion));
}

 System::Boolean OCHatchGen_PointOnElement::IsDifferent(OCNaroWrappers::OCHatchGen_PointOnElement^ Point, Standard_Real Confusion)
{
  return OCConverter::StandardBooleanToBoolean(((HatchGen_PointOnElement*)nativeHandle)->IsDifferent(*((HatchGen_PointOnElement*)Point->Handle), Confusion));
}

 void OCHatchGen_PointOnElement::Dump(Standard_Integer Index)
{
  ((HatchGen_PointOnElement*)nativeHandle)->Dump(Index);
}

