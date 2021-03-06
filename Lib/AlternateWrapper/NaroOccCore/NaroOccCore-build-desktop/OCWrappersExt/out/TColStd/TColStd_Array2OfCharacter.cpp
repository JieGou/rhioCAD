// File generated by CPPExt (CPP file)
//

#include "TColStd_Array2OfCharacter.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCTColStd_Array2OfCharacter::OCTColStd_Array2OfCharacter(TColStd_Array2OfCharacter* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCTColStd_Array2OfCharacter::OCTColStd_Array2OfCharacter(Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColStd_Array2OfCharacter(R1, R2, C1, C2);
}

OCTColStd_Array2OfCharacter::OCTColStd_Array2OfCharacter(Standard_Character Item, Standard_Integer R1, Standard_Integer R2, Standard_Integer C1, Standard_Integer C2) 
{
  nativeHandle = new TColStd_Array2OfCharacter(Item, R1, R2, C1, C2);
}

 void OCTColStd_Array2OfCharacter::Init(Standard_Character V)
{
  ((TColStd_Array2OfCharacter*)nativeHandle)->Init(V);
}

OCTColStd_Array2OfCharacter^ OCTColStd_Array2OfCharacter::Assign(OCNaroWrappers::OCTColStd_Array2OfCharacter^ Other)
{
  TColStd_Array2OfCharacter* tmp = new TColStd_Array2OfCharacter(0, 0, 0, 0);
  *tmp = ((TColStd_Array2OfCharacter*)nativeHandle)->Assign(*((TColStd_Array2OfCharacter*)Other->Handle));
  return gcnew OCTColStd_Array2OfCharacter(tmp);
}

 Standard_Integer OCTColStd_Array2OfCharacter::ColLength()
{
  return ((TColStd_Array2OfCharacter*)nativeHandle)->ColLength();
}

 Standard_Integer OCTColStd_Array2OfCharacter::RowLength()
{
  return ((TColStd_Array2OfCharacter*)nativeHandle)->RowLength();
}

 Standard_Integer OCTColStd_Array2OfCharacter::LowerCol()
{
  return ((TColStd_Array2OfCharacter*)nativeHandle)->LowerCol();
}

 Standard_Integer OCTColStd_Array2OfCharacter::LowerRow()
{
  return ((TColStd_Array2OfCharacter*)nativeHandle)->LowerRow();
}

 Standard_Integer OCTColStd_Array2OfCharacter::UpperCol()
{
  return ((TColStd_Array2OfCharacter*)nativeHandle)->UpperCol();
}

 Standard_Integer OCTColStd_Array2OfCharacter::UpperRow()
{
  return ((TColStd_Array2OfCharacter*)nativeHandle)->UpperRow();
}

 void OCTColStd_Array2OfCharacter::SetValue(Standard_Integer Row, Standard_Integer Col, Standard_Character Value)
{
  ((TColStd_Array2OfCharacter*)nativeHandle)->SetValue(Row, Col, Value);
}

 Standard_Character OCTColStd_Array2OfCharacter::Value(Standard_Integer Row, Standard_Integer Col)
{
  return ((TColStd_Array2OfCharacter*)nativeHandle)->Value(Row, Col);
}

 Standard_Character OCTColStd_Array2OfCharacter::ChangeValue(Standard_Integer Row, Standard_Integer Col)
{
  return ((TColStd_Array2OfCharacter*)nativeHandle)->ChangeValue(Row, Col);
}


