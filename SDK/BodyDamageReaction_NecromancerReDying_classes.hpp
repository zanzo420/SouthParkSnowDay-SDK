#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x170 - 0x150)
// BlueprintGeneratedClass BodyDamageReaction_NecromancerReDying.BodyDamageReaction_NecromancerReDying_C
class UBodyDamageReaction_NecromancerReDying_C : public UQtnDamageReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x150(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         ReactionFinished;                                  // 0x158(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4B70[0x7];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	TArray<class UAnimMontage*>                  Montages;                                          // 0x160(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass();
	static class UBodyDamageReaction_NecromancerReDying_C* GetDefaultObj();

	void HandleOtherDamage(struct FQtnDamageInfo& OtherDamageInfo, struct FQtnHitReactionInfo& OtherReactInfo, bool* AllowNewReaction);
	bool IsReactionFinished();
	void OnEnterReaction(bool IsServer);
	void OnExitReaction(bool IsServer);
	void OnTickReaction(float DeltaSeconds);
	void OnReactionMontageDone(class UAnimMontage* Montage, bool Interrupted);
	void ExecuteUbergraph_BodyDamageReaction_NecromancerReDying(int32 EntryPoint, float CallFunc_RandomFloatInRange_ReturnValue, bool K2Node_Event_isServer_1, bool K2Node_Event_isServer, float K2Node_Event_DeltaSeconds, class UQtnFullBodyStateHitReaction* CallFunc_GetOwningHitReaction_ReturnValue, class UAnimMontage* K2Node_Event_montage, bool K2Node_Event_interrupted, float CallFunc_RandomFloatInRange_ReturnValue_1, class UAnimMontage* CallFunc_Array_Random_OutItem, int32 CallFunc_Array_Random_OutIndex, const struct FQtnPawnMontage& K2Node_MakeStruct_QtnPawnMontage, float CallFunc_PlayReactionMontage_ReturnValue);
};

}


