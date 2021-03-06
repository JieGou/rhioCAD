// File generated by CPPExt (CPP file)
//

#include "TopTrans_Array2OfOrientation.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTopTrans_Array2OfOrientation::OCTopTrans_Array2OfOrientation(TopTrans_Array2OfOrientation* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTopTrans_Array2OfOrientation::OCTopTrans_Array2OfOrientation(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TopTrans_Array2OfOrientation(R1, R2, C1, C2);
}

OCTopTrans_Array2OfOrientation::OCTopTrans_Array2OfOrientation(OCTopAbs_Orientation Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TopTrans_Array2OfOrientation((TopAbs_Orientation)Item, R1, R2, C1, C2);
}

 void OCTopTrans_Array2OfOrientation::Init(OCTopAbs_Orientation V)
{
  ((TopTrans_Array2OfOrientation*)nativeHandle)->Init((TopAbs_Orientation)V);
}

OCTopTrans_Array2OfOrientation^ OCTopTrans_Array2OfOrientation::Assign(OCNaroWrappers::OCTopTrans_Array2OfOrientation^ Other)
{
  TopTrans_Array2OfOrientation* tmp = new TopTrans_Array2OfOrientation(0, 0, 0, 0);
  *tmp = ((TopTrans_Array2OfOrientation*)nativeHandle)->Assign(*((TopTrans_Array2OfOrientation*)Other->Handle));
  return gcnew OCTopTrans_Array2OfOrientation(tmp);
}

 Standard_Integer OCTopTrans_Array2OfOrientation::ColLength()
{
  return ((TopTrans_Array2OfOrientation*)nativeHandle)->ColLength();
}

 Standard_Integer OCTopTrans_Array2OfOrientation::RowLength()
{
  return ((TopTrans_Array2OfOrientation*)nativeHandle)->RowLength();
}

 Standard_Integer OCTopTrans_Array2OfOrientation::LowerCol()
{
  return ((TopTrans_Array2OfOrientation*)nativeHandle)->LowerCol();
}

 Standard_Integer OCTopTrans_Array2OfOrientation::LowerRow()
{
  return ((TopTrans_Array2OfOrientation*)nativeHandle)->LowerRow();
}

 Standard_Integer OCTopTrans_Array2OfOrientation::UpperCol()
{
  return ((TopTrans_Array2OfOrientation*)nativeHandle)->UpperCol();
}

 Standard_Integer OCTopTrans_Array2OfOrientation::UpperRow()
{
  return ((TopTrans_Array2OfOrientation*)nativeHandle)->UpperRow();
}

 void OCTopTrans_Array2OfOrientation::SetValue(Standard_Integer Row, Standard_Integer Col, OCTopAbs_Orientation Value)
{
  ((TopTrans_Array2OfOrientation*)nativeHandle)->SetValue(Row, Col, (TopAbs_Orientation)Value);
}

 OCTopAbs_Orientation OCTopTrans_Array2OfOrientation::Value(Standard_Integer Row, Standard_Integer Col)
{
  return (OCTopAbs_Orientation)(((TopTrans_Array2OfOrientation*)nativeHandle)->Value(Row, Col));
}

 OCTopAbs_Orientation OCTopTrans_Array2OfOrientation::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  return (OCTopAbs_Orientation)(((TopTrans_Array2OfOrientation*)nativeHandle)->ChangeValue(Row, Col));
}


