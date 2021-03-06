// File generated by CPPExt (MPV)
//
#ifndef _BRepOffset_ListIteratorOfListOfInterval_OCWrappers_HeaderFile
#define _BRepOffset_ListIteratorOfListOfInterval_OCWrappers_HeaderFile

// include native header
#include <BRepOffset_ListIteratorOfListOfInterval.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCBRepOffset_ListOfInterval;
ref class OCBRepOffset_Interval;
ref class OCBRepOffset_ListNodeOfListOfInterval;



public ref class OCBRepOffset_ListIteratorOfListOfInterval  {

protected:
  BRepOffset_ListIteratorOfListOfInterval* nativeHandle;
  OCBRepOffset_ListIteratorOfListOfInterval(OCDummy^) {};

public:
  property BRepOffset_ListIteratorOfListOfInterval* Handle
  {
    BRepOffset_ListIteratorOfListOfInterval* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCBRepOffset_ListIteratorOfListOfInterval(BRepOffset_ListIteratorOfListOfInterval* nativeHandle);

// Methods PUBLIC


OCBRepOffset_ListIteratorOfListOfInterval();


OCBRepOffset_ListIteratorOfListOfInterval(OCNaroWrappers::OCBRepOffset_ListOfInterval^ L);


 /*instead*/  void Initialize(OCNaroWrappers::OCBRepOffset_ListOfInterval^ L) ;


 /*instead*/  System::Boolean More() ;


 /*instead*/  void Next() ;


 /*instead*/  OCBRepOffset_Interval^ Value() ;

~OCBRepOffset_ListIteratorOfListOfInterval()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
