// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_CArray1OfVSInterference_OCWrappers_HeaderFile
#define _BOPTools_CArray1OfVSInterference_OCWrappers_HeaderFile

// include native header
#include <BOPTools_CArray1OfVSInterference.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBOPTools_VSInterference;



public ref class OCBOPTools_CArray1OfVSInterference  {

protected:
  BOPTools_CArray1OfVSInterference* nativeHandle;
  OCBOPTools_CArray1OfVSInterference(OCDummy^) {};

public:
  property BOPTools_CArray1OfVSInterference* Handle
  {
    BOPTools_CArray1OfVSInterference* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBOPTools_CArray1OfVSInterference(BOPTools_CArray1OfVSInterference* nativeHandle);

// Methods PUBLIC


OCBOPTools_CArray1OfVSInterference(Standard_Integer Length, Standard_Integer BlockLength);


 /*instead*/  void Resize(Standard_Integer theNewLength) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Extent() ;


 /*instead*/  Standard_Integer FactLength() ;


 /*instead*/  Standard_Integer Append(OCNaroWrappers::OCBOPTools_VSInterference^ Value) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  OCBOPTools_VSInterference^ Value(Standard_Integer Index) ;


 /*instead*/  OCBOPTools_VSInterference^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void SetBlockLength(Standard_Integer aBL) ;


 /*instead*/  Standard_Integer BlockLength() ;


 /*instead*/  void Purge() ;

~OCBOPTools_CArray1OfVSInterference()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif