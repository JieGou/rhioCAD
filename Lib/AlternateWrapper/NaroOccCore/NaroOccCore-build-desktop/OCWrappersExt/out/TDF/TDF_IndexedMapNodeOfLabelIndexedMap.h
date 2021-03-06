// File generated by CPPExt (Transient)
//
#ifndef _TDF_IndexedMapNodeOfLabelIndexedMap_OCWrappers_HeaderFile
#define _TDF_IndexedMapNodeOfLabelIndexedMap_OCWrappers_HeaderFile

// include the wrapped class
#include <TDF_IndexedMapNodeOfLabelIndexedMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "TDF_Label.h"


namespace OCNaroWrappers
{

ref class OCTDF_Label;
ref class OCTDF_LabelMapHasher;
ref class OCTDF_LabelIndexedMap;



public ref class OCTDF_IndexedMapNodeOfLabelIndexedMap : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCTDF_IndexedMapNodeOfLabelIndexedMap(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_IndexedMapNodeOfLabelIndexedMap(Handle(TDF_IndexedMapNodeOfLabelIndexedMap)* nativeHandle);

// Methods PUBLIC


OCTDF_IndexedMapNodeOfLabelIndexedMap(OCNaroWrappers::OCTDF_Label^ K1, Standard_Integer K2, TCollection_MapNodePtr n1, TCollection_MapNodePtr n2);


 /*instead*/  OCTDF_Label^ Key1() ;


 /*instead*/  Standard_Integer Key2() ;


 /*instead*/  TCollection_MapNodePtr& Next2() ;

~OCTDF_IndexedMapNodeOfLabelIndexedMap()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
