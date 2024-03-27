#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1AA - 0x1AA)
// BlueprintGeneratedClass FireImpactDamageType.FireImpactDamageType_C
class UFireImpactDamageType_C : public UNormalBaseDamageType_C
{
public:

	static class UClass* StaticClass();
	static class UFireImpactDamageType_C* GetDefaultObj();

	void ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, bool CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply, const struct FQtnHitReactionInfo& CallFunc_GetDefaultHitReaction_suggestedHitReact);
};

}


