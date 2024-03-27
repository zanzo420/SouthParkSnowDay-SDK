#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C
// (None)

class UClass* UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C");

	return Clss;
}


// CartmanBoss_Bullshit_DecoyPhase_Nerfed_C CartmanBoss_Bullshit_DecoyPhase_Nerfed.Default__CartmanBoss_Bullshit_DecoyPhase_Nerfed_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C* UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::GetDefaultObj()
{
	static class UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C*>(UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::StaticClass()->DefaultObject);

	return Default;
}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.Count Dead Minions
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// int32                              Dead_Minions                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Deaders                                                          (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawn_CartmanBoss_C*     K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Count_Living_Snow_Turrets_Num_Snow_Turrets              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Count_Living_Snow_Cartmans_Num_Snow_Cartmans            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::Count_Dead_Minions(int32* Dead_Minions, int32 Deaders, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Count_Living_Snow_Turrets_Num_Snow_Turrets, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Count_Living_Snow_Cartmans_Num_Snow_Cartmans, int32 CallFunc_Subtract_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "Count Dead Minions");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_Count_Dead_Minions_Params Parms{};

	Parms.Deaders = Deaders;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss = K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Count_Living_Snow_Turrets_Num_Snow_Turrets = CallFunc_Count_Living_Snow_Turrets_Num_Snow_Turrets;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Count_Living_Snow_Cartmans_Num_Snow_Cartmans = CallFunc_Count_Living_Snow_Cartmans_Num_Snow_Cartmans;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (Dead_Minions != nullptr)
		*Dead_Minions = Parms.Dead_Minions;

}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.CanVerbStart
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UObject*                     PotentialTarget                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CanVerbStart_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawn_CartmanBoss_C*     K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)

bool UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::CanVerbStart(class UObject* PotentialTarget, bool CallFunc_CanVerbStart_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "CanVerbStart");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_CanVerbStart_Params Parms{};

	Parms.PotentialTarget = PotentialTarget;
	Parms.CallFunc_CanVerbStart_ReturnValue = CallFunc_CanVerbStart_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss = K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.IsVerbFinished
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

bool UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::IsVerbFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "IsVerbFinished");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_IsVerbFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.OnMontageEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::OnMontageEnded(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "OnMontageEnded");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_OnMontageEnded_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.OnMontageBlendingOut
// (Event, Public, BlueprintEvent)
// Parameters:
// class UAnimMontage*                Montage                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Interrupted                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::OnMontageBlendingOut(class UAnimMontage* Montage, bool Interrupted, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "OnMontageBlendingOut");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_OnMontageBlendingOut_Params Parms{};

	Parms.Montage = Montage;
	Parms.Interrupted = Interrupted;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.OnAnimNotify
// (Event, Public, BlueprintEvent)
// Parameters:
// class UQtnAnimNotify*              AnimNotify                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::OnAnimNotify(class UQtnAnimNotify* AnimNotify, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "OnAnimNotify");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_OnAnimNotify_Params Parms{};

	Parms.AnimNotify = AnimNotify;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.OnVerbStop
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnStopReason          StopReason                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::OnVerbStop(enum class EQtnStopReason StopReason, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "OnVerbStop");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_OnVerbStop_Params Parms{};

	Parms.StopReason = StopReason;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.OnVerbStart
