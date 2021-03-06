// File generated by CPPExt (MPV)
//
#ifndef _BRepAlgoAPI_BooleanOperation_OCWrappers_HeaderFile
#define _BRepAlgoAPI_BooleanOperation_OCWrappers_HeaderFile

// include native header
#include <BRepAlgoAPI_BooleanOperation.hxx>
#include "../Converter.h"

#include "../BRepBuilderAPI/BRepBuilderAPI_MakeShape.h"

#include "../TopoDS/TopoDS_Shape.h"
#include "../BOP/BOP_Operation.h"
#include "../TopTools/TopTools_DataMapOfShapeShape.h"
#include "../BRepBuilderAPI/BRepBuilderAPI_MakeShape.h"


namespace OCNaroWrappers
{

ref class OCBOP_HistoryCollector;
ref class OCTopoDS_Shape;
ref class OCBOPTools_DSFiller;
ref class OCTopTools_ListOfShape;


//! The abstract class BooleanOperation is the root <br>
//! class of Boolean Operations (see Overview). <br>
//! Boolean Operations algorithm is divided onto two parts. <br>
//! -      The first one is computing interference between arguments. <br>
//! -      The second one is building the result of operation. <br>
//! The BooleanOperation class provides execution of both parts <br>
//! of the Boolean Operations algorithm. The second part <br>
//! (building the result) depends on given type of the Boolean <br>
//! Operation (see Constructor). <br>
public ref class OCBRepAlgoAPI_BooleanOperation  : public OCBRepBuilderAPI_MakeShape {

protected:
  // dummy constructor;
  OCBRepAlgoAPI_BooleanOperation(OCDummy^) : OCBRepBuilderAPI_MakeShape((OCDummy^)nullptr) {};

public:

// constructor from native
OCBRepAlgoAPI_BooleanOperation(BRepAlgoAPI_BooleanOperation* nativeHandle);

// Methods PUBLIC

//! Prepares the operations for S1 and S2. <br>
OCBRepAlgoAPI_BooleanOperation(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCBOP_Operation anOperation);

//! Prepares the operations for S1 and S2. <br>
OCBRepAlgoAPI_BooleanOperation(OCNaroWrappers::OCTopoDS_Shape^ S1, OCNaroWrappers::OCTopoDS_Shape^ S2, OCNaroWrappers::OCBOPTools_DSFiller^ aDSF, OCBOP_Operation anOperation);

//!  Sets the type of Boolean operation to perform <br>
//!          It can be BOP_SECTION <br>
//!                    BOP_COMMON <br>
//!                    BOP_FUSE <br>
//!                    BOP_CUT <br>
//!                    BOP_CUT21 <br>
//! <br>
 /*instead*/  void SetOperation(OCBOP_Operation anOp) ;

//! Provides the algorithm of Boolean Operations <br>
//! -      Filling interference Data Structure (if it is necessary) <br>
//! -      Building the result of the operation. <br>
virtual /*instead*/  void Build() override;

//! Returns the first shape involved in this Boolean operation. <br>
 /*instead*/  OCTopoDS_Shape^ Shape1() ;

//! Returns the second shape involved in this Boolean operation. <br>
 /*instead*/  OCTopoDS_Shape^ Shape2() ;

//! Returns the type of Boolean Operation that has been performed. <br>
 /*instead*/  OCBOP_Operation Operation() ;

//! Returns the flag of edge refining <br>
 /*instead*/  System::Boolean FuseEdges() ;

//! Fuse C1 edges <br>
 /*instead*/  void RefineEdges() ;


 /*instead*/  System::Boolean BuilderCanWork() ;

//!  Returns the error status of operation. <br>
//! 0 - Ok <br>
//! 1 - The Object is created but Nothing is Done <br>
//! 2 - Null source shapes is not allowed <br>
//! 3 - Check types of the arguments <br>
//! 4 - Can not allocate memory for the DSFiller <br>
//! 5 - The Builder can not work with such types of arguments <br>
//! 6 - Unknown operation is not allowed <br>
//! 7 - Can not allocate memory for the Builder <br>
//!  > 100 - See the Builder's  ErrorStatus <br>
 /*instead*/  Standard_Integer ErrorStatus() ;

//! Returns the list  of shapes modified from the shape <S>. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ Modified(OCNaroWrappers::OCTopoDS_Shape^ aS) override;

//! Returns true if the shape S has been deleted. The <br>
//! result shape of the operation does not contain the shape S. <br>
virtual /*instead*/  System::Boolean IsDeleted(OCNaroWrappers::OCTopoDS_Shape^ aS) override;

//! Returns the list  of shapes modified from the shape <S>. <br>
//!         For use in BRepNaming. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ Modified2(OCNaroWrappers::OCTopoDS_Shape^ aS) ;

//! Returns the list  of shapes generated from the shape <S>. <br>
//!         For use in BRepNaming. <br>
virtual /*instead*/  OCTopTools_ListOfShape^ Generated(OCNaroWrappers::OCTopoDS_Shape^ S) override;

//! Returns true if there is at least one modified shape. <br>
//!         For use in BRepNaming. <br>
virtual /*instead*/  System::Boolean HasModified() ;

//! Returns true if there is at least one generated shape. <br>
//!         For use in BRepNaming. <br>
virtual /*instead*/  System::Boolean HasGenerated() ;

//! Returns true if there is at least one deleted shape. <br>
//!         For use in BRepNaming. <br>
virtual /*instead*/  System::Boolean HasDeleted() ;


 /*instead*/  void Destroy() ;

//! Returns a list of section edges. <br>
//! The edges represent the result of intersection between arguments of <br>
//! Boolean Operation. They are computed during operation execution. <br>
 /*instead*/  OCTopTools_ListOfShape^ SectionEdges() ;

~OCBRepAlgoAPI_BooleanOperation()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
