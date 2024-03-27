#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2C (0xFC - 0xD0)
// BlueprintGeneratedClass Attribute_BlockingToken.Attribute_BlockingToken_C
class UAttribute_BlockingToken_C : public UQtnAttribute
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xD0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        InitialCooldown;                                   // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TokenRecovered;                                    // 0xDC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TokenRecoveryScalar_ShieldRedirection;             // 0xE0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_5B10[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AQtnBodyPawn*                          OwningBodyPawn;                                    // 0xE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnFXActor*                           EmpoweringBlockFX;                                 // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TokenRecoveryScalar_OmnidirectionBlock;            // 0xF8(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAttribute_BlockingToken_C* GetDefaultObj();

	void OnTick(float DeltaTime);
	void OnAdded();
	void OnDecreased(float AmountDecreased);
	void OnIncreased(float AmountIncreased);
	void UpdateEmpoweringBlock_MULTI(float DamageValue);
	void ExecuteUbergraph_Attribute_BlockingToken(int32 EntryPoint, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin, bool Temp_bool_Variable, bool K2Node_SwitchEnum_CmpSuccess, float Temp_float_Variable, float K2Node_Event_deltaTime, float K2Node_Event_amountDecreased, float CallFunc_Divide_FloatFloat_ReturnValue, float K2Node_Event_amountIncreased, float CallFunc_GetCurrentValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetOwningInterface_ReturnValue, class UObject* CallFunc_Conv_InterfaceToObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_1, bool K2Node_SwitchEnum_CmpSuccess_1, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_2, enum class EQtnOutputAuthorityEnum CallFunc_HasAuthority_outputPin_3, bool K2Node_SwitchEnum_CmpSuccess_2, bool K2Node_SwitchEnum_CmpSuccess_3, class UObject* CallFunc_GetOwningObject_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_1, class UObject* CallFunc_GetOwningObject_ReturnValue_1, float K2Node_CustomEvent_DamageValue, class UQtnVerb* K2Node_DynamicCast_AsQtn_Verb, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnItem* CallFunc_GetOwningItem_ReturnValue, class ASwordAndShield_C* K2Node_DynamicCast_AsSword_and_Shield, bool K2Node_DynamicCast_bSuccess_3, class AQtnBodyPawn* CallFunc_GetOwningBodyPawn_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue_1, float Temp_float_Variable_1, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_Variable_1, float K2Node_Select_Default, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1, float CallFunc_GetValueOfUpgrade_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_EqualEqual_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue_1, float K2Node_Select_Default_1, class UStatusEffect_EmpoweringBlocks_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, float CallFunc_FMin_ReturnValue);
};

}


