#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x111 - 0xF0)
// BlueprintGeneratedClass StatusEffect_GeneralizedAttributeModifier.StatusEffect_GeneralizedAttributeModifier_C
class UStatusEffect_GeneralizedAttributeModifier_C : public UQtnStatusEffect
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xF0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<struct FAttributeModifierPatternForSE> Modifications_To_Perform;                          // 0xF8(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	class UQtnAttributeComponent*                Local_Attribute_Component_Reference;               // 0x108(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Is_Player;                                         // 0x110(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UStatusEffect_GeneralizedAttributeModifier_C* GetDefaultObj();

	void Untrigger_Modification(const struct FAttributeModifierPatternForSE& Modifier_Pattern, float New_Follower_Value, float Delta_Amount, const struct FAttributeModifierPatternForSE& Local_Modifier_Pattern, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, float CallFunc_FClamp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_RemoveModifier_self_CastInput, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_UnTriggerModifierEvent_self_CastInput, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_2, float CallFunc_GetAttributeValue_ReturnValue_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_3, float CallFunc_GetAttributeValue_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_1);
	void Trigger_Modification(const struct FAttributeModifierPatternForSE& Modifier_Pattern, float New_Follower_Value, float Delta_Amount, const struct FAttributeModifierPatternForSE& Local_Modifier_Pattern, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_SetAttributeValue_self_CastInput, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_1, float CallFunc_GetAttributeValue_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_TriggerModifierEvent_self_CastInput, bool CallFunc_IsValidClass_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_AddModifier_self_CastInput, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_2, float CallFunc_GetAttributeValue_ReturnValue_2, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput_3, float CallFunc_GetAttributeValue_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_1, float CallFunc_Subtract_FloatFloat_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_IsValidClass_ReturnValue_2);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_GeneralizedAttributeModifier(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, int32 CallFunc_Array_Length_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, bool CallFunc_IsServer_ReturnValue_1, const struct FAttributeModifierPatternForSE& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable_1, const struct FAttributeModifierPatternForSE& CallFunc_Array_Get_Item_1, bool CallFunc_IsValid_ReturnValue_1);
};

}


