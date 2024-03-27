#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BodyPawnAI_Adult_Brute_Liane.BodyPawnAI_Adult_Brute_Liane_C
// (Actor, Pawn)

class UClass* ABodyPawnAI_Adult_Brute_Liane_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BodyPawnAI_Adult_Brute_Liane_C");

	return Clss;
}


// BodyPawnAI_Adult_Brute_Liane_C BodyPawnAI_Adult_Brute_Liane.Default__BodyPawnAI_Adult_Brute_Liane_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class ABodyPawnAI_Adult_Brute_Liane_C* ABodyPawnAI_Adult_Brute_Liane_C::GetDefaultObj()
{
	static class ABodyPawnAI_Adult_Brute_Liane_C* Default = nullptr;

	if (!Default)
		Default = static_cast<ABodyPawnAI_Adult_Brute_Liane_C*>(ABodyPawnAI_Adult_Brute_Liane_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BodyPawnAI_Adult_Brute_Liane.BodyPawnAI_Adult_Brute_Liane_C.HandleDeath
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)

void ABodyPawnAI_Adult_Brute_Liane_C::HandleDeath(const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAI_Adult_Brute_Liane_C", "HandleDeath");

	Params::ABodyPawnAI_Adult_Brute_Liane_C_HandleDeath_Params Parms{};

	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BodyPawnAI_Adult_Brute_Liane.BodyPawnAI_Adult_Brute_Liane_C.OnQtnReadyForGameplay
// (Event, Public, BlueprintEvent)
// Parameters:

void ABodyPawnAI_Adult_Brute_Liane_C::OnQtnReadyForGameplay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAI_Adult_Brute_Liane_C", "OnQtnReadyForGameplay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function BodyPawnAI_Adult_Brute_Liane.BodyPawnAI_Adult_Brute_Liane_C.ExecuteUbergraph_BodyPawnAI_Adult_Brute_Liane
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void ABodyPawnAI_Adult_Brute_Liane_C::ExecuteUbergraph_BodyPawnAI_Adult_Brute_Liane(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BodyPawnAI_Adult_Brute_Liane_C", "ExecuteUbergraph_BodyPawnAI_Adult_Brute_Liane");

	Params::ABodyPawnAI_Adult_Brute_Liane_C_ExecuteUbergraph_BodyPawnAI_Adult_Brute_Liane_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


