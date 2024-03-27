#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x38 - 0x28)
// BlueprintGeneratedClass ContactSubsystemSpawnModifier_SetWorldRotation.ContactSubsystemSpawnModifier_SetWorldRotation_C
class UContactSubsystemSpawnModifier_SetWorldRotation_C : public UQtnContactSubsystemSystemSpawnModifier
{
public:
	int32                                        NiagaraComponentIndex;                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              WorldRotation;                                     // 0x2C(0xC)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UContactSubsystemSpawnModifier_SetWorldRotation_C* GetDefaultObj();

	void ModifySpawnedContactFX(class AQtnFXActor* ActorFX, class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, struct FQtnSurfaceData& SurfaceData, class UParticleSystemComponent* CallFunc_GetParticleSystemComponent_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult_1);
};

}


