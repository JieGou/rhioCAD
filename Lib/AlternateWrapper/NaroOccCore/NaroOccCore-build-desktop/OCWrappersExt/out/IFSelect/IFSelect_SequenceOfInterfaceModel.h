// File generated by CPPExt (MPV)
//
#ifndef _IFSelect_SequenceOfInterfaceModel_OCWrappers_HeaderFile
#define _IFSelect_SequenceOfInterfaceModel_OCWrappers_HeaderFile

// include native header
#include <IFSelect_SequenceOfInterfaceModel.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCInterface_InterfaceModel;
ref class OCIFSelect_SequenceNodeOfSequenceOfInterfaceModel;



public ref class OCIFSelect_SequenceOfInterfaceModel  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCIFSelect_SequenceOfInterfaceModel(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCIFSelect_SequenceOfInterfaceModel(IFSelect_SequenceOfInterfaceModel* nativeHandle);

// Methods PUBLIC


OCIFSelect_SequenceOfInterfaceModel();


 /*instead*/  OCIFSelect_SequenceOfInterfaceModel^ Assign(OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCInterface_InterfaceModel^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCInterface_InterfaceModel^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCInterface_InterfaceModel^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCInterface_InterfaceModel^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ S) ;


 /*instead*/  OCInterface_InterfaceModel^ First() ;


 /*instead*/  OCInterface_InterfaceModel^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCIFSelect_SequenceOfInterfaceModel^ Sub) ;


 /*instead*/  OCInterface_InterfaceModel^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCInterface_InterfaceModel^ I) ;


 /*instead*/  OCInterface_InterfaceModel^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCIFSelect_SequenceOfInterfaceModel()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
