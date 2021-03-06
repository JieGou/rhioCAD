// File generated by CPPExt (CPP file)
//

#include "IntPatch_ThePointOfIntersection.h"
#include "../Converter.h"
#include "../Adaptor3d/Adaptor3d_HVertex.h"
#include "../Adaptor2d/Adaptor2d_HCurve2d.h"
#include "../gp/gp_Pnt.h"
#include "../IntSurf/IntSurf_Transition.h"
#include "../IntSurf/IntSurf_PntOn2S.h"


using namespace OCNaroWrappers;

OCIntPatch_ThePointOfIntersection::OCIntPatch_ThePointOfIntersection(IntPatch_ThePointOfIntersection* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntPatch_ThePointOfIntersection::OCIntPatch_ThePointOfIntersection() 
{
  nativeHandle = new IntPatch_ThePointOfIntersection();
}

 void OCIntPatch_ThePointOfIntersection::SetValue(OCNaroWrappers::OCgp_Pnt^ Pt, Standard_Real Tol, System::Boolean Tangent)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->SetValue(*((gp_Pnt*)Pt->Handle), Tol, OCConverter::BooleanToStandardBoolean(Tangent));
}

 void OCIntPatch_ThePointOfIntersection::SetValue(OCNaroWrappers::OCgp_Pnt^ Pt)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->SetValue(*((gp_Pnt*)Pt->Handle));
}

 void OCIntPatch_ThePointOfIntersection::SetTolerance(Standard_Real Tol)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->SetTolerance(Tol);
}

 void OCIntPatch_ThePointOfIntersection::SetParameters(Standard_Real U1, Standard_Real V1, Standard_Real U2, Standard_Real V2)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->SetParameters(U1, V1, U2, V2);
}

 void OCIntPatch_ThePointOfIntersection::SetParameter(Standard_Real Para)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->SetParameter(Para);
}

 void OCIntPatch_ThePointOfIntersection::SetVertex(System::Boolean OnFirst, OCNaroWrappers::OCAdaptor3d_HVertex^ V)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->SetVertex(OCConverter::BooleanToStandardBoolean(OnFirst), *((Handle_Adaptor3d_HVertex*)V->Handle));
}

 void OCIntPatch_ThePointOfIntersection::SetArc(System::Boolean OnFirst, OCNaroWrappers::OCAdaptor2d_HCurve2d^ A, Standard_Real Param, OCNaroWrappers::OCIntSurf_Transition^ TLine, OCNaroWrappers::OCIntSurf_Transition^ TArc)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->SetArc(OCConverter::BooleanToStandardBoolean(OnFirst), *((Handle_Adaptor2d_HCurve2d*)A->Handle), Param, *((IntSurf_Transition*)TLine->Handle), *((IntSurf_Transition*)TArc->Handle));
}

 void OCIntPatch_ThePointOfIntersection::SetMultiple(System::Boolean IsMult)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->SetMultiple(OCConverter::BooleanToStandardBoolean(IsMult));
}

OCgp_Pnt^ OCIntPatch_ThePointOfIntersection::Value()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->Value();
  return gcnew OCgp_Pnt(tmp);
}

 Standard_Real OCIntPatch_ThePointOfIntersection::ParameterOnLine()
{
  return ((IntPatch_ThePointOfIntersection*)nativeHandle)->ParameterOnLine();
}

 Standard_Real OCIntPatch_ThePointOfIntersection::Tolerance()
{
  return ((IntPatch_ThePointOfIntersection*)nativeHandle)->Tolerance();
}

 System::Boolean OCIntPatch_ThePointOfIntersection::IsTangencyPoint()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePointOfIntersection*)nativeHandle)->IsTangencyPoint());
}

 void OCIntPatch_ThePointOfIntersection::ParametersOnS1(Standard_Real& U1, Standard_Real& V1)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->ParametersOnS1(U1, V1);
}

 void OCIntPatch_ThePointOfIntersection::ParametersOnS2(Standard_Real& U2, Standard_Real& V2)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->ParametersOnS2(U2, V2);
}

 System::Boolean OCIntPatch_ThePointOfIntersection::IsMultiple()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePointOfIntersection*)nativeHandle)->IsMultiple());
}

 System::Boolean OCIntPatch_ThePointOfIntersection::IsOnDomS1()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePointOfIntersection*)nativeHandle)->IsOnDomS1());
}

 System::Boolean OCIntPatch_ThePointOfIntersection::IsVertexOnS1()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePointOfIntersection*)nativeHandle)->IsVertexOnS1());
}

