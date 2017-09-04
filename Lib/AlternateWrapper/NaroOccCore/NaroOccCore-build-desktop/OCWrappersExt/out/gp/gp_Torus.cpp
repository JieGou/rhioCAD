// File generated by CPPExt (CPP file)
//

#include "gp_Torus.h"
#include "../Converter.h"
#include "gp_Ax3.h"
#include "gp_Ax1.h"
#include "gp_Pnt.h"
#include "../TColStd/TColStd_Array1OfReal.h"
#include "gp_Ax2.h"
#include "gp_Trsf.h"
#include "gp_Vec.h"


using namespace OCNaroWrappers;

OCgp_Torus::OCgp_Torus(gp_Torus* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCgp_Torus::OCgp_Torus() 
{
  nativeHandle = new gp_Torus();
}

OCgp_Torus::OCgp_Torus(OCNaroWrappers::OCgp_Ax3^ A3, Standard_Real MajorRadius, Standard_Real MinorRadius) 
{
  nativeHandle = new gp_Torus(*((gp_Ax3*)A3->Handle), MajorRadius, MinorRadius);
}

 void OCgp_Torus::SetAxis(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Torus*)nativeHandle)->SetAxis(*((gp_Ax1*)A1->Handle));
}

 void OCgp_Torus::SetLocation(OCNaroWrappers::OCgp_Pnt^ Loc)
{
  ((gp_Torus*)nativeHandle)->SetLocation(*((gp_Pnt*)Loc->Handle));
}

 void OCgp_Torus::SetMajorRadius(Standard_Real MajorRadius)
{
  ((gp_Torus*)nativeHandle)->SetMajorRadius(MajorRadius);
}

 void OCgp_Torus::SetMinorRadius(Standard_Real MinorRadius)
{
  ((gp_Torus*)nativeHandle)->SetMinorRadius(MinorRadius);
}

 void OCgp_Torus::SetPosition(OCNaroWrappers::OCgp_Ax3^ A3)
{
  ((gp_Torus*)nativeHandle)->SetPosition(*((gp_Ax3*)A3->Handle));
}

 Standard_Real OCgp_Torus::Area()
{
  return ((gp_Torus*)nativeHandle)->Area();
}

 void OCgp_Torus::UReverse()
{
  ((gp_Torus*)nativeHandle)->UReverse();
}

 void OCgp_Torus::VReverse()
{
  ((gp_Torus*)nativeHandle)->VReverse();
}

 System::Boolean OCgp_Torus::Direct()
{
  return OCConverter::StandardBooleanToBoolean(((gp_Torus*)nativeHandle)->Direct());
}

OCgp_Ax1^ OCgp_Torus::Axis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Torus*)nativeHandle)->Axis();
  return gcnew OCgp_Ax1(tmp);
}

 void OCgp_Torus::Coefficients(OCNaroWrappers::OCTColStd_Array1OfReal^ Coef)
{
  ((gp_Torus*)nativeHandle)->Coefficients(*((TColStd_Array1OfReal*)Coef->Handle));
}

OCgp_Pnt^ OCgp_Torus::Location()
{
  gp_Pnt* tmp = new gp_Pnt();
  *tmp = ((gp_Torus*)nativeHandle)->Location();
  return gcnew OCgp_Pnt(tmp);
}

OCgp_Ax3^ OCgp_Torus::Position()
{
  gp_Ax3* tmp = new gp_Ax3();
  *tmp = ((gp_Torus*)nativeHandle)->Position();
  return gcnew OCgp_Ax3(tmp);
}

 Standard_Real OCgp_Torus::MajorRadius()
{
  return ((gp_Torus*)nativeHandle)->MajorRadius();
}

 Standard_Real OCgp_Torus::MinorRadius()
{
  return ((gp_Torus*)nativeHandle)->MinorRadius();
}

 Standard_Real OCgp_Torus::Volume()
{
  return ((gp_Torus*)nativeHandle)->Volume();
}

OCgp_Ax1^ OCgp_Torus::XAxis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Torus*)nativeHandle)->XAxis();
  return gcnew OCgp_Ax1(tmp);
}

