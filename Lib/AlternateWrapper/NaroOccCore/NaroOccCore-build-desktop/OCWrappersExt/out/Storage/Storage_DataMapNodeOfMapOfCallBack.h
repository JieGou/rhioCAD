// File generated by CPPExt (Transient)
//
#ifndef _Storage_DataMapNodeOfMapOfCallBack_OCWrappers_HeaderFile
#define _Storage_DataMapNodeOfMapOfCallBack_OCWrappers_HeaderFile

// include the wrapped class
#include <Storage_DataMapNodeOfMapOfCallBack.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_MapNode.h"

#include "../TCollection/TCollection_AsciiString.h"


namespace OCNaroWrappers
{

ref class OCStorage_TypedCallBack;
ref class OCTCollection_AsciiString;
ref class OCStorage_MapOfCallBack;
ref class OCStorage_DataMapIteratorOfMapOfCallBack;



public ref class OCStorage_DataMapNodeOfMapOfCallBack : OCTCollection_MapNode {

protected:
  // dummy constructor;
  OCStorage_DataMapNodeOfMapOfCallBack(OCDummy^) : OCTCollection_MapNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCStorage_DataMapNodeOfMapOfCallBack(Handle(Storage_DataMapNodeOfMapOfCallBack)* nativeHandle);

// Methods PUBLIC


OCStorage_DataMapNodeOfMapOfCallBack(OCNaroWrappers::OCTCollection_AsciiString^ K, OCNaroWrappers::OCStorage_TypedCallBack^ I, TCollection_MapNodePtr n);


 /*instead*/  OCTCollection_AsciiString^ Key() ;


 /*instead*/  OCStorage_TypedCallBack^ Value() ;

~OCStorage_DataMapNodeOfMapOfCallBack()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
