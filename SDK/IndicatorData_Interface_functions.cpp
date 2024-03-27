#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass IndicatorData_Interface.IndicatorData_Interface_C
// (None)

class UClass* IIndicatorData_Interface_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IndicatorData_Interface_C");

	return Clss;
}


// IndicatorData_Interface_C IndicatorData_Interface.Default__IndicatorData_Interface_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class IIndicatorData_Interface_C* IIndicatorData_Interface_C::GetDefaultObj()
{
	static class IIndicatorData_Interface_C* Default = nullptr;

	if (!Default)
		Default = static_cast<IIndicatorData_Interface_C*>(IIndicatorData_Interface_C::StaticClass()->DefaultObject);

	return Default;
}


// Function IndicatorData_Interface.IndicatorData_Interface_C.GetIndicatorData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData              IndicatorData                                                    (Parm, OutParm, HasGetValueTypeHash)

void IIndicatorData_Interface_C::GetIndicatorData(struct FIndicatorData* IndicatorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("IndicatorData_Interface_C", "GetIndicatorData");

	Params::IIndicatorData_Interface_C_GetIndicatorData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorData != nullptr)
		*IndicatorData = std::move(Parms.IndicatorData);

}

}


