// File generated by CPPExt (Package)
//

#ifndef _PlotMgt_OCWrappers_HeaderFile
#define _PlotMgt_OCWrappers_HeaderFile

// Include the wrapped header
#include <PlotMgt.hxx>

#include "PlotMgt_ImageDriver.h"
#include "PlotMgt_PlotterParameter.h"
#include "PlotMgt_Plotter.h"
#include "PlotMgt_PlotterDriver.h"
#include "PlotMgt_TextManager.h"
#include "PlotMgt_ListOfPlotterParameter.h"
#include "PlotMgt_HListOfPlotterParameter.h"
#include "PlotMgt_ListOfMFTFonts.h"
#include "PlotMgt_HListOfMFTFonts.h"
#include "PlotMgt_SequenceNodeOfListOfPlotterParameter.h"


namespace OCNaroWrappers
{

public ref class OCPlotMgt abstract sealed
{

public:
// Methods


static /*instead*/  OCTColStd_HSequenceOfAsciiString^ DeviceList() ;


static /*instead*/  OCPlotMgt_TypeOfPlotterParameter TypeFromString(OCNaroWrappers::OCTCollection_AsciiString^ aTypeString) ;


static /*instead*/  OCTCollection_AsciiString^ StringFromType(OCPlotMgt_TypeOfPlotterParameter aType) ;


static /*instead*/  OCPlotMgt_TypeOfOrigin OriginFromString(OCNaroWrappers::OCTCollection_AsciiString^ anOriginString) ;


static /*instead*/  OCTCollection_AsciiString^ StringFromOrigin(OCPlotMgt_TypeOfOrigin anOrigin) ;


static /*instead*/  OCPlotMgt_TypeOfQuality QualityFromString(OCNaroWrappers::OCTCollection_AsciiString^ aQualityString) ;


static /*instead*/  OCTCollection_AsciiString^ StringFromQuality(OCPlotMgt_TypeOfQuality aQuality) ;


static /*instead*/  OCPlotMgt_ImageFormat ImageFormatFromString(OCNaroWrappers::OCTCollection_AsciiString^ anImageFormatString) ;


static /*instead*/  OCTCollection_AsciiString^ StringFromImageFormat(OCPlotMgt_ImageFormat anImageFormat) ;


static /*instead*/  OCPlotMgt_PlottingType PlottingTypeFromString(OCNaroWrappers::OCTCollection_AsciiString^ aPlottingTypeString) ;


static /*instead*/  OCTCollection_AsciiString^ StringFromPlottingType(OCPlotMgt_PlottingType aPlottingType) ;


static /*instead*/  OCPlotMgt_PaperFormat PaperFormatFromString(OCNaroWrappers::OCTCollection_AsciiString^ aPaperFormatString) ;


static /*instead*/  OCTCollection_AsciiString^ StringFromPaperFormat(OCPlotMgt_PaperFormat aPaperFormat) ;


static /*instead*/  void PaperSize(OCNaroWrappers::OCTCollection_AsciiString^ aFormat, Standard_Real& aWidth, Standard_Real& aLength) ;


};

}; // OCNaroWrappers

#endif