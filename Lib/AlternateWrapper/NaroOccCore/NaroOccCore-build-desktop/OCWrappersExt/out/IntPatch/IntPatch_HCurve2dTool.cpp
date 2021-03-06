// File generated by CPPExt (CPP file)
//

#include "IntPatch_HCurve2dTool.h"
#include "../Converter.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "../gp/gp_Pnt2d.h"
#include "../gp/gp_Vec2d.h"
#include "../Geom2d/Geom2d_BezierCurve.h"
#include "../Geom2d/Geom2d_BSplineCurve.h"


using namespace OCNaroWrappers;

OCIntPatch_HCurve2dTool::OCIntPatch_HCurve2dTool(IntPatch_HCurve2dTool* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Real OCIntPatch_HCurve2dTool::FirstParameter(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return IntPatch_HCurve2dTool::FirstParameter(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
}

 Standard_Real OCIntPatch_HCurve2dTool::LastParameter(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return IntPatch_HCurve2dTool::LastParameter(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
}

 OCGeomAbs_Shape OCIntPatch_HCurve2dTool::Continuity(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return (OCGeomAbs_Shape)(IntPatch_HCurve2dTool::Continuity(*((Handle_Adaptor2d_HCurve2d*)C->Handle)));
}

 Standard_Integer OCIntPatch_HCurve2dTool::NbIntervals(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, OCGeomAbs_Shape S)
{
  return IntPatch_HCurve2dTool::NbIntervals(*((Handle_Adaptor2d_HCurve2d*)C->Handle), (GeomAbs_Shape)S);
}

 void OCIntPatch_HCurve2dTool::Intervals(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, OCNaroWrappers::OCTColStd_Array1OfReal^ T, OCGeomAbs_Shape S)
{
  IntPatch_HCurve2dTool::Intervals(*((Handle_Adaptor2d_HCurve2d*)C->Handle), *((TColStd_Array1OfReal*)T->Handle), (GeomAbs_Shape)S);
}

 System::Boolean OCIntPatch_HCurve2dTool::IsClosed(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return OCConverter::StandardBooleanToBoolean(IntPatch_HCurve2dTool::IsClosed(*((Handle_Adaptor2d_HCurve2d*)C->Handle)));
}

 System::Boolean OCIntPatch_HCurve2dTool::IsPeriodic(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return OCConverter::StandardBooleanToBoolean(IntPatch_HCurve2dTool::IsPeriodic(*((Handle_Adaptor2d_HCurve2d*)C->Handle)));
}

 Standard_Real OCIntPatch_HCurve2dTool::Period(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return IntPatch_HCurve2dTool::Period(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
}

OCgp_Pnt2d^ OCIntPatch_HCurve2dTool::Value(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real U)
{
  gp_Pnt2d* tmp = new gp_Pnt2d();
  *tmp = IntPatch_HCurve2dTool::Value(*((Handle_Adaptor2d_HCurve2d*)C->Handle), U);
  return gcnew OCgp_Pnt2d(tmp);
}

 void OCIntPatch_HCurve2dTool::D0(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P)
{
  IntPatch_HCurve2dTool::D0(*((Handle_Adaptor2d_HCurve2d*)C->Handle), U, *((gp_Pnt2d*)P->Handle));
}

 void OCIntPatch_HCurve2dTool::D1(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V)
{
  IntPatch_HCurve2dTool::D1(*((Handle_Adaptor2d_HCurve2d*)C->Handle), U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V->Handle));
}

 void OCIntPatch_HCurve2dTool::D2(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2)
{
  IntPatch_HCurve2dTool::D2(*((Handle_Adaptor2d_HCurve2d*)C->Handle), U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle));
}

 void OCIntPatch_HCurve2dTool::D3(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real U, OCNaroWrappers::OCgp_Pnt2d^ P, OCNaroWrappers::OCgp_Vec2d^ V1, OCNaroWrappers::OCgp_Vec2d^ V2, OCNaroWrappers::OCgp_Vec2d^ V3)
{
  IntPatch_HCurve2dTool::D3(*((Handle_Adaptor2d_HCurve2d*)C->Handle), U, *((gp_Pnt2d*)P->Handle), *((gp_Vec2d*)V1->Handle), *((gp_Vec2d*)V2->Handle), *((gp_Vec2d*)V3->Handle));
}

OCgp_Vec2d^ OCIntPatch_HCurve2dTool::DN(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real U, Standard_Integer N)
{
  gp_Vec2d* tmp = new gp_Vec2d();
  *tmp = IntPatch_HCurve2dTool::DN(*((Handle_Adaptor2d_HCurve2d*)C->Handle), U, N);
  return gcnew OCgp_Vec2d(tmp);
}

 Standard_Real OCIntPatch_HCurve2dTool::Resolution(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real R3d)
{
  return IntPatch_HCurve2dTool::Resolution(*((Handle_Adaptor2d_HCurve2d*)C->Handle), R3d);
}

 OCGeomAbs_CurveType OCIntPatch_HCurve2dTool::GetType(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  return (OCGeomAbs_CurveType)(IntPatch_HCurve2dTool::GetType(*((Handle_Adaptor2d_HCurve2d*)C->Handle)));
}

OCgp_Lin2d^ OCIntPatch_HCurve2dTool::Line(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  gp_Lin2d* tmp = new gp_Lin2d();
  *tmp = IntPatch_HCurve2dTool::Line(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
  return gcnew OCgp_Lin2d(tmp);
}

OCgp_Circ2d^ OCIntPatch_HCurve2dTool::Circle(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  gp_Circ2d* tmp = new gp_Circ2d();
  *tmp = IntPatch_HCurve2dTool::Circle(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
  return gcnew OCgp_Circ2d(tmp);
}

OCgp_Elips2d^ OCIntPatch_HCurve2dTool::Ellipse(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  gp_Elips2d* tmp = new gp_Elips2d();
  *tmp = IntPatch_HCurve2dTool::Ellipse(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
  return gcnew OCgp_Elips2d(tmp);
}

OCgp_Hypr2d^ OCIntPatch_HCurve2dTool::Hyperbola(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  gp_Hypr2d* tmp = new gp_Hypr2d();
  *tmp = IntPatch_HCurve2dTool::Hyperbola(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
  return gcnew OCgp_Hypr2d(tmp);
}

OCgp_Parab2d^ OCIntPatch_HCurve2dTool::Parabola(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  gp_Parab2d* tmp = new gp_Parab2d();
  *tmp = IntPatch_HCurve2dTool::Parabola(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
  return gcnew OCgp_Parab2d(tmp);
}

OCGeom2d_BezierCurve^ OCIntPatch_HCurve2dTool::Bezier(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  Handle(Geom2d_BezierCurve) tmp = IntPatch_HCurve2dTool::Bezier(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
  return gcnew OCGeom2d_BezierCurve(&tmp);
}

OCGeom2d_BSplineCurve^ OCIntPatch_HCurve2dTool::BSpline(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C)
{
  Handle(Geom2d_BSplineCurve) tmp = IntPatch_HCurve2dTool::BSpline(*((Handle_Adaptor2d_HCurve2d*)C->Handle));
  return gcnew OCGeom2d_BSplineCurve(&tmp);
}

 Standard_Integer OCIntPatch_HCurve2dTool::NbSamples(OCNaroWrappers::OCAdaptor2d_HCurve2d^ C, Standard_Real U0, Standard_Real U1)
{
  return IntPatch_HCurve2dTool::NbSamples(*((Handle_Adaptor2d_HCurve2d*)C->Handle), U0, U1);
}


