// File generated by CPPExt (MPV)
//
#ifndef _StepShape_Edge_OCWrappers_HeaderFile
#define _StepShape_Edge_OCWrappers_HeaderFile

// include native header
#include <StepShape_Edge.hxx>
#include "../Converter.h"

#include "StepShape_TopologicalRepresentationItem.h"

#include "StepShape_Vertex.h"
#include "StepShape_TopologicalRepresentationItem.h"


namespace OCNaroWrappers
{

ref class OCTCollection_HAsciiString;
ref class OCStepShape_Vertex;



public ref class OCStepShape_Edge  : public OCStepShape_TopologicalRepresentationItem {

protected:
  // dummy constructor;
  OCStepShape_Edge(OCDummy^) : OCStepShape_TopologicalRepresentationItem((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepShape_Edge(StepShape_Edge* nativeHandle);

// Methods PUBLIC

//! Returns a Edge <br>
OCStepShape_Edge();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName) ;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, OCNaroWrappers::OCStepShape_Vertex^ aEdgeStart, OCNaroWrappers::OCStepShape_Vertex^ aEdgeEnd) ;


virtual /*instead*/  void SetEdgeStart(OCNaroWrappers::OCStepShape_Vertex^ aEdgeStart) ;


virtual /*instead*/  OCStepShape_Vertex^ EdgeStart() ;


virtual /*instead*/  void SetEdgeEnd(OCNaroWrappers::OCStepShape_Vertex^ aEdgeEnd) ;


virtual /*instead*/  OCStepShape_Vertex^ EdgeEnd() ;

~OCStepShape_Edge()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif