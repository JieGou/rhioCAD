// File generated by CPPExt (MPV)
//
#ifndef _BRepBlend_SequenceOfLine_OCWrappers_HeaderFile
#define _BRepBlend_SequenceOfLine_OCWrappers_HeaderFile

// include native header
#include <BRepBlend_SequenceOfLine.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCBRepBlend_Line;
ref class OCBRepBlend_SequenceNodeOfSequenceOfLine;



public ref class OCBRepBlend_SequenceOfLine  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCBRepBlend_SequenceOfLine(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepBlend_SequenceOfLine(BRepBlend_SequenceOfLine* nativeHandle);

// Methods PUBLIC


OCBRepBlend_SequenceOfLine();


 /*instead*/  OCBRepBlend_SequenceOfLine^ Assign(OCNaroWrappers::OCBRepBlend_SequenceOfLine^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCBRepBlend_Line^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCBRepBlend_SequenceOfLine^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBRepBlend_Line^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCBRepBlend_SequenceOfLine^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_Line^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfLine^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_Line^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfLine^ S) ;


 /*instead*/  OCBRepBlend_Line^ First() ;


 /*instead*/  OCBRepBlend_Line^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_SequenceOfLine^ Sub) ;


 /*instead*/  OCBRepBlend_Line^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCBRepBlend_Line^ I) ;


 /*instead*/  OCBRepBlend_Line^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCBRepBlend_SequenceOfLine()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif