// File generated by CPPExt (CPP file)
//

#include "Prs2d_Angle.h"
#include "../Converter.h"
#include "../Graphic2d/Graphic2d_GraphicObject.h"
#include "../gp/gp_Pnt2d.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../Graphic2d/Graphic2d_Drawer.h"


using namespace OCNaroWrappers;

OCPrs2d_Angle::OCPrs2d_Angle(Handle(Prs2d_Angle)* nativeHandle) : OCPrs2d_Dimension((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_Prs2d_Angle(*nativeHandle);
}

OCPrs2d_Angle::OCPrs2d_Angle(OCNaroWrappers::OCGraphic2d_GraphicObject^ aGraphicObject, OCNaroWrappers::OCgp_Pnt2d^ anAttachPnt1, OCNaroWrappers::OCgp_Pnt2d^ anAttachPnt2, OCNaroWrappers::OCgp_Pnt2d^ anAttachPnt3, Quantity_Length aRadius, OCNaroWrappers::OCTCollection_ExtendedString^ aText, Standard_Real aTxtScale, Standard_Real anArrAngle, Standard_Real anArrLength, OCPrs2d_TypeOfArrow anArrType, OCPrs2d_ArrowSide anArrow, System::Boolean IsReverseArrow) : OCPrs2d_Dimension((OCDummy^)nullptr)

{
  nativeHandle = new Handle_Prs2d_Angle(new Prs2d_Angle(*((Handle_Graphic2d_GraphicObject*)aGraphicObject->Handle), *((gp_Pnt2d*)anAttachPnt1->Handle), *((gp_Pnt2d*)anAttachPnt2->Handle), *((gp_Pnt2d*)anAttachPnt3->Handle), aRadius, *((TCollection_ExtendedString*)aText->Handle), aTxtScale, anArrAngle, anArrLength, (Prs2d_TypeOfArrow)anArrType, (Prs2d_ArrowSide)anArrow, OCConverter::BooleanToStandardBoolean(IsReverseArrow)));
}

 void OCPrs2d_Angle::Values(OCNaroWrappers::OCgp_Pnt2d^ aPnt1, OCNaroWrappers::OCgp_Pnt2d^ aPnt2, OCNaroWrappers::OCgp_Pnt2d^ aPnt3, Quantity_Length& aRad)
{
  (*((Handle_Prs2d_Angle*)nativeHandle))->Values(*((gp_Pnt2d*)aPnt1->Handle), *((gp_Pnt2d*)aPnt2->Handle), *((gp_Pnt2d*)aPnt3->Handle), aRad);
}

 void OCPrs2d_Angle::Save(Aspect_FStream& aFStream)
{
  (*((Handle_Prs2d_Angle*)nativeHandle))->Save(aFStream);
}


