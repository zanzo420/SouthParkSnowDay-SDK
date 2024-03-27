#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x159 - 0x150)
// BlueprintGeneratedClass BodyDamageReaction_Charmed.BodyDamageReaction_Charmed_C
class UBodyDamageReaction_Charmed_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ReactionFinished;                                  // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UBodyDamageReaction_Charmed_C* GetDefaultObj();

	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction);
	bool IsReactionFinished();
	void OnEnterReaction(bool IsServer);
	void OnExitReaction(bool IsServer);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void ExecuteUbergraph_BodyDamageReaction_Charmed(int32 EntryPoint, bool K2Node_Event_isServer_1, bool K2Node_Event_isServer, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayReactionMontage_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue, class AQtnBodyPawn* CallFunc_GetVictimBody_ReturnValue_1, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue, class UQtnMovementComponent* CallFunc_GetQtnMovementComponent_ReturnValue_1);
};

}


