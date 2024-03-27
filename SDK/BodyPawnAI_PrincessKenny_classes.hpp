#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x15E8 - 0x15D0)
// BlueprintGeneratedClass BodyPawnAI_PrincessKenny.BodyPawnAI_PrincessKenny_C
class ABodyPawnAI_PrincessKenny_C : public ABodyPawnAI_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UQtnGoalMarkerComponent*               QtnGoalMarker;                                     // 0x15D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          MovementTimer;                                     // 0x15E0(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class ABodyPawnAI_PrincessKenny_C* GetDefaultObj();

	void HandleDeath(bool CallFunc_HasAuthority_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue);
	void ReceiveBeginPlay();
	void OnAICombatBegin_ServerOnly_Event_0(class AQtnBodyPawn* AiBody);
	void BndEvt__BodyPawnAI_PrincessKenny_DamageReceptorBodyPawn_K2Node_ComponentBoundEvent_0_QtnIncomingDamageEvent__DelegateSignature(class UQtnDamageReceptorComponent* DamagedReceptor, struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactionInfo, bool IsServer);
	void CustomEvent_0();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ExecuteUbergraph_BodyPawnAI_PrincessKenny(int32 EntryPoint, float Temp_float_Variable, float Temp_float_Variable_1, class UQtnAttribute* Temp_object_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UQtnAttributeHitReactionThreshold* K2Node_DynamicCast_AsQtn_Attribute_Hit_Reaction_Threshold, bool K2Node_DynamicCast_bSuccess, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue, class AQtnBodyPawn* K2Node_CustomEvent_aiBody, bool CallFunc_HasAuthority_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, enum class EQtnDifficulty CallFunc_GetDifficulty_ReturnValue, float Temp_float_Variable_2, TScriptInterface<class IQtnAttributeContainerInterface> K2Node_DynamicCast_AsQtn_Attribute_Container_Interface, bool K2Node_DynamicCast_bSuccess_1, class UQtnAttribute* CallFunc_GetAttribute_ReturnValue, float Temp_float_Variable_3, enum class EQtnDifficulty Temp_byte_Variable, class UQtnDamageReceptorComponent* K2Node_ComponentBoundEvent_damagedReceptor, const struct FQtnDamageInfo& K2Node_ComponentBoundEvent_damageInfo, const struct FQtnHitReactionInfo& K2Node_ComponentBoundEvent_hitReactionInfo, bool K2Node_ComponentBoundEvent_isServer, float K2Node_Select_Default, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1, bool CallFunc_K2_IsTimerActiveHandle_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_2, bool CallFunc_Not_PreBool_ReturnValue, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_BooleanAND_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason, class AQtnGameState* CallFunc_GetQtnGameState_ReturnValue_3, class AQtnGameStateArchetype_C* K2Node_DynamicCast_AsQtn_Game_State_Archetype_1, bool K2Node_DynamicCast_bSuccess_3);
};

}


