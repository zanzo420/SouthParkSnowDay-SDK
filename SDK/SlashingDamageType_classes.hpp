#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x6 (0x1B0 - 0x1AA)
// BlueprintGeneratedClass SlashingDamageType.SlashingDamageType_C
class USlashingDamageType_C : public UNormalBaseDamageType_C
{
public:
	uint8                                        Pad_6E9A[0x2];                                     // Fixing Size After Last Property  [ Dumper-7 ]
	float                                        BleedFactor;                                       // 0x1AC(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USlashingDamageType_C* GetDefaultObj();

	void ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, bool CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply, float CallFunc_Multiply_FloatFloat_ReturnValue, const struct FQtnHitReactionInfo& CallFunc_GetDefaultHitReaction_suggestedHitReact);
};

}


