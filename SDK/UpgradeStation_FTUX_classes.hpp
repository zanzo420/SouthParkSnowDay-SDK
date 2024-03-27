#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x49 (0x5A9 - 0x560)
// BlueprintGeneratedClass UpgradeStation_FTUX.UpgradeStation_FTUX_C
class AUpgradeStation_FTUX_C : public AUpgradeStation_BP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	FMulticastInlineDelegateProperty_            Approached;                                        // 0x568(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        FrobIndex;                                         // 0x578(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OpenForUpgrade;                                    // 0x57C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4790[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            PlayerEnteredUpgradeFTUX;                          // 0x580(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            PlayerLeftUpgradeFTUX;                             // 0x590(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class AUpgradeStation_BP_C*                  UpgraderToHide;                                    // 0x5A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsBeingUsedAsRedirector;                           // 0x5A8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class AUpgradeStation_FTUX_C* GetDefaultObj();

	void HideUpgrader(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void BndEvt__UpgradeStation_FTUX_QtnFrobbable_K2Node_ComponentBoundEvent_0_QtnOnFrobEvent__DelegateSignature(class UQtnFrobbableComponent* ThisFrobbable, class AQtnBodyPawn* FrobbingPawn, bool IsServer);
	void BndEvt__UpgradeStation_FTUX_UpgradeStationComponent_K2Node_ComponentBoundEvent_0_OnUpgradeProcessComplete__DelegateSignature(class UPlayerUpgradeSessionState_C* UpgradeSession);
	void ExecuteUbergraph_UpgradeStation_FTUX(int32 EntryPoint, class UQtnFrobbableComponent* K2Node_ComponentBoundEvent_ThisFrobbable, class AQtnBodyPawn* K2Node_ComponentBoundEvent_FrobbingPawn, bool K2Node_ComponentBoundEvent_isServer, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, bool K2Node_SwitchInteger_CmpSuccess, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_FindPlayerData____FoundPlayer, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession, int32 CallFunc_FindPlayerData____PlayerIndex, bool CallFunc_FindPlayerData____FoundPlayer_1, class UPlayerUpgradeSessionState_C* CallFunc_FindPlayerData____PlayerSession_1, int32 CallFunc_FindPlayerData____PlayerIndex_1, int32 CallFunc_Array_Length_ReturnValue_1, class APlayerTribunalSlot_BP_C* CallFunc_Array_Get_Item, class UPlayerPlacementComp_C* CallFunc_Array_Get_Item_1, class UPlayerUpgradeSessionState_C* K2Node_ComponentBoundEvent_UpgradeSession, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Variable_1);
	void PlayerLeftUpgradeFTUX__DelegateSignature();
	void PlayerEnteredUpgradeFTUX__DelegateSignature();
	void Approached__DelegateSignature();
};

}