OCAdaptor3d_HVertex^ OCIntPatch_ThePointOfIntersection::VertexOnS1()
{
  Handle(Adaptor3d_HVertex) tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->VertexOnS1();
  return gcnew OCAdaptor3d_HVertex(&tmp);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_ThePointOfIntersection::ArcOnS1()
{
  Handle(Adaptor2d_HCurve2d) tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->ArcOnS1();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

OCIntSurf_Transition^ OCIntPatch_ThePointOfIntersection::TransitionLineArc1()
{
  IntSurf_Transition* tmp = new IntSurf_Transition();
  *tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->TransitionLineArc1();
  return gcnew OCIntSurf_Transition(tmp);
}

OCIntSurf_Transition^ OCIntPatch_ThePointOfIntersection::TransitionOnS1()
{
  IntSurf_Transition* tmp = new IntSurf_Transition();
  *tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->TransitionOnS1();
  return gcnew OCIntSurf_Transition(tmp);
}

 Standard_Real OCIntPatch_ThePointOfIntersection::ParameterOnArc1()
{
  return ((IntPatch_ThePointOfIntersection*)nativeHandle)->ParameterOnArc1();
}

 System::Boolean OCIntPatch_ThePointOfIntersection::IsOnDomS2()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePointOfIntersection*)nativeHandle)->IsOnDomS2());
}

 System::Boolean OCIntPatch_ThePointOfIntersection::IsVertexOnS2()
{
  return OCConverter::StandardBooleanToBoolean(((IntPatch_ThePointOfIntersection*)nativeHandle)->IsVertexOnS2());
}

OCAdaptor3d_HVertex^ OCIntPatch_ThePointOfIntersection::VertexOnS2()
{
  Handle(Adaptor3d_HVertex) tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->VertexOnS2();
  return gcnew OCAdaptor3d_HVertex(&tmp);
}

OCAdaptor2d_HCurve2d^ OCIntPatch_ThePointOfIntersection::ArcOnS2()
{
  Handle(Adaptor2d_HCurve2d) tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->ArcOnS2();
  return gcnew OCAdaptor2d_HCurve2d(&tmp);
}

OCIntSurf_Transition^ OCIntPatch_ThePointOfIntersection::TransitionLineArc2()
{
  IntSurf_Transition* tmp = new IntSurf_Transition();
  *tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->TransitionLineArc2();
  return gcnew OCIntSurf_Transition(tmp);
}

OCIntSurf_Transition^ OCIntPatch_ThePointOfIntersection::TransitionOnS2()
{
  IntSurf_Transition* tmp = new IntSurf_Transition();
  *tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->TransitionOnS2();
  return gcnew OCIntSurf_Transition(tmp);
}

 Standard_Real OCIntPatch_ThePointOfIntersection::ParameterOnArc2()
{
  return ((IntPatch_ThePointOfIntersection*)nativeHandle)->ParameterOnArc2();
}

OCIntSurf_PntOn2S^ OCIntPatch_ThePointOfIntersection::PntOn2S()
{
  IntSurf_PntOn2S* tmp = new IntSurf_PntOn2S();
  *tmp = ((IntPatch_ThePointOfIntersection*)nativeHandle)->PntOn2S();
  return gcnew OCIntSurf_PntOn2S(tmp);
}

 void OCIntPatch_ThePointOfIntersection::Parameters(Standard_Real& U1, Standard_Real& V1, Standard_Real& U2, Standard_Real& V2)
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->Parameters(U1, V1, U2, V2);
}

 void OCIntPatch_ThePointOfIntersection::ReverseTransition()
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->ReverseTransition();
}

 void OCIntPatch_ThePointOfIntersection::Dump()
{
  ((IntPatch_ThePointOfIntersection*)nativeHandle)->Dump();
}


