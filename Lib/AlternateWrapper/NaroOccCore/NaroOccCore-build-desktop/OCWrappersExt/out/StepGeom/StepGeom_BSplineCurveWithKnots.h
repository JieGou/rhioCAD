// File generated by CPPExt (MPV)
//
#ifndef _StepGeom_BSplineCurveWithKnots_OCWrappers_HeaderFile
#define _StepGeom_BSplineCurveWithKnots_OCWrappers_HeaderFile

// include native header
#include <StepGeom_BSplineCurveWithKnots.hxx>
#include "../Converter.h"

#include "StepGeom_BSplineCurve.h"

#include "StepGeom_KnotType.h"
#include "StepGeom_BSplineCurve.h"
#include "StepGeom_BSplineCurveForm.h"
#include "../StepData/StepData_Logical.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;
ref class OCTColStd_HArray1OfReal;
ref class OCTCollection_HAsciiString;
ref class OCStepGeom_HArray1OfCartesianPoint;



public ref class OCStepGeom_BSplineCurveWithKnots  : public OCStepGeom_BSplineCurve {

protected:
  // dummy constructor;
  OCStepGeom_BSplineCurveWithKnots(OCDummy^) : OCStepGeom_BSplineCurve((OCDummy^)nullptr) {};

public:

// constructor from native
OCStepGeom_BSplineCurveWithKnots(StepGeom_BSplineCurveWithKnots* nativeHandle);

// Methods PUBLIC

//! Returns a BSplineCurveWithKnots <br>
OCStepGeom_BSplineCurveWithKnots();


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aDegree, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineCurveForm aCurveForm, OCStepData_Logical aClosedCurve, OCStepData_Logical aSelfIntersect) override;


virtual /*instead*/  void Init(OCNaroWrappers::OCTCollection_HAsciiString^ aName, Standard_Integer aDegree, OCNaroWrappers::OCStepGeom_HArray1OfCartesianPoint^ aControlPointsList, OCStepGeom_BSplineCurveForm aCurveForm, OCStepData_Logical aClosedCurve, OCStepData_Logical aSelfIntersect, OCNaroWrappers::OCTColStd_HArray1OfInteger^ aKnotMultiplicities, OCNaroWrappers::OCTColStd_HArray1OfReal^ aKnots, OCStepGeom_KnotType aKnotSpec) ;


 /*instead*/  void SetKnotMultiplicities(OCNaroWrappers::OCTColStd_HArray1OfInteger^ aKnotMultiplicities) ;


 /*instead*/  OCTColStd_HArray1OfInteger^ KnotMultiplicities() ;


 /*instead*/  Standard_Integer KnotMultiplicitiesValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbKnotMultiplicities() ;


 /*instead*/  void SetKnots(OCNaroWrappers::OCTColStd_HArray1OfReal^ aKnots) ;


 /*instead*/  OCTColStd_HArray1OfReal^ Knots() ;


 /*instead*/  Standard_Real KnotsValue(Standard_Integer num) ;


 /*instead*/  Standard_Integer NbKnots() ;


 /*instead*/  void SetKnotSpec(OCStepGeom_KnotType aKnotSpec) ;


 /*instead*/  OCStepGeom_KnotType KnotSpec() ;

~OCStepGeom_BSplineCurveWithKnots()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
