// File generated by CPPExt (Transient)
//
#ifndef _AlienImage_AlienImage_OCWrappers_HeaderFile
#define _AlienImage_AlienImage_OCWrappers_HeaderFile

// include the wrapped class
#include <AlienImage_AlienImage.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"



namespace OCNaroWrappers
{

ref class OCOSD_File;
ref class OCImage_Image;


//! This class defines an Alien image. <br>
//! Alien Image is X11 .xwd image or SGI .rgb image for example <br>
public ref class OCAlienImage_AlienImage : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCAlienImage_AlienImage(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCAlienImage_AlienImage(Handle(AlienImage_AlienImage)* nativeHandle);

// Methods PUBLIC


OCAlienImage_AlienImage();

~OCAlienImage_AlienImage()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
