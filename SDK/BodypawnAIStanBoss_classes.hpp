#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB2 (0x1682 - 0x15D0)
// BlueprintGeneratedClass BodypawnAIStanBoss.BodypawnAIStanBoss_C
class ABodypawnAIStanBoss_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	TMap<int32, float>                           Mode_Threshold;                                    // 0x15E0(0x50)(Edit, BlueprintVisible, DisableEditOnInstance)
	int32                                        ModeIndex;                                         // 0x1630(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4F50[0x4];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            SummonRandy;                                       // 0x1638(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         InHordeSummonerMode;                               // 0x1648(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F51[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	FMulticastInlineDelegateProperty_            BlockCannons;                                      // 0x1650(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	FMulticastInlineDelegateProperty_            UnblockCannons;                                    // 0x1660(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	bool                                         JumpUpPendingServerOnly;                           // 0x1670(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4F52[0x3];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FVector                               Jump_Up_Position;                                  // 0x1674(0xC)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         OnGround;                                          // 0x1680(0x1)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         CanSpeak;                                          // 0x1681(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class ABodypawnAIStanBoss_C* GetDefaultObj();

	void HandleDeath(float BeatStanQuicklyMinutes, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, bool CallFunc_IsServer_ReturnValue, float CallFunc_Multiply_IntFloat_ReturnValue, class UQtnGlobalRunProgress* CallFunc_GetGlobalRunProgress_ServerOnly_ReturnValue, TArray<class AQtnBodyPawn*>& CallFunc_GetAllQtnPlayerBodies_foundPlayerBodies, class UGlobalRunProgress_C* K2Node_DynamicCast_AsGlobal_Run_Progress, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_Array_Get_Item, float CallFunc_Get_Elapsed_Time_Server_Only_elapsed_Time, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, bool CallFunc_LessEqual_FloatFloat_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue);
	void CanAcceptEnemyUpgrades(bool* Accept);
	void OnDebugDisplay(class UQtnDebugWrapper* DebugWrapper, const class FString& CallFunc_Conv_BoolToString_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Conv_BoolToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Conv_BoolToString_ReturnValue_2, const class FString& CallFunc_Concat_StrStr_ReturnValue_2);
	void AddEventContext(struct FQtnEventMessage& EventMessage);
	void Server_Only_Minus_Register_Stan_to_Game_State(bool CallFunc_IsServer_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess);
	void Server_SwitchToDragonRiderMode(class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, class UStatusEffect_DeathProof_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue, bool CallFunc_IsServer_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue);
	void Server_SwitchToHordeSummonerMode(bool CallFunc_IsServer_ReturnValue);
	void Phase_Check(float Amount_Decreased, class UAttribute_Health_C* Attribute_Taking_Damage);
	void ReceiveBeginPlay();
	void ReceiveTick(float DeltaSeconds);
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void BndEvt__BodypawnAIStanBoss_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingTootFartEvent__DelegateSignature(struct FQtnDamageInfo& DamageInfo, bool IsServer);
	void ExecuteUbergraph_BodypawnAIStanBoss(int32 EntryPoint, float CallFunc_GetHealthRatio_healthRatio, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, float K2Node_CustomEvent_Amount_Decreased, class UAttribute_Health_C* K2Node_CustomEvent_Attribute_Taking_Damage, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Less_IntInt_ReturnValue, class ADragon_BP_C* K2Node_DynamicCast_AsDragon_BP, bool K2Node_DynamicCast_bSuccess_1, TScriptInterface<class IQtnAttributeContainerInterface> CallFunc_GetAttribute_self_CastInput, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, class UAttribute_Health_C* K2Node_DynamicCast_AsAttribute_Health, bool K2Node_DynamicCast_bSuccess_2, float K2Node_Event_DeltaSeconds, int32 CallFunc_Add_IntInt_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, bool CallFunc_IsServer_ReturnValue, float CallFunc_Map_Find_Value, bool CallFunc_Map_Find_ReturnValue, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, bool K2Node_ComponentBoundEvent_isServer, bool CallFunc_Less_FloatFloat_ReturnValue, const struct FGameplayTag& CallFunc_MakeLiteralGameplayTag_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess_3, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDead_canBeRevived, bool CallFunc_IsDead_ReturnValue);
	void UnblockCannons__DelegateSignature();
	void BlockCannons__DelegateSignature();
	void SummonRandy__DelegateSignature();
};

}


