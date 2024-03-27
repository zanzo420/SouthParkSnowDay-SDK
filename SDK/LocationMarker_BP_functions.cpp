#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass LocationMarker_BP.LocationMarker_BP_C
// (Actor)

class UClass* ALocationMarker_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LocationMarker_BP_C");

	return Clss;
}


// LocationMarker_BP_C LocationMarker_BP.Default__LocationMarker_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALocationMarker_BP_C* ALocationMarker_BP_C::GetDefaultObj()
{
	static class ALocationMarker_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALocationMarker_BP_C*>(ALocationMarker_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function LocationMarker_BP.LocationMarker_BP_C.GetIndicatorData
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FIndicatorData              IndicatorData                                                    (Parm, OutParm, HasGetValueTypeHash)

void ALocationMarker_BP_C::GetIndicatorData(struct FIndicatorData* IndicatorData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationMarker_BP_C", "GetIndicatorData");

	Params::ALocationMarker_BP_C_GetIndicatorData_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (IndicatorData != nullptr)
		*IndicatorData = std::move(Parms.IndicatorData);

}


// Function LocationMarker_BP.LocationMarker_BP_C.MakeIndicatorData
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ALocationMarker_BP_C::MakeIndicatorData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LocationMarker_BP_C", "MakeIndicatorData");



	UObject::ProcessEvent(Func, nullptr);

}

}


