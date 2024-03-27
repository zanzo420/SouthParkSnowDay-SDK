#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x24 (0xAC - 0x88)
// BlueprintGeneratedClass EnemyUpgrade_AttributeScalarArchetype.EnemyUpgrade_AttributeScalarArchetype_C
class UEnemyUpgrade_AttributeScalarArchetype_C : public UQtnEnemyUpgradeArchetype_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x88(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         DirectSetAttributeToValue;                         // 0x90(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         IncreaseAttribute;                                 // 0x91(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_EC3[0x6];                                      // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                AttributeClass;                                    // 0x98(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                MaxAttributeClass;                                 // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AdjustmentValue;                                   // 0xA8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UEnemyUpgrade_AttributeScalarArchetype_C* GetDefaultObj();

	void RemoveAttributeAdjustment(class UClass* Attribute, class UQtnUpgradeSlot* Target, float Temp_float_Variable, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetAttributeValue_ReturnValue);
	void AdjustAttribute(class UClass* Attribute, float Scalar, class UQtnUpgradeSlot* Target, float Temp_float_Variable, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3, bool K2Node_DynamicCast_bSuccess_3, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void OnSlottedEvent(class UQtnUpgradeSlot* TargetSlot, struct FQtnRolledUpgradeData& RolledData, bool LoadedRunProgress);
	void OnUnslottedEvent(class UQtnUpgradeSlot* PreviousSlot, struct FQtnRolledUpgradeData& RolledData);
	void ExecuteUbergraph_EnemyUpgrade_AttributeScalarArchetype(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsValidClass_ReturnValue, class UQtnUpgradeSlot* K2Node_Event_TargetSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData_1, bool K2Node_Event_LoadedRunProgress, class UQtnUpgradeSlot* K2Node_Event_PreviousSlot, const struct FQtnRolledUpgradeData& K2Node_Event_RolledData, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValidClass_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_2, bool K2Node_DynamicCast_bSuccess_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_3, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_HasAttribute_ReturnValue, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_2, bool CallFunc_IsValidClass_ReturnValue_3, bool CallFunc_IsValidClass_ReturnValue_4, bool Temp_bool_Variable_1, bool CallFunc_HasAttribute_ReturnValue_1, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue_1, bool CallFunc_IsValidClass_ReturnValue_5);
};

}


