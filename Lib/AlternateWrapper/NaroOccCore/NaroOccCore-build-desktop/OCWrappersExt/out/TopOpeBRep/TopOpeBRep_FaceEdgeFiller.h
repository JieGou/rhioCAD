// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRep_FaceEdgeFiller_OCWrappers_HeaderFile
#define _TopOpeBRep_FaceEdgeFiller_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRep_FaceEdgeFiller.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCTopOpeBRep_FaceEdgeIntersector;
ref class OCTopOpeBRepDS_HDataStructure;
ref class OCTopOpeBRepDS_ListIteratorOfListOfInterference;
ref class OCTopOpeBRepDS_Point;
ref class OCTopOpeBRepDS_DataStructure;
ref class OCTopOpeBRepDS_ListOfInterference;
ref class OCTopOpeBRepDS_Interference;



public ref class OCTopOpeBRep_FaceEdgeFiller  {

protected:
  TopOpeBRep_FaceEdgeFiller* nativeHandle;
  OCTopOpeBRep_FaceEdgeFiller(OCDummy^) {};

public:
  property TopOpeBRep_FaceEdgeFiller* Handle
  {
    TopOpeBRep_FaceEdgeFiller* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRep_FaceEdgeFiller(TopOpeBRep_FaceEdgeFiller* nativeHandle);

// Methods PUBLIC


OCTopOpeBRep_FaceEdgeFiller();


 /*instead*/  void Insert(OCNaroWrappers::OCTopoDS_Shape^ F, OCNaroWrappers::OCTopoDS_Shape^ E, OCNaroWrappers::OCTopOpeBRep_FaceEdgeIntersector^ FEINT, OCNaroWrappers::OCTopOpeBRepDS_HDataStructure^ HDS) ;

~OCTopOpeBRep_FaceEdgeFiller()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif