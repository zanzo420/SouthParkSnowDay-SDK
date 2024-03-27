#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x31D - 0x31C)
// BlueprintGeneratedClass DamageReceptorDestructibleBarrier.DamageReceptorDestructibleBarrier_C
class UDamageReceptorDestructibleBarrier_C : public UDamageReceptorArchetype_C
{
public:
	bool                                         Destroyed;                                         // 0x31C(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UDamageReceptorDestructibleBarrier_C* GetDefaultObj();

	void SetDestroyed();
	void PreProcessIncomingDamage(struct FQtnDamageInfo& IncomingDamageInfo, struct FQtnHitReactionInfo& DamageSuggestedHitReact, struct FQtnDamageInfo* OutgoingDamageInfo, struct FQtnHitReactionInfo* ActualHitReact, class AActor* CallFunc_GetOwner_ReturnValue, class AQtnFXActor* CallFunc_BP_BeginEffect_ReturnValue);
};

}


