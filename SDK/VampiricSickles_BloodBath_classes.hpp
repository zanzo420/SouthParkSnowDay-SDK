#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0xA4 - 0x83)
// BlueprintGeneratedClass VampiricSickles_BloodBath.VampiricSickles_BloodBath_C
class UVampiricSickles_BloodBath_C : public UQtnUpgradeArchetype_C
{
public:
	uint8                                        Pad_7491[0x5];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        SpeedBoost;                                        // 0x90(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageBoost;                                       // 0x94(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoostDuration;                                     // 0x98(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         BloodBathActive;                                   // 0x9C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_7492[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        LOCAL_DefaultBaseWalkSpeed;                        // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVampiricSickles_BloodBath_C* GetDefaultObj();

	void DeactivateBloodBath(class AQtnPawn* OwningPawn, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, class AVampiricSickles_C* K2Node_DynamicCast_AsVampiric_Sickles, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1);
	void ActivateBloodBath(class AQtnPawn* OwningPawn, class AQtnItem* CallFunc_GetIntendedEquippedWeapon_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, class AVampiricSickles_C* K2Node_DynamicCast_AsVampiric_Sickles, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_2, float Temp_float_Variable, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
	void CalculateDamageValues(class UQtnUpgradeSlot* OwningSlot, class UQtnVerb* SourceVerb, class AActor* TargetActor, float InBaseDamage, TSubclassOf<class UQtnDamageType> DamageType, float* OutDamageScalar, float* OutBonusDamage, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, class UMeleeVerbSicklesAirDive_C* K2Node_DynamicCast_AsMelee_Verb_Sickles_Air_Dive, bool K2Node_DynamicCast_bSuccess, class UMeleeVerbSicklesCombo_C* K2Node_DynamicCast_AsMelee_Verb_Sickles_Combo, bool K2Node_DynamicCast_bSuccess_1);
	void OnPawnDeath_Event_0(class AQtnPawn* DeadPawn, class UQtnVerb* SourceVerb, class AQtnPawn* Culprit);
	void OnUpgradeRolledDataChangedEvent(class UQtnUpgradeSlot* OwningSlot, struct FQtnRolledUpgradeData& PreviousRolledData, struct FQtnRolledUpgradeData& NewRolledData);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void ExecuteUbergraph_VampiricSickles_BloodBath(int32 EntryPoint, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnPawn* K2Node_CustomEvent_DeadPawn, class UQtnVerb* K2Node_CustomEvent_SourceVerb, class AQtnPawn* K2Node_CustomEvent_culprit, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, class UQtnUpgradeSlot* K2Node_Event_OwningSlot, const struct FQtnRolledUpgradeData& K2Node_Event_PreviousRolledData, const struct FQtnRolledUpgradeData& K2Node_Event_NewRolledData, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue_2, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress, float CallFunc_GetValueOfUpgrade_ReturnValue_3, float CallFunc_GetValueOfUpgrade_ReturnValue_4, float CallFunc_GetValueOfUpgrade_ReturnValue_5, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class UMeleeVerbSicklesAirDive_C* CallFunc_GetVerb_ReturnValue, class UMeleeVerbSicklesCombo_C* CallFunc_GetVerb_ReturnValue_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, class AQtnPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}


