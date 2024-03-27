#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass GravityBomb_FixedPoint.GravityBomb_FixedPoint_C
class UGravityBomb_FixedPoint_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_5F9C[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UGravityBomb_FixedPoint_C* GetDefaultObj();

	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_GravityBomb_FixedPoint(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, float CallFunc_GetValueOfUpgradeWithSettings_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, class UGravityBombVerb_C* K2Node_DynamicCast_AsGravity_Bomb_Verb, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_DecreaseAttributeValue_self_CastInput, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, float CallFunc_GetValueOfUpgradeWithSettings_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_1, bool CallFunc_HasAuthority_ReturnValue_1, class UGravityBombVerb_C* K2Node_DynamicCast_AsGravity_Bomb_Verb_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_DecreaseAttributeValue_self_CastInput_1, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnVerb* CallFunc_GetOwningVerb_ReturnValue_2, class UGravityBombVerb_C* K2Node_DynamicCast_AsGravity_Bomb_Verb_2, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, float CallFunc_GetValueOfUpgrade_ReturnValue_3, bool CallFunc_HasAuthority_ReturnValue_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput_1);
};

}


