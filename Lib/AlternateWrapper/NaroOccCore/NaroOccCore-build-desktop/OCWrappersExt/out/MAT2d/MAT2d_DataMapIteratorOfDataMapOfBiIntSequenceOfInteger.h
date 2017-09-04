// File generated by CPPExt (MPV)
//
#ifndef _MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger_OCWrappers_HeaderFile
#define _MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger_OCWrappers_HeaderFile

// include native header
#include <MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMapIterator.h"

#include "../TCollection/TCollection_BasicMapIterator.h"


namespace OCNaroWrappers
{

ref class OCMAT2d_BiInt;
ref class OCTColStd_SequenceOfInteger;
ref class OCMAT2d_MapBiIntHasher;
ref class OCMAT2d_DataMapOfBiIntSequenceOfInteger;
ref class OCMAT2d_DataMapNodeOfDataMapOfBiIntSequenceOfInteger;



public ref class OCMAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger  : public OCTCollection_BasicMapIterator {

protected:
  // dummy constructor;
  OCMAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger(OCDummy^) : OCTCollection_BasicMapIterator((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger(MAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger* nativeHandle);

// Methods PUBLIC


OCMAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger();


OCMAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger(OCNaroWrappers::OCMAT2d_DataMapOfBiIntSequenceOfInteger^ aMap);


 /*instead*/  void Initialize(OCNaroWrappers::OCMAT2d_DataMapOfBiIntSequenceOfInteger^ aMap) ;


 /*instead*/  OCMAT2d_BiInt^ Key() ;


 /*instead*/  OCTColStd_SequenceOfInteger^ Value() ;

~OCMAT2d_DataMapIteratorOfDataMapOfBiIntSequenceOfInteger()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif