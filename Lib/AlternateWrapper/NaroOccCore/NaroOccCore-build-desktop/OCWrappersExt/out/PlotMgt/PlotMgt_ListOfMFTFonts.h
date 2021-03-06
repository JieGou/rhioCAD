// File generated by CPPExt (MPV)
//
#ifndef _PlotMgt_ListOfMFTFonts_OCWrappers_HeaderFile
#define _PlotMgt_ListOfMFTFonts_OCWrappers_HeaderFile

// include native header
#include <PlotMgt_ListOfMFTFonts.hxx>
#include "../Converter.h"




namespace OCNaroWrappers
{

ref class OCMFT_FontManager;



public ref class OCPlotMgt_ListOfMFTFonts  {

protected:
  PlotMgt_ListOfMFTFonts* nativeHandle;
  OCPlotMgt_ListOfMFTFonts(OCDummy^) {};

public:
  property PlotMgt_ListOfMFTFonts* Handle
  {
    PlotMgt_ListOfMFTFonts* get()
    {
      return nativeHandle;
    }
  }


// constructor from native
OCPlotMgt_ListOfMFTFonts(PlotMgt_ListOfMFTFonts* nativeHandle);

// Methods PUBLIC


OCPlotMgt_ListOfMFTFonts(Standard_Integer Low, Standard_Integer Up);


OCPlotMgt_ListOfMFTFonts(OCNaroWrappers::OCMFT_FontManager^ Item, Standard_Integer Low, Standard_Integer Up);


 /*instead*/  void Init(OCNaroWrappers::OCMFT_FontManager^ V) ;


 /*instead*/  System::Boolean IsAllocated() ;


 /*instead*/  OCPlotMgt_ListOfMFTFonts^ Assign(OCNaroWrappers::OCPlotMgt_ListOfMFTFonts^ Other) ;


 /*instead*/  Standard_Integer Length() ;


 /*instead*/  Standard_Integer Lower() ;


 /*instead*/  Standard_Integer Upper() ;


 /*instead*/  void SetValue(Standard_Integer Index, OCNaroWrappers::OCMFT_FontManager^ Value) ;


 /*instead*/  OCMFT_FontManager^ Value(Standard_Integer Index) ;


 /*instead*/  OCMFT_FontManager^ ChangeValue(Standard_Integer Index) ;

~OCPlotMgt_ListOfMFTFonts()
{
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif
