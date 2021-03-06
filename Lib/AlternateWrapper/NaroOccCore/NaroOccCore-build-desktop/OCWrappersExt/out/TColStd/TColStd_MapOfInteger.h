// File generated by CPPExt (MPV)
//
#ifndef _TColStd_MapOfInteger_OCWrappers_HeaderFile
#define _TColStd_MapOfInteger_OCWrappers_HeaderFile

// include native header
#include <TColStd_MapOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_StdMapNodeOfMapOfInteger;
ref class OCTColStd_MapIteratorOfMapOfInteger;



public ref class OCTColStd_MapOfInteger  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCTColStd_MapOfInteger(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_MapOfInteger(TColStd_MapOfInteger* nativeHandle);

// Methods PUBLIC


OCTColStd_MapOfInteger(Standard_Integer NbBuckets);


 /*instead*/  OCTColStd_MapOfInteger^ Assign(OCNaroWrappers::OCTColStd_MapOfInteger^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Add(Standard_Integer aKey) ;


 /*instead*/  System::Boolean Contains(Standard_Integer aKey) ;


 /*instead*/  System::Boolean Remove(Standard_Integer aKey) ;

~OCTColStd_MapOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
