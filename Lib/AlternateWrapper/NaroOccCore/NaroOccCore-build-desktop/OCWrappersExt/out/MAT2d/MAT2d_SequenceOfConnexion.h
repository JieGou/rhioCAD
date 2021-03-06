// File generated by CPPExt (MPV)
//
#ifndef _MAT2d_SequenceOfConnexion_OCWrappers_HeaderFile
#define _MAT2d_SequenceOfConnexion_OCWrappers_HeaderFile

// include native header
#include <MAT2d_SequenceOfConnexion.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BaseSequence.h"

#include "../TCollection/TCollection_BaseSequence.h"


namespace OCNaroWrappers
{

ref class OCMAT2d_Connexion;
ref class OCMAT2d_SequenceNodeOfSequenceOfConnexion;



public ref class OCMAT2d_SequenceOfConnexion  : public OCTCollection_BaseSequence {

protected:
  // dummy constructor;
  OCMAT2d_SequenceOfConnexion(OCDummy^) : OCTCollection_BaseSequence((OCDummy^)nullptr) {};

public:

// constructor from native
OCMAT2d_SequenceOfConnexion(MAT2d_SequenceOfConnexion* nativeHandle);

// Methods PUBLIC


OCMAT2d_SequenceOfConnexion();


 /*instead*/  OCMAT2d_SequenceOfConnexion^ Assign(OCNaroWrappers::OCMAT2d_SequenceOfConnexion^ Other) ;


 /*instead*/  void Append(OCNaroWrappers::OCMAT2d_Connexion^ T) ;


 /*instead*/  void Append(OCNaroWrappers::OCMAT2d_SequenceOfConnexion^ S) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMAT2d_Connexion^ T) ;


 /*instead*/  void Prepend(OCNaroWrappers::OCMAT2d_SequenceOfConnexion^ S) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMAT2d_Connexion^ T) ;


 /*instead*/  void InsertBefore(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfConnexion^ S) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMAT2d_Connexion^ T) ;


 /*instead*/  void InsertAfter(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfConnexion^ S) ;


 /*instead*/  OCMAT2d_Connexion^ First() ;


 /*instead*/  OCMAT2d_Connexion^ Last() ;


 /*instead*/  void Split(Standard_Integer Index, OCNaroWrappers::OCMAT2d_SequenceOfConnexion^ Sub) ;


 /*instead*/  OCMAT2d_Connexion^ Value(Standard_Integer Index) ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCMAT2d_Connexion^ I) ;


 /*instead*/  OCMAT2d_Connexion^ ChangeValue(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer Index) ;


 /*instead*/  void Remove(Standard_Integer FromIndex, Standard_Integer ToIndex) ;

~OCMAT2d_SequenceOfConnexion()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
