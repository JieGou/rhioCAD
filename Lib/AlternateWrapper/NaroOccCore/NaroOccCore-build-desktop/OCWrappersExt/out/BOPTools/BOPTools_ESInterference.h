// File generated by CPPExt (MPV)
//
#ifndef _BOPTools_ESInterference_OCWrappers_HeaderFile
#define _BOPTools_ESInterference_OCWrappers_HeaderFile

// include native header
#include <BOPTools_ESInterference.hxx>
#include "../Converter.h"

#include "BOPTools_ShapeShapeInterference.h"

#include "../IntTools/IntTools_CommonPrt.h"
#include "BOPTools_ShapeShapeInterference.h"


namespace OCNaroWrappers
{

ref class OCIntTools_CommonPrt;


//! class for storing  an Edge/Face <br>
//!         interference <br>
//! <br>
public ref class OCBOPTools_ESInterference  : public OCBOPTools_ShapeShapeInterference {

protected:
  // dummy constructor;
  OCBOPTools_ESInterference(OCDummy^) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr) {};

public:

// constructor from native
OCBOPTools_ESInterference(BOPTools_ESInterference* nativeHandle);

// Methods PUBLIC


//! Empty constructor <br>
OCBOPTools_ESInterference();


//! Constructor <br>
//! anIndex1, <br>
//! anIndex2 see BOPTools_ShapeShapeInterference for details <br>
//! aCPart   see IntTools_CommonPrt for details <br>
OCBOPTools_ESInterference(Standard_Integer anIndex1, Standard_Integer anIndex2, OCNaroWrappers::OCIntTools_CommonPrt^ aCPart);


//! Selector <br>
 /*instead*/  OCIntTools_CommonPrt^ CommonPrt() ;

~OCBOPTools_ESInterference()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif