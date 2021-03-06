// File generated by CPPExt (MPV)
//
#ifndef _TColStd_DataMapIteratorOfDataMapOfIntegerTransient_OCWrappers_HeaderFile
#define _TColStd_DataMapIteratorOfDataMapOfIntegerTransient_OCWrappers_HeaderFile

// include native header
#include <TColStd_DataMapIteratorOfDataMapOfIntegerTransient.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCStandard_Transient;
ref class OCTColStd_MapIntegerHasher;
ref class OCTColStd_DataMapOfIntegerTransient;
ref class OCTColStd_DataMapNodeOfDataMapOfIntegerTransient;



public ref class OCTColStd_DataMapIteratorOfDataMapOfIntegerTransient  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCTColStd_DataMapIteratorOfDataMapOfIntegerTransient(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCTColStd_DataMapIteratorOfDataMapOfIntegerTransient(TColStd_DataMapIteratorOfDataMapOfIntegerTransient* nativeHandle);

// Methods PUBLIC


OCTColStd_DataMapIteratorOfDataMapOfIntegerTransient();


OCTColStd_DataMapIteratorOfDataMapOfIntegerTransient(OCNaroWrappers::OCTColStd_DataMapOfIntegerTransient^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCTColStd_DataMapOfIntegerTransient^ aMap) ;


 /*instead*/  Standard_Integer Key() ;


 /*instead*/  OCStandard_Transient^ Value() ;

~OCTColStd_DataMapIteratorOfDataMapOfIntegerTransient()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
