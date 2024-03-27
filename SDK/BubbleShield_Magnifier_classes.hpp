#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xD (0x90 - 0x83)
// BlueprintGeneratedClass BubbleShield_Magnifier.BubbleShield_Magnifier_C
class UBubbleShield_Magnifier_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_653D[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBubbleShield_Magnifier_C* GetDefaultObj();

	bool CanUpgradeBeRolled(class AQtnBodyPawn* TargetBodyPawn, class UBubbleShieldVerb_C* CallFunc_GetExistingVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, bool MagnifierActive, float CallFunc_GetValueOfUpgrade_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TArray<class AActor*>& CallFunc_GetAttachedActors_OutActors, int32 CallFunc_Array_Length_ReturnValue, class AActor* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, class ABubbleShield_C* K2Node_DynamicCast_AsBubble_Shield, bool K2Node_DynamicCast_bSuccess);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void ExecuteUbergraph_BubbleShield_Magnifier(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, class UBubbleShieldVerb_C* CallFunc_GetExistingVerb_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, float CallFunc_Add_FloatFloat_ReturnValue, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_1, class UBubbleShieldVerb_C* CallFunc_GetExistingVerb_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_1, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, float CallFunc_Add_FloatFloat_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue_2, class UBubbleShieldVerb_C* CallFunc_GetExistingVerb_ReturnValue_2);
};

}


