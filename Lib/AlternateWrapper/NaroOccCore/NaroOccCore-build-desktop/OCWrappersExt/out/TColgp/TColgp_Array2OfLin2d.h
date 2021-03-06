// File generated by CPPExt (MPV)
//
#ifndef _TColgp_Array2OfLin2d_OCWrappers_HeaderFile
#define _TColgp_Array2OfLin2d_OCWrappers_HeaderFile

// include native header
#include <TColgp_Array2OfLin2d.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCgp_Lin2d;



public ref class OCTColgp_Array2OfLin2d  {

protected:
  TColgp_Array2OfLin2d* nativeHandle;
  OCTColgp_Array2OfLin2d(OCDummy^) {};

public:
  property TColgp_Array2OfLin2d* Handle
  {
    TColgp_Array2OfLin2d* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTColgp_Array2OfLin2d(TColgp_Array2OfLin2d* nativeHandle);

// Methods PUBLIC


OCTColgp_Array2OfLin2d(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCTColgp_Array2OfLin2d(OCNaroWrappers::OCgp_Lin2d^ Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


 /*instead*/  void Init(OCNaroWrappers::OCgp_Lin2d^ V) ;


 /*instead*/  OCTColgp_Array2OfLin2d^ Assign(OCNaroWrappers::OCTColgp_Array2OfLin2d^ Other) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCgp_Lin2d^ Value) ;


 /*instead*/  OCgp_Lin2d^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCgp_Lin2d^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;

~OCTColgp_Array2OfLin2d()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
