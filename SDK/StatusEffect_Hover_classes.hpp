#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x134 - 0x120)
// BlueprintGeneratedClass StatusEffect_Hover.StatusEffect_Hover_C
class UStatusEffect_Hover_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FQtnRangedFloat                       ExpirationRange;                                   // 0x128(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	float                                        Hover_Height;                                      // 0x130(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_Hover_C* GetDefaultObj();

	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void OnStatusEffectTick(float DeltaSeconds);
	void ExecuteUbergraph_StatusEffect_Hover(int32 EntryPoint, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI, bool K2Node_DynamicCast_bSuccess, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, bool CallFunc_IsServer_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_1, float K2Node_Event_DeltaSeconds, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, bool CallFunc_IsServer_ReturnValue_2, bool CallFunc_IsHitReactingOrKnockedDown_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, float CallFunc_GetRandomValue_ReturnValue, class UQtnVerb* CallFunc_GetCurrentActiveVerb_ReturnValue, class UKenny_Rainbow_Verb_C* K2Node_DynamicCast_AsKenny_Rainbow_Verb, bool K2Node_DynamicCast_bSuccess_1, float CallFunc_GetRandomValue_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsPlayerControlled_ReturnValue, class UQtnPathFollowingComponent* CallFunc_GetQtnPathFollowingComponent_ReturnValue, float CallFunc_HasPathfindingFailed_elapsedTime, bool CallFunc_HasPathfindingFailed_ReturnValue, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class ABodyPawnAI_C* K2Node_DynamicCast_AsBody_Pawn_AI_1, bool K2Node_DynamicCast_bSuccess_2);
};

}


