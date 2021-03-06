// File generated by CPPExt (MPV)
//
#ifndef _IntAna_ListIteratorOfListOfCurve_OCWrappers_HeaderFile
#define _IntAna_ListIteratorOfListOfCurve_OCWrappers_HeaderFile

// include native header
#include <IntAna_ListIteratorOfListOfCurve.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCIntAna_ListOfCurve;
ref class OCIntAna_Curve;
ref class OCIntAna_ListNodeOfListOfCurve;



public ref class OCIntAna_ListIteratorOfListOfCurve  {

protected:
  IntAna_ListIteratorOfListOfCurve* nativeHandle;
  OCIntAna_ListIteratorOfListOfCurve(OCDummy^) {};

public:
  property IntAna_ListIteratorOfListOfCurve* Handle
  {
    IntAna_ListIteratorOfListOfCurve* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCIntAna_ListIteratorOfListOfCurve(IntAna_ListIteratorOfListOfCurve* nativeHandle);

// Methods PUBLIC


OCIntAna_ListIteratorOfListOfCurve();


OCIntAna_ListIteratorOfListOfCurve(OCNaroWrappers::OCIntAna_ListOfCurve^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCIntAna_ListOfCurve^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCIntAna_Curve^ Value() ;

~OCIntAna_ListIteratorOfListOfCurve()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
