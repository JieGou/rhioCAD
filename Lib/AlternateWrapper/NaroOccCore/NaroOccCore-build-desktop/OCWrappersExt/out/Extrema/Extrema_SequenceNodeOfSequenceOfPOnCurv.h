// File generated by CPPExt (Transient)
//
#ifndef _Extrema_SequenceNodeOfSequenceOfPOnCurv_OCWrappers_HeaderFile
#define _Extrema_SequenceNodeOfSequenceOfPOnCurv_OCWrappers_HeaderFile

// include the wrapped class
#include <Extrema_SequenceNodeOfSequenceOfPOnCurv.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_SeqNode.h"

#include "Extrema_POnCurv.h"


namespace OCNaroWrappers
{

ref class OCExtrema_POnCurv;
ref class OCExtrema_SequenceOfPOnCurv;



public ref class OCExtrema_SequenceNodeOfSequenceOfPOnCurv : OCTCollection_SeqNode {

protected:
  // dummy constructor;
  OCExtrema_SequenceNodeOfSequenceOfPOnCurv(OCDummy^) : OCTCollection_SeqNode((OCDummy^)nullptr) {};

public:

// constructor from native
OCExtrema_SequenceNodeOfSequenceOfPOnCurv(Handle(Extrema_SequenceNodeOfSequenceOfPOnCurv)* nativeHandle);

// Methods PUBLIC


OCExtrema_SequenceNodeOfSequenceOfPOnCurv(OCNaroWrappers::OCExtrema_POnCurv^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p);


 /*instead*/  OCExtrema_POnCurv^ Value() ;

~OCExtrema_SequenceNodeOfSequenceOfPOnCurv()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
