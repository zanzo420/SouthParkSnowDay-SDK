#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerRunProgress.PlayerRunProgress_C
// (None)

class UClass* UPlayerRunProgress_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerRunProgress_C");

	return Clss;
}


// PlayerRunProgress_C PlayerRunProgress.Default__PlayerRunProgress_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerRunProgress_C* UPlayerRunProgress_C::GetDefaultObj()
{
	static class UPlayerRunProgress_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerRunProgress_C*>(UPlayerRunProgress_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerRunProgress.PlayerRunProgress_C.CheckWeaponConsistancy
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                bodyPawn                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               IsInvalid                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_rangedWeapon                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_meleeWeapon                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// bool                               CallFunc_NotEqual_NameName_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_NameName_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_NotEqual_GameplayTag_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRunProgress_C::CheckWeaponConsistancy(class AQtnBodyPawn* bodyPawn, bool* IsInvalid, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue, bool CallFunc_NotEqual_NameName_ReturnValue_1, bool CallFunc_NotEqual_GameplayTag_ReturnValue, bool CallFunc_NotEqual_GameplayTag_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRunProgress_C", "CheckWeaponConsistancy");

	Params::UPlayerRunProgress_C_CheckWeaponConsistancy_Params Parms{};

	Parms.bodyPawn = bodyPawn;
	Parms.CallFunc_GetIntendedEquippedWeapons_rangedWeapon = CallFunc_GetIntendedEquippedWeapons_rangedWeapon;
	Parms.CallFunc_GetIntendedEquippedWeapons_meleeWeapon = CallFunc_GetIntendedEquippedWeapons_meleeWeapon;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue = CallFunc_NotEqual_NameName_ReturnValue;
	Parms.CallFunc_NotEqual_NameName_ReturnValue_1 = CallFunc_NotEqual_NameName_ReturnValue_1;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue = CallFunc_NotEqual_GameplayTag_ReturnValue;
	Parms.CallFunc_NotEqual_GameplayTag_ReturnValue_1 = CallFunc_NotEqual_GameplayTag_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (IsInvalid != nullptr)
		*IsInvalid = Parms.IsInvalid;

}


// Function PlayerRunProgress.PlayerRunProgress_C.saveFamilyHeirlooms
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerRunProgress_C::SaveFamilyHeirlooms()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRunProgress_C", "saveFamilyHeirlooms");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerRunProgress.PlayerRunProgress_C.Check Family Heirlooms
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Player_has_family_heirlooms                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRunProgress_C::Check_Family_Heirlooms(bool* Player_has_family_heirlooms)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRunProgress_C", "Check Family Heirlooms");

	Params::UPlayerRunProgress_C_Check_Family_Heirlooms_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Player_has_family_heirlooms != nullptr)
		*Player_has_family_heirlooms = Parms.Player_has_family_heirlooms;

}


