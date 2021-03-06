// File generated by CPPExt (CPP file)
//

#include "TopTools_DataMapNodeOfDataMapOfShapeListOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ListOfShape.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_DataMapOfShapeListOfShape.h"
#include "TopTools_DataMapIteratorOfDataMapOfShapeListOfShape.h"


using namespace OCNaroWrappers;

OCTopTools_DataMapNodeOfDataMapOfShapeListOfShape::OCTopTools_DataMapNodeOfDataMapOfShapeListOfShape(Handle(TopTools_DataMapNodeOfDataMapOfShapeListOfShape)* nativeHandle) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape(*nativeHandle);
}

OCTopTools_DataMapNodeOfDataMapOfShapeListOfShape::OCTopTools_DataMapNodeOfDataMapOfShapeListOfShape(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTopTools_ListOfShape^ I, TCollection_MapNodePtr n) : OCTCollection_MapNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape(new TopTools_DataMapNodeOfDataMapOfShapeListOfShape(*((TopoDS_Shape*)K->Handle), *((TopTools_ListOfShape*)I->Handle), n));
}

OCTopoDS_Shape^ OCTopTools_DataMapNodeOfDataMapOfShapeListOfShape::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = (*((Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape*)nativeHandle))->Key();
  return gcnew OCTopoDS_Shape(tmp);
}

OCTopTools_ListOfShape^ OCTopTools_DataMapNodeOfDataMapOfShapeListOfShape::Value()
{
  TopTools_ListOfShape* tmp = new TopTools_ListOfShape();
  *tmp = (*((Handle_TopTools_DataMapNodeOfDataMapOfShapeListOfShape*)nativeHandle))->Value();
  return gcnew OCTopTools_ListOfShape(tmp);
}


