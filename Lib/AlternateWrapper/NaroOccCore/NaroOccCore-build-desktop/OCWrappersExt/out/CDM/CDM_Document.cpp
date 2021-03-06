// File generated by CPPExt (CPP file)
//

#include "CDM_Document.h"
#include "../Converter.h"
#include "CDM_MetaData.h"
#include "CDM_Application.h"
#include "../Standard/Standard_Failure.h"
#include "CDM_Reference.h"
#include "CDM_ReferenceIterator.h"
#include "../TCollection/TCollection_ExtendedString.h"
#include "../TColStd/TColStd_SequenceOfExtendedString.h"
#include "../Resource/Resource_Manager.h"
#include "../Standard/Standard_GUID.h"


using namespace OCNaroWrappers;

OCCDM_Document::OCCDM_Document(Handle(CDM_Document)* nativeHandle) : OCStandard_Transient((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_CDM_Document(*nativeHandle);
}

OCCDM_Document::OCCDM_Document() : OCStandard_Transient((OCDummy^)nullptr)

{}

 void OCCDM_Document::Update(OCNaroWrappers::OCCDM_Document^ aToDocument, Standard_Integer aReferenceIdentifier, Standard_Address aModifContext)
{
  (*((Handle_CDM_Document*)nativeHandle))->Update(*((Handle_CDM_Document*)aToDocument->Handle), aReferenceIdentifier, aModifContext);
}

 System::Boolean OCCDM_Document::Update(OCNaroWrappers::OCTCollection_ExtendedString^ ErrorString)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->Update(*((TCollection_ExtendedString*)ErrorString->Handle)));
}

 void OCCDM_Document::Extensions(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ Extensions)
{
  (*((Handle_CDM_Document*)nativeHandle))->Extensions(*((TColStd_SequenceOfExtendedString*)Extensions->Handle));
}

 System::Boolean OCCDM_Document::GetAlternativeDocument(OCNaroWrappers::OCTCollection_ExtendedString^ aFormat, OCNaroWrappers::OCCDM_Document^ anAlternativeDocument)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->GetAlternativeDocument(*((TCollection_ExtendedString*)aFormat->Handle), *((Handle_CDM_Document*)anAlternativeDocument->Handle)));
}

 Standard_Integer OCCDM_Document::CreateReference(OCNaroWrappers::OCCDM_Document^ anOtherDocument)
{
  return (*((Handle_CDM_Document*)nativeHandle))->CreateReference(*((Handle_CDM_Document*)anOtherDocument->Handle));
}

 void OCCDM_Document::RemoveReference(Standard_Integer aReferenceIdentifier)
{
  (*((Handle_CDM_Document*)nativeHandle))->RemoveReference(aReferenceIdentifier);
}

 void OCCDM_Document::RemoveAllReferences()
{
  (*((Handle_CDM_Document*)nativeHandle))->RemoveAllReferences();
}

OCCDM_Document^ OCCDM_Document::Document(Standard_Integer aReferenceIdentifier)
{
  Handle(CDM_Document) tmp = (*((Handle_CDM_Document*)nativeHandle))->Document(aReferenceIdentifier);
  return gcnew OCCDM_Document(&tmp);
}

 System::Boolean OCCDM_Document::IsInSession(Standard_Integer aReferenceIdentifier)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsInSession(aReferenceIdentifier));
}

 System::Boolean OCCDM_Document::IsStored(Standard_Integer aReferenceIdentifier)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsStored(aReferenceIdentifier));
}

