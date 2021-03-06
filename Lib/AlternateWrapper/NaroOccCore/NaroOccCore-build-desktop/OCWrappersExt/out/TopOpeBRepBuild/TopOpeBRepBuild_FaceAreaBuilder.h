// File generated by CPPExt (MPV)
//
#ifndef _TopOpeBRepBuild_FaceAreaBuilder_OCWrappers_HeaderFile
#define _TopOpeBRepBuild_FaceAreaBuilder_OCWrappers_HeaderFile

// include native header
#include <TopOpeBRepBuild_FaceAreaBuilder.hxx>
#include "../Converter.h"

#include "TopOpeBRepBuild_Area2dBuilder.h"

#include "TopOpeBRepBuild_Area2dBuilder.h"


namespace OCNaroWrappers
{

ref class OCTopOpeBRepBuild_LoopSet;
ref class OCTopOpeBRepBuild_LoopClassifier;



//! The FaceAreaBuilder algorithm is used to construct Faces from a LoopSet, <br>
//! where the Loop is the composite topological object of the boundary, <br>
//! here wire or block of edges. <br>
//! The LoopSet gives an iteration on Loops. <br>
//! For each Loop  it indicates if it is on the boundary (wire) or if it <br>
//! results from  an interference (block of edges). <br>
//! The result of the FaceAreaBuilder is an iteration on areas. <br>
//! An area is described by a set of Loops. <br>
public ref class OCTopOpeBRepBuild_FaceAreaBuilder  : public OCTopOpeBRepBuild_Area2dBuilder {

protected:
  // dummy constructor;
  OCTopOpeBRepBuild_FaceAreaBuilder(OCDummy^) : OCTopOpeBRepBuild_Area2dBuilder((OCDummy^)nullptr) {};

public:

// constructor from native
OCTopOpeBRepBuild_FaceAreaBuilder(TopOpeBRepBuild_FaceAreaBuilder* nativeHandle);

// Methods PUBLIC


OCTopOpeBRepBuild_FaceAreaBuilder();

//! Creates a FaceAreaBuilder to build faces on <br>
//! the (wires,blocks of edge) of <LS>, using the classifier <LC>. <br>
OCTopOpeBRepBuild_FaceAreaBuilder(OCNaroWrappers::OCTopOpeBRepBuild_LoopSet^ LS, OCNaroWrappers::OCTopOpeBRepBuild_LoopClassifier^ LC, System::Boolean ForceClass);


 /*instead*/  void InitFaceAreaBuilder(OCNaroWrappers::OCTopOpeBRepBuild_LoopSet^ LS, OCNaroWrappers::OCTopOpeBRepBuild_LoopClassifier^ LC, System::Boolean ForceClass) ;

~OCTopOpeBRepBuild_FaceAreaBuilder()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
