// File generated by CPPExt (CPP file)
//

#include "TopLoc_Datum3D.h"
#include "../Converter.h"
#include "../gp/gp_Trsf.h"


using namespace OCNaroWrappers;

OCTopLoc_Datum3D::OCTopLoc_Datum3D(Handle(TopLoc_Datum3D)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_TopLoc_Datum3D(*nativeHandle);
}

OCTopLoc_Datum3D::OCTopLoc_Datum3D() : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopLoc_Datum3D(new TopLoc_Datum3D());
}

OCTopLoc_Datum3D::OCTopLoc_Datum3D(OCNaroWrappers::OCgp_Trsf^ T) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_TopLoc_Datum3D(new TopLoc_Datum3D(*((gp_Trsf*)T->Handle)));
}

OCgp_Trsf^ OCTopLoc_Datum3D::Transformation()
{
  gp_Trsf* tmp = new gp_Trsf();
  *tmp = (*((Handle_TopLoc_Datum3D*)nativeHandle))->Transformation();
  return gcnew OCgp_Trsf(tmp);
}

 void OCTopLoc_Datum3D::ShallowDump(Standard_OStream& S)
{
  (*((Handle_TopLoc_Datum3D*)nativeHandle))->ShallowDump(S);
}

