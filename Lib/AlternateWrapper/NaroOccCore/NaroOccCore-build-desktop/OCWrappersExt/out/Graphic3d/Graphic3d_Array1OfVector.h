// File generated by CPPExt (MPV)
//
#ifndef _Graphic3d_Array1OfVector_OCWrappers_HeaderFile
#define _Graphic3d_Array1OfVector_OCWrappers_HeaderFile

// include native header
#include <Graphic3d_Array1OfVector.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCGraphic3d_Vector;



public ref class OCGraphic3d_Array1OfVector  {

protected:
  Graphic3d_Array1OfVector* nativeHandle;
  OCGraphic3d_Array1OfVector(OCDummy^) {};

public:
  property Graphic3d_Array1OfVector* Handle
  {
    Graphic3d_Array1OfVector* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCGraphic3d_Array1OfVector(Graphic3d_Array1OfVector* nativeHandle);

// Methods PUBLIC


OCGraphic3d_Array1OfVector(Standard_Integer Low, Standard_Integer Up);


OCGraphic3d_Array1OfVector(OCNaroWrappers::OCGraphic3d_Vector^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCGraphic3d_Vector^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCGraphic3d_Array1OfVector^ Assign(OCNaroWrappers::OCGraphic3d_Array1OfVector^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCGraphic3d_Vector^ Value) ;


 /*instead*/  OCGraphic3d_Vector^ Value(Standard_Integer Index) ;


 /*instead*/  OCGraphic3d_Vector^ ChangeValue(Standard_Integer Index) ;

~OCGraphic3d_Array1OfVector()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
