// File generated by CPPExt (CPP file)
//

#include "Geom_Point.h"
#include "../Converter.h"
#include "../gp/gp_Pnt.h"


using namespace OCNaroWrappers;

OCGeom_Point::OCGeom_Point(Handle(Geom_Point)* nativeHandle) : OCGeom_Geometry((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Geom_Point(*nativeHandle);
}

 Standard_Real OCGeom_Point::Distance(OCNaroWrappers::OCGeom_Point^ Other)
{
  return (*((Handle_Geom_Point*)nativeHandle))->Distance(*((Handle_Geom_Point*)Other->Handle));
}

 Standard_Real OCGeom_Point::SquareDistance(OCNaroWrappers::OCGeom_Point^ Other)
{
  return (*((Handle_Geom_Point*)nativeHandle))->SquareDistance(*((Handle_Geom_Point*)Other->Handle));
}


