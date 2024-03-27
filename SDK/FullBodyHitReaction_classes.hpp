#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x251 - 0x248)
// BlueprintGeneratedClass FullBodyHitReaction.FullBodyHitReaction_C
class UFullBodyHitReaction_C : public UQtnFullBodyStateHitReaction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         AllowVerbInput;                                    // 0x250(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UFullBodyHitReaction_C* GetDefaultObj();

	void HandleDamageReceived(struct FQtnDamageInfo& DamageInfo, struct FQtnHitReactionInfo& HitReactInfo);
	void OnAnimWindowBegin(class UQtnAnimWindow* AnimWindow, float TotalDuration);
	void OnAnimWindowEnd(class UQtnAnimWindow* AnimWindow, bool Interrupted);
	void OnEnterBodyState(class UQtnBodyState* PreviousBodyState);
	void OnTickBodyState(float DeltaSeconds);
	void ExecuteUbergraph_FullBodyHitReaction(int32 EntryPoint, class AQtnBodyPawn* CallFunc_GetOwningPawn_ReturnValue, bool CallFunc_IsTouchingGround_ReturnValue, const struct FQtnDamageInfo& K2Node_Event_DamageInfo, const struct FQtnHitReactionInfo& K2Node_Event_hitReactInfo, class UQtnAnimWindow* K2Node_Event_animWindow_1, float K2Node_Event_totalDuration, class UQtnAnimWindow* K2Node_Event_animWindow, bool K2Node_Event_interrupted, class UQtnAnimWindowInput* K2Node_DynamicCast_AsQtn_Anim_Window_Input, bool K2Node_DynamicCast_bSuccess, class UQtnAnimWindowInput* K2Node_DynamicCast_AsQtn_Anim_Window_Input_1, bool K2Node_DynamicCast_bSuccess_1, class UQtnBodyState* K2Node_Event_previousBodyState, float K2Node_Event_DeltaSeconds);
};

}