OCgp_Ax1^ OCgp_Torus::YAxis()
{
  gp_Ax1* tmp = new gp_Ax1();
  *tmp = ((gp_Torus*)nativeHandle)->YAxis();
  return gcnew OCgp_Ax1(tmp);
}

 void OCgp_Torus::Mirror(OCNaroWrappers::OCgp_Pnt^ P)
{
  ((gp_Torus*)nativeHandle)->Mirror(*((gp_Pnt*)P->Handle));
}

OCgp_Torus^ OCgp_Torus::Mirrored(OCNaroWrappers::OCgp_Pnt^ P)
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((gp_Torus*)nativeHandle)->Mirrored(*((gp_Pnt*)P->Handle));
  return gcnew OCgp_Torus(tmp);
}

 void OCgp_Torus::Mirror(OCNaroWrappers::OCgp_Ax1^ A1)
{
  ((gp_Torus*)nativeHandle)->Mirror(*((gp_Ax1*)A1->Handle));
}

OCgp_Torus^ OCgp_Torus::Mirrored(OCNaroWrappers::OCgp_Ax1^ A1)
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((gp_Torus*)nativeHandle)->Mirrored(*((gp_Ax1*)A1->Handle));
  return gcnew OCgp_Torus(tmp);
}

 void OCgp_Torus::Mirror(OCNaroWrappers::OCgp_Ax2^ A2)
{
  ((gp_Torus*)nativeHandle)->Mirror(*((gp_Ax2*)A2->Handle));
}

OCgp_Torus^ OCgp_Torus::Mirrored(OCNaroWrappers::OCgp_Ax2^ A2)
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((gp_Torus*)nativeHandle)->Mirrored(*((gp_Ax2*)A2->Handle));
  return gcnew OCgp_Torus(tmp);
}

 void OCgp_Torus::Rotate(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  ((gp_Torus*)nativeHandle)->Rotate(*((gp_Ax1*)A1->Handle), Ang);
}

OCgp_Torus^ OCgp_Torus::Rotated(OCNaroWrappers::OCgp_Ax1^ A1, Standard_Real Ang)
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((gp_Torus*)nativeHandle)->Rotated(*((gp_Ax1*)A1->Handle), Ang);
  return gcnew OCgp_Torus(tmp);
}

 void OCgp_Torus::Scale(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  ((gp_Torus*)nativeHandle)->Scale(*((gp_Pnt*)P->Handle), S);
}

OCgp_Torus^ OCgp_Torus::Scaled(OCNaroWrappers::OCgp_Pnt^ P, Standard_Real S)
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((gp_Torus*)nativeHandle)->Scaled(*((gp_Pnt*)P->Handle), S);
  return gcnew OCgp_Torus(tmp);
}

 void OCgp_Torus::Transform(OCNaroWrappers::OCgp_Trsf^ T)
{
  ((gp_Torus*)nativeHandle)->Transform(*((gp_Trsf*)T->Handle));
}

OCgp_Torus^ OCgp_Torus::Transformed(OCNaroWrappers::OCgp_Trsf^ T)
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((gp_Torus*)nativeHandle)->Transformed(*((gp_Trsf*)T->Handle));
  return gcnew OCgp_Torus(tmp);
}

 void OCgp_Torus::Translate(OCNaroWrappers::OCgp_Vec^ V)
{
  ((gp_Torus*)nativeHandle)->Translate(*((gp_Vec*)V->Handle));
}

OCgp_Torus^ OCgp_Torus::Translated(OCNaroWrappers::OCgp_Vec^ V)
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((gp_Torus*)nativeHandle)->Translated(*((gp_Vec*)V->Handle));
  return gcnew OCgp_Torus(tmp);
}

 void OCgp_Torus::Translate(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  ((gp_Torus*)nativeHandle)->Translate(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
}

OCgp_Torus^ OCgp_Torus::Translated(OCNaroWrappers::OCgp_Pnt^ P1, OCNaroWrappers::OCgp_Pnt^ P2)
{
  gp_Torus* tmp = new gp_Torus();
  *tmp = ((gp_Torus*)nativeHandle)->Translated(*((gp_Pnt*)P1->Handle), *((gp_Pnt*)P2->Handle));
  return gcnew OCgp_Torus(tmp);
}

