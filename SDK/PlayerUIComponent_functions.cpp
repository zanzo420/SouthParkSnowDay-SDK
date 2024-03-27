#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerUIComponent.PlayerUIComponent_C
// (None)

class UClass* UPlayerUIComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerUIComponent_C");

	return Clss;
}


// PlayerUIComponent_C PlayerUIComponent.Default__PlayerUIComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerUIComponent_C* UPlayerUIComponent_C::GetDefaultObj()
{
	static class UPlayerUIComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerUIComponent_C*>(UPlayerUIComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerUIComponent.PlayerUIComponent_C.SetHelpIconVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantVisible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnScreenPulse              K2Node_MakeStruct_OnScreenPulse                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIndicatorType              K2Node_MakeStruct_IndicatorType                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEffects                    K2Node_MakeStruct_Effects                                        (HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIndicatorData              K2Node_MakeStruct_IndicatorData                                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScreenIndicator_C*          CallFunc_AddRemoveTrackedActor_indicatorOut                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUIComponent_C::SetHelpIconVisibility(bool WantVisible, const struct FOnScreenPulse& K2Node_MakeStruct_OnScreenPulse, const struct FIndicatorType& K2Node_MakeStruct_IndicatorType, const struct FEffects& K2Node_MakeStruct_Effects, class AActor* CallFunc_GetOwner_ReturnValue, const struct FIndicatorData& K2Node_MakeStruct_IndicatorData, bool CallFunc_IsValid_ReturnValue, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUIComponent_C", "SetHelpIconVisibility");

	Params::UPlayerUIComponent_C_SetHelpIconVisibility_Params Parms{};

	Parms.WantVisible = WantVisible;
	Parms.K2Node_MakeStruct_OnScreenPulse = K2Node_MakeStruct_OnScreenPulse;
	Parms.K2Node_MakeStruct_IndicatorType = K2Node_MakeStruct_IndicatorType;
	Parms.K2Node_MakeStruct_Effects = K2Node_MakeStruct_Effects;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_IndicatorData = K2Node_MakeStruct_IndicatorData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddRemoveTrackedActor_indicatorOut = CallFunc_AddRemoveTrackedActor_indicatorOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUIComponent.PlayerUIComponent_C.SetDeathIconVisibility
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               WantVisible                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FOnScreenPulse              K2Node_MakeStruct_OnScreenPulse                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIndicatorType              K2Node_MakeStruct_IndicatorType                                  (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEffects                    K2Node_MakeStruct_Effects                                        (HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FIndicatorData              K2Node_MakeStruct_IndicatorData                                  (HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UScreenIndicator_C*          CallFunc_AddRemoveTrackedActor_indicatorOut                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUIComponent_C::SetDeathIconVisibility(bool WantVisible, const struct FOnScreenPulse& K2Node_MakeStruct_OnScreenPulse, const struct FIndicatorType& K2Node_MakeStruct_IndicatorType, const struct FEffects& K2Node_MakeStruct_Effects, class AActor* CallFunc_GetOwner_ReturnValue, const struct FIndicatorData& K2Node_MakeStruct_IndicatorData, bool CallFunc_IsValid_ReturnValue, class UScreenIndicator_C* CallFunc_AddRemoveTrackedActor_indicatorOut)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUIComponent_C", "SetDeathIconVisibility");

	Params::UPlayerUIComponent_C_SetDeathIconVisibility_Params Parms{};

	Parms.WantVisible = WantVisible;
	Parms.K2Node_MakeStruct_OnScreenPulse = K2Node_MakeStruct_OnScreenPulse;
	Parms.K2Node_MakeStruct_IndicatorType = K2Node_MakeStruct_IndicatorType;
	Parms.K2Node_MakeStruct_Effects = K2Node_MakeStruct_Effects;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_MakeStruct_IndicatorData = K2Node_MakeStruct_IndicatorData;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_AddRemoveTrackedActor_indicatorOut = CallFunc_AddRemoveTrackedActor_indicatorOut;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUIComponent.PlayerUIComponent_C.InitLocalUI
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerUI*                PlayerUI                                                         (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, InstancedReference, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerHUDScreen_C*          CallFunc_GetScreen_ReturnValue                                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetMainWidget_ReturnValue                               (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAliveAndConscious_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerHUD_C*                K2Node_DynamicCast_AsPlayer_HUD                                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUIComponent_C::InitLocalUI(class AQtnPlayerUI*& PlayerUI, class UPlayerHUDScreen_C* CallFunc_GetScreen_ReturnValue, class UUserWidget* CallFunc_GetMainWidget_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class UPlayerHUD_C* K2Node_DynamicCast_AsPlayer_HUD, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUIComponent_C", "InitLocalUI");

	Params::UPlayerUIComponent_C_InitLocalUI_Params Parms{};

	Parms.PlayerUI = PlayerUI;
	Parms.CallFunc_GetScreen_ReturnValue = CallFunc_GetScreen_ReturnValue;
	Parms.CallFunc_GetMainWidget_ReturnValue = CallFunc_GetMainWidget_ReturnValue;
	Parms.CallFunc_IsAliveAndConscious_ReturnValue = CallFunc_IsAliveAndConscious_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_HUD = K2Node_DynamicCast_AsPlayer_HUD;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUIComponent.PlayerUIComponent_C.BodyAliveChangeEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      AlivenessInstigator                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       OldBodyAliveness                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       bodyAliveness                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsServer                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUIComponent_C::BodyAliveChangeEvent_Event_0(class AQtnBodyPawn* bodyPawn, class AActor* AlivenessInstigator, enum class EQtnBodyAliveness OldBodyAliveness, enum class EQtnBodyAliveness bodyAliveness, bool IsServer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUIComponent_C", "BodyAliveChangeEvent_Event_0");

	Params::UPlayerUIComponent_C_BodyAliveChangeEvent_Event_0_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.AlivenessInstigator = AlivenessInstigator;
	Parms.OldBodyAliveness = OldBodyAliveness;
	Parms.bodyAliveness = bodyAliveness;
	Parms.IsServer = IsServer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUIComponent.PlayerUIComponent_C.ReadyForUIEvent_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnPlayerController*        LocalPlayerController                                            (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                LocalPlayerUI                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUIComponent_C::ReadyForUIEvent_Event_0(class AQtnPlayerController* LocalPlayerController, class AQtnPlayerUI* LocalPlayerUI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUIComponent_C", "ReadyForUIEvent_Event_0");

	Params::UPlayerUIComponent_C_ReadyForUIEvent_Event_0_Params Parms{};

	Parms.LocalPlayerController = LocalPlayerController;
	Parms.LocalPlayerUI = LocalPlayerUI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUIComponent.PlayerUIComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerUIComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUIComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerUIComponent.PlayerUIComponent_C.Dispatcher_NeedsHelp_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NeedsHelp                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUIComponent_C::Dispatcher_NeedsHelp_Event_0(bool NeedsHelp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUIComponent_C", "Dispatcher_NeedsHelp_Event_0");

	Params::UPlayerUIComponent_C_Dispatcher_NeedsHelp_Event_0_Params Parms{};

	Parms.NeedsHelp = NeedsHelp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUIComponent.PlayerUIComponent_C.ExecuteUbergraph_PlayerUIComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlledPlayer_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor)
// class AQtnBodyPawn*                K2Node_CustomEvent_BodyPawn                                      (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_alivenessInstigator                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_oldBodyAliveness                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnBodyAliveness       K2Node_CustomEvent_bodyAliveness                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_isServer                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnPlayerUI*                CallFunc_GetLocalPlayerUIBP_localPlayerUI                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputValidityEnum  CallFunc_GetLocalPlayerUIBP_outputPin                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsReadyForSafeUsage_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerController*        K2Node_CustomEvent_localPlayerController                         (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerUI*                K2Node_CustomEvent_localPlayerUI                                 (ConstParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnBase_C*             K2Node_DynamicCast_AsBody_Pawn_Base                              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_needsHelp                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUIComponent_C::ExecuteUbergraph_PlayerUIComponent(int32 EntryPoint, bool CallFunc_IsLocallyControlledPlayer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class AQtnBodyPawn* K2Node_CustomEvent_BodyPawn, class AActor* K2Node_CustomEvent_alivenessInstigator, enum class EQtnBodyAliveness K2Node_CustomEvent_oldBodyAliveness, enum class EQtnBodyAliveness K2Node_CustomEvent_bodyAliveness, bool K2Node_CustomEvent_isServer, class AQtnPlayerUI* CallFunc_GetLocalPlayerUIBP_localPlayerUI, enum class EQtnOutputValidityEnum CallFunc_GetLocalPlayerUIBP_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_IsReadyForSafeUsage_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPlayerController* K2Node_CustomEvent_localPlayerController, class AQtnPlayerUI* K2Node_CustomEvent_localPlayerUI, class AActor* CallFunc_GetOwner_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess, bool K2Node_CustomEvent_needsHelp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUIComponent_C", "ExecuteUbergraph_PlayerUIComponent");

	Params::UPlayerUIComponent_C_ExecuteUbergraph_PlayerUIComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsLocallyControlledPlayer_ReturnValue = CallFunc_IsLocallyControlledPlayer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CustomEvent_BodyPawn = K2Node_CustomEvent_BodyPawn;
	Parms.K2Node_CustomEvent_alivenessInstigator = K2Node_CustomEvent_alivenessInstigator;
	Parms.K2Node_CustomEvent_oldBodyAliveness = K2Node_CustomEvent_oldBodyAliveness;
	Parms.K2Node_CustomEvent_bodyAliveness = K2Node_CustomEvent_bodyAliveness;
	Parms.K2Node_CustomEvent_isServer = K2Node_CustomEvent_isServer;
	Parms.CallFunc_GetLocalPlayerUIBP_localPlayerUI = CallFunc_GetLocalPlayerUIBP_localPlayerUI;
	Parms.CallFunc_GetLocalPlayerUIBP_outputPin = CallFunc_GetLocalPlayerUIBP_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_IsReadyForSafeUsage_ReturnValue = CallFunc_IsReadyForSafeUsage_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.K2Node_CustomEvent_localPlayerController = K2Node_CustomEvent_localPlayerController;
	Parms.K2Node_CustomEvent_localPlayerUI = K2Node_CustomEvent_localPlayerUI;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Base = K2Node_DynamicCast_AsBody_Pawn_Base;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_needsHelp = K2Node_CustomEvent_needsHelp;

	UObject::ProcessEvent(Func, &Parms);

}

}


