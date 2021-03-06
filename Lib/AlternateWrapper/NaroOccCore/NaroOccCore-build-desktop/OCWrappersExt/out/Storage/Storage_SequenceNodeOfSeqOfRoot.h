// File generated by CPPExt (Transient)
//
#ifndef _Storage_SequenceNodeOfSeqOfRoot_OCWrappers_HeaderFile
#define _Storage_SequenceNodeOfSeqOfRoot_OCWrappers_HeaderFile

// include the wrapped class
#include <Storage_SequenceNodeOfSeqOfRoot.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"



namespace OCNaroWrappers
{

ref class OCStorage_Root;
ref class OCStorage_SeqOfRoot;



public ref class OCStorage_SequenceNodeOfSeqOfRoot : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCStorage_SequenceNodeOfSeqOfRoot(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCStorage_SequenceNodeOfSeqOfRoot(Handle(Storage_SequenceNodeOfSeqOfRoot)* nativeHandle);

// Methods PUBLIC


OCStorage_SequenceNodeOfSeqOfRoot(OCNaroWrappers::OCStorage_Root^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCStorage_Root^ Value() ;

~OCStorage_SequenceNodeOfSeqOfRoot()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
