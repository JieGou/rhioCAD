// File generated by CPPExt (CPP file)
//

#include "STEPControl_Controller.h"
#include "../Converter.h"
#include "../Interface/Interface_InterfaceModel.h"
#include "../Transfer/Transfer_ActorOfTransientProcess.h"
#include "../XSControl/XSControl_WorkSession.h"
#include "../TopoDS/TopoDS_Shape.h"
#include "../Transfer/Transfer_FinderProcess.h"


using namespace OCNaroWrappers;

OCSTEPControl_Controller::OCSTEPControl_Controller(Handle(STEPControl_Controller)* nativeHandle) : OCXSControl_Controller((OCDummy^)nullptr)

{
  this->nativeHandle = new Handle_STEPControl_Controller(*nativeHandle);
}

OCSTEPControl_Controller::OCSTEPControl_Controller() : OCXSControl_Controller((OCDummy^)nullptr)

{
  nativeHandle = new Handle_STEPControl_Controller(new STEPControl_Controller());
}

OCInterface_InterfaceModel^ OCSTEPControl_Controller::NewModel()
{
  Handle(Interface_InterfaceModel) tmp = (*((Handle_STEPControl_Controller*)nativeHandle))->NewModel();
  return gcnew OCInterface_InterfaceModel(&tmp);
}

OCTransfer_ActorOfTransientProcess^ OCSTEPControl_Controller::ActorRead(OCNaroWrappers::OCInterface_InterfaceModel^ model)
{
  Handle(Transfer_ActorOfTransientProcess) tmp = (*((Handle_STEPControl_Controller*)nativeHandle))->ActorRead(*((Handle_Interface_InterfaceModel*)model->Handle));
  return gcnew OCTransfer_ActorOfTransientProcess(&tmp);
}

 void OCSTEPControl_Controller::Customise(OCNaroWrappers::OCXSControl_WorkSession^ WS)
{
  (*((Handle_STEPControl_Controller*)nativeHandle))->Customise(*((Handle_XSControl_WorkSession*)WS->Handle));
}

 OCIFSelect_ReturnStatus OCSTEPControl_Controller::TransferWriteShape(OCNaroWrappers::OCTopoDS_Shape^ shape, OCNaroWrappers::OCTransfer_FinderProcess^ FP, OCNaroWrappers::OCInterface_InterfaceModel^ model, Standard_Integer modetrans)
{
  return (OCIFSelect_ReturnStatus)((*((Handle_STEPControl_Controller*)nativeHandle))->TransferWriteShape(*((TopoDS_Shape*)shape->Handle), *((Handle_Transfer_FinderProcess*)FP->Handle), *((Handle_Interface_InterfaceModel*)model->Handle), modetrans));
}

 System::Boolean OCSTEPControl_Controller::Init()
{
  return OCConverter::StandardBooleanToBoolean(STEPControl_Controller::Init());
}

