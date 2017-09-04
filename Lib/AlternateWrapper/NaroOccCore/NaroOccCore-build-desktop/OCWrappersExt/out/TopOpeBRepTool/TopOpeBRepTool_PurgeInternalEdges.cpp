// File generated by CPPExt (CPP file)
//

#include "TopOpeBRepTool_PurgeInternalEdges.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../TopTools/TopTools_DataMapOfShapeListOfShape.h"


using namespace OCNaroWrappers;

OCTopOpeBRepTool_PurgeInternalEdges::OCTopOpeBRepTool_PurgeInternalEdges(TopOpeBRepTool_PurgeInternalEdges* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopOpeBRepTool_PurgeInternalEdges::OCTopOpeBRepTool_PurgeInternalEdges(OCNaroWrappers::OCTopoDS_Shape^ theShape, System::Boolean PerformNow) 
{
  nativeHandle = new TopOpeBRepTool_PurgeInternalEdges(*((TopoDS_Shape*)theShape->Handle), OCConverter::BooleanToStandardBoolean(PerformNow));
}

 void OCTopOpeBRepTool_PurgeInternalEdges::Faces(OCNaroWrappers::OCTopTools_DataMapOfShapeListOfShape^ theMapFacLstEdg)
{
  ((TopOpeBRepTool_PurgeInternalEdges*)nativeHandle)->Faces(*((TopTools_DataMapOfShapeListOfShape*)theMapFacLstEdg->Handle));
}

OCTopoDS_Shape^ OCTopOpeBRepTool_PurgeInternalEdges::Shape()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopOpeBRepTool_PurgeInternalEdges*)nativeHandle)->Shape();
  return gcnew OCTopoDS_Shape(tmp);
}

 Standard_Integer OCTopOpeBRepTool_PurgeInternalEdges::NbEdges()
{
  return ((TopOpeBRepTool_PurgeInternalEdges*)nativeHandle)->NbEdges();
}

 System::Boolean OCTopOpeBRepTool_PurgeInternalEdges::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((TopOpeBRepTool_PurgeInternalEdges*)nativeHandle)->IsDone());
}

 void OCTopOpeBRepTool_PurgeInternalEdges::Perform()
{
  ((TopOpeBRepTool_PurgeInternalEdges*)nativeHandle)->Perform();
}

