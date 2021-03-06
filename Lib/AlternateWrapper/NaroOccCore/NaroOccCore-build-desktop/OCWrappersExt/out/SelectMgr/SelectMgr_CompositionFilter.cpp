// File generated by CPPExt (CPP file)
//

#include "SelectMgr_CompositionFilter.h"
#include "../Converter.h"
#include "SelectMgr_Filter.h"
#include "SelectMgr_ListOfFilter.h"


using namespace OCNaroWrappers;

OCSelectMgr_CompositionFilter::OCSelectMgr_CompositionFilter(Handle(SelectMgr_CompositionFilter)* nativeHandle) : OCSelectMgr_Filter((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_SelectMgr_CompositionFilter(*nativeHandle);
}

 void OCSelectMgr_CompositionFilter::Add(OCNaroWrappers::OCSelectMgr_Filter^ afilter)
{
  (*((Handle_SelectMgr_CompositionFilter*)nativeHandle))->Add(*((Handle_SelectMgr_Filter*)afilter->Handle));
}

 void OCSelectMgr_CompositionFilter::Remove(OCNaroWrappers::OCSelectMgr_Filter^ aFilter)
{
  (*((Handle_SelectMgr_CompositionFilter*)nativeHandle))->Remove(*((Handle_SelectMgr_Filter*)aFilter->Handle));
}

 System::Boolean OCSelectMgr_CompositionFilter::IsEmpty()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_SelectMgr_CompositionFilter*)nativeHandle))->IsEmpty());
}

 System::Boolean OCSelectMgr_CompositionFilter::IsIn(OCNaroWrappers::OCSelectMgr_Filter^ aFilter)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_SelectMgr_CompositionFilter*)nativeHandle))->IsIn(*((Handle_SelectMgr_Filter*)aFilter->Handle)));
}

OCSelectMgr_ListOfFilter^ OCSelectMgr_CompositionFilter::StoredFilters()
{
  SelectMgr_ListOfFilter* tmp = new SelectMgr_ListOfFilter();
  *tmp = (*((Handle_SelectMgr_CompositionFilter*)nativeHandle))->StoredFilters();
  return gcnew OCSelectMgr_ListOfFilter(tmp);
}

 void OCSelectMgr_CompositionFilter::Clear()
{
  (*((Handle_SelectMgr_CompositionFilter*)nativeHandle))->Clear();
}

 System::Boolean OCSelectMgr_CompositionFilter::ActsOn(OCTopAbs_ShapeEnum aStandardMode)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_SelectMgr_CompositionFilter*)nativeHandle))->ActsOn((TopAbs_ShapeEnum)aStandardMode));
}


