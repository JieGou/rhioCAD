// File generated by CPPExt (MPV)
//
#ifndef _BRepMesh_DataMapOfShapeEdgeDiscret_OCWrappers_HeaderFile
#define _BRepMesh_DataMapOfShapeEdgeDiscret_OCWrappers_HeaderFile

// include native header
#include <BRepMesh_DataMapOfShapeEdgeDiscret.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCBRepMesh_EdgeDiscret;
ref class OCTopTools_ShapeMapHasher;
ref class OCBRepMesh_DataMapNodeOfDataMapOfShapeEdgeDiscret;
ref class OCBRepMesh_DataMapIteratorOfDataMapOfShapeEdgeDiscret;



public ref class OCBRepMesh_DataMapOfShapeEdgeDiscret  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCBRepMesh_DataMapOfShapeEdgeDiscret(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepMesh_DataMapOfShapeEdgeDiscret(BRepMesh_DataMapOfShapeEdgeDiscret* nativeHandle);

// Methods PUBLIC


OCBRepMesh_DataMapOfShapeEdgeDiscret(Standard_Integer NbBuckets);


 /*instead*/  OCBRepMesh_DataMapOfShapeEdgeDiscret^ Assign(OCNaroWrappers::OCBRepMesh_DataMapOfShapeEdgeDiscret^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCBRepMesh_EdgeDiscret^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepMesh_EdgeDiscret^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCBRepMesh_EdgeDiscret^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCBRepMesh_DataMapOfShapeEdgeDiscret()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
