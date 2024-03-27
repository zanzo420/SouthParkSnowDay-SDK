#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass PlayerUpgradeSessionState.PlayerUpgradeSessionState_C
// (None)

class UClass* UPlayerUpgradeSessionState_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayerUpgradeSessionState_C");

	return Clss;
}


// PlayerUpgradeSessionState_C PlayerUpgradeSessionState.Default__PlayerUpgradeSessionState_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayerUpgradeSessionState_C* UPlayerUpgradeSessionState_C::GetDefaultObj()
{
	static class UPlayerUpgradeSessionState_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayerUpgradeSessionState_C*>(UPlayerUpgradeSessionState_C::StaticClass()->DefaultObject);

	return Default;
}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.IsThisHenrietta
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               IsHenrietta                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnReactionToTag           K2Node_MakeStruct_QtnReactionToTag                               (NoDestructor)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::IsThisHenrietta(bool* IsHenrietta, const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent, bool CallFunc_Array_Contains_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "IsThisHenrietta");

	Params::UPlayerUpgradeSessionState_C_IsThisHenrietta_Params Parms{};

	Parms.K2Node_MakeStruct_QtnReactionToTag = K2Node_MakeStruct_QtnReactionToTag;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (IsHenrietta != nullptr)
		*IsHenrietta = Parms.IsHenrietta;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.InternalForceRequiredCards
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnRolledUpgradeResult>RolledCards                                                      (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FQtnRolledUpgradeResult>AdjustedCards                                                    (Parm, OutParm)
// TArray<struct FQtnRolledUpgradeResult>LocalAdjustedCards                                               (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsThisMapForHordeMode_outputPin                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnDebugUpgradeCard       K2Node_MakeStruct_FQtnDebugUpgradeCard                           (NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnTagPresence             K2Node_MakeStruct_QtnTagPresence                                 (NoDestructor)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item_1                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsThisHenrietta_IsHenrietta                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Array_RemoveItem_ReturnValue_1                          (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::InternalForceRequiredCards(TArray<struct FQtnRolledUpgradeResult>& RolledCards, TArray<struct FQtnRolledUpgradeResult>* AdjustedCards, const TArray<struct FQtnRolledUpgradeResult>& LocalAdjustedCards, int32 Temp_int_Array_Index_Variable, enum class EQtnOutputYesNoEnum CallFunc_IsThisMapForHordeMode_outputPin, bool K2Node_SwitchEnum_CmpSuccess, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FFQtnDebugUpgradeCard& K2Node_MakeStruct_FQtnDebugUpgradeCard, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, const struct FQtnTagPresence& K2Node_MakeStruct_QtnTagPresence, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsThisHenrietta_IsHenrietta, bool CallFunc_Array_RemoveItem_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "InternalForceRequiredCards");

	Params::UPlayerUpgradeSessionState_C_InternalForceRequiredCards_Params Parms{};

	Parms.RolledCards = RolledCards;
	Parms.LocalAdjustedCards = LocalAdjustedCards;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_IsThisMapForHordeMode_outputPin = CallFunc_IsThisMapForHordeMode_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_FQtnDebugUpgradeCard = K2Node_MakeStruct_FQtnDebugUpgradeCard;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.K2Node_MakeStruct_QtnTagPresence = K2Node_MakeStruct_QtnTagPresence;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_IsThisHenrietta_IsHenrietta = CallFunc_IsThisHenrietta_IsHenrietta;
	Parms.CallFunc_Array_RemoveItem_ReturnValue_1 = CallFunc_Array_RemoveItem_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (AdjustedCards != nullptr)
		*AdjustedCards = std::move(Parms.AdjustedCards);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.GetPlayerPlacementSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UPlayerPlacementComp_C*      PlacementSlot                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPlacementComp_C*      K2Node_DynamicCast_AsPlayer_Placement_Comp                       (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::GetPlayerPlacementSlot(class UPlayerPlacementComp_C** PlacementSlot, class UPlayerPlacementComp_C* K2Node_DynamicCast_AsPlayer_Placement_Comp, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "GetPlayerPlacementSlot");

	Params::UPlayerUpgradeSessionState_C_GetPlayerPlacementSlot_Params Parms{};

	Parms.K2Node_DynamicCast_AsPlayer_Placement_Comp = K2Node_DynamicCast_AsPlayer_Placement_Comp;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (PlacementSlot != nullptr)
		*PlacementSlot = Parms.PlacementSlot;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.GetTribunalSlot
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class APlayerTribunalSlot_BP_C*    TribSlot                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    K2Node_DynamicCast_AsPlayer_Tribunal_Slot_BP                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::GetTribunalSlot(class APlayerTribunalSlot_BP_C** TribSlot, class APlayerTribunalSlot_BP_C* K2Node_DynamicCast_AsPlayer_Tribunal_Slot_BP, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "GetTribunalSlot");

	Params::UPlayerUpgradeSessionState_C_GetTribunalSlot_Params Parms{};

	Parms.K2Node_DynamicCast_AsPlayer_Tribunal_Slot_BP = K2Node_DynamicCast_AsPlayer_Tribunal_Slot_BP;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (TribSlot != nullptr)
		*TribSlot = Parms.TribSlot;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.GetOwningUpgradeStation
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UUpgradeStationComponent_C*  StationComponent                                                 (Parm, OutParm, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeStationComponent_C*  K2Node_DynamicCast_AsUpgrade_Station_Component                   (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::GetOwningUpgradeStation(class UUpgradeStationComponent_C** StationComponent, class UUpgradeStationComponent_C* K2Node_DynamicCast_AsUpgrade_Station_Component, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "GetOwningUpgradeStation");

	Params::UPlayerUpgradeSessionState_C_GetOwningUpgradeStation_Params Parms{};

	Parms.K2Node_DynamicCast_AsUpgrade_Station_Component = K2Node_DynamicCast_AsUpgrade_Station_Component;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (StationComponent != nullptr)
		*StationComponent = Parms.StationComponent;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.ReleasePlayerFromSession_ServerOnly
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::ReleasePlayerFromSession_ServerOnly(class AQtnBodyController* CallFunc_GetBodyController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "ReleasePlayerFromSession_ServerOnly");

	Params::UPlayerUpgradeSessionState_C_ReleasePlayerFromSession_ServerOnly_Params Parms{};

	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Upgrade Rolled Card Rarity
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CardIndex                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OldCurrency                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UpgradeCost                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NewRarity                                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>ArrayToModify                                                    (Edit, BlueprintVisible)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// struct FGameplayTag                CallFunc_GetNextRarityLevel_NextRarity                           (NoDestructor, HasGetValueTypeHash)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_1                    (None)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue_2                    (None)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)

void UPlayerUpgradeSessionState_C::Upgrade_Rolled_Card_Rarity(int32 CardIndex, int32 OldCurrency, int32 UpgradeCost, const struct FGameplayTag& NewRarity, const TArray<struct FQtnRolledUpgradeResult>& ArrayToModify, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, const struct FGameplayTag& CallFunc_GetNextRarityLevel_NextRarity, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_2, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Upgrade Rolled Card Rarity");

	Params::UPlayerUpgradeSessionState_C_Upgrade_Rolled_Card_Rarity_Params Parms{};

	Parms.CardIndex = CardIndex;
	Parms.OldCurrency = OldCurrency;
	Parms.UpgradeCost = UpgradeCost;
	Parms.NewRarity = NewRarity;
	Parms.ArrayToModify = ArrayToModify;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GetNextRarityLevel_NextRarity = CallFunc_GetNextRarityLevel_NextRarity;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_1 = CallFunc_StaticMakeEventMessage_ReturnValue_1;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue_2 = CallFunc_StaticMakeEventMessage_ReturnValue_2;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.SetPlayerAsSessionMember_ServerOnly
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerTribunalSlot_BP_C*    CallFunc_GetTribunalSlot_TribSlot_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnBodyController*          CallFunc_GetBodyController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer____IsServer                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnPawnMontage             K2Node_MakeStruct_QtnPawnMontage                                 (NoDestructor)
// struct FQtnActionIntention         K2Node_MakeStruct_QtnActionIntention                             (NoDestructor)

void UPlayerUpgradeSessionState_C::SetPlayerAsSessionMember_ServerOnly(class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot, class APlayerTribunalSlot_BP_C* CallFunc_GetTribunalSlot_TribSlot_1, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsServer____IsServer, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "SetPlayerAsSessionMember_ServerOnly");

	Params::UPlayerUpgradeSessionState_C_SetPlayerAsSessionMember_ServerOnly_Params Parms{};

	Parms.CallFunc_GetTribunalSlot_TribSlot = CallFunc_GetTribunalSlot_TribSlot;
	Parms.CallFunc_GetTribunalSlot_TribSlot_1 = CallFunc_GetTribunalSlot_TribSlot_1;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;
	Parms.CallFunc_GetBodyController_ReturnValue = CallFunc_GetBodyController_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsServer____IsServer = CallFunc_IsServer____IsServer;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_QtnPawnMontage = K2Node_MakeStruct_QtnPawnMontage;
	Parms.K2Node_MakeStruct_QtnActionIntention = K2Node_MakeStruct_QtnActionIntention;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.CalculateFreeRerollsForPlayer
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              FreeRerollsToGrant                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::CalculateFreeRerollsForPlayer(int32* FreeRerollsToGrant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "CalculateFreeRerollsForPlayer");

	Params::UPlayerUpgradeSessionState_C_CalculateFreeRerollsForPlayer_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (FreeRerollsToGrant != nullptr)
		*FreeRerollsToGrant = Parms.FreeRerollsToGrant;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.HasCurrencyForImproveRarity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQtnRolledUpgradeResult     CardToCheck                                                      (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               Has_Currency                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Improve_Rarity_Cost_OutCost                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Calculate_Improve_Rarity_Cost_wasModified               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::HasCurrencyForImproveRarity(const struct FQtnRolledUpgradeResult& CardToCheck, bool* Has_Currency, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_Calculate_Improve_Rarity_Cost_OutCost, int32 CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost, bool CallFunc_Calculate_Improve_Rarity_Cost_wasModified, int32 CallFunc_GetCurrencyQuantity_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "HasCurrencyForImproveRarity");

	Params::UPlayerUpgradeSessionState_C_HasCurrencyForImproveRarity_Params Parms{};

	Parms.CardToCheck = CardToCheck;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_OutCost = CallFunc_Calculate_Improve_Rarity_Cost_OutCost;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost = CallFunc_Calculate_Improve_Rarity_Cost_OriginalCost;
	Parms.CallFunc_Calculate_Improve_Rarity_Cost_wasModified = CallFunc_Calculate_Improve_Rarity_Cost_wasModified;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Currency != nullptr)
		*Has_Currency = Parms.Has_Currency;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Calculate Improve Rarity Cost
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayTag                RarityTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              OutCost                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OriginalCost                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasModified                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              UnmodifiedCost                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CostModification                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetCurrentLevelName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_StrStr_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnUpgrade>>CallFunc_GetCurrentEnemyUpgrades_ReturnValue                     (ConstParm, ReferenceParm)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Min_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Map_Find_Value                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Map_Find_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UPerk_SweetTalker_C*         CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::Calculate_Improve_Rarity_Cost(const struct FGameplayTag& RarityTag, int32* OutCost, int32* OriginalCost, bool* WasModified, int32 UnmodifiedCost, int32 CostModification, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class UClass* Temp_class_Variable, int32 CallFunc_FFloor_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Min_ReturnValue, int32 CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, class UPerk_SweetTalker_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Calculate Improve Rarity Cost");

	Params::UPlayerUpgradeSessionState_C_Calculate_Improve_Rarity_Cost_Params Parms{};

	Parms.RarityTag = RarityTag;
	Parms.UnmodifiedCost = UnmodifiedCost;
	Parms.CostModification = CostModification;
	Parms.CallFunc_GetCurrentLevelName_ReturnValue = CallFunc_GetCurrentLevelName_ReturnValue;
	Parms.CallFunc_EqualEqual_StrStr_ReturnValue = CallFunc_EqualEqual_StrStr_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetCurrentEnemyUpgrades_ReturnValue = CallFunc_GetCurrentEnemyUpgrades_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_NotEqual_IntInt_ReturnValue = CallFunc_NotEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Min_ReturnValue = CallFunc_Min_ReturnValue;
	Parms.CallFunc_Map_Find_Value = CallFunc_Map_Find_Value;
	Parms.CallFunc_Map_Find_ReturnValue = CallFunc_Map_Find_ReturnValue;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutCost != nullptr)
		*OutCost = Parms.OutCost;

	if (OriginalCost != nullptr)
		*OriginalCost = Parms.OriginalCost;

	if (WasModified != nullptr)
		*WasModified = Parms.WasModified;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Can Improve Rarity
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FQtnRolledUpgradeResult     Card_To_Check                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// bool                               CanImproveRarity                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CanImprove                                                       (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetNextRarityLevel_NextRarity                           (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::Can_Improve_Rarity(const struct FQtnRolledUpgradeResult& Card_To_Check, bool* CanImproveRarity, bool CanImprove, const struct FGameplayTag& CallFunc_GetNextRarityLevel_NextRarity, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Can Improve Rarity");

	Params::UPlayerUpgradeSessionState_C_Can_Improve_Rarity_Params Parms{};

	Parms.Card_To_Check = Card_To_Check;
	Parms.CanImprove = CanImprove;
	Parms.CallFunc_GetNextRarityLevel_NextRarity = CallFunc_GetNextRarityLevel_NextRarity;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanImproveRarity != nullptr)
		*CanImproveRarity = Parms.CanImproveRarity;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.HasCurrencyForReroll
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Has_Currency                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_Calculate_Reroll_Cost_WasModified                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Calculate_Reroll_Cost_Cost                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Reroll_Cost_OriginalCost                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UQtnInventoryComponent*      CallFunc_GetBodyInventory_ReturnValue                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetCurrencyQuantity_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::HasCurrencyForReroll(bool* Has_Currency, bool CallFunc_Calculate_Reroll_Cost_WasModified, int32 CallFunc_Calculate_Reroll_Cost_Cost, int32 CallFunc_Calculate_Reroll_Cost_OriginalCost, class UQtnInventoryComponent* CallFunc_GetBodyInventory_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, int32 CallFunc_GetCurrencyQuantity_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "HasCurrencyForReroll");

	Params::UPlayerUpgradeSessionState_C_HasCurrencyForReroll_Params Parms{};

	Parms.CallFunc_Calculate_Reroll_Cost_WasModified = CallFunc_Calculate_Reroll_Cost_WasModified;
	Parms.CallFunc_Calculate_Reroll_Cost_Cost = CallFunc_Calculate_Reroll_Cost_Cost;
	Parms.CallFunc_Calculate_Reroll_Cost_OriginalCost = CallFunc_Calculate_Reroll_Cost_OriginalCost;
	Parms.CallFunc_GetBodyInventory_ReturnValue = CallFunc_GetBodyInventory_ReturnValue;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_GetCurrencyQuantity_ReturnValue = CallFunc_GetCurrencyQuantity_ReturnValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Currency != nullptr)
		*Has_Currency = Parms.Has_Currency;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.HasFreeReroll
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               Has_Free_Reroll                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::HasFreeReroll(bool* Has_Free_Reroll, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanOR_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "HasFreeReroll");

	Params::UPlayerUpgradeSessionState_C_HasFreeReroll_Params Parms{};

	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Has_Free_Reroll != nullptr)
		*Has_Free_Reroll = Parms.Has_Free_Reroll;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Calculate Reroll Cost
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// bool                               WasModified                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Cost                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              OriginalCost                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              UnmodifiedRerollCost                                             (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CostModification                                                 (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               WasRerollCostModified                                            (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EQtnOutputYesNoEnum     CallFunc_IsObjectOfType_outputPin                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsThisHenrietta_IsHenrietta                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UClass*                      Temp_class_Variable                                              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Add_FloatFloat_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AQtnGameState*               CallFunc_GetQtnGameState_ReturnValue                             (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UQtnUpgrade>>CallFunc_GetCurrentEnemyUpgrades_ReturnValue                     (ConstParm, ReferenceParm)
// int32                              CallFunc_FFloor_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerk_CardShark_C*           CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_Subtract_FloatFloat_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Multiply_IntFloat_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FFloor_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::Calculate_Reroll_Cost(bool* WasModified, int32* Cost, int32* OriginalCost, int32 UnmodifiedRerollCost, int32 CostModification, bool WasRerollCostModified, class AActor* CallFunc_GetOwner_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_IsThisHenrietta_IsHenrietta, class UClass* Temp_class_Variable, float CallFunc_Add_FloatFloat_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, int32 CallFunc_FFloor_ReturnValue, bool CallFunc_Array_Contains_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, class UPerk_CardShark_C* CallFunc_FindPerk_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue_1, int32 CallFunc_FFloor_ReturnValue_1, int32 CallFunc_Subtract_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Calculate Reroll Cost");

	Params::UPlayerUpgradeSessionState_C_Calculate_Reroll_Cost_Params Parms{};

	Parms.UnmodifiedRerollCost = UnmodifiedRerollCost;
	Parms.CostModification = CostModification;
	Parms.WasRerollCostModified = WasRerollCostModified;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_IsObjectOfType_outputPin = CallFunc_IsObjectOfType_outputPin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_IsThisHenrietta_IsHenrietta = CallFunc_IsThisHenrietta_IsHenrietta;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.CallFunc_Add_FloatFloat_ReturnValue = CallFunc_Add_FloatFloat_ReturnValue;
	Parms.CallFunc_GetQtnGameState_ReturnValue = CallFunc_GetQtnGameState_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue = CallFunc_Multiply_IntFloat_ReturnValue;
	Parms.CallFunc_GetCurrentEnemyUpgrades_ReturnValue = CallFunc_GetCurrentEnemyUpgrades_ReturnValue;
	Parms.CallFunc_FFloor_ReturnValue = CallFunc_FFloor_ReturnValue;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Subtract_FloatFloat_ReturnValue = CallFunc_Subtract_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_IntFloat_ReturnValue_1 = CallFunc_Multiply_IntFloat_ReturnValue_1;
	Parms.CallFunc_FFloor_ReturnValue_1 = CallFunc_FFloor_ReturnValue_1;
	Parms.CallFunc_Subtract_IntInt_ReturnValue_1 = CallFunc_Subtract_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (WasModified != nullptr)
		*WasModified = Parms.WasModified;

	if (Cost != nullptr)
		*Cost = Parms.Cost;

	if (OriginalCost != nullptr)
		*OriginalCost = Parms.OriginalCost;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Reroll Upgrades
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               HandleCurrencyConsumption                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class ABodyPawnPlayer_C*           K2Node_DynamicCast_AsBody_Pawn_Player                            (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Calculate_Reroll_Cost_WasModified                       (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Calculate_Reroll_Cost_Cost                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Calculate_Reroll_Cost_OriginalCost                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_MakeLiteralGameplayTag_ReturnValue                      (NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_Internal_Roll_Upgrades_RolledUpgrades                   (ReferenceParm)

void UPlayerUpgradeSessionState_C::Reroll_Upgrades(bool HandleCurrencyConsumption, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent, bool CallFunc_Calculate_Reroll_Cost_WasModified, int32 CallFunc_Calculate_Reroll_Cost_Cost, int32 CallFunc_Calculate_Reroll_Cost_OriginalCost, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, TArray<struct FQtnRolledUpgradeResult>& CallFunc_Internal_Roll_Upgrades_RolledUpgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Reroll Upgrades");

	Params::UPlayerUpgradeSessionState_C_Reroll_Upgrades_Params Parms{};

	Parms.HandleCurrencyConsumption = HandleCurrencyConsumption;
	Parms.K2Node_DynamicCast_AsBody_Pawn_Player = K2Node_DynamicCast_AsBody_Pawn_Player;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;
	Parms.CallFunc_Calculate_Reroll_Cost_WasModified = CallFunc_Calculate_Reroll_Cost_WasModified;
	Parms.CallFunc_Calculate_Reroll_Cost_Cost = CallFunc_Calculate_Reroll_Cost_Cost;
	Parms.CallFunc_Calculate_Reroll_Cost_OriginalCost = CallFunc_Calculate_Reroll_Cost_OriginalCost;
	Parms.CallFunc_MakeLiteralGameplayTag_ReturnValue = CallFunc_MakeLiteralGameplayTag_ReturnValue;
	Parms.CallFunc_Internal_Roll_Upgrades_RolledUpgrades = CallFunc_Internal_Roll_Upgrades_RolledUpgrades;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Reset Upgrade Progress
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              CallFunc_CalculateFreeRerollsForPlayer_FreeRerollsToGrant        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::Reset_Upgrade_Progress(int32 CallFunc_CalculateFreeRerollsForPlayer_FreeRerollsToGrant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Reset Upgrade Progress");

	Params::UPlayerUpgradeSessionState_C_Reset_Upgrade_Progress_Params Parms{};

	Parms.CallFunc_CalculateFreeRerollsForPlayer_FreeRerollsToGrant = CallFunc_CalculateFreeRerollsForPlayer_FreeRerollsToGrant;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Complete Upgrade Process
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerUpgradeSessionState_C::Complete_Upgrade_Process()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Complete Upgrade Process");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.GetNextRarityLevel
// (Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                RarityTag                                                        (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                NextRarity                                                       (Parm, OutParm, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::GetNextRarityLevel(struct FGameplayTag& RarityTag, struct FGameplayTag* NextRarity, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "GetNextRarityLevel");

	Params::UPlayerUpgradeSessionState_C_GetNextRarityLevel_Params Parms{};

	Parms.RarityTag = RarityTag;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (NextRarity != nullptr)
		*NextRarity = std::move(Parms.NextRarity);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.ModifyRolledUpgradesLevel
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnRolledUpgradeResult>UpgradesToModify                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FQtnRolledUpgradeResult>ModifiedUpgrades                                                 (Parm, OutParm)
// struct FGameplayTagContainer       FlairTags                                                        (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RandomIntegerInRange_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)
// bool                               CallFunc_IsPerkActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::ModifyRolledUpgradesLevel(TArray<struct FQtnRolledUpgradeResult>& UpgradesToModify, TArray<struct FQtnRolledUpgradeResult>* ModifiedUpgrades, const struct FGameplayTagContainer& FlairTags, int32 Temp_int_Array_Index_Variable, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, bool CallFunc_IsPerkActive_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "ModifyRolledUpgradesLevel");

	Params::UPlayerUpgradeSessionState_C_ModifyRolledUpgradesLevel_Params Parms{};

	Parms.UpgradesToModify = UpgradesToModify;
	Parms.FlairTags = FlairTags;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_RandomIntegerInRange_ReturnValue = CallFunc_RandomIntegerInRange_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;
	Parms.CallFunc_IsPerkActive_ReturnValue = CallFunc_IsPerkActive_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedUpgrades != nullptr)
		*ModifiedUpgrades = std::move(Parms.ModifiedUpgrades);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.ModifyRolledUpgradesRarity
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnRolledUpgradeResult>UpgradesToModify                                                 (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<struct FQtnRolledUpgradeResult>ModifiedUpgrades                                                 (Parm, OutParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerk_BodyBias_C*            CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RandomFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerk_WeaponBias_C*          CallFunc_FindPerk_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPerk_PowerBias_C*           CallFunc_FindPerk_ReturnValue_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_GetValueOfPerk_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueOfPerk_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)
// struct FGameplayTag                CallFunc_GetNextRarityLevel_NextRarity                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                CallFunc_GetNextRarityLevel_NextRarity_1                         (NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData_1                         (None)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult_1                       (None)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_MatchesTag_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGameplayTag                CallFunc_GetNextRarityLevel_NextRarity_2                         (NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData_2                         (None)
// bool                               CallFunc_MatchesTag_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult_2                       (None)
// float                              CallFunc_RandomFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor)
// float                              CallFunc_RandomFloat_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_FloatFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::ModifyRolledUpgradesRarity(TArray<struct FQtnRolledUpgradeResult>& UpgradesToModify, TArray<struct FQtnRolledUpgradeResult>* ModifiedUpgrades, int32 CallFunc_Array_Length_ReturnValue, class UPerk_BodyBias_C* CallFunc_FindPerk_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetValueOfPerk_ReturnValue, int32 Temp_int_Loop_Counter_Variable, float CallFunc_RandomFloat_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPerk_WeaponBias_C* CallFunc_FindPerk_ReturnValue_1, class UPerk_PowerBias_C* CallFunc_FindPerk_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_GetValueOfPerk_ReturnValue_1, float CallFunc_GetValueOfPerk_ReturnValue_2, int32 Temp_int_Array_Index_Variable, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item, const struct FGameplayTag& CallFunc_GetNextRarityLevel_NextRarity, const struct FGameplayTag& CallFunc_GetNextRarityLevel_NextRarity_1, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData_1, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult_1, bool CallFunc_MatchesTag_ReturnValue, bool CallFunc_MatchesTag_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, const struct FGameplayTag& CallFunc_GetNextRarityLevel_NextRarity_2, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData_2, bool CallFunc_MatchesTag_ReturnValue_2, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult_2, float CallFunc_RandomFloat_ReturnValue_1, bool CallFunc_LessEqual_FloatFloat_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_RandomFloat_ReturnValue_2, bool CallFunc_LessEqual_FloatFloat_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "ModifyRolledUpgradesRarity");

	Params::UPlayerUpgradeSessionState_C_ModifyRolledUpgradesRarity_Params Parms{};

	Parms.UpgradesToModify = UpgradesToModify;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_RandomFloat_ReturnValue = CallFunc_RandomFloat_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue = CallFunc_LessEqual_FloatFloat_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_FindPerk_ReturnValue_1 = CallFunc_FindPerk_ReturnValue_1;
	Parms.CallFunc_FindPerk_ReturnValue_2 = CallFunc_FindPerk_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_GetValueOfPerk_ReturnValue_1 = CallFunc_GetValueOfPerk_ReturnValue_1;
	Parms.CallFunc_GetValueOfPerk_ReturnValue_2 = CallFunc_GetValueOfPerk_ReturnValue_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_GetNextRarityLevel_NextRarity = CallFunc_GetNextRarityLevel_NextRarity;
	Parms.CallFunc_GetNextRarityLevel_NextRarity_1 = CallFunc_GetNextRarityLevel_NextRarity_1;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData_1 = K2Node_MakeStruct_QtnRolledUpgradeData_1;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult_1 = K2Node_MakeStruct_QtnRolledUpgradeResult_1;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue_1 = CallFunc_MatchesTag_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetNextRarityLevel_NextRarity_2 = CallFunc_GetNextRarityLevel_NextRarity_2;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData_2 = K2Node_MakeStruct_QtnRolledUpgradeData_2;
	Parms.CallFunc_MatchesTag_ReturnValue_2 = CallFunc_MatchesTag_ReturnValue_2;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult_2 = K2Node_MakeStruct_QtnRolledUpgradeResult_2;
	Parms.CallFunc_RandomFloat_ReturnValue_1 = CallFunc_RandomFloat_ReturnValue_1;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_1 = CallFunc_LessEqual_FloatFloat_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_RandomFloat_ReturnValue_2 = CallFunc_RandomFloat_ReturnValue_2;
	Parms.CallFunc_LessEqual_FloatFloat_ReturnValue_2 = CallFunc_LessEqual_FloatFloat_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (ModifiedUpgrades != nullptr)
		*ModifiedUpgrades = std::move(Parms.ModifiedUpgrades);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Internal Roll Upgrades
// (Private, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsReroll                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<struct FQtnRolledUpgradeResult>RolledUpgrades                                                   (Parm, OutParm)
// struct FQtnRolledUpgradeData       CachedRolledSettings                                             (Edit, BlueprintVisible)
// bool                               RequiresRefillBullshitInsert                                     (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
// TSoftClassPtr<class UObject>       ClassForRefillBullshit                                           (Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>GeneralArray                                                     (Edit, BlueprintVisible)
// TArray<struct FQtnRolledUpgradeResult>RolledArray                                                      (Edit, BlueprintVisible)
// TArray<struct FQtnRolledUpgradeResult>CardsArray                                                       (Edit, BlueprintVisible)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_3                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item                                          (None)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Loop_Counter_Variable_4                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_3                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_4                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsThisHenrietta_IsHenrietta                             (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_AddUnique_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_ModifyRolledUpgradesRarity_ModifiedUpgrades             (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue_3                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              Temp_int_Array_Index_Variable_4                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item_1                                        (None)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item_2                                        (None)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_AddUnique_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_4                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnReactionToTag           K2Node_MakeStruct_QtnReactionToTag                               (NoDestructor)
// TArray<struct FQtnReactionToTag>   K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// int32                              CallFunc_Array_AddUnique_ReturnValue_2                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_5                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_ModifyRolledUpgradesLevel_ModifiedUpgrades              (ReferenceParm)
// struct FQtnEventMessage            CallFunc_StaticMakeEventMessage_ReturnValue                      (None)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFQtnDebugUpgradeCard       CallFunc_Array_Get_Item_3                                        (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_6                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FQtnRolledUpgradeData       K2Node_MakeStruct_QtnRolledUpgradeData                           (None)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent_2              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnUpgradeSettings         CallFunc_GetDataTableRowFromName_OutRow                          (None)
// bool                               CallFunc_GetDataTableRowFromName_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Array_Length_ReturnValue_7                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     K2Node_MakeStruct_QtnRolledUpgradeResult                         (None)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent_3              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FQtnRolledUpgradeResult     CallFunc_Array_Get_Item_4                                        (None)
// int32                              CallFunc_Array_Length_ReturnValue_8                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// TSubclassOf<class UQtnUpgrade>     CallFunc_SyncLoadUpgradeClass_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_RollUpgrades_Results                                    (ReferenceParm)
// int32                              CallFunc_RollUpgrades_RollQuantity                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RollUpgrades_BonusQuantity                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_InternalForceRequiredCards_AdjustedCards                (ReferenceParm)
// int32                              CallFunc_Add_IntInt_ReturnValue_5                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Add_IntInt_ReturnValue_6                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_5                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_RollUpgrades_ReturnValue                                (ReferenceParm)
// TArray<struct FQtnRolledUpgradeResult>CallFunc_RollUpgrades_ReturnValue_1                              (ReferenceParm)

void UPlayerUpgradeSessionState_C::Internal_Roll_Upgrades(bool IsReroll, TArray<struct FQtnRolledUpgradeResult>* RolledUpgrades, const struct FQtnRolledUpgradeData& CachedRolledSettings, bool RequiresRefillBullshitInsert, TSoftClassPtr<class UObject> ClassForRefillBullshit, const TArray<struct FQtnRolledUpgradeResult>& GeneralArray, const TArray<struct FQtnRolledUpgradeResult>& RolledArray, const TArray<struct FQtnRolledUpgradeResult>& CardsArray, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_2, int32 Temp_int_Array_Index_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Loop_Counter_Variable_3, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_3, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_4, int32 Temp_int_Array_Index_Variable_3, int32 CallFunc_Add_IntInt_ReturnValue_4, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_IsThisHenrietta_IsHenrietta, int32 CallFunc_Array_AddUnique_ReturnValue, TArray<struct FQtnRolledUpgradeResult>& CallFunc_ModifyRolledUpgradesRarity_ModifiedUpgrades, int32 CallFunc_Array_Length_ReturnValue_3, bool CallFunc_Greater_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_4, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item_1, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Add_ReturnValue, int32 CallFunc_Array_AddUnique_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_4, bool CallFunc_Less_IntInt_ReturnValue_2, const struct FQtnReactionToTag& K2Node_MakeStruct_QtnReactionToTag, TArray<struct FQtnReactionToTag>& K2Node_MakeArray_Array, int32 CallFunc_Array_AddUnique_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_5, TArray<struct FQtnRolledUpgradeResult>& CallFunc_ModifyRolledUpgradesLevel_ModifiedUpgrades, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent_1, const struct FFQtnDebugUpgradeCard& CallFunc_Array_Get_Item_3, int32 CallFunc_Array_Length_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_3, const struct FQtnRolledUpgradeData& K2Node_MakeStruct_QtnRolledUpgradeData, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent_2, const struct FQtnUpgradeSettings& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_7, const struct FQtnRolledUpgradeResult& K2Node_MakeStruct_QtnRolledUpgradeResult, bool CallFunc_Greater_IntInt_ReturnValue_1, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent_3, const struct FQtnRolledUpgradeResult& CallFunc_Array_Get_Item_4, int32 CallFunc_Array_Length_ReturnValue_8, bool CallFunc_Less_IntInt_ReturnValue_4, TSubclassOf<class UQtnUpgrade> CallFunc_SyncLoadUpgradeClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue_1, TArray<struct FQtnRolledUpgradeResult>& CallFunc_RollUpgrades_Results, int32 CallFunc_RollUpgrades_RollQuantity, int32 CallFunc_RollUpgrades_BonusQuantity, TArray<struct FQtnRolledUpgradeResult>& CallFunc_InternalForceRequiredCards_AdjustedCards, int32 CallFunc_Add_IntInt_ReturnValue_5, bool CallFunc_Greater_IntInt_ReturnValue_2, int32 CallFunc_Add_IntInt_ReturnValue_6, bool CallFunc_Less_IntInt_ReturnValue_5, int32 CallFunc_Subtract_IntInt_ReturnValue, TArray<struct FQtnRolledUpgradeResult>& CallFunc_RollUpgrades_ReturnValue, TArray<struct FQtnRolledUpgradeResult>& CallFunc_RollUpgrades_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Internal Roll Upgrades");

	Params::UPlayerUpgradeSessionState_C_Internal_Roll_Upgrades_Params Parms{};

	Parms.IsReroll = IsReroll;
	Parms.CachedRolledSettings = CachedRolledSettings;
	Parms.RequiresRefillBullshitInsert = RequiresRefillBullshitInsert;
	Parms.ClassForRefillBullshit = ClassForRefillBullshit;
	Parms.GeneralArray = GeneralArray;
	Parms.RolledArray = RolledArray;
	Parms.CardsArray = CardsArray;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_2 = Temp_int_Loop_Counter_Variable_2;
	Parms.Temp_int_Array_Index_Variable_2 = Temp_int_Array_Index_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.Temp_int_Loop_Counter_Variable_3 = Temp_int_Loop_Counter_Variable_3;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_3 = CallFunc_Add_IntInt_ReturnValue_3;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_4 = Temp_int_Loop_Counter_Variable_4;
	Parms.Temp_int_Array_Index_Variable_3 = Temp_int_Array_Index_Variable_3;
	Parms.CallFunc_Add_IntInt_ReturnValue_4 = CallFunc_Add_IntInt_ReturnValue_4;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_IsThisHenrietta_IsHenrietta = CallFunc_IsThisHenrietta_IsHenrietta;
	Parms.CallFunc_Array_AddUnique_ReturnValue = CallFunc_Array_AddUnique_ReturnValue;
	Parms.CallFunc_ModifyRolledUpgradesRarity_ModifiedUpgrades = CallFunc_ModifyRolledUpgradesRarity_ModifiedUpgrades;
	Parms.CallFunc_Array_Length_ReturnValue_3 = CallFunc_Array_Length_ReturnValue_3;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_4 = Temp_int_Array_Index_Variable_4;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;
	Parms.CallFunc_Array_AddUnique_ReturnValue_1 = CallFunc_Array_AddUnique_ReturnValue_1;
	Parms.CallFunc_Array_Length_ReturnValue_4 = CallFunc_Array_Length_ReturnValue_4;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.K2Node_MakeStruct_QtnReactionToTag = K2Node_MakeStruct_QtnReactionToTag;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_Array_AddUnique_ReturnValue_2 = CallFunc_Array_AddUnique_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue_5 = CallFunc_Array_Length_ReturnValue_5;
	Parms.CallFunc_ModifyRolledUpgradesLevel_ModifiedUpgrades = CallFunc_ModifyRolledUpgradesLevel_ModifiedUpgrades;
	Parms.CallFunc_StaticMakeEventMessage_ReturnValue = CallFunc_StaticMakeEventMessage_ReturnValue;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent_1 = CallFunc_GetOwningUpgradeStation_StationComponent_1;
	Parms.CallFunc_Array_Get_Item_3 = CallFunc_Array_Get_Item_3;
	Parms.CallFunc_Array_Length_ReturnValue_6 = CallFunc_Array_Length_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_3 = CallFunc_Less_IntInt_ReturnValue_3;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeData = K2Node_MakeStruct_QtnRolledUpgradeData;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent_2 = CallFunc_GetOwningUpgradeStation_StationComponent_2;
	Parms.CallFunc_GetDataTableRowFromName_OutRow = CallFunc_GetDataTableRowFromName_OutRow;
	Parms.CallFunc_GetDataTableRowFromName_ReturnValue = CallFunc_GetDataTableRowFromName_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_7 = CallFunc_Array_Length_ReturnValue_7;
	Parms.K2Node_MakeStruct_QtnRolledUpgradeResult = K2Node_MakeStruct_QtnRolledUpgradeResult;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent_3 = CallFunc_GetOwningUpgradeStation_StationComponent_3;
	Parms.CallFunc_Array_Get_Item_4 = CallFunc_Array_Get_Item_4;
	Parms.CallFunc_Array_Length_ReturnValue_8 = CallFunc_Array_Length_ReturnValue_8;
	Parms.CallFunc_Less_IntInt_ReturnValue_4 = CallFunc_Less_IntInt_ReturnValue_4;
	Parms.CallFunc_SyncLoadUpgradeClass_ReturnValue = CallFunc_SyncLoadUpgradeClass_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue_1 = CallFunc_Array_Add_ReturnValue_1;
	Parms.CallFunc_RollUpgrades_Results = CallFunc_RollUpgrades_Results;
	Parms.CallFunc_RollUpgrades_RollQuantity = CallFunc_RollUpgrades_RollQuantity;
	Parms.CallFunc_RollUpgrades_BonusQuantity = CallFunc_RollUpgrades_BonusQuantity;
	Parms.CallFunc_InternalForceRequiredCards_AdjustedCards = CallFunc_InternalForceRequiredCards_AdjustedCards;
	Parms.CallFunc_Add_IntInt_ReturnValue_5 = CallFunc_Add_IntInt_ReturnValue_5;
	Parms.CallFunc_Greater_IntInt_ReturnValue_2 = CallFunc_Greater_IntInt_ReturnValue_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_6 = CallFunc_Add_IntInt_ReturnValue_6;
	Parms.CallFunc_Less_IntInt_ReturnValue_5 = CallFunc_Less_IntInt_ReturnValue_5;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;
	Parms.CallFunc_RollUpgrades_ReturnValue = CallFunc_RollUpgrades_ReturnValue;
	Parms.CallFunc_RollUpgrades_ReturnValue_1 = CallFunc_RollUpgrades_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	if (RolledUpgrades != nullptr)
		*RolledUpgrades = std::move(Parms.RolledUpgrades);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Get Modify Card Count By Perk
// (Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UClass*                      PerkClass                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              PerkValueIndex                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FString                      CallFunc_GetClassDisplayName_ReturnValue                         (ZeroConstructor, HasGetValueTypeHash)
// class FText                        CallFunc_Conv_StringToText_ReturnValue                           (None)
// class UQtnPerk*                    CallFunc_FindPerk_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFormatArgumentData         K2Node_MakeStruct_FormatArgumentData                             (HasGetValueTypeHash)
// float                              CallFunc_GetValueOfPerk_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FFormatArgumentData> K2Node_MakeArray_Array                                           (ReferenceParm)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_Format_ReturnValue                                      (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPerkActive_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor)

void UPlayerUpgradeSessionState_C::Get_Modify_Card_Count_By_Perk(class UClass* PerkClass, int32 PerkValueIndex, int32* Value, const class FString& CallFunc_GetClassDisplayName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class UQtnPerk* CallFunc_FindPerk_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, float CallFunc_GetValueOfPerk_ReturnValue, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Format_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue, bool CallFunc_IsPerkActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Get Modify Card Count By Perk");

	Params::UPlayerUpgradeSessionState_C_Get_Modify_Card_Count_By_Perk_Params Parms{};

	Parms.PerkClass = PerkClass;
	Parms.PerkValueIndex = PerkValueIndex;
	Parms.CallFunc_GetClassDisplayName_ReturnValue = CallFunc_GetClassDisplayName_ReturnValue;
	Parms.CallFunc_Conv_StringToText_ReturnValue = CallFunc_Conv_StringToText_ReturnValue;
	Parms.CallFunc_FindPerk_ReturnValue = CallFunc_FindPerk_ReturnValue;
	Parms.K2Node_MakeStruct_FormatArgumentData = K2Node_MakeStruct_FormatArgumentData;
	Parms.CallFunc_GetValueOfPerk_ReturnValue = CallFunc_GetValueOfPerk_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Format_ReturnValue = CallFunc_Format_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;
	Parms.CallFunc_IsPerkActive_ReturnValue = CallFunc_IsPerkActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.DebugLog
// (Protected, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FString                      Value                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::DebugLog(const class FString& Value, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "DebugLog");

	Params::UPlayerUpgradeSessionState_C_DebugLog_Params Parms{};

	Parms.Value = Value;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.Begin Upgrade Process
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FQtnRolledUpgradeResult>CallFunc_Internal_Roll_Upgrades_RolledUpgrades                   (ReferenceParm)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// class FText                        CallFunc_StaticFormatText_ReturnValue                            (None)
// class FString                      CallFunc_Conv_TextToString_ReturnValue                           (ZeroConstructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::Begin_Upgrade_Process(TArray<struct FQtnRolledUpgradeResult>& CallFunc_Internal_Roll_Upgrades_RolledUpgrades, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class FText CallFunc_StaticFormatText_ReturnValue, const class FString& CallFunc_Conv_TextToString_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "Begin Upgrade Process");

	Params::UPlayerUpgradeSessionState_C_Begin_Upgrade_Process_Params Parms{};

	Parms.CallFunc_Internal_Roll_Upgrades_RolledUpgrades = CallFunc_Internal_Roll_Upgrades_RolledUpgrades;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_StaticFormatText_ReturnValue = CallFunc_StaticFormatText_ReturnValue;
	Parms.CallFunc_Conv_TextToString_ReturnValue = CallFunc_Conv_TextToString_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.OnRep_CurrentState
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerUpgradeSessionState_C::OnRep_CurrentState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "OnRep_CurrentState");



	UObject::ProcessEvent(Func, nullptr);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.OnRep_RolledUpgrades
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::OnRep_RolledUpgrades(class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "OnRep_RolledUpgrades");

	Params::UPlayerUpgradeSessionState_C_OnRep_RolledUpgrades_Params Parms{};

	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.OnRolledUpgradesArrayChangedEvent
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FQtnRolledUpgradeResult>RolledUpgrades                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UPlayerUpgradeSessionState_C::OnRolledUpgradesArrayChangedEvent(TArray<struct FQtnRolledUpgradeResult>& RolledUpgrades)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "OnRolledUpgradesArrayChangedEvent");

	Params::UPlayerUpgradeSessionState_C_OnRolledUpgradesArrayChangedEvent_Params Parms{};

	Parms.RolledUpgrades = RolledUpgrades;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.OnCurrentSessionStateChangedEvent
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EQtnUpgradeSessionState NewState                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::OnCurrentSessionStateChangedEvent(enum class EQtnUpgradeSessionState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "OnCurrentSessionStateChangedEvent");

	Params::UPlayerUpgradeSessionState_C_OnCurrentSessionStateChangedEvent_Params Parms{};

	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.ExecuteUbergraph_PlayerUpgradeSessionState
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FQtnRolledUpgradeResult>K2Node_Event_RolledUpgrades                                      (ConstParm, ReferenceParm)
// enum class EQtnUpgradeSessionState K2Node_Event_NewState                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent                (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UUpgradeStationComponent_C*  CallFunc_GetOwningUpgradeStation_StationComponent_1              (ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UPlayerUpgradeSessionState_C::ExecuteUbergraph_PlayerUpgradeSessionState(int32 EntryPoint, TArray<struct FQtnRolledUpgradeResult>& K2Node_Event_RolledUpgrades, enum class EQtnUpgradeSessionState K2Node_Event_NewState, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent, bool K2Node_SwitchEnum_CmpSuccess, class UUpgradeStationComponent_C* CallFunc_GetOwningUpgradeStation_StationComponent_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "ExecuteUbergraph_PlayerUpgradeSessionState");

	Params::UPlayerUpgradeSessionState_C_ExecuteUbergraph_PlayerUpgradeSessionState_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RolledUpgrades = K2Node_Event_RolledUpgrades;
	Parms.K2Node_Event_NewState = K2Node_Event_NewState;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent = CallFunc_GetOwningUpgradeStation_StationComponent;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_GetOwningUpgradeStation_StationComponent_1 = CallFunc_GetOwningUpgradeStation_StationComponent_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function PlayerUpgradeSessionState.PlayerUpgradeSessionState_C.OnUpgradeCardsUpdated__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UPlayerUpgradeSessionState_C::OnUpgradeCardsUpdated__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PlayerUpgradeSessionState_C", "OnUpgradeCardsUpdated__DelegateSignature");



	UObject::ProcessEvent(Func, nullptr);

}

}


