#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x130 - 0x120)
// BlueprintGeneratedClass StatusEffect_Charmed.StatusEffect_Charmed_C
class UStatusEffect_Charmed_C : public UStatusEffect_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x120(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AQtnPlayerPawn*                        AfflictedPlayerPawn;                               // 0x128(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UStatusEffect_Charmed_C* GetDefaultObj();

	void OnStatusEffectTick(float DeltaSeconds);
	void OnStatusEffectBegin(class AActor* AffectedActor, class AQtnPawn* Instigator);
	void OnStatusEffectEnd(class AActor* AffectedActor, class AQtnPawn* Instigator, bool IsActorBeingDestroyed);
	void ExecuteUbergraph_StatusEffect_Charmed(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, float K2Node_Event_DeltaSeconds, bool CallFunc_IsServer_ReturnValue, class AActor* K2Node_Event_affectedActor_1, class AQtnPawn* K2Node_Event_instigator_1, class AActor* K2Node_Event_affectedActor, class AQtnPawn* K2Node_Event_instigator, bool K2Node_Event_isActorBeingDestroyed, class AQtnPawn* CallFunc_GetStatusInstigator_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsAliveAndConscious_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, bool CallFunc_IsServer_ReturnValue_2, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class AQtnPlayerPawn* CallFunc_GetControllingPlayerPawn_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_1, class UClass* CallFunc_GetObjectClass_ReturnValue, class AQtnBodyPawn* CallFunc_GetClassDefaultObject_ReturnValue, class UQtnDamageNumbersSubsystem* CallFunc_GetQtnDamageNumbersSubsystem_ReturnValue, class AActor* CallFunc_GetAffectedActor_ReturnValue, const struct FLinearColor& K2Node_MakeStruct_LinearColor, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FQtnDamageNumberOptionalInfo& K2Node_MakeStruct_QtnDamageNumberOptionalInfo, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_2, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, class UAmbientTetherCam_StatusEffect_C* CallFunc_RequestCameraBehavior_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_3, class UQtnCameraComponent* CallFunc_GetQtnCameraComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, float CallFunc_GetCompletionRatio_ReturnValue, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_4, float CallFunc_Subtract_FloatFloat_ReturnValue, class AQtnBodyController* CallFunc_GetBodyController_ReturnValue_1, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, class AQtnBodyPawn* CallFunc_GetAffectedBody_ReturnValue_5, const struct FQtnActionIntention& K2Node_MakeStruct_QtnActionIntention, class UQtnVerbComponent* CallFunc_GetVerbComponent_ReturnValue, class AQtnPawn* CallFunc_GetStatusInstigator_ReturnValue_1, class AQtnPawn* CallFunc_GetStatusInstigator_ReturnValue_2, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess);
};

}


