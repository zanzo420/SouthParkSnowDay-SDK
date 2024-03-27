#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Loudspeaker_BP.Loudspeaker_BP_C
// (Actor)

class UClass* ALoudspeaker_BP_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Loudspeaker_BP_C");

	return Clss;
}


// Loudspeaker_BP_C Loudspeaker_BP.Default__Loudspeaker_BP_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ALoudspeaker_BP_C* ALoudspeaker_BP_C::GetDefaultObj()
{
	static class ALoudspeaker_BP_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ALoudspeaker_BP_C*>(ALoudspeaker_BP_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Loudspeaker_BP.Loudspeaker_BP_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_Lerp_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotator_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetRelativeRotation_SweepHitResult                   (IsPlainOldData, NoDestructor, ContainsInstancedReference)

void ALoudspeaker_BP_C::UserConstructionScript(float CallFunc_Lerp_ReturnValue, const struct FRotator& CallFunc_MakeRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetRelativeRotation_SweepHitResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Loudspeaker_BP_C", "UserConstructionScript");

	Params::ALoudspeaker_BP_C_UserConstructionScript_Params Parms{};

	Parms.CallFunc_Lerp_ReturnValue = CallFunc_Lerp_ReturnValue;
	Parms.CallFunc_MakeRotator_ReturnValue = CallFunc_MakeRotator_ReturnValue;
	Parms.CallFunc_K2_SetRelativeRotation_SweepHitResult = CallFunc_K2_SetRelativeRotation_SweepHitResult;

	UObject::ProcessEvent(Func, &Parms);

}

}