OCTCollection_ExtendedString^ OCCDM_Document::Name(Standard_Integer aReferenceIdentifier)
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->Name(aReferenceIdentifier);
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCCDM_Document::UpdateFromDocuments(Standard_Address aModifContext)
{
  (*((Handle_CDM_Document*)nativeHandle))->UpdateFromDocuments(aModifContext);
}

 Standard_Integer OCCDM_Document::ToReferencesNumber()
{
  return (*((Handle_CDM_Document*)nativeHandle))->ToReferencesNumber();
}

 Standard_Integer OCCDM_Document::FromReferencesNumber()
{
  return (*((Handle_CDM_Document*)nativeHandle))->FromReferencesNumber();
}

 System::Boolean OCCDM_Document::ShallowReferences(OCNaroWrappers::OCCDM_Document^ aDocument)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->ShallowReferences(*((Handle_CDM_Document*)aDocument->Handle)));
}

 System::Boolean OCCDM_Document::DeepReferences(OCNaroWrappers::OCCDM_Document^ aDocument)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->DeepReferences(*((Handle_CDM_Document*)aDocument->Handle)));
}

 Standard_Integer OCCDM_Document::CopyReference(OCNaroWrappers::OCCDM_Document^ aFromDocument, Standard_Integer aReferenceIdentifier)
{
  return (*((Handle_CDM_Document*)nativeHandle))->CopyReference(*((Handle_CDM_Document*)aFromDocument->Handle), aReferenceIdentifier);
}

 System::Boolean OCCDM_Document::IsReadOnly()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsReadOnly());
}

 System::Boolean OCCDM_Document::IsReadOnly(Standard_Integer aReferenceIdentifier)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsReadOnly(aReferenceIdentifier));
}

 void OCCDM_Document::SetIsReadOnly()
{
  (*((Handle_CDM_Document*)nativeHandle))->SetIsReadOnly();
}

 void OCCDM_Document::UnsetIsReadOnly()
{
  (*((Handle_CDM_Document*)nativeHandle))->UnsetIsReadOnly();
}

 void OCCDM_Document::Modify()
{
  (*((Handle_CDM_Document*)nativeHandle))->Modify();
}

 Standard_Integer OCCDM_Document::Modifications()
{
  return (*((Handle_CDM_Document*)nativeHandle))->Modifications();
}

 void OCCDM_Document::UnModify()
{
  (*((Handle_CDM_Document*)nativeHandle))->UnModify();
}

 System::Boolean OCCDM_Document::IsUpToDate(Standard_Integer aReferenceIdentifier)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsUpToDate(aReferenceIdentifier));
}

 void OCCDM_Document::SetIsUpToDate(Standard_Integer aReferenceIdentifier)
{
  (*((Handle_CDM_Document*)nativeHandle))->SetIsUpToDate(aReferenceIdentifier);
}

 void OCCDM_Document::SetComment(OCNaroWrappers::OCTCollection_ExtendedString^ aComment)
{
  (*((Handle_CDM_Document*)nativeHandle))->SetComment(*((TCollection_ExtendedString*)aComment->Handle));
}

 void OCCDM_Document::AddComment(OCNaroWrappers::OCTCollection_ExtendedString^ aComment)
{
  (*((Handle_CDM_Document*)nativeHandle))->AddComment(*((TCollection_ExtendedString*)aComment->Handle));
}

 void OCCDM_Document::SetComments(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ aComments)
{
  (*((Handle_CDM_Document*)nativeHandle))->SetComments(*((TColStd_SequenceOfExtendedString*)aComments->Handle));
}

 void OCCDM_Document::Comments(OCNaroWrappers::OCTColStd_SequenceOfExtendedString^ aComments)
{
  (*((Handle_CDM_Document*)nativeHandle))->Comments(*((TColStd_SequenceOfExtendedString*)aComments->Handle));
}

 System::String^ OCCDM_Document::Comment()
{
  return OCConverter::StandardExtStringToString((*((Handle_CDM_Document*)nativeHandle))->Comment());
}

 System::String^ OCCDM_Document::Presentation()
{
  return OCConverter::StandardExtStringToString((*((Handle_CDM_Document*)nativeHandle))->Presentation());
}

