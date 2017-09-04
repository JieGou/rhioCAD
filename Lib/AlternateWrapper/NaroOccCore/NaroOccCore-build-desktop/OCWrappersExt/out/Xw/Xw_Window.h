// File generated by CPPExt (Transient)
//
#ifndef _Xw_Window_OCWrappers_HeaderFile
#define _Xw_Window_OCWrappers_HeaderFile

// include the wrapped class
#include <Xw_Window.hxx>
#include "../Converter.h"

#include "../Aspect/Aspect_Window.h"

#include "Xw_WindowQuality.h"
#include "Xw_TypeOfVisual.h"
#include "../Quantity/Quantity_NameOfColor.h"
#include "../Aspect/Aspect_FillMethod.h"
#include "../Aspect/Aspect_GradientFillMethod.h"
#include "../Aspect/Aspect_TypeOfResize.h"


namespace OCNaroWrappers
{

ref class OCXw_ColorMap;
ref class OCXw_TypeMap;
ref class OCXw_WidthMap;
ref class OCXw_FontMap;
ref class OCXw_MarkMap;
ref class OCXw_Driver;
ref class OCXw_IconBox;
ref class OCXw_GraphicDevice;
ref class OCAspect_Background;
ref class OCQuantity_Color;
ref class OCAspect_GradientBackground;


//! This class defines a X11 window <br>
//!  Warning: The position and size for the creation of the window <br>
//!      are defined in Device Screen Unit (DSU) <br>
//!      floating [0,1] space. <br>
public ref class OCXw_Window : OCAspect_Window {

protected:
  // dummy constructor;
  OCXw_Window(OCDummy^) : OCAspect_Window((OCDummy^)nullptr) {};

public:

// constructor from native
OCXw_Window(Handle(Xw_Window)* nativeHandle);

// Methods PUBLIC


OCXw_Window(OCNaroWrappers::OCXw_GraphicDevice^ Device);

//! Creates a Window from an X Window defined by his ID <br>
//!      This Xid equals (aPart1 << 16) + aPart2. <br>
//!      A child of this Window is created when the WindowQuality <br>
//!      isn't the same than the parent Window <br>
//!  Trigger: Raises WindowDefinitionError if the connection failed <br>
//!      or if the Position out of the Screen Space <br>
OCXw_Window(OCNaroWrappers::OCXw_GraphicDevice^ Device, Standard_Integer aPart1, Standard_Integer aPart2, OCXw_WindowQuality aQuality, OCQuantity_NameOfColor BackColor);

//! Creates a Window from an X Window defined by his Xid <br>
//!      A child of this Window is created when the WindowQuality <br>
//!      isn't the same than the parent Window <br>
//!  Trigger: Raises WindowDefinitionError if the connection failed <br>
//!      or if the Position out of the Screen Space <br>
OCXw_Window(OCNaroWrappers::OCXw_GraphicDevice^ Device, System::IntPtr aWindow, OCXw_WindowQuality aQuality, OCQuantity_NameOfColor BackColor);

//! Creates a Window defined by his Center and his Size <br>
//!      in DSU from the Parent Window. <br>
//!      NOTE than if Parent is 0 the window is created from the <br>
//!      ROOT Window. <br>
//!      Connects it to the X server at the first call <br>
//!      depending of the GraphicDevice Visual and <br>
//!      Display parameters. <br>
//!      Quality defined a 2D or 3D Graphics oriented Window and <br>
//!      must be one of : <br>
//!      Xw_WQ_DRAWINGQUALITY for 2D Wireframe. <br>
//!      Xw_WQ_PICTUREQUALITY for Picture. <br>
//!      Xw_WQ_3DQUALITY for 3D Shading, HiddenLines, Wireframe. <br>
OCXw_Window(OCNaroWrappers::OCXw_GraphicDevice^ Device, System::String^ Title, Quantity_Parameter Xc, Quantity_Parameter Yc, Quantity_Parameter Width, Quantity_Parameter Height, OCXw_WindowQuality Quality, OCQuantity_NameOfColor BackColor, System::IntPtr Parent);

//! Creates a Window defined by his position and size <br>
//!      in pixels from the Parent Window. <br>
//!  Trigger: Raises WindowDefinitionError if the connection failed <br>
//!      or if the Position out of the Screen Space <br>
OCXw_Window(OCNaroWrappers::OCXw_GraphicDevice^ theDevice, System::String^ theTitle, Standard_Integer thePxLeft, Standard_Integer thePxTop, Standard_Integer thePxWidth, Standard_Integer thePxHeight, OCXw_WindowQuality theQuality, OCQuantity_NameOfColor theBackColor, System::IntPtr theParent);

//! Modifies the window background. <br>
//!  Warning: the background color is ignored when the quality <br>
//!     of this window is TRANSPARENT. <br>
virtual /*instead*/  void SetBackground(OCNaroWrappers::OCAspect_Background^ Background) ;

//! Modifies the window background from a Named Color. <br>
//!  Warning: the background color is ignored when the quality <br>
//!     of this window is TRANSPARENT. <br>
virtual /*instead*/  void SetBackground(OCQuantity_NameOfColor BackColor) ;

//! Modifies the window background from a Named Color. <br>
//!  Warning: the background color is ignored when the quality <br>
//!     of this window is TRANSPARENT. <br>
virtual /*instead*/  void SetBackground(OCNaroWrappers::OCQuantity_Color^ color) ;

//! Defines the window background directly from a bitmap. <br>
//!  Warning: the bitmap and window must have the same depth. <br>
 /*instead*/  void SetBackground(System::IntPtr aPixmap) ;

//! Loads the window background from an image file <aName> <br>
//! defined with a supported format XWD,GIF or BMP <br>
//! and returns TRUE if the operation is successfull. <br>
 /*instead*/  System::Boolean SetBackground(System::String^ aName, OCAspect_FillMethod aMethod) ;

//! Modifies the window gradient background. <br>
//!  Warning: the gradient background colours are ignored when the quality <br>
//!     of this window is TRANSPARENT. <br>
virtual /*instead*/  void SetBackground(OCNaroWrappers::OCAspect_GradientBackground^ Background) ;

//! Modifies the window gradient background. <br>
//!  Warning: the gradient background colours are ignored when the quality <br>
//!     of this window is TRANSPARENT. <br>
 /*instead*/  void SetBackground(OCNaroWrappers::OCQuantity_Color^ aCol1, OCNaroWrappers::OCQuantity_Color^ aCol2, OCAspect_GradientFillMethod aMethod) ;

//! Activates/Deactivates the Double Buffering capability <br>
//!      for this window. <br>
//!  Warning: Double Buffering is always DISABLE by default <br>
//!      If there is not enought ressources to activate the <br>
//!      double-buffering the DB mode flag can be set to FALSE. <br>
virtual /*instead*/  void SetDoubleBuffer(System::Boolean DBmode) ;

//! Flushs all graphics to the screen and Swap the Double <br>
//!      buffer if Enable <br>
//!  Category: Methods to modify the class definition <br>
//!  Trigger: Raises if Something is WRONG at Drawing Time. <br>
virtual /*instead*/  void Flush() ;

//! Opens the window <me>. <br>
virtual /*instead*/  void Map() ;

//! Closes the window <me>. <br>
virtual /*instead*/  void Unmap() ;

//! Applies the resizing to the window <me>. <br>
virtual /*instead*/  OCAspect_TypeOfResize DoResize() ;

//! Apply the mapping change to the window <me> <br>
//! and returns TRUE if the window is mapped at screen. <br>
virtual /*instead*/  System::Boolean DoMapping() ;

//! Destroies the Window <br>
//!  C++: alias ~ <br>
//!  Category: Methods to modify the class definition <br>
//!  Trigger: Raises if Window is not defined properly <br>
virtual /*instead*/  void Destroy() ;

//! Clears the Window in the Background color <br>
virtual /*instead*/  void Clear() ;

//! Clears the Window Area defined by his center and PIXEL size <br>
//!      in the Background color <br>
//!  Category: Methods to modify the class definition <br>
//!  Trigger: Raises if Window is not defined properly <br>
virtual /*instead*/  void ClearArea(Standard_Integer Xc, Standard_Integer Yc, Standard_Integer Width, Standard_Integer Height) ;

//! Restores The Window from the BackingStored Window <br>
//!      See BackingStore () method. <br>
virtual /*instead*/  void Restore() ;

//! Restores The Window Area defined by his center <br>
//!      and PIXEL size from the BackingStored Window <br>
//!      See BackingStore () method. <br>
virtual /*instead*/  void RestoreArea(Standard_Integer Xc, Standard_Integer Yc, Standard_Integer Width, Standard_Integer Height) ;

//! Dumps the Window to an XWD,GIF or BMP file with <br>
//! an optional gamma correction value according to the graphic system. <br>
//!  and returns TRUE if the dump occurs normaly. <br>
//!  Category: Methods to modify the class definition <br>
//!  Trigger: Raises if Window is not defined properly <br>
virtual /*instead*/  System::Boolean Dump(System::String^ aFilename, Standard_Real aGammaValue) ;

//! Dumps the Window Area defined by his center and PIXEL size <br>
//! to an XWD,GIF or BMP file with <br>
//! an optional gamma correction value according to the graphic system. <br>
//!  and returns TRUE if the dump occurs normaly. <br>
//!  Category: Methods to modify the class definition <br>
//!  Trigger: Raises if Window is not defined properly <br>
//!      or the area is out of the Window. <br>
virtual /*instead*/  System::Boolean DumpArea(System::String^ aFilename, Standard_Integer Xc, Standard_Integer Yc, Standard_Integer Width, Standard_Integer Height, Standard_Real aGammaValue) ;

//! dump the full contents of the window to a pixmap. <br>
virtual /*instead*/  System::Boolean ToPixMap(Image_PixMap& theImage) ;

//! Loads the XWD file to this Window. <br>
//! Returns TRUE if the loading occurs normaly. <br>
//!  Warning: Note that the Window is enlarged automatically <br>
//!  when the image size is too large for this window. <br>
//!  Category: Methods to modify the class definition <br>
//!  Trigger: Raises if Window is not defined properly <br>
virtual /*instead*/  System::Boolean Load(System::String^ aFilename) ;

//! Loads the XWD file to Window Area defined by his center <br>
//!  and PIXEL size. <br>
//! Returns TRUE if the loading occurs normaly. <br>
//!  Warning: Note that the Image is zoomed automatically <br>
//!  when the image size is too large for this window area. <br>
//!  Category: Methods to modify the class definition <br>
//!  Trigger: Raises if Window is not defined properly <br>
//!          or the area is out of the Window. <br>
virtual /*instead*/  System::Boolean LoadArea(System::String^ aFilename, Standard_Integer Xc, Standard_Integer Yc, Standard_Integer Width, Standard_Integer Height) ;

//! Changes the current window cursor by anId cursor <br>
//!      in the specified color. <br>
//!      NOTE than anId must be one of /usr/include/X11/cursorfont.h <br>
//!      or 0 for Deactivate the cursor <br>
virtual /*instead*/  void SetCursor(Standard_Integer anId, OCQuantity_NameOfColor aColor) ;

//! Returns the BackingStore capability for this Window. <br>
//!      If Answer is True Exposure can be recovered by <br>
//!      Restore RestoreArea methods. <br>
//!      If Answer is False, Application must Redraw the <br>
//!          exposed area. <br>
virtual /*instead*/  System::Boolean BackingStore() ;

//! Returns the DoubleBuffer state. <br>
virtual /*instead*/  System::Boolean DoubleBuffer() ;

//! Returns True if the window <me> is opened <br>
//!      and False if the window is closed. <br>
virtual /*instead*/  System::Boolean IsMapped() ;

//! Returns The Window RATIO equal to the physical <br>
//!      WIDTH/HEIGHT dimensions <br>
virtual /*instead*/  Quantity_Ratio Ratio() ;

//! Returns The Window POSITION in DSU <br>
virtual /*instead*/  void Position(Quantity_Parameter& X1, Quantity_Parameter& Y1, Quantity_Parameter& X2, Quantity_Parameter& Y2) ;

//! Returns The Window POSITION in PIXEL <br>
virtual /*instead*/  void Position(Standard_Integer& X1, Standard_Integer& Y1, Standard_Integer& X2, Standard_Integer& Y2) ;

//! Returns The Window SIZE in DSU <br>
virtual /*instead*/  void Size(Quantity_Parameter& Width, Quantity_Parameter& Height) ;

//! Returns The Window SIZE in PIXEL <br>
virtual /*instead*/  void Size(Standard_Integer& Width, Standard_Integer& Height) ;

//! Returns The Window SIZE in MM <br>
virtual /*instead*/  void MMSize(Standard_Real& Width, Standard_Real& Height) ;

//! Returns the DSU value depending of the PIXEL value. <br>
virtual /*instead*/  Quantity_Parameter Convert(Standard_Integer PV) ;

//! Returns the PIXEL value depending of the DSU value. <br>
virtual /*instead*/  Standard_Integer Convert(Quantity_Parameter DV) ;

//! Returns the DSU position depending of the PIXEL position. <br>
virtual /*instead*/  void Convert(Standard_Integer PX, Standard_Integer PY, Quantity_Parameter& DX, Quantity_Parameter& DY) ;

//! Returns the PIXEL position depending of the DSU position. <br>
virtual /*instead*/  void Convert(Quantity_Parameter DX, Quantity_Parameter DY, Standard_Integer& PX, Standard_Integer& PY) ;

//! Returns the X window ID of the created window <me>. <br>
 /*instead*/  System::IntPtr XWindow() ;

//! Returns the X window ID of the created window <me>. <br>
//!      This Xid equals (aPart1 << 16) + aPart2. <br>
 /*instead*/  void XWindow(Standard_Integer& aPart1, Standard_Integer& aPart2) ;

//! Returns the X window ID parent of the created window <me>. <br>
 /*instead*/  System::IntPtr XParentWindow() ;

//! Returns the X window ID parent of the created window <me>. <br>
//!      This Xid equals (aPart1 << 16) + aPart2. <br>
 /*instead*/  void XParentWindow(Standard_Integer& aPart1, Standard_Integer& aPart2) ;

//! Returns the X pixmap ID of the created window <me>. <br>
//!      If BackingStore () is permitted. <br>
 /*instead*/  System::IntPtr XPixmap() ;

//! Returns the Pointer position relatively to the Window <me> <br>
//!      and FALSE if the pointer is outside of the window <br>
virtual /*instead*/  System::Boolean PointerPosition(Standard_Integer& X, Standard_Integer& Y) ;

//! Returns the Colormap attached to this Window <br>
 /*instead*/  OCXw_ColorMap^ ColorMap() ;

//! Returns the Typemap attached to this Window <br>
 /*instead*/  OCXw_TypeMap^ TypeMap() ;

//! Returns the Widthmap attached to this Window <br>
 /*instead*/  OCXw_WidthMap^ WidthMap() ;

//! Returns the Fontmap attached to this Window <br>
 /*instead*/  OCXw_FontMap^ FontMap() ;

//! Returns the Markmap attached to this Window <br>
 /*instead*/  OCXw_MarkMap^ MarkMap() ;

//! Returns the Colormap XId attached to this Window <br>
//!      depending of the HardWare and Visual class <br>
//!  Trigger: Raises if Window is not defined properly <br>
 /*instead*/  System::IntPtr XColorMap() ;

//! Returns the Visual address attached to this Window <br>
//!      depending of the HardWare <br>
//!  Trigger: Raises if Window is not defined properly <br>
 /*instead*/  Standard_Address XVisual() ;

//! Returns the X window Visual class of the created window <me> <br>
 /*instead*/  OCXw_TypeOfVisual VisualClass() ;

//! Returns the X window Visual depth of the created window <me> <br>
 /*instead*/  Standard_Integer VisualDepth() ;

//! Returns the Visual ID of the Window <br>
 /*instead*/  Standard_Integer VisualID() ;

//! Returns the Quality of this window <br>
 /*instead*/  OCXw_WindowQuality Quality() ;

//! Returns FALSE when the returned pixel value <aPixel> <br>
//!     of an RGB color <aColor> is exact or TRUE <br>
//!     when the pixel value is approximated. <br>
 /*instead*/  System::Boolean PixelOfColor(OCQuantity_NameOfColor aColor, Standard_Integer& aPixel) ;

//! Returns FALSE when the returned pixel value <aPixel> <br>
//!     of an RGB color <aColor> is exact or TRUE <br>
//!     when the pixel value is approximated. <br>
//!  Warning: <br>
//! make becarefull about the number of different pixel <br>
//! of colors reserved in the colormap in PseudoColor mode !!! <br>
 /*instead*/  System::Boolean PixelOfColor(OCNaroWrappers::OCQuantity_Color^ aColor, Standard_Integer& aPixel) ;

//! Returns FALSE when the returned background pixel <br>
//!     value <aPixel> is not defined <br>
 /*instead*/  System::Boolean BackgroundPixel(Standard_Integer& aPixel) ;

~OCXw_Window()
{
  nativeHandle->Nullify();
  delete nativeHandle;
}

};

}; // OCNaroWrappers

#endif