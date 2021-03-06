// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger_OCWrappers_HeaderFile
#define _TopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopTools_ShapeMapHasher;
ref class OCTopOpeBRep_DataMapOfShapeInteger;
ref class OCTopOpeBRep_DataMapNodeOfDataMapOfShapeInteger;



public ref class OCTopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger(TopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger();


OCTopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger(OCNaroWrappers::OCTopOpeBRep_DataMapOfShapeInteger^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTopOpeBRep_DataMapOfShapeInteger^ aMap) ;


 /*instead*/  OCTopoDS_Shape^ Key() ;


 /*instead*/  Standard_Integer Value() ;

~OCTopOpeBRep_DataMapIteratorOfDataMapOfShapeInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
