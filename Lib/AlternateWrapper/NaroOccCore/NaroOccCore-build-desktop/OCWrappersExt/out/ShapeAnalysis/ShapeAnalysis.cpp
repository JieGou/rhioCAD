// File generated by CPPExt (CPP file)
//

#include "ShapeAnalysis.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



OCTopoDS_Wire^ OCShapeAnalysis::OuterWire(OCNaroWrappers::OCTopoDS_Face^ face)
{
  TopoDS_Wire* tmp = new TopoDS_Wire();
  *tmp = ShapeAnalysis::OuterWire(*((TopoDS_Face*)face->Handle));
  return gcnew OCTopoDS_Wire(tmp);
}

 Standard_Real OCShapeAnalysis::TotCross2D(OCNaroWrappers::OCShapeExtend_WireData^ sewd, OCNaroWrappers::OCTopoDS_Face^ aFace)
{
  return ShapeAnalysis::TotCross2D(*((Handle_ShapeExtend_WireData*)sewd->Handle), *((TopoDS_Face*)aFace->Handle));
}

 Standard_Real OCShapeAnalysis::ContourArea(OCNaroWrappers::OCTopoDS_Wire^ theWire)
{
  return ShapeAnalysis::ContourArea(*((TopoDS_Wire*)theWire->Handle));
}

 System::Boolean OCShapeAnalysis::IsOuterBound(OCNaroWrappers::OCTopoDS_Face^ face)
{
  return OCConverter::StandardBooleanToBoolean(ShapeAnalysis::IsOuterBound(*((TopoDS_Face*)face->Handle)));
}

 Standard_Real OCShapeAnalysis::AdjustByPeriod(Standard_Real Val, Standard_Real ToVal, Standard_Real Period)
{
  return ShapeAnalysis::AdjustByPeriod(Val, ToVal, Period);
}

 Standard_Real OCShapeAnalysis::AdjustToPeriod(Standard_Real Val, Standard_Real ValMin, Standard_Real ValMax)
{
  return ShapeAnalysis::AdjustToPeriod(Val, ValMin, ValMax);
}

 void OCShapeAnalysis::FindBounds(OCNaroWrappers::OCTopoDS_Shape^ shape, OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2)
{
  ShapeAnalysis::FindBounds(*((TopoDS_Shape*)shape->Handle), *((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle));
}

 void OCShapeAnalysis::GetFaceUVBounds(OCNaroWrappers::OCTopoDS_Face^ F, Standard_Real& Umin, Standard_Real& Umax, Standard_Real& Vmin, Standard_Real& Vmax)
{
  ShapeAnalysis::GetFaceUVBounds(*((TopoDS_Face*)F->Handle), Umin, Umax, Vmin, Vmax);
}


