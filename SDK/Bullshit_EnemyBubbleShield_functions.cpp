#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C
// (None)

class UClass* UBullshit_EnemyBubbleShield_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Bullshit_EnemyBubbleShield_C");

	return Clss;
}


// Bullshit_EnemyBubbleShield_C Bullshit_EnemyBubbleShield.Default__Bullshit_EnemyBubbleShield_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBullshit_EnemyBubbleShield_C* UBullshit_EnemyBubbleShield_C::GetDefaultObj()
{
	static class UBullshit_EnemyBubbleShield_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBullshit_EnemyBubbleShield_C*>(UBullshit_EnemyBubbleShield_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue_1                       (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)

void UBullshit_EnemyBubbleShield_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_GetClassDisplayName_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_GetClassDisplayName_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_EnemyBubbleShield_C", "OnDebugDisplay");

	Params::UBullshit_EnemyBubbleShield_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_GetClassDisplayName_ReturnValue_1 = CallFunc_GetClassDisplayName_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C.OnBullshitTick
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBullshit_EnemyBubbleShield_C::OnBullshitTick(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_EnemyBubbleShield_C", "OnBullshitTick");

	Params::UBullshit_EnemyBubbleShield_C_OnBullshitTick_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C.Get Time
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBullshit_EnemyBubbleShield_C::Get_Time()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_EnemyBubbleShield_C", "Get Time");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C.PlayerEnterWorldEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawnSoul                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                OccupiedBodyPawn                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsLocalPlayer                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UBullshit_EnemyBubbleShield_C::PlayerEnterWorldEvent_Event_0(class AQtnPlayerPawn* PlayerPawnSoul, class AQtnBodyPawn* OccupiedBodyPawn, bool IsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_EnemyBubbleShield_C", "PlayerEnterWorldEvent_Event_0");

	Params::UBullshit_EnemyBubbleShield_C_PlayerEnterWorldEvent_Event_0_Params Parms{};

	Parms.PlayerPawnSoul = PlayerPawnSoul;
	Parms.OccupiedBodyPawn = OccupiedBodyPawn;
	Parms.IsLocalPlayer = IsLocalPlayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C.OnBullshitStop
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBullshit_EnemyBubbleShield_C::OnBullshitStop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_EnemyBubbleShield_C", "OnBullshitStop");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C.OnBullshitStart
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBullshit_EnemyBubbleShield_C::OnBullshitStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_EnemyBubbleShield_C", "OnBullshitStart");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C.getTargets
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBullshit_EnemyBubbleShield_C::GetTargets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_EnemyBubbleShield_C", "getTargets");



	UObject::ProcessEvent(Func, nullptr);

}


// Function Bullshit_EnemyBubbleShield.Bullshit_EnemyBubbleShield_C.ExecuteUbergraph_Bullshit_EnemyBubbleShield
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_CustomEvent_playerPawnSoul                                (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_CustomEvent_occupiedBodyPawn                              (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isLocalPlayer                                 (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnStatusEffect*            CallFunc_AddStatusEffect_ServerOnly_ReturnValue                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBullshit_EnemyBubbleShield_C::ExecuteUbergraph_Bullshit_EnemyBubbleShield(int32 EntryPoint, class AQtnPlayerPawn* K2Node_CustomEvent_playerPawnSoul, class AQtnBodyPawn* K2Node_CustomEvent_occupiedBodyPawn, bool K2Node_CustomEvent_isLocalPlayer, int32 CallFunc_Array_AddUnique_ReturnValue, class UQtnStatusEffect* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, float K2Node_Event_DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Bullshit_EnemyBubbleShield_C", "ExecuteUbergraph_Bullshit_EnemyBubbleShield");

	Params::UBullshit_EnemyBubbleShield_C_ExecuteUbergraph_Bullshit_EnemyBubbleShield_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_playerPawnSoul = K2Node_CustomEvent_playerPawnSoul;
	Parms.K2Node_CustomEvent_occupiedBodyPawn = K2Node_CustomEvent_occupiedBodyPawn;
	Parms.K2Node_CustomEvent_isLocalPlayer = K2Node_CustomEvent_isLocalPlayer;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_AddStatusEffect_ServerOnly_ReturnValue = CallFunc_AddStatusEffect_ServerOnly_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}

}


