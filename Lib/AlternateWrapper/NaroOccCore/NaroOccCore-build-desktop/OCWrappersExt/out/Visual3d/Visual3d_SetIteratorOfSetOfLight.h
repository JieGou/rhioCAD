// File generated by CPPExt (MPV)
//
#ifndef _Visual3d_SetIteratorOfSetOfLight_OCWrappers_HeaderFile
#define _Visual3d_SetIteratorOfSetOfLight_OCWrappers_HeaderFile

// include native header
#include <Visual3d_SetIteratorOfSetOfLight.hxx>
#include "../Converter.h"


#include "Visual3d_ListIteratorOfSetListOfSetOfLight.h"


namespace OCNaroWrappers
{

ref class OCVisual3d_Light;
ref class OCVisual3d_SetOfLight;
ref class OCVisual3d_SetListOfSetOfLight;
ref class OCVisual3d_ListNodeOfSetListOfSetOfLight;
ref class OCVisual3d_ListIteratorOfSetListOfSetOfLight;



public ref class OCVisual3d_SetIteratorOfSetOfLight  {

protected:
  Visual3d_SetIteratorOfSetOfLight* nativeHandle;
  OCVisual3d_SetIteratorOfSetOfLight(OCDummy^) {};

public:
  property Visual3d_SetIteratorOfSetOfLight* Handle
  {
    Visual3d_SetIteratorOfSetOfLight* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCVisual3d_SetIteratorOfSetOfLight(Visual3d_SetIteratorOfSetOfLight* nativeHandle);

// Methods PUBLIC


OCVisual3d_SetIteratorOfSetOfLight();


OCVisual3d_SetIteratorOfSetOfLight(OCNaroWrappers::OCVisual3d_SetOfLight^ S);


 /*instead*/  void Initialize(OCNaroWrappers::OCVisual3d_SetOfLight^ S) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCVisual3d_Light^ Value() ;

~OCVisual3d_SetIteratorOfSetOfLight()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif