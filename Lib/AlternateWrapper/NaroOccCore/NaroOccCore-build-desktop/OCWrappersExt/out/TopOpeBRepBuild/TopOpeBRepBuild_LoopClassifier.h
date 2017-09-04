// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_LoopClassifier_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_LoopClassifier_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_LoopClassifier.hxx>
#include "../Converter.h"


#include "../TopAbs/TopAbs_State.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepBuild_Loop;


//! classify loops in order to build Areas <br>
public ref class OCTopOpeBRepBuild_LoopClassifier  {

protected:
  TopOpeBRepBuild_LoopClassifier* nativeHandle;
  OCTopOpeBRepBuild_LoopClassifier(OCDummy^) {};

public:
  property TopOpeBRepBuild_LoopClassifier* Handle
  {
    TopOpeBRepBuild_LoopClassifier* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCTopOpeBRepBuild_LoopClassifier(TopOpeBRepBuild_LoopClassifier* nativeHandle);

// Methods PUBLIC


virtual /*instead*/  void Delete() ;

~OCTopOpeBRepBuild_LoopClassifier()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif