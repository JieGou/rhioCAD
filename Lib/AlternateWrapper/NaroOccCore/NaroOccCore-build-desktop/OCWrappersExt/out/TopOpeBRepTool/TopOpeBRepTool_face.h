// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepTool_face_OCWrappers_HeaderFile
#define _TopOpeBRepTool_face_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepTool_face.hxx>
#include "../Converter.h"


#include "../TopoDS/TopoDS_Wire.h"
#include "../TopoDS/TopoDS_Face.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Wire;
ref class OCTopoDS_Face;



public ref class OCTopOpeBRepTool_face  {

protected:
  TopOpeBRepTool_face* nativeHandle;
  OCTopOpeBRepTool_face(OCDummy^) {};

public:
  property TopOpeBRepTool_face* Handle
  {
    TopOpeBRepTool_face* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepTool_face(TopOpeBRepTool_face* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepTool_face();


 /*instead*/  System::Boolean Init(OCNaroWrappers::OCTopoDS_Wire^ W, OCNaroWrappers::OCTopoDS_Face^ Fref) ;


 /*instead*/  OCTopoDS_Wire^ W() ;


 /*instead*/  System::Boolean IsDone() ;


 /*instead*/  System::Boolean Finite() ;


 /*instead*/  OCTopoDS_Face^ Ffinite() ;


 /*instead*/  OCTopoDS_Face^ RealF() ;

~OCTopOpeBRepTool_face()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
