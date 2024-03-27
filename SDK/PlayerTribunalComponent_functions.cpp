#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerTribunalComponent.PlayerTribunalComponent_C
// (None)

class UClass* UPlayerTribunalComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerTribunalComponent_C");

	return Clss;
}


// PlayerTribunalComponent_C PlayerTribunalComponent.Default__PlayerTribunalComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerTribunalComponent_C* UPlayerTribunalComponent_C::GetDefaultObj()
{
	static class UPlayerTribunalComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerTribunalComponent_C*>(UPlayerTribunalComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.GetUpgradeCost
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              CardIndexToCheck                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OutCost                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTribunalComponent_C::GetUpgradeCost(int32 CardIndexToCheck, int32* OutCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "GetUpgradeCost");

	Params::UPlayerTribunalComponent_C_GetUpgradeCost_Params Parms{};

	Parms.CardIndexToCheck = CardIndexToCheck;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCost != nullptr)
		*OutCost = Parms.OutCost;

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.TribualToggle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTribunalComponent_C::TribualToggle(bool Starting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "TribualToggle");

	Params::UPlayerTribunalComponent_C_TribualToggle_Params Parms{};

	Parms.Starting = Starting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.Event_ConfirmTribunalChoice
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTribunalComponent_C::Event_ConfirmTribunalChoice(int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "Event_ConfirmTribunalChoice");

	Params::UPlayerTribunalComponent_C_Event_ConfirmTribunalChoice_Params Parms{};

	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.TribunalToggle_MULTI
// (Net, NetReliable, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Starting                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTribunalComponent_C::TribunalToggle_MULTI(bool Starting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "TribunalToggle_MULTI");

	Params::UPlayerTribunalComponent_C_TribunalToggle_MULTI_Params Parms{};

	Parms.Starting = Starting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.AdvanceTrialScene_Server
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerTribunalComponent_C::AdvanceTrialScene_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "AdvanceTrialScene_Server");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerTribunalComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "ReceiveBeginPlay");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.UpgradeChosen
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Delay                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              ChoiceIndex                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTribunalComponent_C::UpgradeChosen(float Delay, int32 ChoiceIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "UpgradeChosen");

	Params::UPlayerTribunalComponent_C_UpgradeChosen_Params Parms{};

	Parms.Delay = Delay;
	Parms.ChoiceIndex = ChoiceIndex;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.Server_RerollUpgrades
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerTribunalComponent_C::Server_RerollUpgrades()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "Server_RerollUpgrades");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.Server_ImproveUpgrade
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCurrency                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradeCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTribunalComponent_C::Server_ImproveUpgrade(int32 CardIndex, int32 OldCurrency, int32 UpgradeCost)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "Server_ImproveUpgrade");

	Params::UPlayerTribunalComponent_C_Server_ImproveUpgrade_Params Parms{};

	Parms.CardIndex = CardIndex;
	Parms.OldCurrency = OldCurrency;
	Parms.UpgradeCost = UpgradeCost;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.RecordUpgradeServer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FQtnRolledUpgradeResult     Upgrade                                                          (BlueprintVisible, BlueprintReadOnly, Parm)

