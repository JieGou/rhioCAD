// File generated by CPPExt (MPV)
//
#ifndef _TColStd_Array2OfReal_OCWrappers_HeaderFile
#define _TColStd_Array2OfReal_OCWrappers_HeaderFile

// include native header
#include <TColStd_Array2OfReal.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{




public ref class OCTColStd_Array2OfReal  {

protected:
  TColStd_Array2OfReal* nativeHandle;
  OCTColStd_Array2OfReal(OCDummy^) {};

public:
  property TColStd_Array2OfReal* Handle
  {
    TColStd_Array2OfReal* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColStd_Array2OfReal(TColStd_Array2OfReal* nativeHandle);

// Methods PUBLIC


OCTColStd_Array2OfReal(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColStd_Array2OfReal(Standard_Real Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(Standard_Real V) ;


 /*instead*/  OCTColStd_Array2OfReal^ Assign(OCNaroWrappers::OCTColStd_Array2OfReal^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Real Value) ;


 /*instead*/  Standard_Real Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  Standard_Real ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCTColStd_Array2OfReal()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
