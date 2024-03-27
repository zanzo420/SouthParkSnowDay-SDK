#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0xC0 - 0xAC)
// BlueprintGeneratedClass EnemyUpgrade_Healthy.EnemyUpgrade_Healthy_C
class UEnemyUpgrade_Healthy_C : public UEnemyUpgrade_AttributeScalarArchetype_C
{
public:
	uint8                                        Pad_4F6F[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Flat_Increase_Amount;                              // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Percent_Increase_Amount;                           // 0xBC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnemyUpgrade_Healthy_C* GetDefaultObj();

	void AdjustAttribute(class UClass* Attribute, float Scalar, class UQtnUpgradeSlot* Target, float Adjustment, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float Temp_float_Variable, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAttributeValue_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void ExecuteUbergraph_EnemyUpgrade_Healthy(int32 EntryPoint, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, bool K2Node_Event_LoadedRunProgress, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess);
};

}


