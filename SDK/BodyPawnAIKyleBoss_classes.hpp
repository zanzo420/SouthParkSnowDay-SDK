#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB9 (0x1689 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAIKyleBoss.BodyPawnAIKyleBoss_C
class ABodyPawnAIKyleBoss_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        Phase;                                             // 0x15E0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_757E[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TMap<int32, float>                           Phase_Threshold;                                   // 0x15E8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly)
	FMulticastInlineDelegateProperty_            KylePhaseEvent;                                    // 0x1638(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	class UObject*                               Carrying_Pawn;                                     // 0x1648(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AQtnPawn*                              Carrying_Pawn_0;                                   // 0x1650(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Kyle_Ent_Cooldown;                                 // 0x1658(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Tick_Time;                                         // 0x165C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Under_Ent_Cooldown;                                // 0x1660(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_757F[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<struct FQtnStruct_VOLine>             VO_OnHalfHealth;                                   // 0x1668(0x10)(Edit, BlueprintVisible, DisableEditOnInstance)
	FMulticastInlineDelegateProperty_            KyleTookAnyDamage;                                 // 0x1678(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         VO_OnHalfHealth_Played;                            // 0x1688(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABodyPawnAIKyleBoss_C* GetDefaultObj();

	void GetUnderEntCooldown(bool* UnderEntCooldown);
	void TryHealthPhaseVO(float DamageAmount, float LOCAL_newHealthRatio, float LOCAL_oldHealthRatio, TMap<float, struct FGameplayTag> LOCAL_healthThresholdVOMap, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, TMap<float, struct FGameplayTag> K2Node_MakeVariable_MakeVariableOutput, TArray<float>& CallFunc_Map_Keys_Keys, float CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FGameplayTag& CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, bool CallFunc_Greater_FloatFloat_ReturnValue, float CallFunc_GetHealth_health, float CallFunc_GetHealth_maxHealth, bool CallFunc_BooleanAND_ReturnValue, float CallFunc_Add_FloatFloat_ReturnValue, float CallFunc_Divide_FloatFloat_ReturnValue, float CallFunc_GetHealthRatio_healthRatio);
	void CanAcceptEnemyUpgrades(bool* Accept);
	void HandleDeath(class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, bool CallFunc_IsServer_ReturnValue);
	void Phase_Check(float Amount_Decreased, class UAttribute_Health_C* Attribute_Taking_Damage);
	void ReceiveBeginPlay();
	void HideDeadKyle();
	void BndEvt__BodyCarryComponent_K2Node_ComponentBoundEvent_0_QtnCarryEvent__DelegateSignature(class UQtnCarryComponent* CarryComponent, class AActor* CarryingActor, bool IsServer);
	void ReceiveDestroyed();
	void BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_1_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void ReceiveTick(float DeltaSeconds);
	void BndEvt__BodyPawnAIKyleBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_2_QtnIncomingTootFartEvent__DelegateSignature(struct FQtnDamageInfo& DamageInfo, bool IsServer);
	void ExecuteUbergraph_BodyPawnAIKyleBoss(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, float K2Node_CustomEvent_Amount_Decreased, class UAttribute_Health_C* K2Node_CustomEvent_Attribute_Taking_Damage, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsServer_ReturnValue, class UQtnCarryComponent* K2Node_ComponentBoundEvent_carryComponent, class AActor* K2Node_ComponentBoundEvent_carryingActor, bool K2Node_ComponentBoundEvent_isServer_2, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, enum class EQtnOutputYesNoEnum CallFunc_IsObjectOfType_outputPin, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_GreaterEqual_FloatFloat_ReturnValue, bool CallFunc_IsServer_ReturnValue_2, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_1, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool CallFunc_IsServer_ReturnValue_3, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo_1, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer_1, float K2Node_Event_DeltaSeconds, float CallFunc_Add_FloatFloat_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, bool K2Node_ComponentBoundEvent_isServer, float CallFunc_GetHealthRatio_healthRatio, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_3, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue);
	void KyleTookAnyDamage__DelegateSignature();
	void KylePhaseEvent__DelegateSignature(int32 NewPhaseNumber);
};

}


