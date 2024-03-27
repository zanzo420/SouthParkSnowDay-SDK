#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x35 (0x155 - 0x120)
// BlueprintGeneratedClass StatusEffect_Vomit.StatusEffect_Vomit_C
class UStatusEffect_Vomit_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Base_Vomit_Damage;                                 // 0x128(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Sickened_CashMinusIn_Conversion_Rate;              // 0x12C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Show_Debug_Text_;                                  // 0x130(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6EC0[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class ABodyPawnBase_C*                       Target_s_Body_Pawn;                                // 0x138(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Summed_Vomit_Damage;                               // 0x140(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReactionStarted;                                   // 0x144(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_6EC1[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        Timer_to_Consider;                                 // 0x148(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Max_HP_Damage__;                                   // 0x14C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Maximum_Vomit_Damage_Cap;                          // 0x150(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEnt;                                             // 0x154(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UStatusEffect_Vomit_C* GetDefaultObj();

	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_MakeLiteralString_ReturnValue);
	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void VomitDecal();
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_Vomit(int32 EntryPoint, bool CallFunc_IsServer_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class ABodyPawnBase_C* K2Node_DynamicCast_AsBody_Pawn_Base, bool K2Node_DynamicCast_bSuccess_2, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Abs_ReturnValue, float K2Node_Event_DeltaSeconds, float CallFunc_Subtract_FloatFloat_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, float CallFunc_FClamp_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttributeValue_self_CastInput, float CallFunc_GetAttributeValue_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_FMin_ReturnValue, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsBodyIdle_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_CanDie_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface_1, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_CanBeDamaged_ReturnValue, bool CallFunc_CanHitReact_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue_3, bool CallFunc_BooleanAND_ReturnValue_3, class AQtnPawn* CallFunc_GetStatusInstigator_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_4, const struct FQtnDamageInfo& K2Node_MakeStruct_QtnDamageInfo, bool Temp_bool_Variable, float CallFunc_GetTimeSeconds_ReturnValue, bool CallFunc_CheckVomitChainServerOnly_VomitChainSuccess, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, bool CallFunc_IsValid_ReturnValue_2, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_3, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_HasAttribute_self_CastInput, bool CallFunc_HasAttribute_ReturnValue, bool CallFunc_HasAttribute_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_AddAttribute_self_CastInput, class UQtnAttribute* CallFunc_AddAttribute_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_RemoveAttribute_self_CastInput);
};

}


