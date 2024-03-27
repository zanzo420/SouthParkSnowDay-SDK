#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x75 (0x67D - 0x608)
// BlueprintGeneratedClass BodyControllerAI.BodyControllerAI_C
class ABodyControllerAI_C : public ABodyControllerBase_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x608(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	TArray<class UQtnVerb*>                      CounterAttackItemVerbInstances;                    // 0x610(0x10)(Edit, BlueprintVisible, Transient, DisableEditOnInstance, ContainsInstancedReference, AdvancedDisplay)
	float                                        CounterAttackChance;                               // 0x620(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DodgeThresholdPerHit;                              // 0x624(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DodgeThreshold_Variance;                           // 0x628(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DodgeThreshold;                                    // 0x62C(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDodgeThreshold;                                 // 0x630(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4DF6[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	class UClass*                                DodgeVerbInstances;                                // 0x638(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          Dodge_Montage;                                     // 0x640(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Dodge_Culprit;                                     // 0x648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSinceLastHit;                                  // 0x650(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        TimeSinceLastHitMax;                               // 0x654(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        PotionUsageHealthThreshold;                        // 0x658(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        PotionUsageCount;                                  // 0x65C(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UClass*                                PotionVerb;                                        // 0x660(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UQtnUpgradeSlot*                       PotionUpgrade;                                     // 0x668(0x8)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DouseFireJobCooldown;                              // 0x670(0x4)(Edit, BlueprintVisible, ZeroConstructor, Transient, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FQtnRangedFloat                       DouseFireCooldownRange;                            // 0x674(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	bool                                         HasCheckedForPotionUpgrade;                        // 0x67C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABodyControllerAI_C* GetDefaultObj();

	void HandleHealthDecrease(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UQtnUpgradeSlot* CallFunc_FindUpgrade_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_2, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, float CallFunc_GetValueOfUpgrade_ReturnValue, int32 CallFunc_Round_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue_3, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_FClamp_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1);
	void TickDouseCooldown(float DeltaSeconds, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue);
	void TickDodgeThreshold(float DeltaSeconds, bool CallFunc_Less_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_Subtract_FloatFloat_ReturnValue, float CallFunc_FMax_ReturnValue);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_FloatToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue);
	void IsWillingToDouseFire(bool* IsWilling, bool CallFunc_Less_FloatFloat_ReturnValue, bool CallFunc_IsTrackingEnemyForCombat_ReturnValue);
	void RefreshDouseFireJobCooldown(float CallFunc_GetRandomValue_ReturnValue);
	void DetermineAndPerformDodge(const struct FQtnDamageInfo& Qtn_Damage_Info, bool CallFunc_IsValidClass_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue);
	void Increment_Dodge_Threshold(bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, float CallFunc_Multiply_FloatFloat_ReturnValue, float CallFunc_RandomFloatInRange_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue_1);
	void PerformCounterAttack(struct FQtnDamageInfo& QtnDamageInfo, bool* Counter_Attack_Requested, float CallFunc_RandomFloat_ReturnValue, class UQtnVerb* CallFunc_DetermineCounterAttack_result, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_AreVerbConditionsSatisfied_ReturnValue, const struct FQtnVerbRequest& K2Node_MakeStruct_QtnVerbRequest, class AQtnBodyPawn* CallFunc_GetBodyPawn_ReturnValue);
	void DetermineCounterAttack(class UQtnVerb** Result, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue, int32 CallFunc_RandomIntegerInRange_ReturnValue, class UQtnVerb* CallFunc_Array_Get_Item);
	void OnItemEquipEvent_Event_0(class AQtnItem* Item);
	void OnItemUnEquipEvent_Event_0(class AQtnItem* Item);
	void OnIncomingDamage_Event_0(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ReceivePossess(class APawn* PossessedPawn);
	void OnHealthDecreased(float Amount_Decreased, class UAttribute_Health_C* Attribute_Taking_Damage);
	void OnThink(float TimeSinceLastThought);
	void ExecuteUbergraph_BodyControllerAI(int32 EntryPoint, class UQtnAttribute* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class AQtnItem* K2Node_CustomEvent_Item_1, class ABaseWeapon_C* K2Node_DynamicCast_AsBase_Weapon, bool K2Node_DynamicCast_bSuccess_1, class AQtnItem* K2Node_CustomEvent_Item, class UClass* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UQtnVerb* CallFunc_AddVerb_ServerOnly_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, int32 CallFunc_Array_Add_ReturnValue, class UQtnDamageReceptorComponent* K2Node_CustomEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_CustomEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_CustomEvent_hitReactionInfo, bool K2Node_CustomEvent_isServer, class APawn* K2Node_Event_PossessedPawn, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_2, class UQtnAttributeComponent* CallFunc_GetAttributeComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_3, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_PerformCounterAttack_Counter_Attack_Requested, class UQtnDamageType* CallFunc_GetDamageArchetype_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_BooleanOR_ReturnValue, float K2Node_CustomEvent_Amount_Decreased, class UAttribute_Health_C* K2Node_CustomEvent_Attribute_Taking_Damage, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, float K2Node_Event_timeSinceLastThought);
};

}


