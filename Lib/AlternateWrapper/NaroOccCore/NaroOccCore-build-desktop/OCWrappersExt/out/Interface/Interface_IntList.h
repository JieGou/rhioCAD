// File generated by CPPExt (MPV)
//
#ifndef _Interface_IntList_OCWrappers_HeaderFile
#define _Interface_IntList_OCWrappers_HeaderFile

// include native header
#include <Interface_IntList.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCTColStd_HArray1OfInteger;


//! This class detains the data which describe a Graph. A Graph <br>
//!           has two lists, one for shared refs, one for sharing refs <br>
//!           (the reverses). Each list comprises, for each Entity of the <br>
//!           Model of the Graph, a list of Entities (shared or sharing). <br>
//!           In fact, entities are identified by their numbers in the Model <br>
//!           or Graph : this gives better performances. <br>
//! <br>
//!           A simple way to implement this is to instantiate a HArray1 <br>
//!           with a HSequenceOfInteger : each Entity Number designates a <br>
//!           value, which is a Sequence (if it is null, it is considered as <br>
//!           empty : this is a little optimisation). <br>
//! <br>
//!           This class gives a more efficient way to implement this. <br>
//!           It has two lists (two arrays of integers), one to describe <br>
//!           list (empty, one value given immediately, or negated index in <br>
//!           the second list), one to store refs (pointed from the first <br>
//!           list). This is much more efficient than a list of sequences, <br>
//!           in terms of speed (especially for read) and of memory <br>
//! <br>
//!           An IntList can also be set to access data for a given entity <br>
//!           number, it then acts as a single sequence <br>
//! <br>
//!           Remark that if an IntList is created from another one, it can <br>
//!           be read, but if it is created without copying, it may not be <br>
//!           edited <br>
public ref class OCInterface_IntList  {

protected:
  Interface_IntList* nativeHandle;
  OCInterface_IntList(OCDummy^) {};

public:
  property Interface_IntList* Handle
  {
    Interface_IntList* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCInterface_IntList(Interface_IntList* nativeHandle);

// Methods PUBLIC

//!Creates empty IntList. <br>
OCInterface_IntList();

//! Creates an IntList for <nbe> entities <br>
OCInterface_IntList(Standard_Integer nbe);

//! Creates an IntList from another one. <br>
//!           if <copied> is True, copies data <br>
//!           else, data are not copied, only the header object is <br>
OCInterface_IntList(OCNaroWrappers::OCInterface_IntList^ other, System::Boolean copied);

//!Initialize IntList by number of entities. <br>
 /*instead*/  void Initialize(Standard_Integer nbe) ;

//! Returns internal values, used for copying <br>
 /*instead*/  void Internals(Standard_Integer& nbrefs, OCNaroWrappers::OCTColStd_HArray1OfInteger^ ents, OCNaroWrappers::OCTColStd_HArray1OfInteger^ refs) ;

//! Returns count of entities to be aknowledged <br>
 /*instead*/  Standard_Integer NbEntities() ;

//! Changes the count of entities (ignored if decreased) <br>
 /*instead*/  void SetNbEntities(Standard_Integer nbe) ;

//! Sets an entity number as current (for read and fill) <br>
 /*instead*/  void SetNumber(Standard_Integer number) ;

//! Returns the current entity number <br>
 /*instead*/  Standard_Integer Number() ;

//! Returns an IntList, identical to <me> but set to a specified <br>
//!           entity Number <br>
//!           By default, not copied (in order to be read) <br>
//!           Specified <copied> to produce another list and edit it <br>
 /*instead*/  OCInterface_IntList^ List(Standard_Integer number, System::Boolean copied) ;

//! Sets current entity list to be redefined or not <br>
//!           This is used in a Graph for redefinition list : it can be <br>
//!           disable (no redefinition, i.e. list is cleared), or enabled <br>
//!           (starts as empty). The original list has not to be "redefined" <br>
 /*instead*/  void SetRedefined(System::Boolean mode) ;

//! Makes a reservation for <count> references to be later <br>
//!           attached to the current entity. If required, it increases <br>
//!           the size of array used to store refs. Remark that if count is <br>
//!           less than two, it does nothing (because immediate storing) <br>
 /*instead*/  void Reservate(Standard_Integer count) ;

//! Adds a reference (as an integer value, an entity number) to <br>
//!           the current entity number. Zero is ignored <br>
 /*instead*/  void Add(Standard_Integer ref) ;

//! Returns the count of refs attached to current entity number <br>
 /*instead*/  Standard_Integer Length() ;

//! Returns True if the list for a number (default is taken as <br>
//!           current) is "redefined"  (usefull for empty list) <br>
 /*instead*/  System::Boolean IsRedefined(Standard_Integer num) ;

//! Returns a reference number in the list for current number, <br>
//!           according to its rank <br>
 /*instead*/  Standard_Integer Value(Standard_Integer num) ;

//! Removes an item in the list for current number, given its rank <br>
//!           Returns True if done, False else <br>
 /*instead*/  System::Boolean Remove(Standard_Integer num) ;

//! Clears all data, hence each entity number has an empty list <br>
 /*instead*/  void Clear() ;

//! Resizes lists to exact sizes. For list of refs, a positive <br>
//!           margin can be added. <br>
 /*instead*/  void AdjustSize(Standard_Integer margin) ;

~OCInterface_IntList()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif