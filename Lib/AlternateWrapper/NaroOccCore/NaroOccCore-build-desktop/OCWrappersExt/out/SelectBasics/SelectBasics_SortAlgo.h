// File generated by CPPExt (MPV)
//
#ifndef _SelectBasics_SortAlgo_OCWrappers_HeaderFile
#define _SelectBasics_SortAlgo_OCWrappers_HeaderFile

// include native header
#include <SelectBasics_SortAlgo.hxx>
#include "../Converter.h"


#include "../Bnd/Bnd_Box2d.h"
#include "../Bnd/Bnd_BoundSortBox2d.h"
#include "../TColStd/TColStd_MapOfInteger.h"
#include "../TColStd/TColStd_MapIteratorOfMapOfInteger.h"


namespace OCNaroWrappers
{

ref class OCBnd_Box2d;
ref class OCBnd_HArray1OfBox2d;


//! Quickly selection of a rectangle in a set of rectangles <br>
public ref class OCSelectBasics_SortAlgo  {

protected:
  SelectBasics_SortAlgo* nativeHandle;
  OCSelectBasics_SortAlgo(OCDummy^) {};

public:
  property SelectBasics_SortAlgo* Handle
  {
    SelectBasics_SortAlgo* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCSelectBasics_SortAlgo(SelectBasics_SortAlgo* nativeHandle);

// Methods PUBLIC

//! Empty rectangle selector. <br>
OCSelectBasics_SortAlgo();

//! Creates a initialized selector. <br>
OCSelectBasics_SortAlgo(OCNaroWrappers::OCBnd_Box2d^ ClippingRectangle, Standard_Real sizeOfSensitiveArea, OCNaroWrappers::OCBnd_HArray1OfBox2d^ theRectangles);

//! Clears and initializes the selector. <br>
 /*instead*/  void Initialize(OCNaroWrappers::OCBnd_Box2d^ ClippingRectangle, Standard_Real sizeOfSensitiveArea, OCNaroWrappers::OCBnd_HArray1OfBox2d^ theRectangles) ;

//! Searchs the items on this position. <br>
 /*instead*/  void InitSelect(Standard_Real x, Standard_Real y) ;

//! Searchs the items in this rectangle. <br>
 /*instead*/  void InitSelect(OCNaroWrappers::OCBnd_Box2d^ rect) ;

//! Returns true if there is something selected. <br>
 /*instead*/  System::Boolean More() ;

//! Sets value on the next selected item. <br>
 /*instead*/  void Next() ;

//! Returns the index of the selected rectangle. <br>
 /*instead*/  Standard_Integer Value() ;

~OCSelectBasics_SortAlgo()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif