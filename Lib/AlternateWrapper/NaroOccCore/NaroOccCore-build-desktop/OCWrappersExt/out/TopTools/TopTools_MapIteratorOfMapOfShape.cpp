// File generated by CPPExt (CPP file)
//

#include "TopTools_MapIteratorOfMapOfShape.h"
#include "../Converter.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "TopTools_ShapeMapHasher.h"
#include "TopTools_MapOfShape.h"
#include "TopTools_StdMapNodeOfMapOfShape.h"


using namespace OCNaroWrappers;

OCTopTools_MapIteratorOfMapOfShape::OCTopTools_MapIteratorOfMapOfShape(TopTools_MapIteratorOfMapOfShape* nativeHandle) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCTopTools_MapIteratorOfMapOfShape::OCTopTools_MapIteratorOfMapOfShape() : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_MapIteratorOfMapOfShape();
}

OCTopTools_MapIteratorOfMapOfShape::OCTopTools_MapIteratorOfMapOfShape(OCNaroWrappers::OCTopTools_MapOfShape^ aMap) : OCTCollection_BasicMapIterator((OCDummy^)nullptr)

{
  nativeHandle = new TopTools_MapIteratorOfMapOfShape(*((TopTools_MapOfShape*)aMap->Handle));
}

 void OCTopTools_MapIteratorOfMapOfShape::Initialize(OCNaroWrappers::OCTopTools_MapOfShape^ aMap)
{
  ((TopTools_MapIteratorOfMapOfShape*)nativeHandle)->Initialize(*((TopTools_MapOfShape*)aMap->Handle));
}

OCTopoDS_Shape^ OCTopTools_MapIteratorOfMapOfShape::Key()
{
  TopoDS_Shape* tmp = new TopoDS_Shape();
  *tmp = ((TopTools_MapIteratorOfMapOfShape*)nativeHandle)->Key();
  return gcnew OCTopoDS_Shape(tmp);
}


