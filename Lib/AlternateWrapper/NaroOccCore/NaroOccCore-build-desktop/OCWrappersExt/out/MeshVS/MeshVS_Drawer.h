// File generated by CPPExt (Transient)
//
#ifndef _MeshVS_Drawer_OCWrappers_HeaderFile
#define _MeshVS_Drawer_OCWrappers_HeaderFile

// include the wrapped class
#include <MeshVS_Drawer.hxx>
#include "../Converter.h"

#include "../MMgt/MMgt_TShared.h"

#include "../TColStd/TColStd_DataMapOfIntegerInteger.h"
#include "MeshVS_DataMapOfIntegerBoolean.h"
#include "../TColStd/TColStd_DataMapOfIntegerReal.h"
#include "MeshVS_DataMapOfIntegerColor.h"
#include "MeshVS_DataMapOfIntegerMaterial.h"
#include "MeshVS_DataMapOfIntegerAsciiString.h"


namespace OCNaroWrappers
{

ref class OCQuantity_Color;
ref class OCGraphic3d_MaterialAspect;
ref class OCTCollection_AsciiString;


//! This class provided the common interface to share between classes <br>
//!  big set of constants affecting to object appearance. By default, this class <br>
//! can store integers, doubles, OCC colors, OCC materials. Each of OCC enum members <br>
//! can be stored as integers. <br>
public ref class OCMeshVS_Drawer : OCMMgt_TShared {

protected:
  // dummy constructor;
  OCMeshVS_Drawer(OCDummy^) : OCMMgt_TShared((OCDummy^)nullptr) {};

public:

// constructor from native
OCMeshVS_Drawer(Handle(MeshVS_Drawer)* nativeHandle);

// Methods PUBLIC

//! This method copies other drawer contents to this. <br>
virtual /*instead*/  void Assign(OCNaroWrappers::OCMeshVS_Drawer^ aDrawer) ;


 /*instead*/  void SetInteger(Standard_Integer Key, Standard_Integer Value) ;


 /*instead*/  void SetDouble(Standard_Integer Key, Standard_Real Value) ;


 /*instead*/  void SetBoolean(Standard_Integer Key, System::Boolean Value) ;


 /*instead*/  void SetColor(Standard_Integer Key, OCNaroWrappers::OCQuantity_Color^ Value) ;


 /*instead*/  void SetMaterial(Standard_Integer Key, OCNaroWrappers::OCGraphic3d_MaterialAspect^ Value) ;


 /*instead*/  void SetAsciiString(Standard_Integer Key, OCNaroWrappers::OCTCollection_AsciiString^ Value) ;


 /*instead*/  System::Boolean GetInteger(Standard_Integer Key, Standard_Integer& Value) ;


 /*instead*/  System::Boolean GetDouble(Standard_Integer Key, Standard_Real& Value) ;


 /*instead*/  System::Boolean GetBoolean(Standard_Integer Key, System::Boolean& Value) ;


 /*instead*/  System::Boolean GetColor(Standard_Integer Key, OCNaroWrappers::OCQuantity_Color^ Value) ;


 /*instead*/  System::Boolean GetMaterial(Standard_Integer Key, OCNaroWrappers::OCGraphic3d_MaterialAspect^ Value) ;


 /*instead*/  System::Boolean GetAsciiString(Standard_Integer Key, OCNaroWrappers::OCTCollection_AsciiString^ Value) ;


 /*instead*/  System::Boolean RemoveInteger(Standard_Integer Key) ;


 /*instead*/  System::Boolean RemoveDouble(Standard_Integer Key) ;


 /*instead*/  System::Boolean RemoveBoolean(Standard_Integer Key) ;


 /*instead*/  System::Boolean RemoveColor(Standard_Integer Key) ;


 /*instead*/  System::Boolean RemoveMaterial(Standard_Integer Key) ;


 /*instead*/  System::Boolean RemoveAsciiString(Standard_Integer Key) ;

~OCMeshVS_Drawer()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
