// File generated by CPPExt (CPP file)
//

#include "AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve.h"
#include "../Converter.h"
#include "AppParCurves_MultiBSpCurve.h"
#include "AppParCurves_SequenceOfMultiBSpCurve.h"


using namespace OCNaroWrappers;

OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve::OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(Handle(AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve)* nativeHandle) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(*nativeHandle);
}

OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve::OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(OCNaroWrappers::OCAppParCurves_MultiBSpCurve^ I, TCollection_SeqNodePtr n, TCollection_SeqNodePtr p) : OCTCollection_SeqNode((OCDummy^)nullptr)

{
  nativeHandle = new Handle_AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(new AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve(*((AppParCurves_MultiBSpCurve*)I->Handle), n, p));
}

OCAppParCurves_MultiBSpCurve^ OCAppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve::Value()
{
  AppParCurves_MultiBSpCurve* tmp = new AppParCurves_MultiBSpCurve();
  *tmp = (*((Handle_AppParCurves_SequenceNodeOfSequenceOfMultiBSpCurve*)nativeHandle))->Value();
  return gcnew OCAppParCurves_MultiBSpCurve(tmp);
}


