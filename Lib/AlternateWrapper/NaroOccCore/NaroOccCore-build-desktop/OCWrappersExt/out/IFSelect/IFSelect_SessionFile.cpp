// File generated by CPPExt (CPP file)
//

#include "IFSelect_SessionFile.h"
#include "../Converter.h"
#include "IFSelect_WorkSession.h"
#include "../TColStd/TColStd_HArray1OfInteger.h"
#include "../Dico/Dico_DictionaryOfInteger.h"
#include "../TCollection/TCollection_AsciiString.h"
#include "../Standard/Standard_Transient.h"


using namespace OCNaroWrappers;

OCIFSelect_SessionFile::OCIFSelect_SessionFile(IFSelect_SessionFile* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIFSelect_SessionFile::OCIFSelect_SessionFile(OCNaroWrappers::OCIFSelect_WorkSession^ WS) 
{
  nativeHandle = new IFSelect_SessionFile(*((Handle_IFSelect_WorkSession*)WS->Handle));
}

OCIFSelect_SessionFile::OCIFSelect_SessionFile(OCNaroWrappers::OCIFSelect_WorkSession^ WS, System::String^ filename) 
{
  nativeHandle = new IFSelect_SessionFile(*((Handle_IFSelect_WorkSession*)WS->Handle), OCConverter::StringToStandardCString(filename));
}

 void OCIFSelect_SessionFile::ClearLines()
{
  ((IFSelect_SessionFile*)nativeHandle)->ClearLines();
}

 Standard_Integer OCIFSelect_SessionFile::NbLines()
{
  return ((IFSelect_SessionFile*)nativeHandle)->NbLines();
}

OCTCollection_AsciiString^ OCIFSelect_SessionFile::Line(Standard_Integer num)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((IFSelect_SessionFile*)nativeHandle)->Line(num);
  return gcnew OCTCollection_AsciiString(tmp);
}

 void OCIFSelect_SessionFile::AddLine(System::String^ line)
{
  ((IFSelect_SessionFile*)nativeHandle)->AddLine(OCConverter::StringToStandardCString(line));
}

 void OCIFSelect_SessionFile::RemoveLastLine()
{
  ((IFSelect_SessionFile*)nativeHandle)->RemoveLastLine();
}

 System::Boolean OCIFSelect_SessionFile::WriteFile(System::String^ name)
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->WriteFile(OCConverter::StringToStandardCString(name)));
}

 System::Boolean OCIFSelect_SessionFile::ReadFile(System::String^ name)
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->ReadFile(OCConverter::StringToStandardCString(name)));
}

 System::Boolean OCIFSelect_SessionFile::RecognizeFile(System::String^ headerline)
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->RecognizeFile(OCConverter::StringToStandardCString(headerline)));
}

 Standard_Integer OCIFSelect_SessionFile::Write(System::String^ filename)
{
  return ((IFSelect_SessionFile*)nativeHandle)->Write(OCConverter::StringToStandardCString(filename));
}

 Standard_Integer OCIFSelect_SessionFile::Read(System::String^ filename)
{
  return ((IFSelect_SessionFile*)nativeHandle)->Read(OCConverter::StringToStandardCString(filename));
}

 Standard_Integer OCIFSelect_SessionFile::WriteSession()
{
  return ((IFSelect_SessionFile*)nativeHandle)->WriteSession();
}

 Standard_Integer OCIFSelect_SessionFile::WriteEnd()
{
  return ((IFSelect_SessionFile*)nativeHandle)->WriteEnd();
}

 void OCIFSelect_SessionFile::WriteLine(System::String^ line, Standard_Character follow)
{
  ((IFSelect_SessionFile*)nativeHandle)->WriteLine(OCConverter::StringToStandardCString(line), follow);
}

 System::Boolean OCIFSelect_SessionFile::WriteOwn(OCNaroWrappers::OCStandard_Transient^ item)
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->WriteOwn(*((Handle_Standard_Transient*)item->Handle)));
}

 Standard_Integer OCIFSelect_SessionFile::ReadSession()
{
  return ((IFSelect_SessionFile*)nativeHandle)->ReadSession();
}

 Standard_Integer OCIFSelect_SessionFile::ReadEnd()
{
  return ((IFSelect_SessionFile*)nativeHandle)->ReadEnd();
}

 System::Boolean OCIFSelect_SessionFile::ReadLine()
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->ReadLine());
}

 void OCIFSelect_SessionFile::SplitLine(System::String^ line)
{
  ((IFSelect_SessionFile*)nativeHandle)->SplitLine(OCConverter::StringToStandardCString(line));
}

 System::Boolean OCIFSelect_SessionFile::ReadOwn(OCNaroWrappers::OCStandard_Transient^ item)
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->ReadOwn(*((Handle_Standard_Transient*)item->Handle)));
}

 void OCIFSelect_SessionFile::AddItem(OCNaroWrappers::OCStandard_Transient^ item, System::Boolean active)
{
  ((IFSelect_SessionFile*)nativeHandle)->AddItem(*((Handle_Standard_Transient*)item->Handle), OCConverter::BooleanToStandardBoolean(active));
}

 System::Boolean OCIFSelect_SessionFile::IsDone()
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->IsDone());
}

