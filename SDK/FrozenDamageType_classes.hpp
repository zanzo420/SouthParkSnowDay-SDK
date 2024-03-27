#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1AA - 0x1AA)
// BlueprintGeneratedClass FrozenDamageType.FrozenDamageType_C
class UFrozenDamageType_C : public UNormalBaseDamageType_C
{
public:

	static class UClass* StaticClass();
	static class UFrozenDamageType_C* GetDefaultObj();

	void ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, const struct FQtnHitReactionInfo& CallFunc_GetDefaultHitReaction_suggestedHitReact, class AQtnPawn* K2Node_DynamicCast_AsQtn_Pawn, bool K2Node_DynamicCast_bSuccess, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply, class UStatusEffect_Frozen_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue);
};

}


