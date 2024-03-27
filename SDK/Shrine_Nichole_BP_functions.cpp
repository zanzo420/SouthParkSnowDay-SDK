#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Shrine_Nichole_BP.Shrine_Nichole_BP_C
// (Actor)

class UClass* AShrine_Nichole_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Shrine_Nichole_BP_C");

	return Clss;
}


// Shrine_Nichole_BP_C Shrine_Nichole_BP.Default__Shrine_Nichole_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class AShrine_Nichole_BP_C* AShrine_Nichole_BP_C::GetDefaultObj()
{
	static class AShrine_Nichole_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<AShrine_Nichole_BP_C*>(AShrine_Nichole_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Shrine_Nichole_BP.Shrine_Nichole_BP_C.Local Update Elements
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Exist                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerOccupiedBody_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetLocalPlayerOccupiedBody_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void AShrine_Nichole_BP_C::Local_Update_Elements(bool Exist, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerOccupiedBody_outputPin, class AQtnBodyPawn* CallFunc_GetLocalPlayerOccupiedBody_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Shrine_Nichole_BP_C", "Local Update Elements");

	Params::AShrine_Nichole_BP_C_Local_Update_Elements_Params Parms{};

	Parms.Exist = Exist;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_outputPin = CallFunc_GetLocalPlayerOccupiedBody_outputPin;
	Parms.CallFunc_GetLocalPlayerOccupiedBody_ReturnValue = CallFunc_GetLocalPlayerOccupiedBody_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


