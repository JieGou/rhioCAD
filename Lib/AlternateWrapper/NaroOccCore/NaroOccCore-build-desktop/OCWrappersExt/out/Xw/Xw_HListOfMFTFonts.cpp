// File generated by CPPExt (CPP file)
//

#include "Xw_HListOfMFTFonts.h"
#include "../Converter.h"
#include "../MFT/MFT_FontManager.h"
#include "Xw_ListOfMFTFonts.h"


using namespace OCNaroWrappers;

OCXw_HListOfMFTFonts::OCXw_HListOfMFTFonts(Handle(Xw_HListOfMFTFonts)* nativeHandle) : OCMMgt_TShared((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Xw_HListOfMFTFonts(*nativeHandle);
}

OCXw_HListOfMFTFonts::OCXw_HListOfMFTFonts(Standard_Integer Low, Standard_Integer Up) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Xw_HListOfMFTFonts(new Xw_HListOfMFTFonts(Low, Up));
}

OCXw_HListOfMFTFonts::OCXw_HListOfMFTFonts(Standard_Integer Low, Standard_Integer Up, OCNaroWrappers::OCMFT_FontManager^ V) : OCMMgt_TShared((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Xw_HListOfMFTFonts(new Xw_HListOfMFTFonts(Low, Up, *((Handle_MFT_FontManager*)V->Handle)));
}

 void OCXw_HListOfMFTFonts::Init(OCNaroWrappers::OCMFT_FontManager^ V)
{
  (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->Init(*((Handle_MFT_FontManager*)V->Handle));
}

 Standard_Integer OCXw_HListOfMFTFonts::Length()
{
  return (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->Length();
}

 Standard_Integer OCXw_HListOfMFTFonts::Lower()
{
  return (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->Lower();
}

 Standard_Integer OCXw_HListOfMFTFonts::Upper()
{
  return (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->Upper();
}

 void OCXw_HListOfMFTFonts::SetValue(Standard_Integer Index, OCNaroWrappers::OCMFT_FontManager^ Value)
{
  (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->SetValue(Index, *((Handle_MFT_FontManager*)Value->Handle));
}

OCMFT_FontManager^ OCXw_HListOfMFTFonts::Value(Standard_Integer Index)
{
  Handle(MFT_FontManager) tmp = (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->Value(Index);
  return gcnew OCMFT_FontManager(&tmp);
}

OCMFT_FontManager^ OCXw_HListOfMFTFonts::ChangeValue(Standard_Integer Index)
{
  Handle(MFT_FontManager) tmp = (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->ChangeValue(Index);
  return gcnew OCMFT_FontManager(&tmp);
}

OCXw_ListOfMFTFonts^ OCXw_HListOfMFTFonts::Array1()
{
  Xw_ListOfMFTFonts* tmp = new Xw_ListOfMFTFonts(0, 0);
  *tmp = (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->Array1();
  return gcnew OCXw_ListOfMFTFonts(tmp);
}

OCXw_ListOfMFTFonts^ OCXw_HListOfMFTFonts::ChangeArray1()
{
  Xw_ListOfMFTFonts* tmp = new Xw_ListOfMFTFonts(0, 0);
  *tmp = (*((Handle_Xw_HListOfMFTFonts*)nativeHandle))->ChangeArray1();
  return gcnew OCXw_ListOfMFTFonts(tmp);
}


