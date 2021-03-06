// File generated by CPPExt (MPV)
//
#ifndef _AIS_DataMapofIntegerListOfinteractive_OCWrappers_HeaderFile
#define _AIS_DataMapofIntegerListOfinteractive_OCWrappers_HeaderFile

// include native header
#include <AIS_DataMapofIntegerListOfinteractive.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCAIS_ListOfInteractive;
ref class OCTColStd_MapIntegerHasher;
ref class OCAIS_DataMapNodeOfDataMapofIntegerListOfinteractive;
ref class OCAIS_DataMapIteratorOfDataMapofIntegerListOfinteractive;



public ref class OCAIS_DataMapofIntegerListOfinteractive  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCAIS_DataMapofIntegerListOfinteractive(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCAIS_DataMapofIntegerListOfinteractive(AIS_DataMapofIntegerListOfinteractive* nativeHandle);

// Methods PUBLIC


OCAIS_DataMapofIntegerListOfinteractive(Standard_Integer NbBuckets);


 /*instead*/  OCAIS_DataMapofIntegerListOfinteractive^ Assign(OCNaroWrappers::OCAIS_DataMapofIntegerListOfinteractive^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(Standard_Integer K, OCNaroWrappers::OCAIS_ListOfInteractive^ I) ;


 /*instead*/  System::Boolean IsBound(Standard_Integer K) ;


 /*instead*/  System::Boolean UnBind(Standard_Integer K) ;


 /*instead*/  OCAIS_ListOfInteractive^ Find(Standard_Integer K) ;


 /*instead*/  OCAIS_ListOfInteractive^ ChangeFind(Standard_Integer K) ;


 /*instead*/  Standard_Address Find1(Standard_Integer K) ;


 /*instead*/  Standard_Address ChangeFind1(Standard_Integer K) ;

~OCAIS_DataMapofIntegerListOfinteractive()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
