#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x180 - 0x150)
// BlueprintGeneratedClass BodyDamageReactionFrozen.BodyDamageReactionFrozen_C
class UBodyDamageReactionFrozen_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsFinished;                                        // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	bool                                         EscapeStarted;                                     // 0x159(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_45F7[0x6];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	struct FQtnPawnMontage                       EscapeMontage;                                     // 0x160(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)
	struct FQtnPawnMontage                       EscapeMontage_Adult;                               // 0x170(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBodyDamageReactionFrozen_C* GetDefaultObj();

	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction);
	bool IsReactionFinished();
	void OnEnterReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void ExecuteUbergraph_BodyDamageReactionFrozen(int32 EntryPoint, bool K2Node_Event_isServer, float K2Node_Event_DeltaSeconds, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, bool CallFunc_HasStatusEffect_ReturnValue, float CallFunc_PlayReactionMontage_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, class AQtnPawn* CallFunc_GetVictimPawn_ReturnValue_1, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue_1, class ABodyPawnAI_AdultBase_C* K2Node_DynamicCast_AsBody_Pawn_AI_Adult_Base, bool K2Node_DynamicCast_bSuccess, float CallFunc_PlayReactionMontage_ReturnValue_1);
};

}


