// File generated by CPPExt (CPP file)
//

#include "Image_IndexPixelMapHasher.h"
#include "../Converter.h"
#include "../Aspect/Aspect_IndexPixel.h"


using namespace OCNaroWrappers;

OCImage_IndexPixelMapHasher::OCImage_IndexPixelMapHasher(Image_IndexPixelMapHasher* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

 Standard_Integer OCImage_IndexPixelMapHasher::HashCode(OCNaroWrappers::OCAspect_IndexPixel^ K, Standard_Integer Upper)
{
  return Image_IndexPixelMapHasher::HashCode(*((Aspect_IndexPixel*)K->Handle), Upper);
}

 System::Boolean OCImage_IndexPixelMapHasher::IsEqual(OCNaroWrappers::OCAspect_IndexPixel^ K1, OCNaroWrappers::OCAspect_IndexPixel^ K2)
{
  return OCConverter::StandardBooleanToBoolean(Image_IndexPixelMapHasher::IsEqual(*((Aspect_IndexPixel*)K1->Handle), *((Aspect_IndexPixel*)K2->Handle)));
}