OCIFSelect_WorkSession^ OCIFSelect_SessionFile::WorkSession()
{
  Handle(IFSelect_WorkSession) tmp = ((IFSelect_SessionFile*)nativeHandle)->WorkSession();
  return gcnew OCIFSelect_WorkSession(&tmp);
}

 void OCIFSelect_SessionFile::NewItem(Standard_Integer ident, OCNaroWrappers::OCStandard_Transient^ par)
{
  ((IFSelect_SessionFile*)nativeHandle)->NewItem(ident, *((Handle_Standard_Transient*)par->Handle));
}

 void OCIFSelect_SessionFile::SetOwn(System::Boolean mode)
{
  ((IFSelect_SessionFile*)nativeHandle)->SetOwn(OCConverter::BooleanToStandardBoolean(mode));
}

 void OCIFSelect_SessionFile::SendVoid()
{
  ((IFSelect_SessionFile*)nativeHandle)->SendVoid();
}

 void OCIFSelect_SessionFile::SendItem(OCNaroWrappers::OCStandard_Transient^ par)
{
  ((IFSelect_SessionFile*)nativeHandle)->SendItem(*((Handle_Standard_Transient*)par->Handle));
}

 void OCIFSelect_SessionFile::SendText(System::String^ text)
{
  ((IFSelect_SessionFile*)nativeHandle)->SendText(OCConverter::StringToStandardCString(text));
}

 void OCIFSelect_SessionFile::SetLastGeneral(Standard_Integer lastgen)
{
  ((IFSelect_SessionFile*)nativeHandle)->SetLastGeneral(lastgen);
}

 Standard_Integer OCIFSelect_SessionFile::NbParams()
{
  return ((IFSelect_SessionFile*)nativeHandle)->NbParams();
}

 System::Boolean OCIFSelect_SessionFile::IsVoid(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->IsVoid(num));
}

 System::Boolean OCIFSelect_SessionFile::IsText(Standard_Integer num)
{
  return OCConverter::StandardBooleanToBoolean(((IFSelect_SessionFile*)nativeHandle)->IsText(num));
}

OCTCollection_AsciiString^ OCIFSelect_SessionFile::ParamValue(Standard_Integer num)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((IFSelect_SessionFile*)nativeHandle)->ParamValue(num);
  return gcnew OCTCollection_AsciiString(tmp);
}

OCTCollection_AsciiString^ OCIFSelect_SessionFile::TextValue(Standard_Integer num)
{
  TCollection_AsciiString* tmp = new TCollection_AsciiString();
  *tmp = ((IFSelect_SessionFile*)nativeHandle)->TextValue(num);
  return gcnew OCTCollection_AsciiString(tmp);
}

OCStandard_Transient^ OCIFSelect_SessionFile::ItemValue(Standard_Integer num)
{
  Handle(Standard_Transient) tmp = ((IFSelect_SessionFile*)nativeHandle)->ItemValue(num);
  return gcnew OCStandard_Transient(&tmp);
}


