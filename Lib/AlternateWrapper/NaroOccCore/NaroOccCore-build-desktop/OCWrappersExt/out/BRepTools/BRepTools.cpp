// File generated by CPPExt (CPP file)
//

#include "BRepTools.h"
#include "../Converter.h"


using namespace OCNaroWrappers;



 void OCBRepTools::UVBounds(OCNaroWrappers::OCTopoDS_Face^ F, Standard_Real& UMin, Standard_Real& UMax, Standard_Real& VMin, Standard_Real& VMax)
{
  BRepTools::UVBounds(*((TopoDS_Face*)F->Handle), UMin, UMax, VMin, VMax);
}

 void OCBRepTools::UVBounds(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopoDS_Wire^ W, Standard_Real& UMin, Standard_Real& UMax, Standard_Real& VMin, Standard_Real& VMax)
{
  BRepTools::UVBounds(*((TopoDS_Face*)F->Handle), *((TopoDS_Wire*)W->Handle), UMin, UMax, VMin, VMax);
}

 void OCBRepTools::UVBounds(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopoDS_Edge^ E, Standard_Real& UMin, Standard_Real& UMax, Standard_Real& VMin, Standard_Real& VMax)
{
  BRepTools::UVBounds(*((TopoDS_Face*)F->Handle), *((TopoDS_Edge*)E->Handle), UMin, UMax, VMin, VMax);
}

 void OCBRepTools::AddUVBounds(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BRepTools::AddUVBounds(*((TopoDS_Face*)F->Handle), *((Bnd_Box2d*)B->Handle));
}

 void OCBRepTools::AddUVBounds(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopoDS_Wire^ W, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BRepTools::AddUVBounds(*((TopoDS_Face*)F->Handle), *((TopoDS_Wire*)W->Handle), *((Bnd_Box2d*)B->Handle));
}

 void OCBRepTools::AddUVBounds(OCNaroWrappers::OCTopoDS_Face^ F, OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCBnd_Box2d^ B)
{
  BRepTools::AddUVBounds(*((TopoDS_Face*)F->Handle), *((TopoDS_Edge*)E->Handle), *((Bnd_Box2d*)B->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_Vertex^ V)
{
  BRepTools::Update(*((TopoDS_Vertex*)V->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_Edge^ E)
{
  BRepTools::Update(*((TopoDS_Edge*)E->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_Wire^ W)
{
  BRepTools::Update(*((TopoDS_Wire*)W->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_Face^ F)
{
  BRepTools::Update(*((TopoDS_Face*)F->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_Shell^ S)
{
  BRepTools::Update(*((TopoDS_Shell*)S->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_Solid^ S)
{
  BRepTools::Update(*((TopoDS_Solid*)S->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_CompSolid^ C)
{
  BRepTools::Update(*((TopoDS_CompSolid*)C->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_Compound^ C)
{
  BRepTools::Update(*((TopoDS_Compound*)C->Handle));
}

 void OCBRepTools::Update(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  BRepTools::Update(*((TopoDS_Shape*)S->Handle));
}

 void OCBRepTools::UpdateFaceUVPoints(OCNaroWrappers::OCTopoDS_Face^ F)
{
  BRepTools::UpdateFaceUVPoints(*((TopoDS_Face*)F->Handle));
}

 void OCBRepTools::Clean(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  BRepTools::Clean(*((TopoDS_Shape*)S->Handle));
}

 void OCBRepTools::RemoveUnusedPCurves(OCNaroWrappers::OCTopoDS_Shape^ S)
{
  BRepTools::RemoveUnusedPCurves(*((TopoDS_Shape*)S->Handle));
}

 System::Boolean OCBRepTools::Triangulation(OCNaroWrappers::OCTopoDS_Shape^ S, Standard_Real deflec)
{
  return OCConverter::StandardBooleanToBoolean(BRepTools::Triangulation(*((TopoDS_Shape*)S->Handle), deflec));
}

 System::Boolean OCBRepTools::Compare(OCNaroWrappers::OCTopoDS_Vertex^ V1, OCNaroWrappers::OCTopoDS_Vertex^ V2)
{
  return OCConverter::StandardBooleanToBoolean(BRepTools::Compare(*((TopoDS_Vertex*)V1->Handle), *((TopoDS_Vertex*)V2->Handle)));
}

 System::Boolean OCBRepTools::Compare(OCNaroWrappers::OCTopoDS_Edge^ E1, OCNaroWrappers::OCTopoDS_Edge^ E2)
{
  return OCConverter::StandardBooleanToBoolean(BRepTools::Compare(*((TopoDS_Edge*)E1->Handle), *((TopoDS_Edge*)E2->Handle)));
}

OCTopoDS_Wire^ OCBRepTools::OuterWire(OCNaroWrappers::OCTopoDS_Face^ F)
{
  TopoDS_Wire* tmp = new TopoDS_Wire();
  *tmp = BRepTools::OuterWire(*((TopoDS_Face*)F->Handle));
  return gcnew OCTopoDS_Wire(tmp);
}

OCTopoDS_Shell^ OCBRepTools::OuterShell(OCNaroWrappers::OCTopoDS_Solid^ S)
{
  TopoDS_Shell* tmp = new TopoDS_Shell();
  *tmp = BRepTools::OuterShell(*((TopoDS_Solid*)S->Handle));
  return gcnew OCTopoDS_Shell(tmp);
}

 void OCBRepTools::Map3DEdges(OCNaroWrappers::OCTopoDS_Shape^ S, OCNaroWrappers::OCTopTools_IndexedMapOfShape^ M)
{
  BRepTools::Map3DEdges(*((TopoDS_Shape*)S->Handle), *((TopTools_IndexedMapOfShape*)M->Handle));
}

 System::Boolean OCBRepTools::IsReallyClosed(OCNaroWrappers::OCTopoDS_Edge^ E, OCNaroWrappers::OCTopoDS_Face^ F)
{
  return OCConverter::StandardBooleanToBoolean(BRepTools::IsReallyClosed(*((TopoDS_Edge*)E->Handle), *((TopoDS_Face*)F->Handle)));
}

 void OCBRepTools::Dump(OCNaroWrappers::OCTopoDS_Shape^ Sh, Standard_OStream& S)
{
  BRepTools::Dump(*((TopoDS_Shape*)Sh->Handle), S);
}

 void OCBRepTools::Write(OCNaroWrappers::OCTopoDS_Shape^ Sh, Standard_OStream& S, OCNaroWrappers::OCMessage_ProgressIndicator^ PR)
{
  BRepTools::Write(*((TopoDS_Shape*)Sh->Handle), S, *((Handle_Message_ProgressIndicator*)PR->Handle));
}

 void OCBRepTools::Read(OCNaroWrappers::OCTopoDS_Shape^ Sh, Standard_IStream& S, OCNaroWrappers::OCBRep_Builder^ B, OCNaroWrappers::OCMessage_ProgressIndicator^ PR)
{
  BRepTools::Read(*((TopoDS_Shape*)Sh->Handle), S, *((BRep_Builder*)B->Handle), *((Handle_Message_ProgressIndicator*)PR->Handle));
}

 System::Boolean OCBRepTools::Write(OCNaroWrappers::OCTopoDS_Shape^ Sh, System::String^ File, OCNaroWrappers::OCMessage_ProgressIndicator^ PR)
{
  return OCConverter::StandardBooleanToBoolean(BRepTools::Write(*((TopoDS_Shape*)Sh->Handle), OCConverter::StringToStandardCString(File), *((Handle_Message_ProgressIndicator*)PR->Handle)));
}

 System::Boolean OCBRepTools::Read(OCNaroWrappers::OCTopoDS_Shape^ Sh, System::String^ File, OCNaroWrappers::OCBRep_Builder^ B, OCNaroWrappers::OCMessage_ProgressIndicator^ PR)
{
  return OCConverter::StandardBooleanToBoolean(BRepTools::Read(*((TopoDS_Shape*)Sh->Handle), OCConverter::StringToStandardCString(File), *((BRep_Builder*)B->Handle), *((Handle_Message_ProgressIndicator*)PR->Handle)));
}