// (Event, Public, BlueprintEvent)
// Parameters:
// class UObject*                     IntendedTarget                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::OnVerbStart(class UObject* IntendedTarget, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "OnVerbStart");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_OnVerbStart_Params Parms{};

	Parms.IntendedTarget = IntendedTarget;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CartmanBoss_Bullshit_DecoyPhase_Nerfed.CartmanBoss_Bullshit_DecoyPhase_Nerfed_C.ExecuteUbergraph_CartmanBoss_Bullshit_DecoyPhase_Nerfed
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage_1                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted_1                                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_4                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                K2Node_Event_montage                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_interrupted                                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_Event_isServer_3                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUD_C*                K2Node_DynamicCast_AsPlayer_HUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_GetGoalHUD_FoundWidget                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UGoalHUD_C*                  CallFunc_GetGoalHUD_AsGoal_HUD                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAnimNotify*              K2Node_Event_animNotify                                          (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UAnimNotify_Custom1_C*       K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1                    (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnStopReason          K2Node_Event_stopReason                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UEnemyNerfedActivationVerb_C*CallFunc_GetClassDefaultObject_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue                           (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                CallFunc_GetOwningBodyPawn_ReturnValue_1                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawn_CartmanBoss_C*     K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerController*        CallFunc_GetLocalPlayerControllerBP_localPlayerController        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerControllerBP_outputPin                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_StartVerbAction_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerControllerArchetype_C*K2Node_DynamicCast_AsQtn_Player_Controller_Archetype             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UObject*                     K2Node_Event_intendedTarget                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_isServer                                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C::ExecuteUbergraph_CartmanBoss_Bullshit_DecoyPhase_Nerfed(int32 EntryPoint, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UAnimMontage* K2Node_Event_montage_1, bool K2Node_Event_interrupted_1, bool K2Node_Event_isServer_4, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, bool K2Node_Event_isServer_3, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_GetGoalHUD_FoundWidget, class UGoalHUD_C* CallFunc_GetGoalHUD_AsGoal_HUD, class UQtnAnimNotify* K2Node_Event_animNotify, bool K2Node_Event_isServer_2, class UAnimNotify_Custom1_C* K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1, bool K2Node_DynamicCast_bSuccess_1, enum class EQtnStopReason K2Node_Event_stopReason, bool K2Node_Event_isServer_1, class UEnemyNerfedActivationVerb_C* CallFunc_GetClassDefaultObject_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class ABodyPawn_CartmanBoss_C* K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss, bool K2Node_DynamicCast_bSuccess_2, class AQtnPlayerController* CallFunc_GetLocalPlayerControllerBP_localPlayerController, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerControllerBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess_1, float CallFunc_StartVerbAction_ReturnValue, class AQtnPlayerControllerArchetype_C* K2Node_DynamicCast_AsQtn_Player_Controller_Archetype, bool K2Node_DynamicCast_bSuccess_3, class UObject* K2Node_Event_intendedTarget, bool K2Node_Event_isServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CartmanBoss_Bullshit_DecoyPhase_Nerfed_C", "ExecuteUbergraph_CartmanBoss_Bullshit_DecoyPhase_Nerfed");

	Params::UCartmanBoss_Bullshit_DecoyPhase_Nerfed_C_ExecuteUbergraph_CartmanBoss_Bullshit_DecoyPhase_Nerfed_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.K2Node_Event_montage_1 = K2Node_Event_montage_1;
	Parms.K2Node_Event_interrupted_1 = K2Node_Event_interrupted_1;
	Parms.K2Node_Event_isServer_4 = K2Node_Event_isServer_4;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.K2Node_Event_montage = K2Node_Event_montage;
	Parms.K2Node_Event_interrupted = K2Node_Event_interrupted;
	Parms.K2Node_Event_isServer_3 = K2Node_Event_isServer_3;
	Parms.K2Node_DynamicCast_AsPlayer_HUD = K2Node_DynamicCast_AsPlayer_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetGoalHUD_FoundWidget = CallFunc_GetGoalHUD_FoundWidget;
	Parms.CallFunc_GetGoalHUD_AsGoal_HUD = CallFunc_GetGoalHUD_AsGoal_HUD;
	Parms.K2Node_Event_animNotify = K2Node_Event_animNotify;
	Parms.K2Node_Event_isServer_2 = K2Node_Event_isServer_2;
	Parms.K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1 = K2Node_DynamicCast_AsQtn_Anim_Notify_Custom_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_Event_stopReason = K2Node_Event_stopReason;
	Parms.K2Node_Event_isServer_1 = K2Node_Event_isServer_1;
	Parms.CallFunc_GetClassDefaultObject_ReturnValue = CallFunc_GetClassDefaultObject_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue = CallFunc_GetOwningBodyPawn_ReturnValue;
	Parms.CallFunc_GetOwningBodyPawn_ReturnValue_1 = CallFunc_GetOwningBodyPawn_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss = K2Node_DynamicCast_AsBody_Pawn_Cartman_Boss;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetLocalPlayerControllerBP_localPlayerController = CallFunc_GetLocalPlayerControllerBP_localPlayerController;
	Parms.CallFunc_GetLocalPlayerControllerBP_outputPin = CallFunc_GetLocalPlayerControllerBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_StartVerbAction_ReturnValue = CallFunc_StartVerbAction_ReturnValue;
	Parms.K2Node_DynamicCast_AsQtn_Player_Controller_Archetype = K2Node_DynamicCast_AsQtn_Player_Controller_Archetype;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.K2Node_Event_intendedTarget = K2Node_Event_intendedTarget;
	Parms.K2Node_Event_isServer = K2Node_Event_isServer;

	UObject::ProcessEvent(Func, &Parms);

}

}


