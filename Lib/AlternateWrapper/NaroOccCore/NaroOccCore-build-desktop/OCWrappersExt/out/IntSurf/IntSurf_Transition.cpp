// File generated by CPPExt (CPP file)
//

#include "IntSurf_Transition.h"
#include "../Converter.h"


using namespace OCNaroWrappers;

OCIntSurf_Transition::OCIntSurf_Transition(IntSurf_Transition* nativeHandle) 
{
  this->nativeHandle = nativeHandle;
}

OCIntSurf_Transition::OCIntSurf_Transition() 
{
  nativeHandle = new IntSurf_Transition();
}

OCIntSurf_Transition::OCIntSurf_Transition(System::Boolean Tangent, OCIntSurf_TypeTrans Type) 
{
  nativeHandle = new IntSurf_Transition(OCConverter::BooleanToStandardBoolean(Tangent), (IntSurf_TypeTrans)Type);
}

OCIntSurf_Transition::OCIntSurf_Transition(System::Boolean Tangent, OCIntSurf_Situation Situ, System::Boolean Oppos) 
{
  nativeHandle = new IntSurf_Transition(OCConverter::BooleanToStandardBoolean(Tangent), (IntSurf_Situation)Situ, OCConverter::BooleanToStandardBoolean(Oppos));
}

 void OCIntSurf_Transition::SetValue(System::Boolean Tangent, OCIntSurf_TypeTrans Type)
{
  ((IntSurf_Transition*)nativeHandle)->SetValue(OCConverter::BooleanToStandardBoolean(Tangent), (IntSurf_TypeTrans)Type);
}

 void OCIntSurf_Transition::SetValue(System::Boolean Tangent, OCIntSurf_Situation Situ, System::Boolean Oppos)
{
  ((IntSurf_Transition*)nativeHandle)->SetValue(OCConverter::BooleanToStandardBoolean(Tangent), (IntSurf_Situation)Situ, OCConverter::BooleanToStandardBoolean(Oppos));
}

 void OCIntSurf_Transition::SetValue()
{
  ((IntSurf_Transition*)nativeHandle)->SetValue();
}

 OCIntSurf_TypeTrans OCIntSurf_Transition::TransitionType()
{
  return (OCIntSurf_TypeTrans)(((IntSurf_Transition*)nativeHandle)->TransitionType());
}

 System::Boolean OCIntSurf_Transition::IsTangent()
{
  return OCConverter::StandardBooleanToBoolean(((IntSurf_Transition*)nativeHandle)->IsTangent());
}

 OCIntSurf_Situation OCIntSurf_Transition::Situation()
{
  return (OCIntSurf_Situation)(((IntSurf_Transition*)nativeHandle)->Situation());
}

 System::Boolean OCIntSurf_Transition::IsOpposite()
{
  return OCConverter::StandardBooleanToBoolean(((IntSurf_Transition*)nativeHandle)->IsOpposite());
}


