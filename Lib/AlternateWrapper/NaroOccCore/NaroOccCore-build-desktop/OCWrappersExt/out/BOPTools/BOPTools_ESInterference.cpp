// File generated by CPPExt (CPP file)
//

#include "BOPTools_ESInterference.h"
#include "../Converter.h"
#include "../IntTools/IntTools_CommonPrt.h"


using namespace OCNaroWrappers;

OCBOPTools_ESInterference::OCBOPTools_ESInterference(BOPTools_ESInterference* nativeHandle) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCBOPTools_ESInterference::OCBOPTools_ESInterference() : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_ESInterference();
}

OCBOPTools_ESInterference::OCBOPTools_ESInterference(Standard_Integer anIndex1, Standard_Integer anIndex2, OCNaroWrappers::OCIntTools_CommonPrt^ aCPart) : OCBOPTools_ShapeShapeInterference((OCDummy^)nullptr)

{
  nativeHandle = new BOPTools_ESInterference(anIndex1, anIndex2, *((IntTools_CommonPrt*)aCPart->Handle));
}

OCIntTools_CommonPrt^ OCBOPTools_ESInterference::CommonPrt()
{
  IntTools_CommonPrt* tmp = new IntTools_CommonPrt();
  *tmp = ((BOPTools_ESInterference*)nativeHandle)->CommonPrt();
  return gcnew OCIntTools_CommonPrt(tmp);
}


