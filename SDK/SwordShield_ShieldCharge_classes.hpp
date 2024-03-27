#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass SwordShield_ShieldCharge.SwordShield_ShieldCharge_C
class USwordShield_ShieldCharge_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_5D59[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class USwordShield_ShieldCharge_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_SwordShield_ShieldCharge(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UDodgeVerb_C* CallFunc_AddVerb_ServerOnly_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue_1, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon_1, bool K2Node_DynamicCast_bSuccess_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, class UDodgeVerb_ShieldCharge_C* CallFunc_AddVerb_ServerOnly_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData);
};

}


