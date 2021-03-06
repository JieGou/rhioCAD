// File generated by CPPExt (CPP file)
//

#include "Prs3d_ArrowAspect.h"
#include "../Converter.h"
#include "../Graphic3d/Graphic3d_AspectLine3d.h"
#include "../Quantity/Quantity_Color.h"


using namespace OCNaroWrappers;

OCPrs3d_ArrowAspect::OCPrs3d_ArrowAspect(Handle(Prs3d_ArrowAspect)* nativeHandle) : OCPrs3d_CompositeAspect((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs3d_ArrowAspect(*nativeHandle);
}

OCPrs3d_ArrowAspect::OCPrs3d_ArrowAspect() : OCPrs3d_CompositeAspect((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs3d_ArrowAspect(new Prs3d_ArrowAspect());
}

OCPrs3d_ArrowAspect::OCPrs3d_ArrowAspect(Quantity_PlaneAngle anAngle, Quantity_Length aLength) : OCPrs3d_CompositeAspect((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs3d_ArrowAspect(new Prs3d_ArrowAspect(anAngle, aLength));
}

 void OCPrs3d_ArrowAspect::SetAngle(Quantity_PlaneAngle anAngle)
{
  (*((Handle_Prs3d_ArrowAspect*)nativeHandle))->SetAngle(anAngle);
}

 Quantity_PlaneAngle OCPrs3d_ArrowAspect::Angle()
{
  return (*((Handle_Prs3d_ArrowAspect*)nativeHandle))->Angle();
}

 void OCPrs3d_ArrowAspect::SetLength(Quantity_Length aLength)
{
  (*((Handle_Prs3d_ArrowAspect*)nativeHandle))->SetLength(aLength);
}

 Quantity_Length OCPrs3d_ArrowAspect::Length()
{
  return (*((Handle_Prs3d_ArrowAspect*)nativeHandle))->Length();
}

 void OCPrs3d_ArrowAspect::SetColor(OCNaroWrappers::OCQuantity_Color^ aColor)
{
  (*((Handle_Prs3d_ArrowAspect*)nativeHandle))->SetColor(*((Quantity_Color*)aColor->Handle));
}

 void OCPrs3d_ArrowAspect::SetColor(OCQuantity_NameOfColor aColor)
{
  (*((Handle_Prs3d_ArrowAspect*)nativeHandle))->SetColor((Quantity_NameOfColor)aColor);
}

OCGraphic3d_AspectLine3d^ OCPrs3d_ArrowAspect::Aspect()
{
  Handle(Graphic3d_AspectLine3d) tmp = (*((Handle_Prs3d_ArrowAspect*)nativeHandle))->Aspect();
  return gcnew OCGraphic3d_AspectLine3d(&tmp);
}


