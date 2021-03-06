// File generated by CPPExt (Transient)
//
#ifndef _FEmTool_HAssemblyTable_OCWrappers_HeaderFile
#define _FEmTool_HAssemblyTable_OCWrappers_HeaderFile

// include the wrapped class
#include <FEmTool_HAssemblyTable.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "FEmTool_AssemblyTable.h"


namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;
ref class OCFEmTool_AssemblyTable;



public ref class OCFEmTool_HAssemblyTable : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCFEmTool_HAssemblyTable(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCFEmTool_HAssemblyTable(Handle(FEmTool_HAssemblyTable)* nativeHandle);

// Methods PUBLIC


OCFEmTool_HAssemblyTable(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2);


OCFEmTool_HAssemblyTable(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2, OCNaroWrappers::OCTColStd_HArray1OfInteger^ V);


 /*instead*/  void Init(OCNaroWrappers::OCTColStd_HArray1OfInteger^ V) ;


 /*instead*/  Standard_Integer ColLength() ;


 /*instead*/  Standard_Integer RowLength() ;


 /*instead*/  Standard_Integer LowerCol() ;


 /*instead*/  Standard_Integer LowerRow() ;


 /*instead*/  Standard_Integer UpperCol() ;


 /*instead*/  Standard_Integer UpperRow() ;


 /*instead*/  void SetValue(Standard_Integer Row, Standard_Integer Col, OCNaroWrappers::OCTColStd_HArray1OfInteger^ Value) ;


 /*instead*/  OCTColStd_HArray1OfInteger^ Value(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCTColStd_HArray1OfInteger^ ChangeValue(Standard_Integer Row, Standard_Integer Col) ;


 /*instead*/  OCFEmTool_AssemblyTable^ Array2() ;


 /*instead*/  OCFEmTool_AssemblyTable^ ChangeArray2() ;

~OCFEmTool_HAssemblyTable()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
