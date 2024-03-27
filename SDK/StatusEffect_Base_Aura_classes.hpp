#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC (0x12C - 0x120)
// BlueprintGeneratedClass StatusEffect_Base_Aura.StatusEffect_Base_Aura_C
class UStatusEffect_Base_Aura_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Increase_Per_Second;                               // 0x128(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_Base_Aura_C* GetDefaultObj();

	void OnStatusEffectTick(float DeltaSeconds);
	void ExecuteUbergraph_StatusEffect_Base_Aura(int32 EntryPoint, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, bool CallFunc_CanBeDamaged_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue);
};

}


