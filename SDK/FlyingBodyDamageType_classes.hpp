#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x1AA - 0x1AA)
// BlueprintGeneratedClass FlyingBodyDamageType.FlyingBodyDamageType_C
class UFlyingBodyDamageType_C : public UNormalBaseDamageType_C
{
public:

	static class UClass* StaticClass();
	static class UFlyingBodyDamageType_C* GetDefaultObj();

	void ApplyIncomingDamage(class AActor* ActorToDamage, struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* SuggestedHitReact, const struct FQtnDamageInfo& CallFunc_ApplyIncomingDamage_outgoingDamageInfo, const struct FQtnHitReactionInfo& CallFunc_ApplyIncomingDamage_suggestedHitReact, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
};

}