// Function PlayerRunProgress.PlayerRunProgress_C.OnDebugDisplay
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UQtnDebugWrapper*            DebugWrapper                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_BoolToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue                            (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue                               (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_1                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_IntToString_ReturnValue_1                          (ZeroConstructor, HasGetValueTypeHash)
// class FName                        CallFunc_Array_Get_Item                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_2                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_NameToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue                          (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_3                             (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Conv_FloatToString_ReturnValue_1                        (ZeroConstructor, HasGetValueTypeHash)
// class FString                      CallFunc_Concat_StrStr_ReturnValue_4                             (ZeroConstructor, HasGetValueTypeHash)

void UPlayerRunProgress_C::OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, class FName CallFunc_Array_Get_Item, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, const class FString& CallFunc_Conv_NameToString_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_3, const class FString& CallFunc_Conv_FloatToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_4)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRunProgress_C", "OnDebugDisplay");

	Params::UPlayerRunProgress_C_OnDebugDisplay_Params Parms{};

	Parms.DebugWrapper = DebugWrapper;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Conv_BoolToString_ReturnValue = CallFunc_Conv_BoolToString_ReturnValue;
	Parms.CallFunc_Conv_IntToString_ReturnValue = CallFunc_Conv_IntToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue = CallFunc_Concat_StrStr_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_1 = CallFunc_Concat_StrStr_ReturnValue_1;
	Parms.CallFunc_Conv_IntToString_ReturnValue_1 = CallFunc_Conv_IntToString_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Concat_StrStr_ReturnValue_2 = CallFunc_Concat_StrStr_ReturnValue_2;
	Parms.CallFunc_Conv_NameToString_ReturnValue = CallFunc_Conv_NameToString_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Conv_FloatToString_ReturnValue = CallFunc_Conv_FloatToString_ReturnValue;
	Parms.CallFunc_Concat_StrStr_ReturnValue_3 = CallFunc_Concat_StrStr_ReturnValue_3;
	Parms.CallFunc_Conv_FloatToString_ReturnValue_1 = CallFunc_Conv_FloatToString_ReturnValue_1;
	Parms.CallFunc_Concat_StrStr_ReturnValue_4 = CallFunc_Concat_StrStr_ReturnValue_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRunProgress.PlayerRunProgress_C.OnRunProgressCheckpoint_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnBodyPawn*                PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               FlushMissionProgress                                             (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRunProgress_C::OnRunProgressCheckpoint_ServerOnly(class AQtnBodyPawn* PlayerBody, bool FlushMissionProgress)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRunProgress_C", "OnRunProgressCheckpoint_ServerOnly");

	Params::UPlayerRunProgress_C_OnRunProgressCheckpoint_ServerOnly_Params Parms{};

	Parms.PlayerBody = PlayerBody;
	Parms.FlushMissionProgress = FlushMissionProgress;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRunProgress.PlayerRunProgress_C.OnReadyForGameplay_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:
// class AQtnPlayerPawn*              PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                PlayerBody                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               HasCheckpointHappened                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerRunProgress_C::OnReadyForGameplay_ServerOnly(class AQtnPlayerPawn* PlayerPawn, class AQtnBodyPawn* PlayerBody, bool HasCheckpointHappened)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRunProgress_C", "OnReadyForGameplay_ServerOnly");

	Params::UPlayerRunProgress_C_OnReadyForGameplay_ServerOnly_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.PlayerBody = PlayerBody;
	Parms.HasCheckpointHappened = HasCheckpointHappened;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerRunProgress.PlayerRunProgress_C.OnRunProgressReset_ServerOnly
// (Event, Public, BlueprintEvent)
// Parameters:

void UPlayerRunProgress_C::OnRunProgressReset_ServerOnly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRunProgress_C", "OnRunProgressReset_ServerOnly");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerRunProgress.PlayerRunProgress_C.ExecuteUbergraph_PlayerRunProgress
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnPlayerPawn*              K2Node_Event_playerPawn                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyPawn*                K2Node_Event_PlayerBody                                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_hasCheckpointHappened                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnBodyPawn*                K2Node_Event_PlayerBody_1                                        (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_flushMissionProgress                                (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnItemData                CallFunc_GetPower2ItemData_ReturnValue                           (ConstParm)
// TArray<class FName>                CallFunc_GetSessionUnlockedRowNames_ReturnValue                  (ConstParm, ReferenceParm)
// struct FQtnItemData                CallFunc_GetPower1ItemData_ReturnValue                           (ConstParm)
// class AQtnPlayerState*             CallFunc_GetOccupyingPlayerState_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FUniqueNetIdRepl            CallFunc_QtnGetUniqueId_ReturnValue                              (ConstParm, HasGetValueTypeHash)
// class UQtnEventHandlerMissionStats*CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_rangedWeapon                 (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnItem*                    CallFunc_GetIntendedEquippedWeapons_meleeWeapon                  (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetStatForPlayer_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnMissionStats            CallFunc_GetMissionStatsForPlayer_ReturnValue                    (None)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player_1                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_CheckWeaponConsistancy_IsInvalid                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue_2                          (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnEventHandlerMissionStats*CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue_1       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnAttributeComponent*      CallFunc_GetAttributeComponent_ReturnValue_1                     (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_GetAttributeValue_self_CastInput_3                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetAttributeValue_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_FloatFloat_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_SetAttributeValue_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// TScriptInterface<class IQtnAttributeContainerInterface>CallFunc_SetAttributeValue_self_CastInput_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPlayerSubProgress_Upgrades_C*CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerRunProgress_C::ExecuteUbergraph_PlayerRunProgress(int32 EntryPoint, class AQtnPlayerPawn* K2Node_Event_playerPawn, class AQtnBodyPawn* K2Node_Event_PlayerBody, bool K2Node_Event_hasCheckpointHappened, class AQtnBodyPawn* K2Node_Event_PlayerBody_1, bool K2Node_Event_flushMissionProgress, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FQtnItemData& CallFunc_GetPower2ItemData_ReturnValue, TArray<class FName>& CallFunc_GetSessionUnlockedRowNames_ReturnValue, const struct FQtnItemData& CallFunc_GetPower1ItemData_ReturnValue, class AQtnPlayerState* CallFunc_GetOccupyingPlayerState_ReturnValue, const struct FUniqueNetIdRepl& CallFunc_QtnGetUniqueId_ReturnValue, class UQtnEventHandlerMissionStats* CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_rangedWeapon, class AQtnItem* CallFunc_GetIntendedEquippedWeapons_meleeWeapon, float CallFunc_GetStatForPlayer_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnMissionStats& CallFunc_GetMissionStatsForPlayer_ReturnValue, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_1, int32 CallFunc_GetCurrencyQuantity_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_CheckWeaponConsistancy_IsInvalid, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue_2, class UQtnEventHandlerMissionStats* CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_2, float CallFunc_GetAttributeValue_ReturnValue_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_3, float CallFunc_GetAttributeValue_ReturnValue_3, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput_1, class UPlayerSubProgress_Upgrades_C* CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerRunProgress_C", "ExecuteUbergraph_PlayerRunProgress");

	Params::UPlayerRunProgress_C_ExecuteUbergraph_PlayerRunProgress_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_playerPawn = K2Node_Event_playerPawn;
	Parms.K2Node_Event_PlayerBody = K2Node_Event_PlayerBody;
	Parms.K2Node_Event_hasCheckpointHappened = K2Node_Event_hasCheckpointHappened;
	Parms.K2Node_Event_PlayerBody_1 = K2Node_Event_PlayerBody_1;
	Parms.K2Node_Event_flushMissionProgress = K2Node_Event_flushMissionProgress;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_GetPower2ItemData_ReturnValue = CallFunc_GetPower2ItemData_ReturnValue;
	Parms.CallFunc_GetSessionUnlockedRowNames_ReturnValue = CallFunc_GetSessionUnlockedRowNames_ReturnValue;
	Parms.CallFunc_GetPower1ItemData_ReturnValue = CallFunc_GetPower1ItemData_ReturnValue;
	Parms.CallFunc_GetOccupyingPlayerState_ReturnValue = CallFunc_GetOccupyingPlayerState_ReturnValue;
	Parms.CallFunc_QtnGetUniqueId_ReturnValue = CallFunc_QtnGetUniqueId_ReturnValue;
	Parms.CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue = CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue;
	Parms.CallFunc_GetIntendedEquippedWeapons_rangedWeapon = CallFunc_GetIntendedEquippedWeapons_rangedWeapon;
	Parms.CallFunc_GetIntendedEquippedWeapons_meleeWeapon = CallFunc_GetIntendedEquippedWeapons_meleeWeapon;
	Parms.CallFunc_GetStatForPlayer_ReturnValue = CallFunc_GetStatForPlayer_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetMissionStatsForPlayer_ReturnValue = CallFunc_GetMissionStatsForPlayer_ReturnValue;
	Parms.CallFunc_GetBodyInventory_ReturnValue_1 = CallFunc_GetBodyInventory_ReturnValue_1;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetAttributeComponent_ReturnValue = CallFunc_GetAttributeComponent_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GetAttributeValue_self_CastInput = CallFunc_GetAttributeValue_self_CastInput;
	Parms.CallFunc_GetAttributeValue_ReturnValue = CallFunc_GetAttributeValue_ReturnValue;
	Parms.CallFunc_GetAttributeValue_self_CastInput_1 = CallFunc_GetAttributeValue_self_CastInput_1;
	Parms.CallFunc_GetAttributeValue_ReturnValue_1 = CallFunc_GetAttributeValue_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player_1 = K2Node_DynamicCast_AsBody_Pawn_Player_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CheckWeaponConsistancy_IsInvalid = CallFunc_CheckWeaponConsistancy_IsInvalid;
	Parms.CallFunc_GetBodyInventory_ReturnValue_2 = CallFunc_GetBodyInventory_ReturnValue_2;
	Parms.CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue_1 = CallFunc_GetEventHandlerMissionStatsInstance_ReturnValue_1;
	Parms.CallFunc_GetAttributeComponent_ReturnValue_1 = CallFunc_GetAttributeComponent_ReturnValue_1;
	Parms.CallFunc_GetAttributeValue_self_CastInput_2 = CallFunc_GetAttributeValue_self_CastInput_2;
	Parms.CallFunc_GetAttributeValue_ReturnValue_2 = CallFunc_GetAttributeValue_ReturnValue_2;
	Parms.CallFunc_GetAttributeValue_self_CastInput_3 = CallFunc_GetAttributeValue_self_CastInput_3;
	Parms.CallFunc_GetAttributeValue_ReturnValue_3 = CallFunc_GetAttributeValue_ReturnValue_3;
	Parms.CallFunc_EqualEqual_FloatFloat_ReturnValue = CallFunc_EqualEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_SetAttributeValue_self_CastInput = CallFunc_SetAttributeValue_self_CastInput;
	Parms.CallFunc_SetAttributeValue_self_CastInput_1 = CallFunc_SetAttributeValue_self_CastInput_1;
	Parms.CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue = CallFunc_GetPlayerSubProgress_ServerOnly_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}


