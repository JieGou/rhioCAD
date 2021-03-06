// File generated by CPPExt (MPV)
//
#ifndef _ShapeExtend_DataMapOfShapeListOfMsg_OCWrappers_HeaderFile
#define _ShapeExtend_DataMapOfShapeListOfMsg_OCWrappers_HeaderFile

// include native header
#include <ShapeExtend_DataMapOfShapeListOfMsg.hxx>
#include "../Converter.h"

#include "../TCollection/TCollection_BasicMap.h"

#include "../TCollection/TCollection_BasicMap.h"


namespace OCNaroWrappers
{

ref class OCTopoDS_Shape;
ref class OCMessage_ListOfMsg;
ref class OCTopTools_ShapeMapHasher;
ref class OCShapeExtend_DataMapNodeOfDataMapOfShapeListOfMsg;
ref class OCShapeExtend_DataMapIteratorOfDataMapOfShapeListOfMsg;



public ref class OCShapeExtend_DataMapOfShapeListOfMsg  : public OCTCollection_BasicMap {

protected:
  // dummy constructor;
  OCShapeExtend_DataMapOfShapeListOfMsg(OCDummy^) : OCTCollection_BasicMap((OCDummy^)nullptr) {};

public:

// constructor from native
OCShapeExtend_DataMapOfShapeListOfMsg(ShapeExtend_DataMapOfShapeListOfMsg* nativeHandle);

// Methods PUBLIC


OCShapeExtend_DataMapOfShapeListOfMsg(Standard_Integer NbBuckets);


 /*instead*/  OCShapeExtend_DataMapOfShapeListOfMsg^ Assign(OCNaroWrappers::OCShapeExtend_DataMapOfShapeListOfMsg^ Other) ;


 /*instead*/  void ReSize(Standard_Integer NbBuckets) ;


 /*instead*/  System::Boolean Bind(OCNaroWrappers::OCTopoDS_Shape^ K, OCNaroWrappers::OCMessage_ListOfMsg^ I) ;


 /*instead*/  System::Boolean IsBound(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  System::Boolean UnBind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCMessage_ListOfMsg^ Find(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  OCMessage_ListOfMsg^ ChangeFind(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address Find1(OCNaroWrappers::OCTopoDS_Shape^ K) ;


 /*instead*/  Standard_Address ChangeFind1(OCNaroWrappers::OCTopoDS_Shape^ K) ;

~OCShapeExtend_DataMapOfShapeListOfMsg()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
