#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x159 - 0x150)
// BlueprintGeneratedClass BodyDamageReaction_test.BodyDamageReaction_test_C
class UBodyDamageReaction_test_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ReactionFinished;                                  // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBodyDamageReaction_test_C* GetDefaultObj();

	bool IsReactionFinished();
	void OnEnterReaction(bool IsServer);
	void OnExitReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void ExecuteUbergraph_BodyDamageReaction_test(int32 EntryPoint, bool K2Node_Event_isServer_1, bool K2Node_Event_isServer, float K2Node_Event_DeltaSeconds, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayReactionMontage_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, const struct FQtnDamageInfo& CallFunc_GetDamageInfo_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_MakeRotFromX_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw);
};

}


