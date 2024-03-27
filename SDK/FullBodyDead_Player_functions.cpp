#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass FullBodyDead_Player.FullBodyDead_Player_C
// (None)

class UClass* UFullBodyDead_Player_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FullBodyDead_Player_C");

	return Clss;
}


// FullBodyDead_Player_C FullBodyDead_Player.Default__FullBodyDead_Player_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFullBodyDead_Player_C* UFullBodyDead_Player_C::GetDefaultObj()
{
	static class UFullBodyDead_Player_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UFullBodyDead_Player_C*>(UFullBodyDead_Player_C::StaticClass()->DefaultObject);

	return Default;
}


// Function FullBodyDead_Player.FullBodyDead_Player_C.OnEnterBodyState
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnBodyState*               PreviousBodyState                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullBodyDead_Player_C::OnEnterBodyState(class UQtnBodyState* PreviousBodyState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyDead_Player_C", "OnEnterBodyState");

	Params::UFullBodyDead_Player_C_OnEnterBodyState_Params Parms{};

	Parms.PreviousBodyState = PreviousBodyState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullBodyDead_Player.FullBodyDead_Player_C.OnExitBodyState
// (Event, Public, BlueprintEvent)
// Parameters:
// TSubclassOf<class UQtnBodyState>   NextBodyStateClass                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UFullBodyDead_Player_C::OnExitBodyState(TSubclassOf<class UQtnBodyState> NextBodyStateClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyDead_Player_C", "OnExitBodyState");

	Params::UFullBodyDead_Player_C_OnExitBodyState_Params Parms{};

	Parms.NextBodyStateClass = NextBodyStateClass;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullBodyDead_Player.FullBodyDead_Player_C.OnTickBodyState
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              DeltaSeconds                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UFullBodyDead_Player_C::OnTickBodyState(float DeltaSeconds)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyDead_Player_C", "OnTickBodyState");

	Params::UFullBodyDead_Player_C_OnTickBodyState_Params Parms{};

	Parms.DeltaSeconds = DeltaSeconds;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FullBodyDead_Player.FullBodyDead_Player_C.ExecuteUbergraph_FullBodyDead_Player
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPawn_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnBodyState*               K2Node_Event_previousBodyState                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnBodyState>   K2Node_Event_nextBodyStateClass                                  (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPawn_ReturnValue_1                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPawn_ReturnValue_2                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCameraComponent*         CallFunc_GetQtnCameraComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnCameraComponent*         CallFunc_GetQtnCameraComponent_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnCameraBehavior*          CallFunc_RequestCameraBehavior_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_DeltaSeconds                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPawn_ReturnValue_3                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnIntentions          CallFunc_GetIntentions_ReturnValue                               (ConstParm, ContainsInstancedReference)
// bool                               CallFunc_IsBodyActionPressed_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimMontage*                CallFunc_Array_Random_OutItem                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Random_OutIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// float                              CallFunc_PlayDeathMontage_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPlayingDeathMontage_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningPawn_ReturnValue_4                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningPawn_ReturnValue_5                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnFXActor*                 CallFunc_BP_BeginEffect_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnDamageInfo              K2Node_MakeStruct_QtnDamageInfo                                  (ContainsInstancedReference)
// TArray<class AActor*>              CallFunc_QtnDoRadialDamage_ReturnValue                           (ReferenceParm)

void UFullBodyDead_Player_C::ExecuteUbergraph_FullBodyDead_Player(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, class UQtnBodyState* K2Node_Event_previousBodyState, TSubclassOf<class UQtnBodyState> K2Node_Event_nextBodyStateClass, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_2, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnCameraBehavior* CallFunc_RequestCameraBehavior_ReturnValue, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_3, const struct FQtnPawnIntentions& CallFunc_GetIntentions_ReturnValue, bool CallFunc_IsBodyActionPressed_ReturnValue, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayDeathMontage_ReturnValue, bool CallFunc_IsPlayingDeathMontage_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_4, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue_5, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, TArray<class AActor*>& CallFunc_QtnDoRadialDamage_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FullBodyDead_Player_C", "ExecuteUbergraph_FullBodyDead_Player");

	Params::UFullBodyDead_Player_C_ExecuteUbergraph_FullBodyDead_Player_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetOwningPawn_ReturnValue = CallFunc_GetOwningPawn_ReturnValue;
	Parms.K2Node_Event_previousBodyState = K2Node_Event_previousBodyState;
	Parms.K2Node_Event_nextBodyStateClass = K2Node_Event_nextBodyStateClass;
	Parms.CallFunc_GetOwningPawn_ReturnValue_1 = CallFunc_GetOwningPawn_ReturnValue_1;
	Parms.CallFunc_GetOwningPawn_ReturnValue_2 = CallFunc_GetOwningPawn_ReturnValue_2;
	Parms.CallFunc_GetQtnCameraComponent_ReturnValue = CallFunc_GetQtnCameraComponent_ReturnValue;
	Parms.CallFunc_GetQtnCameraComponent_ReturnValue_1 = CallFunc_GetQtnCameraComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_RequestCameraBehavior_ReturnValue = CallFunc_RequestCameraBehavior_ReturnValue;
	Parms.K2Node_Event_DeltaSeconds = K2Node_Event_DeltaSeconds;
	Parms.CallFunc_GetOwningPawn_ReturnValue_3 = CallFunc_GetOwningPawn_ReturnValue_3;
	Parms.CallFunc_GetIntentions_ReturnValue = CallFunc_GetIntentions_ReturnValue;
	Parms.CallFunc_IsBodyActionPressed_ReturnValue = CallFunc_IsBodyActionPressed_ReturnValue;
	Parms.CallFunc_Array_Random_OutItem = CallFunc_Array_Random_OutItem;
	Parms.CallFunc_Array_Random_OutIndex = CallFunc_Array_Random_OutIndex;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.CallFunc_PlayDeathMontage_ReturnValue = CallFunc_PlayDeathMontage_ReturnValue;
	Parms.CallFunc_IsPlayingDeathMontage_ReturnValue = CallFunc_IsPlayingDeathMontage_ReturnValue;
	Parms.CallFunc_GetOwningPawn_ReturnValue_4 = CallFunc_GetOwningPawn_ReturnValue_4;
	Parms.CallFunc_GetOwningPawn_ReturnValue_5 = CallFunc_GetOwningPawn_ReturnValue_5;
	Parms.CallFunc_BP_BeginEffect_ReturnValue = CallFunc_BP_BeginEffect_ReturnValue;
	Parms.K2Node_MakeStruct_QtnDamageInfo = K2Node_MakeStruct_QtnDamageInfo;
	Parms.CallFunc_QtnDoRadialDamage_ReturnValue = CallFunc_QtnDoRadialDamage_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


