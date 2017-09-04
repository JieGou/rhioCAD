// File generated by CPPExt (CPP file)
//

#include "Aspect_Background.h"
#include "../Converter.h"
#include "../Quantity/Quantity_Color.h"


using namespace OCNaroWrappers;

OCAspect_Background::OCAspect_Background(Aspect_Background* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCAspect_Background::OCAspect_Background() 
{
  nativeHandle = new Aspect_Background();
}

OCAspect_Background::OCAspect_Background(OCNaroWrappers::OCQuantity_Color^ AColor) 
{
  nativeHandle = new Aspect_Background(*((Quantity_Color*)AColor->Handle));
}

 void OCAspect_Background::SetColor(OCNaroWrappers::OCQuantity_Color^ AColor)
{
  ((Aspect_Background*)nativeHandle)->SetColor(*((Quantity_Color*)AColor->Handle));
}

OCQuantity_Color^ OCAspect_Background::Color()
{
  Quantity_Color* tmp = new Quantity_Color();
  *tmp = ((Aspect_Background*)nativeHandle)->Color();
  return gcnew OCQuantity_Color(tmp);
}

