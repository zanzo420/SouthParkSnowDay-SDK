#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x130 - 0xE0)
// BlueprintGeneratedClass BodypawnHealingComponent.BodypawnHealingComponent_C
class UBodypawnHealingComponent_C : public UActorComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xE0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        Healing_Amount;                                    // 0xE8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4956[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class AActor*                                Healing_Actor;                                     // 0xF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnBodyPawn*                          Owning_Body_Pawn;                                  // 0xF8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UUpgrade_Bodypawn_Beefcake_C*          As_Bodypawn_Beefcake;                              // 0x100(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	float                                        Actual_Healing_Amount;                             // 0x108(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          Healing_Text_Color;                                // 0x10C(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4957[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            OnHeal_ServerOnly;                                 // 0x120(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UBodypawnHealingComponent_C* GetDefaultObj();

	void GetActualHealingAmount(float DesiredHealingAmount, float* ActualHealingAmount, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMin_ReturnValue);
	void IsAtMaxHealth(bool* IsAtMaxHealth, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Apply_Body_Pawn_Healing_Server_Only(float Healing_Amount, const struct FGameplayTag& Consumable_Type_Gameplay_Tag, class UObject* Instigator, class UQtnVerb* Source_Verb, class UObject* Culprit, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class ABodyPawnPlayer_C* K2Node_DynamicCast_AsBody_Pawn_Player, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue, bool CallFunc_EqualEqual_GameplayTag_ReturnValue_1, bool CallFunc_Greater_FloatFloat_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, TArray<TSubclassOf<class UQtnUpgrade>>& CallFunc_GetCurrentEnemyUpgrades_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, bool CallFunc_IsAliveAndConscious_ReturnValue, class UQtnUpgrade* CallFunc_GetCurrentSlottedUpgrade_ReturnValue, class UUpgrade_Bodypawn_Beefcake_C* K2Node_DynamicCast_AsUpgrade_Bodypawn_Beefcake, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_1, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue_1, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UClass* Temp_class_Variable, float CallFunc_GetActualHealingAmount_actualHealingAmount, bool CallFunc_Array_Contains_ReturnValue, bool CallFunc_IsAtMaxHealth_IsAtMaxHealth, bool CallFunc_IsAtMaxHealth_IsAtMaxHealth_1, float CallFunc_Add_FloatFloat_ReturnValue, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_IncreaseAttributeValue_self_CastInput_1);
	void MULTI_HealingFX(float Amount);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_BodypawnHealingComponent(int32 EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, float K2Node_CustomEvent_amount, class AActor* CallFunc_GetOwner_ReturnValue, int64 CallFunc_FFloor64_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue, class FText CallFunc_Conv_Int64ToText_ReturnValue, class UQtnDamageNumbersSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FVector& CallFunc_RandomUnitVector_ReturnValue, const struct FQtnDamageNumberOptionalInfo& K2Node_MakeStruct_QtnDamageNumberOptionalInfo, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess);
	void OnHeal_ServerOnly__DelegateSignature(class AQtnBodyPawn* HealedBody, float HealingAmount);
};

}


