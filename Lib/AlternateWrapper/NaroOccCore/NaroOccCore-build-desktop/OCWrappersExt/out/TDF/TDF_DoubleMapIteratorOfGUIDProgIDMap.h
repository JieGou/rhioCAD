// File generated by CPPExt (MPV)
//
#ifndef _TDF_DoubleMapIteratorOfGUIDProgIDMap_OCWrappers_HeaderFile
#define _TDF_DoubleMapIteratorOfGUIDProgIDMap_OCWrappers_HeaderFile

// include native header
#include <TDF_DoubleMapIteratorOfGUIDProgIDMap.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCStandard_GUID;
ref class OCTCollection_ExtendedString;
ref class OCTDF_GUIDProgIDMap;
ref class OCTDF_DoubleMapNodeOfGUIDProgIDMap;



public ref class OCTDF_DoubleMapIteratorOfGUIDProgIDMap  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTDF_DoubleMapIteratorOfGUIDProgIDMap(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTDF_DoubleMapIteratorOfGUIDProgIDMap(TDF_DoubleMapIteratorOfGUIDProgIDMap* nativeHandle);

// Methods PUBLIC


OCTDF_DoubleMapIteratorOfGUIDProgIDMap();


OCTDF_DoubleMapIteratorOfGUIDProgIDMap(OCNaroWrappers::OCTDF_GUIDProgIDMap^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTDF_GUIDProgIDMap^ aMap) ;


 /*instead*/  OCStandard_GUID^ Key1() ;


 /*instead*/  OCTCollection_ExtendedString^ Key2() ;

~OCTDF_DoubleMapIteratorOfGUIDProgIDMap()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