void UPlayerTribunalComponent_C::RecordUpgradeServer(const struct FQtnRolledUpgradeResult& Upgrade)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "RecordUpgradeServer");

	Params::UPlayerTribunalComponent_C_RecordUpgradeServer_Params Parms{};

	Parms.Upgrade = Upgrade;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.Event_OnTribunalUpgradeChoice_Local
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerTribunalComponent_C::Event_OnTribunalUpgradeChoice_Local()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "Event_OnTribunalUpgradeChoice_Local");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.AskServerToResetPlayer
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AUpgradeStation_BP_C*        UpgradeStation                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerTribunalComponent_C::AskServerToResetPlayer(class AUpgradeStation_BP_C* UpgradeStation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "AskServerToResetPlayer");

	Params::UPlayerTribunalComponent_C_AskServerToResetPlayer_Params Parms{};

	Parms.UpgradeStation = UpgradeStation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerTribunalComponent.PlayerTribunalComponent_C.ExecuteUbergraph_PlayerTribunalComponent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_CustomEvent_starting                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_Tribunal_Manager_Actor_C>K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor            (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              K2Node_CustomEvent_Delay                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_choiceIndex                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUpgradeInterface_C>K2Node_DynamicCast_AsUpgrade_Interface                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeStationComponent_C*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_FindPlayerData____FoundPlayer                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerUpgradeSessionState_C*CallFunc_FindPlayerData____PlayerSession                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FindPlayerData____PlayerIndex                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_CardIndex                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_oldCurrency                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_upgradeCost                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUpgradeInterface_C>K2Node_DynamicCast_AsUpgrade_Interface_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeResult     K2Node_CustomEvent_Upgrade                                       (None)
// int32                              K2Node_CustomEvent_choiceIndex_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IUpgradeInterface_C>K2Node_DynamicCast_AsUpgrade_Interface_2                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IInterface_Tribunal_Manager_Actor_C>K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_1          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AUpgradeStation_BP_C*        K2Node_CustomEvent_UpgradeStation                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IInterface_Tribunal_Manager_Actor_C>K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_2          (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerTribunalComponent_C::ExecuteUbergraph_PlayerTribunalComponent(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool K2Node_CustomEvent_starting, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor, bool K2Node_DynamicCast_bSuccess_2, float K2Node_CustomEvent_Delay, int32 K2Node_CustomEvent_choiceIndex, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface, bool K2Node_DynamicCast_bSuccess_3, class UUpgradeStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex, int32 K2Node_CustomEvent_CardIndex, int32 K2Node_CustomEvent_oldCurrency, int32 K2Node_CustomEvent_upgradeCost, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface_1, bool K2Node_DynamicCast_bSuccess_4, const struct FQtnRolledUpgradeResult& K2Node_CustomEvent_Upgrade, int32 K2Node_CustomEvent_choiceIndex_1, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface_2, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_1, bool K2Node_DynamicCast_bSuccess_6, class AUpgradeStation_BP_C* K2Node_CustomEvent_UpgradeStation, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_2, bool K2Node_DynamicCast_bSuccess_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerTribunalComponent_C", "ExecuteUbergraph_PlayerTribunalComponent");

	Params::UPlayerTribunalComponent_C_ExecuteUbergraph_PlayerTribunalComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.K2Node_CustomEvent_starting = K2Node_CustomEvent_starting;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor = K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_CustomEvent_Delay = K2Node_CustomEvent_Delay;
	Parms.K2Node_CustomEvent_choiceIndex = K2Node_CustomEvent_choiceIndex;
	Parms.K2Node_DynamicCast_AsUpgrade_Interface = K2Node_DynamicCast_AsUpgrade_Interface;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_FindPlayerData____FoundPlayer = CallFunc_FindPlayerData____FoundPlayer;
	Parms.CallFunc_FindPlayerData____PlayerSession = CallFunc_FindPlayerData____PlayerSession;
	Parms.CallFunc_FindPlayerData____PlayerIndex = CallFunc_FindPlayerData____PlayerIndex;
	Parms.K2Node_CustomEvent_CardIndex = K2Node_CustomEvent_CardIndex;
	Parms.K2Node_CustomEvent_oldCurrency = K2Node_CustomEvent_oldCurrency;
	Parms.K2Node_CustomEvent_upgradeCost = K2Node_CustomEvent_upgradeCost;
	Parms.K2Node_DynamicCast_AsUpgrade_Interface_1 = K2Node_DynamicCast_AsUpgrade_Interface_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.K2Node_CustomEvent_Upgrade = K2Node_CustomEvent_Upgrade;
	Parms.K2Node_CustomEvent_choiceIndex_1 = K2Node_CustomEvent_choiceIndex_1;
	Parms.K2Node_DynamicCast_AsUpgrade_Interface_2 = K2Node_DynamicCast_AsUpgrade_Interface_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_1 = K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.K2Node_CustomEvent_UpgradeStation = K2Node_CustomEvent_UpgradeStation;
	Parms.K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_2 = K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


