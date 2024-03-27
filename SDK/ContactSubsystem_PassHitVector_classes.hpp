#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x2C - 0x28)
// BlueprintGeneratedClass ContactSubsystem_PassHitVector.ContactSubsystem_PassHitVector_C
class UContactSubsystem_PassHitVector_C : public UQtnContactSubsystemSystemSpawnModifier
{
public:
	int32                                        NiagaraComponentIndex;                             // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UContactSubsystem_PassHitVector_C* GetDefaultObj();

	void ModifySpawnedContactFX(class AQtnFXActor* ActorFX, class UQtnContactData* ContactData, struct FQtnContactEventInfo& ContactInfo, struct FQtnSurfaceData& SurfaceData, class UNiagaraComponent* CallFunc_GetNiagaraComponent_ReturnValue);
};

}


