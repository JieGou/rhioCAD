// File generated by CPPExt (CPP file)
//

#include "OSD_Chronometer.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCOSD_Chronometer::OCOSD_Chronometer(OSD_Chronometer* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCOSD_Chronometer::OCOSD_Chronometer(System::Boolean ThisThreadOnly) 
{
  nativeHandle = new OSD_Chronometer(OCConverter::BooleanToStandardBoolean(ThisThreadOnly));
}

 void OCOSD_Chronometer::Reset()
{
  ((OSD_Chronometer*)nativeHandle)->Reset();
}

 void OCOSD_Chronometer::Stop()
{
  ((OSD_Chronometer*)nativeHandle)->Stop();
}

 void OCOSD_Chronometer::Start()
{
  ((OSD_Chronometer*)nativeHandle)->Start();
}

 void OCOSD_Chronometer::Show()
{
  ((OSD_Chronometer*)nativeHandle)->Show();
}

 void OCOSD_Chronometer::Show(Standard_OStream& os)
{
  ((OSD_Chronometer*)nativeHandle)->Show(os);
}

 void OCOSD_Chronometer::Show(Standard_Real& UserSeconds)
{
  ((OSD_Chronometer*)nativeHandle)->Show(UserSeconds);
}

 void OCOSD_Chronometer::Show(Standard_Real& UserSeconds, Standard_Real& SystemSeconds)
{
  ((OSD_Chronometer*)nativeHandle)->Show(UserSeconds, SystemSeconds);
}

 void OCOSD_Chronometer::GetProcessCPU(Standard_Real& UserSeconds, Standard_Real& SystemSeconds)
{
  OSD_Chronometer::GetProcessCPU(UserSeconds, SystemSeconds);
}

 void OCOSD_Chronometer::GetThreadCPU(Standard_Real& UserSeconds, Standard_Real& SystemSeconds)
{
  OSD_Chronometer::GetThreadCPU(UserSeconds, SystemSeconds);
}