OCCDM_Document^ OCCDM_Document::FindFromPresentation(OCNaroWrappers::OCTCollection_ExtendedString^ aPresentation)
{
  Handle(CDM_Document) tmp = CDM_Document::FindFromPresentation(*((TCollection_ExtendedString*)aPresentation->Handle));
  return gcnew OCCDM_Document(&tmp);
}

 System::Boolean OCCDM_Document::FindPresentation(OCNaroWrappers::OCTCollection_ExtendedString^ aPresentation)
{
  return OCConverter::StandardBooleanToBoolean(CDM_Document::FindPresentation(*((TCollection_ExtendedString*)aPresentation->Handle)));
}

 System::Boolean OCCDM_Document::IsStored()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsStored());
}

 Standard_Integer OCCDM_Document::StorageVersion()
{
  return (*((Handle_CDM_Document*)nativeHandle))->StorageVersion();
}

 void OCCDM_Document::SetMetaData(OCNaroWrappers::OCCDM_MetaData^ aMetaData)
{
  (*((Handle_CDM_Document*)nativeHandle))->SetMetaData(*((Handle_CDM_MetaData*)aMetaData->Handle));
}

 void OCCDM_Document::UnsetIsStored()
{
  (*((Handle_CDM_Document*)nativeHandle))->UnsetIsStored();
}

OCCDM_MetaData^ OCCDM_Document::MetaData()
{
  Handle(CDM_MetaData) tmp = (*((Handle_CDM_Document*)nativeHandle))->MetaData();
  return gcnew OCCDM_MetaData(&tmp);
}

OCTCollection_ExtendedString^ OCCDM_Document::Folder()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->Folder();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCCDM_Document::SetRequestedFolder(OCNaroWrappers::OCTCollection_ExtendedString^ aFolder)
{
  (*((Handle_CDM_Document*)nativeHandle))->SetRequestedFolder(*((TCollection_ExtendedString*)aFolder->Handle));
}

OCTCollection_ExtendedString^ OCCDM_Document::RequestedFolder()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->RequestedFolder();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 System::Boolean OCCDM_Document::HasRequestedFolder()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->HasRequestedFolder());
}

 void OCCDM_Document::SetRequestedName(OCNaroWrappers::OCTCollection_ExtendedString^ aName)
{
  (*((Handle_CDM_Document*)nativeHandle))->SetRequestedName(*((TCollection_ExtendedString*)aName->Handle));
}

OCTCollection_ExtendedString^ OCCDM_Document::RequestedName()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->RequestedName();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCCDM_Document::SetRequestedPreviousVersion(OCNaroWrappers::OCTCollection_ExtendedString^ aPreviousVersion)
{
  (*((Handle_CDM_Document*)nativeHandle))->SetRequestedPreviousVersion(*((TCollection_ExtendedString*)aPreviousVersion->Handle));
}

 void OCCDM_Document::UnsetRequestedPreviousVersion()
{
  (*((Handle_CDM_Document*)nativeHandle))->UnsetRequestedPreviousVersion();
}

 System::Boolean OCCDM_Document::HasRequestedPreviousVersion()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->HasRequestedPreviousVersion());
}

OCTCollection_ExtendedString^ OCCDM_Document::RequestedPreviousVersion()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->RequestedPreviousVersion();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCCDM_Document::SetRequestedComment(OCNaroWrappers::OCTCollection_ExtendedString^ aComment)
{
  (*((Handle_CDM_Document*)nativeHandle))->SetRequestedComment(*((TCollection_ExtendedString*)aComment->Handle));
}

OCTCollection_ExtendedString^ OCCDM_Document::RequestedComment()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->RequestedComment();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 void OCCDM_Document::LoadResources()
{
  (*((Handle_CDM_Document*)nativeHandle))->LoadResources();
}

 System::Boolean OCCDM_Document::FindFileExtension()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->FindFileExtension());
}

OCTCollection_ExtendedString^ OCCDM_Document::FileExtension()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->FileExtension();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 System::Boolean OCCDM_Document::FindDataType()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->FindDataType());
}

OCTCollection_ExtendedString^ OCCDM_Document::DataType()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->DataType();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 System::Boolean OCCDM_Document::FindVersionDataType()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->FindVersionDataType());
}

OCTCollection_ExtendedString^ OCCDM_Document::VersionDataType()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->VersionDataType();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 System::Boolean OCCDM_Document::FindDescription()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->FindDescription());
}

OCTCollection_ExtendedString^ OCCDM_Document::Description()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->Description();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 System::Boolean OCCDM_Document::FindDomain()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->FindDomain());
}

