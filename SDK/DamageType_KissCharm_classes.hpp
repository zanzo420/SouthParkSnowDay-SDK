#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1AA - 0x1AA)
// BlueprintGeneratedClass DamageType_KissCharm.DamageType_KissCharm_C
class UDamageType_KissCharm_C : public UNormalBaseDamageType_C
{
public:

	static class UClass* StaticClass();
	static class UDamageType_KissCharm_C* GetDefaultObj();

	void ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, const struct FQtnDamageInfo& CallFunc_ApplyIncomingDamage_outgoingDamageInfo, const struct FQtnHitReactionInfo& CallFunc_ApplyIncomingDamage_suggestedHitReact, const struct FQtnEventMessage& CallFunc_StaticMakeEventMessage_ReturnValue, class AQtnBodyPawn* K2Node_DynamicCast_AsQtn_Body_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_HasAuthority_ReturnValue, class UQtnDamageReceptorComponent* CallFunc_GetDamageReceptor_ReturnValue, bool CallFunc_Test_Whether_Normal_Status_Effect_Thresholding_Should_Apply_Thresholding_Should_Apply, class UStatusEffect_Charmed_C* CallFunc_AddStatusEffect_ServerOnly_ReturnValue);
};

}


