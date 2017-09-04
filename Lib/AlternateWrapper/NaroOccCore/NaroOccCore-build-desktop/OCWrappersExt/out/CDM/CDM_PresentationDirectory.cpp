// File generated by CPPExt (CPP file)
//

#include "CDM_PresentationDirectory.h"
#include "../Converter.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "CDM_Document.h"
#include "CDM_DataMapNodeOfPresentationDirectory.h"
#include "CDM_DataMapIteratorOfPresentationDirectory.h"


using namespace OCNaroWrappers;

OCCDM_PresentationDirectory::OCCDM_PresentationDirectory(CDM_PresentationDirectory* nativeHandle) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  this->nativeHandle = nativeHandle;
}

OCCDM_PresentationDirectory::OCCDM_PresentationDirectory(Standard_Integer NbBuckets) : OCTCollection_BasicMap((OCDummy^)nullptr)

{
  nativeHandle = new CDM_PresentationDirectory(NbBuckets);
}

OCCDM_PresentationDirectory^ OCCDM_PresentationDirectory::Assign(OCNaroWrappers::OCCDM_PresentationDirectory^ Other)
{
  CDM_PresentationDirectory* tmp = new CDM_PresentationDirectory(0);
  *tmp = ((CDM_PresentationDirectory*)nativeHandle)->Assign(*((CDM_PresentationDirectory*)Other->Handle));
  return gcnew OCCDM_PresentationDirectory(tmp);
}

 void OCCDM_PresentationDirectory::ReSize(Standard_Integer NbBuckets)
{
  ((CDM_PresentationDirectory*)nativeHandle)->ReSize(NbBuckets);
}

 System::Boolean OCCDM_PresentationDirectory::Bind(OCNaroWrappers::OCTCollection_ExtendedString^ K, OCNaroWrappers::OCCDM_Document^ I)
{
  return OCConverter::StandardBooleanToBoolean(((CDM_PresentationDirectory*)nativeHandle)->Bind(*((TCollection_ExtendedString*)K->Handle), *((Handle_CDM_Document*)I->Handle)));
}

 System::Boolean OCCDM_PresentationDirectory::IsBound(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((CDM_PresentationDirectory*)nativeHandle)->IsBound(*((TCollection_ExtendedString*)K->Handle)));
}

 System::Boolean OCCDM_PresentationDirectory::UnBind(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return OCConverter::StandardBooleanToBoolean(((CDM_PresentationDirectory*)nativeHandle)->UnBind(*((TCollection_ExtendedString*)K->Handle)));
}

OCCDM_Document^ OCCDM_PresentationDirectory::Find(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  Handle(CDM_Document) tmp = ((CDM_PresentationDirectory*)nativeHandle)->Find(*((TCollection_ExtendedString*)K->Handle));
  return gcnew OCCDM_Document(&tmp);
}

OCCDM_Document^ OCCDM_PresentationDirectory::ChangeFind(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  Handle(CDM_Document) tmp = ((CDM_PresentationDirectory*)nativeHandle)->ChangeFind(*((TCollection_ExtendedString*)K->Handle));
  return gcnew OCCDM_Document(&tmp);
}

 Standard_Address OCCDM_PresentationDirectory::Find1(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return ((CDM_PresentationDirectory*)nativeHandle)->Find1(*((TCollection_ExtendedString*)K->Handle));
}

 Standard_Address OCCDM_PresentationDirectory::ChangeFind1(OCNaroWrappers::OCTCollection_ExtendedString^ K)
{
  return ((CDM_PresentationDirectory*)nativeHandle)->ChangeFind1(*((TCollection_ExtendedString*)K->Handle));
}

