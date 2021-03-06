// File generated by CPPExt (Transient)
//
#ifndef _ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal_OCWrappers_HeaderFile
#define _ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal_OCWrappers_HeaderFile

// include the wrapped class
#include <ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "../TColStd/TColStd_ListOfReal.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTColStd_ListOfReal;
ref class OCTopTools_ShapeMapHasher;
ref class OCShapeAnalysis_DataMapOfShapeListOfReal;
ref class OCShapeAnalysis_DataMapIteratorOfDataMapOfShapeListOfReal;



public ref class OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(Handle(ShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal)* nativeHandle);

// Methods PUBLIC


OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCTColStd_ListOfReal^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  OCTColStd_ListOfReal^ Value() ;

~OCShapeAnalysis_DataMapNodeOfDataMapOfShapeListOfReal()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
