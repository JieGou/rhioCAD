// File generated by CPPExt (Transient)
//
#ifndef _Adaptor3d_HSurfaceOfRevolution_OCWrappers_HeaderFile
#define _Adaptor3d_HSurfaceOfRevolution_OCWrappers_HeaderFile

// include the wrapped class
#include <Adaptor3d_HSurfaceOfRevolution.hxx>
#include "../Converter.h"

#include "Adaptor3d_HSurface.h"

#include "Adaptor3d_SurfaceOfRevolution.h"


namespace OCNaroWrappers
{

ref class OCAdaptor3d_SurfaceOfRevolution;
ref class OCAdaptor3d_Surface;



public ref class OCAdaptor3d_HSurfaceOfRevolution : OCAdaptor3d_HSurface {

protected:
  // dummy constructor;
  OCAdaptor3d_HSurfaceOfRevolution(OCDummy^) : OCAdaptor3d_HSurface((OCDummy^)nullptr) {};

public:

// constructor from native
OCAdaptor3d_HSurfaceOfRevolution(Handle(Adaptor3d_HSurfaceOfRevolution)* nativeHandle);

// Methods PUBLIC


OCAdaptor3d_HSurfaceOfRevolution();


OCAdaptor3d_HSurfaceOfRevolution(OCNaroWrappers::OCAdaptor3d_SurfaceOfRevolution^ S);


 /*instead*/  void Set(OCNaroWrappers::OCAdaptor3d_SurfaceOfRevolution^ S) ;


 /*instead*/  OCAdaptor3d_Surface^ Surface() ;


 /*instead*/  OCAdaptor3d_SurfaceOfRevolution^ ChangeSurface() ;

~OCAdaptor3d_HSurfaceOfRevolution()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif