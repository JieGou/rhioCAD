// File generated by CPPExt (Transient)
//
#ifndef _PColStd_HSequenceOfPersistent_OCWrappers_HeaderFile
#define _PColStd_HSequenceOfPersistent_OCWrappers_HeaderFile

// include the wrapped class
#include <PColStd_HSequenceOfPersistent.hxx>
#include "../Converter.h"

#include "../Standard/Standard_Persistent.h"



namespace OCNaroWrappers
{

ref class OCPColStd_SeqNodeOfHSequenceOfPersistent;
ref class OCPColStd_SeqExplorerOfHSequenceOfPersistent;
ref class OCStandard_Persistent;



public ref class OCPColStd_HSequenceOfPersistent : OCStandard_Persistent {

protected:
  // dummy constructor;
  OCPColStd_HSequenceOfPersistent(OCDummy^) : OCStandard_Persistent((OCDummy^)nullptr) {};

public:

// constructor from native
OCPColStd_HSequenceOfPersistent(Handle(PColStd_HSequenceOfPersistent)* nativeHandle);

// Methods PUBLIC


OCPColStd_HSequenceOfPersistent();


 /*instead*/  System::Boolean IsEmpty() ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  OCStandard_Persistent^ First() ;


 /*instead*/  OCStandard_Persistent^ Last() ;


 /*instead*/  void Clear() ;


 /*instead*/  void Append(OCNaroWrappers::OCStandard_Persistent^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCPColStd_HSequenceOfPersistent^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCStandard_Persistent^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCPColStd_HSequenceOfPersistent^ S) ;


 /*instead*/  void Reverse() ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCStandard_Persistent^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCPColStd_HSequenceOfPersistent^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCStandard_Persistent^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCPColStd_HSequenceOfPersistent^ S) ;


 /*instead*/  void Exchange(Standard_Integer I, Standard_Integer J) ;


 /*instead*/  OCPColStd_HSequenceOfPersistent^ SubSequence(Standard_Integer FromIndex, Standard_Integer ToIndex) ;


 /*instead*/  OCPColStd_HSequenceOfPersistent^ Split(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCStandard_Persistent^ T) ;


 /*instead*/  OCStandard_Persistent^ Value(Standard_Integer Index) ;


 /*instead*/  System::Boolean Contains(OCNaroWrappers::OCStandard_Persistent^ T) ;


 /*instead*/  Standard_Integer Location(Standard_Integer N, OCNaroWrappers::OCStandard_Persistent^ T, Standard_Integer FromIndex, Standard_Integer ToIndex) ;


 /*instead*/  Standard_Integer Location(Standard_Integer N, OCNaroWrappers::OCStandard_Persistent^ T) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;


virtual /*instead*/  OCStandard_Persistent^ ShallowCopy() ;


virtual /*instead*/  void ShallowDump(Standard_OStream& s) override;

~OCPColStd_HSequenceOfPersistent()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif