// File generated by CPPExt (CPP file)
//

#include "ChFiKPart_ComputeData.h"
#include "../Converter.h"
#include "../TopOpeBRepDS/TopOpeBRepDS_DataStructure.h"
#include "../ChFiDS/ChFiDS_SurfData.h"
#include "../Adaptor3d/Adaptor3d_HSurface.h"
#include "../ChFiDS/ChFiDS_Spine.h"
#include "../gp/gp_Pnt2d.h"


using namespace OCNaroWrappers;

OCChFiKPart_ComputeData::OCChFiKPart_ComputeData(ChFiKPart_ComputeData* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 System::Boolean OCChFiKPart_ComputeData::Compute(OCNaroWrappers::OCTopOpeBRepDS_DataStructure^ DStr, OCNaroWrappers::OCChFiDS_SurfData^ Data, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCTopAbs_Orientation Or1, OCTopAbs_Orientation Or2, OCNaroWrappers::OCChFiDS_Spine^ Sp, Standard_Integer Iedge)
{
  return OCConverter::StandardBooleanToBoolean(ChFiKPart_ComputeData::Compute(*((TopOpeBRepDS_DataStructure*)DStr->Handle), *((Handle_ChFiDS_SurfData*)Data->Handle), *((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), (TopAbs_Orientation)Or1, (TopAbs_Orientation)Or2, *((Handle_ChFiDS_Spine*)Sp->Handle), Iedge));
}

 System::Boolean OCChFiKPart_ComputeData::ComputeCorner(OCNaroWrappers::OCTopOpeBRepDS_DataStructure^ DStr, OCNaroWrappers::OCChFiDS_SurfData^ Data, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCTopAbs_Orientation OrFace1, OCTopAbs_Orientation OrFace2, OCTopAbs_Orientation Or1, OCTopAbs_Orientation Or2, Standard_Real minRad, Standard_Real majRad, OCNaroWrappers::OCgp_Pnt2d^ P1S1, OCNaroWrappers::OCgp_Pnt2d^ P2S1, OCNaroWrappers::OCgp_Pnt2d^ P1S2, OCNaroWrappers::OCgp_Pnt2d^ P2S2)
{
  return OCConverter::StandardBooleanToBoolean(ChFiKPart_ComputeData::ComputeCorner(*((TopOpeBRepDS_DataStructure*)DStr->Handle), *((Handle_ChFiDS_SurfData*)Data->Handle), *((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), (TopAbs_Orientation)OrFace1, (TopAbs_Orientation)OrFace2, (TopAbs_Orientation)Or1, (TopAbs_Orientation)Or2, minRad, majRad, *((gp_Pnt2d*)P1S1->Handle), *((gp_Pnt2d*)P2S1->Handle), *((gp_Pnt2d*)P1S2->Handle), *((gp_Pnt2d*)P2S2->Handle)));
}

 System::Boolean OCChFiKPart_ComputeData::ComputeCorner(OCNaroWrappers::OCTopOpeBRepDS_DataStructure^ DStr, OCNaroWrappers::OCChFiDS_SurfData^ Data, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCTopAbs_Orientation OrFace1, OCTopAbs_Orientation OrFace2, OCTopAbs_Orientation Or1, OCTopAbs_Orientation Or2, Standard_Real Rad, OCNaroWrappers::OCgp_Pnt2d^ PS1, OCNaroWrappers::OCgp_Pnt2d^ P1S2, OCNaroWrappers::OCgp_Pnt2d^ P2S2)
{
  return OCConverter::StandardBooleanToBoolean(ChFiKPart_ComputeData::ComputeCorner(*((TopOpeBRepDS_DataStructure*)DStr->Handle), *((Handle_ChFiDS_SurfData*)Data->Handle), *((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), (TopAbs_Orientation)OrFace1, (TopAbs_Orientation)OrFace2, (TopAbs_Orientation)Or1, (TopAbs_Orientation)Or2, Rad, *((gp_Pnt2d*)PS1->Handle), *((gp_Pnt2d*)P1S2->Handle), *((gp_Pnt2d*)P2S2->Handle)));
}

 System::Boolean OCChFiKPart_ComputeData::ComputeCorner(OCNaroWrappers::OCTopOpeBRepDS_DataStructure^ DStr, OCNaroWrappers::OCChFiDS_SurfData^ Data, OCNaroWrappers::OCAdaptor3d_HSurface^ S, OCNaroWrappers::OCAdaptor3d_HSurface^ S1, OCNaroWrappers::OCAdaptor3d_HSurface^ S2, OCTopAbs_Orientation OfS, OCTopAbs_Orientation OS, OCTopAbs_Orientation OS1, OCTopAbs_Orientation OS2, Standard_Real Radius)
{
  return OCConverter::StandardBooleanToBoolean(ChFiKPart_ComputeData::ComputeCorner(*((TopOpeBRepDS_DataStructure*)DStr->Handle), *((Handle_ChFiDS_SurfData*)Data->Handle), *((Handle_Adaptor3d_HSurface*)S->Handle), *((Handle_Adaptor3d_HSurface*)S1->Handle), *((Handle_Adaptor3d_HSurface*)S2->Handle), (TopAbs_Orientation)OfS, (TopAbs_Orientation)OS, (TopAbs_Orientation)OS1, (TopAbs_Orientation)OS2, Radius));
}


