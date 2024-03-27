#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x29 (0x109 - 0xE0)
// BlueprintGeneratedClass PlayerTribunalComponent.PlayerTribunalComponent_C
class UPlayerTribunalComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class ABodyPawnPlayer_C*                     OwningPlayerBody;                                  // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                MyTribunalManager;                                 // 0xF0(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerHUD_C*                          ThisPlayerHUD;                                     // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CurrentUpgradeStation;                             // 0x100(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RolledCardsArray;                                  // 0x108(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UPlayerTribunalComponent_C* GetDefaultObj();

	void GetUpgradeCost(int32 CardIndexToCheck, int32* OutCost);
	void TribualToggle(bool Starting);
	void Event_ConfirmTribunalChoice(int32 ChoiceIndex);
	void TribunalToggle_MULTI(bool Starting);
	void AdvanceTrialScene_Server();
	void ReceiveBeginPlay();
	void UpgradeChosen(float Delay, int32 ChoiceIndex);
	void Server_RerollUpgrades();
	void Server_ImproveUpgrade(int32 CardIndex, int32 OldCurrency, int32 UpgradeCost);
	void RecordUpgradeServer(const struct FQtnRolledUpgradeResult& Upgrade);
	void Event_OnTribunalUpgradeChoice_Local();
	void AskServerToResetPlayer(class AUpgradeStation_BP_C* UpgradeStation);
	void ExecuteUbergraph_PlayerTribunalComponent(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, bool K2Node_CustomEvent_starting, bool CallFunc_Not_PreBool_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor, bool K2Node_DynamicCast_bSuccess_2, float K2Node_CustomEvent_Delay, int32 K2Node_CustomEvent_choiceIndex, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface, bool K2Node_DynamicCast_bSuccess_3, class UUpgradeStationComponent_C* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex, int32 K2Node_CustomEvent_CardIndex, int32 K2Node_CustomEvent_oldCurrency, int32 K2Node_CustomEvent_upgradeCost, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface_1, bool K2Node_DynamicCast_bSuccess_4, const struct FQtnRolledUpgradeResult& K2Node_CustomEvent_Upgrade, int32 K2Node_CustomEvent_choiceIndex_1, TScriptInterface<class IUpgradeInterface_C> K2Node_DynamicCast_AsUpgrade_Interface_2, bool K2Node_DynamicCast_bSuccess_5, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_1, bool K2Node_DynamicCast_bSuccess_6, class AUpgradeStation_BP_C* K2Node_CustomEvent_UpgradeStation, TScriptInterface<class IInterface_Tribunal_Manager_Actor_C> K2Node_DynamicCast_AsInterface_Tribunal_Manager_Actor_2, bool K2Node_DynamicCast_bSuccess_7);
};

}


