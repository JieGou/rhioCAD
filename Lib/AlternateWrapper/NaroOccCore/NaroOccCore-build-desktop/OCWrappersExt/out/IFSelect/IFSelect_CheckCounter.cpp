// File generated by CPPExt (CPP file)
//

#include "IFSelect_CheckCounter.h"
#include "../Converter.h"
#include "../MoniTool/MoniTool_SignText.h"
#include "../Interface/Interface_CheckIterator.h"
#include "../Interface/Interface_InterfaceModel.h"


using namespace OCNaroWrappers;

OCIFSelect_CheckCounter::OCIFSelect_CheckCounter(Handle(IFSelect_CheckCounter)* nativeHandle) : OCIFSelect_SignatureList((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_IFSelect_CheckCounter(*nativeHandle);
}

OCIFSelect_CheckCounter::OCIFSelect_CheckCounter(System::Boolean withlist) : OCIFSelect_SignatureList((OCDummy^)nullptr)

{
  nativeHandle = new Handle_IFSelect_CheckCounter(new IFSelect_CheckCounter(OCConverter::BooleanToStandardBoolean(withlist)));
}

 void OCIFSelect_CheckCounter::SetSignature(OCNaroWrappers::OCMoniTool_SignText^ sign)
{
  (*((Handle_IFSelect_CheckCounter*)nativeHandle))->SetSignature(*((Handle_MoniTool_SignText*)sign->Handle));
}

OCMoniTool_SignText^ OCIFSelect_CheckCounter::Signature()
{
  Handle(MoniTool_SignText) tmp = (*((Handle_IFSelect_CheckCounter*)nativeHandle))->Signature();
  return gcnew OCMoniTool_SignText(&tmp);
}

 void OCIFSelect_CheckCounter::Analyse(OCNaroWrappers::OCInterface_CheckIterator^ list, OCNaroWrappers::OCInterface_InterfaceModel^ model, System::Boolean original, System::Boolean failsonly)
{
  (*((Handle_IFSelect_CheckCounter*)nativeHandle))->Analyse(*((Interface_CheckIterator*)list->Handle), *((Handle_Interface_InterfaceModel*)model->Handle), OCConverter::BooleanToStandardBoolean(original), OCConverter::BooleanToStandardBoolean(failsonly));
}