OCTCollection_ExtendedString^ OCCDM_Document::Domain()
{
  TCollection_ExtendedString* tmp = new TCollection_ExtendedString();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->Domain();
  return gcnew OCTCollection_ExtendedString(tmp);
}

 System::Boolean OCCDM_Document::FindStoragePlugin()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->FindStoragePlugin());
}

OCStandard_GUID^ OCCDM_Document::StoragePlugin()
{
  Standard_GUID* tmp = new Standard_GUID();
  *tmp = (*((Handle_CDM_Document*)nativeHandle))->StoragePlugin();
  return gcnew OCStandard_GUID(tmp);
}

 System::Boolean OCCDM_Document::IsModified()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsModified());
}

 Standard_OStream& OCCDM_Document::Print(Standard_OStream& anOStream)
{
  return (*((Handle_CDM_Document*)nativeHandle))->Print(anOStream);
}

 System::Boolean OCCDM_Document::IsOpened()
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsOpened());
}

 void OCCDM_Document::Open(OCNaroWrappers::OCCDM_Application^ anApplication)
{
  (*((Handle_CDM_Document*)nativeHandle))->Open(*((Handle_CDM_Application*)anApplication->Handle));
}

 OCCDM_CanCloseStatus OCCDM_Document::CanClose()
{
  return (OCCDM_CanCloseStatus)((*((Handle_CDM_Document*)nativeHandle))->CanClose());
}

 void OCCDM_Document::Close()
{
  (*((Handle_CDM_Document*)nativeHandle))->Close();
}

OCCDM_Application^ OCCDM_Document::Application()
{
  Handle(CDM_Application) tmp = (*((Handle_CDM_Document*)nativeHandle))->Application();
  return gcnew OCCDM_Application(&tmp);
}

 System::Boolean OCCDM_Document::CanCloseReference(OCNaroWrappers::OCCDM_Document^ aDocument, Standard_Integer aReferenceIdentifier)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->CanCloseReference(*((Handle_CDM_Document*)aDocument->Handle), aReferenceIdentifier));
}

 void OCCDM_Document::CloseReference(OCNaroWrappers::OCCDM_Document^ aDocument, Standard_Integer aReferenceIdentifier)
{
  (*((Handle_CDM_Document*)nativeHandle))->CloseReference(*((Handle_CDM_Document*)aDocument->Handle), aReferenceIdentifier);
}

 System::Boolean OCCDM_Document::IsOpened(Standard_Integer aReferenceIdentifier)
{
  return OCConverter::StandardBooleanToBoolean((*((Handle_CDM_Document*)nativeHandle))->IsOpened(aReferenceIdentifier));
}

 void OCCDM_Document::CreateReference(OCNaroWrappers::OCCDM_MetaData^ aMetaData, Standard_Integer aReferenceIdentifier, OCNaroWrappers::OCCDM_Application^ anApplication, Standard_Integer aToDocumentVersion, System::Boolean UseStorageConfiguration)
{
  (*((Handle_CDM_Document*)nativeHandle))->CreateReference(*((Handle_CDM_MetaData*)aMetaData->Handle), aReferenceIdentifier, *((Handle_CDM_Application*)anApplication->Handle), aToDocumentVersion, OCConverter::BooleanToStandardBoolean(UseStorageConfiguration));
}

 Standard_Integer OCCDM_Document::CreateReference(OCNaroWrappers::OCCDM_MetaData^ aMetaData, OCNaroWrappers::OCCDM_Application^ anApplication, Standard_Integer aDocumentVersion, System::Boolean UseStorageConfiguration)
{
  return (*((Handle_CDM_Document*)nativeHandle))->CreateReference(*((Handle_CDM_MetaData*)aMetaData->Handle), *((Handle_CDM_Application*)anApplication->Handle), aDocumentVersion, OCConverter::BooleanToStandardBoolean(UseStorageConfiguration));
}

 Standard_Integer OCCDM_Document::ReferenceCounter()
{
  return (*((Handle_CDM_Document*)nativeHandle))->ReferenceCounter();
}

 void OCCDM_Document::Update()
{
  (*((Handle_CDM_Document*)nativeHandle))->Update();
}


