#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass Perk_RulebookRewardBonus.Perk_RulebookRewardBonus_C
// (None)

class UClass* UPerk_RulebookRewardBonus_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Perk_RulebookRewardBonus_C");

	return Clss;
}


// Perk_RulebookRewardBonus_C Perk_RulebookRewardBonus.Default__Perk_RulebookRewardBonus_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPerk_RulebookRewardBonus_C* UPerk_RulebookRewardBonus_C::GetDefaultObj()
{
	static class UPerk_RulebookRewardBonus_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPerk_RulebookRewardBonus_C*>(UPerk_RulebookRewardBonus_C::StaticClass()->DefaultObject);

	return Default;
}


// Function Perk_RulebookRewardBonus.Perk_RulebookRewardBonus_C.GetPerkValueAtInstanceCount
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ValueIndex                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              InstanceCount                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UPerk_RulebookRewardBonus_C::GetPerkValueAtInstanceCount(int32 ValueIndex, int32 InstanceCount, float CallFunc_Multiply_IntFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_RulebookRewardBonus_C", "GetPerkValueAtInstanceCount");

	Params::UPerk_RulebookRewardBonus_C_GetPerkValueAtInstanceCount_Params Parms{};

	Parms.ValueIndex = ValueIndex;
	Parms.InstanceCount = InstanceCount;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function Perk_RulebookRewardBonus.Perk_RulebookRewardBonus_C.OnPerkStackChangeEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                TargetBodyPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PreviousLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              NewLevel                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPerk_RulebookRewardBonus_C::OnPerkStackChangeEvent(class AQtnBodyPawn* TargetBodyPawn, int32 PreviousLevel, int32 NewLevel, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_RulebookRewardBonus_C", "OnPerkStackChangeEvent");

	Params::UPerk_RulebookRewardBonus_C_OnPerkStackChangeEvent_Params Parms{};

	Parms.TargetBodyPawn = TargetBodyPawn;
	Parms.PreviousLevel = PreviousLevel;
	Parms.NewLevel = NewLevel;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Perk_RulebookRewardBonus.Perk_RulebookRewardBonus_C.ExecuteUbergraph_Perk_RulebookRewardBonus
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_TargetBodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_PreviousLevel                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewLevel                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Conv_IntToFloat_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPerk_RulebookRewardBonus_C::ExecuteUbergraph_Perk_RulebookRewardBonus(int32 EntryPoint, class AQtnBodyPawn* K2Node_Event_TargetBodyPawn, int32 K2Node_Event_PreviousLevel, int32 K2Node_Event_NewLevel, bool K2Node_Event_isServer, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, float CallFunc_Conv_IntToFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Perk_RulebookRewardBonus_C", "ExecuteUbergraph_Perk_RulebookRewardBonus");

	Params::UPerk_RulebookRewardBonus_C_ExecuteUbergraph_Perk_RulebookRewardBonus_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_TargetBodyPawn = K2Node_Event_TargetBodyPawn;
	Parms.K2Node_Event_PreviousLevel = K2Node_Event_PreviousLevel;
	Parms.K2Node_Event_NewLevel = K2Node_Event_NewLevel;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Conv_IntToFloat_ReturnValue = CallFunc_Conv_IntToFloat_ReturnValue;
	Parms.CallFunc_Multiply_FloatFloat_ReturnValue = CallFunc_Multiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


